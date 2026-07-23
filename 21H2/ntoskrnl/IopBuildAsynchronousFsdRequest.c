/*
 * XREFs of IopBuildAsynchronousFsdRequest @ 0x140298BE0
 * Callers:
 *     IoBuildAsynchronousFsdRequest @ 0x140298BA0 (IoBuildAsynchronousFsdRequest.c)
 *     IopBuildSynchronousFsdRequest @ 0x1406A8BE0 (IopBuildSynchronousFsdRequest.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x1402336E0 (IopVerifierExAllocatePool.c)
 *     IopProbeAndLockPages_0 @ 0x140298DA0 (IopProbeAndLockPages_0.c)
 *     IoAllocateMdl @ 0x140299F00 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x14029A950 (IoFreeMdl.c)
 *     PsGetIoPriorityThread @ 0x1402E7060 (PsGetIoPriorityThread.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140326D30 (IoSetDiskIoAttributionFromThread.c)
 *     IopAllocateIrpExReturn @ 0x14035C790 (IopAllocateIrpExReturn.c)
 *     IoFreeIrp @ 0x14035E290 (IoFreeIrp.c)
 *     memmove @ 0x140414040 (memmove.c)
 */

IRP *__fastcall IopBuildAsynchronousFsdRequest(
        unsigned int a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        LARGE_INTEGER *a5,
        struct _IO_STATUS_BLOCK *a6,
        __int64 a7)
{
  SIZE_T v7; // r12
  __int64 v9; // r13
  IRP *Irp; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  int v13; // eax
  int v15; // eax
  unsigned int v16; // eax
  PMDL Mdl; // rax
  int v18; // edx
  struct _IRP *Pool; // rax
  int v20; // eax

  v7 = a4;
  v9 = a2;
  LOBYTE(a2) = *(_BYTE *)(a2 + 76);
  Irp = (IRP *)IopAllocateIrpExReturn(v9, a2, 0LL, a7);
  if ( Irp )
  {
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = a1;
    if ( a1 <= 0x1B )
    {
      v13 = 138478080;
      if ( _bittest(&v13, a1) )
      {
LABEL_4:
        Irp->Flags = Irp->Flags & 0xFFF1FFFF | (((unsigned int)PsGetIoPriorityThread(Irp->Tail.Overlay.Thread) + 1) << 17);
        Irp->UserIosb = a6;
        return Irp;
      }
    }
    v15 = *(_DWORD *)(v9 + 48);
    if ( (v15 & 4) != 0 )
    {
      Pool = (struct _IRP *)IopVerifierExAllocatePool(NonPagedPoolNxCacheAligned, v7);
      Irp->AssociatedIrp.MasterIrp = Pool;
      if ( Pool )
      {
        if ( a1 == 4 )
        {
          memmove(Pool, a3, v7);
          v20 = 48;
        }
        else
        {
          Irp->UserBuffer = a3;
          v20 = 112;
        }
        Irp->Flags = v20;
        LODWORD(v7) = a4;
        goto LABEL_8;
      }
    }
    else
    {
      if ( (v15 & 0x10) == 0 )
      {
        Irp->UserBuffer = a3;
LABEL_8:
        CurrentStackLocation[-1].Parameters.Read.Length = v7;
        if ( a5 )
          CurrentStackLocation[-1].Parameters.Read.ByteOffset = *a5;
        v16 = *(_DWORD *)(v9 + 72);
        if ( v16 >= 7 && (v16 <= 9 || v16 == 36) )
          IoSetDiskIoAttributionFromThread(Irp, Irp->Tail.Overlay.Thread);
        goto LABEL_4;
      }
      Mdl = IoAllocateMdl(a3, v7, 0, 0, 0LL);
      Irp->MdlAddress = Mdl;
      if ( Mdl )
      {
        IopProbeAndLockPages_0((_DWORD)Mdl, v18, a1 == 3, v9, CurrentStackLocation[-1].MajorFunction);
        goto LABEL_8;
      }
    }
    IoFreeIrp(Irp);
  }
  return 0LL;
}
