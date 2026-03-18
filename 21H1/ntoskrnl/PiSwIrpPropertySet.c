/*
 * XREFs of PiSwIrpPropertySet @ 0x140775DB4
 * Callers:
 *     PiSwDispatch @ 0x140753730 (PiSwDispatch.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     IofCompleteRequest @ 0x140248710 (IofCompleteRequest.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     PnpAllocatePWSTR @ 0x1406AA0A8 (PnpAllocatePWSTR.c)
 *     PiSwPropertySet @ 0x14072D9E8 (PiSwPropertySet.c)
 *     PiSwValidatePropertyArray @ 0x14075449C (PiSwValidatePropertyArray.c)
 *     PiSwDeviceOperationsAllowed @ 0x14075461C (PiSwDeviceOperationsAllowed.c)
 *     PiSwUpdateArrayProperties @ 0x140775FA4 (PiSwUpdateArrayProperties.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwIrpPropertySet(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 FsContext2; // rsi
  NTSTATUS updated; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  PVOID v10; // [rsp+68h] [rbp+10h] BYREF
  PVOID P; // [rsp+70h] [rbp+18h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  v12 = 0LL;
  v10 = 0LL;
  P = 0LL;
  if ( !Irp->AssociatedIrp.MasterIrp )
    goto LABEL_20;
  updated = MesDecodeBufferHandleCreate(
              Irp->AssociatedIrp.MasterIrp,
              CurrentStackLocation->Parameters.Create.Options,
              &v12);
  if ( updated < 0 )
    goto LABEL_12;
  NdrMesTypeDecode3(v12, "TP 3\a", &off_14097F158, &off_140C01A60, 1, &v10);
  if ( v10 && *((_QWORD *)v10 + 1) && *(_DWORD *)v10 )
  {
    updated = PiSwValidatePropertyArray(*((_QWORD *)v10 + 1), *(_DWORD *)v10);
    if ( updated >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
      if ( PiSwDeviceOperationsAllowed(FsContext2) )
      {
        updated = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(FsContext2 + 80), 0xC8uLL, 0x57706E50u, &P);
        if ( updated >= 0 )
          updated = PiSwUpdateArrayProperties(
                      *(_QWORD *)(FsContext2 + 168),
                      *(unsigned int *)(FsContext2 + 176),
                      *((_QWORD *)v10 + 1),
                      *(unsigned int *)v10);
      }
      else
      {
        updated = -1073741637;
      }
      ExReleaseResourceLite(&PiSwLockObj);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v6, v7, v8);
      if ( updated >= 0 )
        updated = PiSwPropertySet((const WCHAR *)P, 1u, *((_QWORD *)v10 + 1), *(_DWORD *)v10);
    }
  }
  else
  {
LABEL_20:
    updated = -1073741811;
  }
LABEL_12:
  if ( P )
    ExFreePoolWithTag(P, 0x57706E50u);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x6370726Bu);
  if ( v12 )
    MesHandleFree();
  Irp->IoStatus.Status = updated;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)updated;
}
