/*
 * XREFs of PiSwIrpSetLifetime @ 0x14075F288
 * Callers:
 *     PiSwDispatch @ 0x1407375D0 (PiSwDispatch.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     IofCompleteRequest @ 0x140284EB0 (IofCompleteRequest.c)
 *     PiSwDeviceOperationsAllowed @ 0x14075F348 (PiSwDeviceOperationsAllowed.c)
 */

__int64 __fastcall PiSwIrpSetLifetime(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int v2; // ebx
  _DWORD *FsContext2; // rbp
  struct _IRP *MasterIrp; // rsi
  struct _KTHREAD *CurrentThread; // rax

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v2 = 0;
  FsContext2 = CurrentStackLocation->FileObject->FsContext2;
  if ( CurrentStackLocation->Parameters.Create.Options == 4
    && (MasterIrp = Irp->AssociatedIrp.MasterIrp, *(_DWORD *)&MasterIrp->Type <= 1u) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    if ( (unsigned __int8)PiSwDeviceOperationsAllowed(FsContext2) )
      FsContext2[45] = *(_DWORD *)&MasterIrp->Type;
    else
      v2 = -1073741637;
    ExReleaseResourceLite(&PiSwLockObj);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  else
  {
    v2 = -1073741811;
  }
  Irp->IoStatus.Status = v2;
  IofCompleteRequest(Irp, 0);
  return v2;
}
