/*
 * XREFs of PiSwIrpPropertySet @ 0x14078A5A4
 * Callers:
 *     PiSwDispatch @ 0x14074D990 (PiSwDispatch.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     IofCompleteRequest @ 0x140243490 (IofCompleteRequest.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14034BBA0 (ExAcquireResourceExclusiveLite.c)
 *     PnpAllocatePWSTR @ 0x140638128 (PnpAllocatePWSTR.c)
 *     PiSwPropertySet @ 0x140748358 (PiSwPropertySet.c)
 *     PiSwDeviceOperationsAllowed @ 0x14074D08C (PiSwDeviceOperationsAllowed.c)
 *     PiSwValidatePropertyArray @ 0x14074E6FC (PiSwValidatePropertyArray.c)
 *     PiSwUpdateArrayProperties @ 0x14078A794 (PiSwUpdateArrayProperties.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwIrpPropertySet(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 FsContext2; // rsi
  NTSTATUS updated; // ebx
  struct _KTHREAD *CurrentThread; // rax
  PVOID v7; // [rsp+68h] [rbp+10h] BYREF
  PVOID P; // [rsp+70h] [rbp+18h] BYREF
  __int64 v9; // [rsp+78h] [rbp+20h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  v9 = 0LL;
  v7 = 0LL;
  P = 0LL;
  if ( !Irp->AssociatedIrp.MasterIrp )
    goto LABEL_20;
  updated = MesDecodeBufferHandleCreate(
              Irp->AssociatedIrp.MasterIrp,
              CurrentStackLocation->Parameters.Create.Options,
              &v9);
  if ( updated < 0 )
    goto LABEL_12;
  NdrMesTypeDecode3(v9, "TP 3\a", &off_1409839E8, &off_140C01A60, 1, &v7);
  if ( v7 && *((_QWORD *)v7 + 1) && *(_DWORD *)v7 )
  {
    updated = PiSwValidatePropertyArray(*((_QWORD *)v7 + 1), *(_DWORD *)v7);
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
                      *((_QWORD *)v7 + 1),
                      *(unsigned int *)v7);
      }
      else
      {
        updated = -1073741637;
      }
      ExReleaseResourceLite(&PiSwLockObj);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( updated >= 0 )
        updated = PiSwPropertySet((const WCHAR *)P, 1u, *((_QWORD *)v7 + 1), *(_DWORD *)v7);
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
  if ( v7 )
    ExFreePoolWithTag(v7, 0x6370726Bu);
  if ( v9 )
    MesHandleFree();
  Irp->IoStatus.Status = updated;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)updated;
}
