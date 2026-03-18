/*
 * XREFs of PiSwIrpPropertySet @ 0x1407781C4
 * Callers:
 *     PiSwDispatch @ 0x1407375D0 (PiSwDispatch.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     IofCompleteRequest @ 0x140284EB0 (IofCompleteRequest.c)
 *     PnpAllocatePWSTR @ 0x1405DBA78 (PnpAllocatePWSTR.c)
 *     PiSwValidatePropertyArray @ 0x140738C30 (PiSwValidatePropertyArray.c)
 *     PiSwPropertySet @ 0x140759D5C (PiSwPropertySet.c)
 *     PiSwDeviceOperationsAllowed @ 0x14075F348 (PiSwDeviceOperationsAllowed.c)
 *     PiSwUpdateArrayProperties @ 0x1407783B4 (PiSwUpdateArrayProperties.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
  NdrMesTypeDecode3(v9, "TP 3\a", &off_1409804F8, &off_140C01A60, 1, &v7);
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
