/*
 * XREFs of PiSwIrpSetLifetime @ 0x140762F18
 * Callers:
 *     PiSwDispatch @ 0x140764DB0 (PiSwDispatch.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     McTemplateK0zz_EtwWriteTransfer @ 0x14056370C (McTemplateK0zz_EtwWriteTransfer.c)
 *     McTemplateK0zzd_EtwWriteTransfer @ 0x1405637DC (McTemplateK0zzd_EtwWriteTransfer.c)
 *     McTemplateK0zzqq_EtwWriteTransfer @ 0x1405639AC (McTemplateK0zzqq_EtwWriteTransfer.c)
 *     PiSwDeviceOperationsAllowed @ 0x140763000 (PiSwDeviceOperationsAllowed.c)
 */

__int64 __fastcall PiSwIrpSetLifetime(PIRP Irp, __int64 a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  unsigned int v4; // ebx
  struct _IRP *MasterIrp; // r14
  const wchar_t **FsContext2; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r8

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  FsContext2 = (const wchar_t **)CurrentStackLocation->FileObject->FsContext2;
  if ( (byte_140C0DD4C & 2) != 0 )
    McTemplateK0zz_EtwWriteTransfer(
      (__int64)Irp,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_LifetimeChange_Start,
      a3,
      FsContext2[1],
      FsContext2[2]);
  if ( CurrentStackLocation->Parameters.Create.Options == 4 && *(_DWORD *)&MasterIrp->Type <= 1u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    if ( (unsigned __int8)PiSwDeviceOperationsAllowed(FsContext2) )
    {
      if ( (byte_140C0DD4C & 2) != 0 )
        McTemplateK0zzqq_EtwWriteTransfer(
          v10,
          v9,
          v11,
          FsContext2[1],
          FsContext2[2],
          *((_DWORD *)FsContext2 + 45),
          *(_DWORD *)&MasterIrp->Type);
      *((_DWORD *)FsContext2 + 45) = *(_DWORD *)&MasterIrp->Type;
    }
    else
    {
      v4 = -1073741637;
    }
    ExReleaseResourceLite(&PiSwLockObj);
    KeLeaveCriticalRegion();
  }
  else
  {
    v4 = -1073741811;
  }
  Irp->IoStatus.Status = v4;
  IofCompleteRequest(Irp, 0);
  if ( (byte_140C0DD4C & 2) != 0 )
    McTemplateK0zzd_EtwWriteTransfer(
      (__int64)FsContext2[2],
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_LifetimeChange_Stop,
      v12,
      FsContext2[1],
      FsContext2[2],
      v4);
  return v4;
}
