/*
 * XREFs of FsRtlNotifyCompleteIrp @ 0x1405F0C54
 * Callers:
 *     FsRtlNotifyFilterChangeDirectory @ 0x1405F02F0 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyCompleteIrpList @ 0x1405F0BB8 (FsRtlNotifyCompleteIrpList.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1405F0E60 (FsRtlNotifyFilterChangeDirectoryLite.c)
 * Callees:
 *     FsRtlNotifySetCancelRoutine @ 0x140228778 (FsRtlNotifySetCancelRoutine.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402CB5C0 (MmMapLockedPagesSpecifyCache.c)
 *     IofCompleteRequest @ 0x1402E7CE0 (IofCompleteRequest.c)
 *     PsReturnProcessPagedPoolQuota @ 0x140323160 (PsReturnProcessPagedPoolQuota.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlNotifyCompleteIrp(PIRP Irp, __int64 a2, unsigned int a3, NTSTATUS a4, int a5)
{
  size_t v6; // r14
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  const void *v10; // rdx
  void *MasterIrp; // rcx
  PMDL MdlAddress; // rcx
  PVOID MappedSystemVa; // rax
  struct _IRP *v14; // rcx

  v6 = a3;
  if ( FsRtlNotifySetCancelRoutine((__int64)Irp, a2) || !a5 )
  {
    if ( a4 )
    {
LABEL_21:
      Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      Irp->IoStatus.Status = a4;
      IofCompleteRequest(Irp, 1);
      return;
    }
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    if ( !(_DWORD)v6 || CurrentStackLocation->Parameters.Read.Length < (unsigned int)v6 )
    {
      a4 = 268;
      goto LABEL_21;
    }
    v10 = *(const void **)(a2 + 80);
    if ( !v10 )
    {
LABEL_20:
      Irp->IoStatus.Information = (unsigned int)v6;
      *(_QWORD *)(a2 + 88) = 0LL;
      goto LABEL_21;
    }
    MasterIrp = Irp->AssociatedIrp.MasterIrp;
    if ( !MasterIrp )
    {
      MdlAddress = Irp->MdlAddress;
      if ( MdlAddress )
      {
        if ( (MdlAddress->MdlFlags & 5) != 0 )
          MappedSystemVa = MdlAddress->MappedSystemVa;
        else
          MappedSystemVa = MmMapLockedPagesSpecifyCache(MdlAddress, 0, MmCached, 0LL, 0, 0x40000010u);
        if ( !MappedSystemVa )
        {
          a4 = 268;
          LODWORD(v6) = 0;
          goto LABEL_18;
        }
        v10 = *(const void **)(a2 + 80);
        MasterIrp = MappedSystemVa;
      }
      else
      {
        if ( (CurrentStackLocation->Control & 1) != 0 )
        {
          Irp->Flags |= 0x70u;
          Irp->AssociatedIrp.MasterIrp = *(struct _IRP **)(a2 + 80);
LABEL_18:
          PsReturnProcessPagedPoolQuota(*(struct _KPROCESS **)(a2 + 120), *(unsigned int *)(a2 + 100));
          v14 = *(struct _IRP **)(a2 + 80);
          if ( v14 != Irp->AssociatedIrp.MasterIrp )
          {
            if ( v14 )
              ExFreePoolWithTag(v14, 0);
          }
          *(_QWORD *)(a2 + 80) = 0LL;
          *(_DWORD *)(a2 + 100) = 0;
          goto LABEL_20;
        }
        MasterIrp = Irp->UserBuffer;
      }
    }
    memmove(MasterIrp, v10, v6);
    goto LABEL_18;
  }
}
