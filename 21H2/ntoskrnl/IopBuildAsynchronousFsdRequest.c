/*
 * XREFs of IopBuildAsynchronousFsdRequest @ 0x1402E7890
 * Callers:
 *     IoBuildAsynchronousFsdRequest @ 0x1402E7850 (IoBuildAsynchronousFsdRequest.c)
 *     IopBuildSynchronousFsdRequest @ 0x1406D1900 (IopBuildSynchronousFsdRequest.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x14022C9E0 (IopVerifierExAllocatePool.c)
 *     PsGetIoPriorityThread @ 0x140242810 (PsGetIoPriorityThread.c)
 *     IopProbeAndLockPages_1 @ 0x1402E7A50 (IopProbeAndLockPages_1.c)
 *     IoAllocateMdl @ 0x1402E8BB0 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x1402E9600 (IoFreeMdl.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14031BFE0 (IoSetDiskIoAttributionFromThread.c)
 *     IopAllocateIrpExReturn @ 0x140351A40 (IopAllocateIrpExReturn.c)
 *     IoFreeIrp @ 0x140353540 (IoFreeIrp.c)
 *     memmove @ 0x140413F40 (memmove.c)
 */

__int64 __fastcall IopBuildAsynchronousFsdRequest(
        unsigned int a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        _QWORD *a5,
        __int64 a6,
        __int64 a7)
{
  SIZE_T v7; // r12
  __int64 v9; // r13
  __int64 Irp; // rbx
  __int64 v12; // rdi
  int v13; // eax
  int v15; // eax
  unsigned int v16; // eax
  PMDL Mdl; // rax
  int v18; // edx
  PVOID Pool; // rax
  int v20; // eax

  v7 = a4;
  v9 = a2;
  LOBYTE(a2) = *(_BYTE *)(a2 + 76);
  Irp = IopAllocateIrpExReturn(v9, a2, 0LL, a7);
  if ( Irp )
  {
    *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
    v12 = *(_QWORD *)(Irp + 184);
    *(_BYTE *)(v12 - 72) = a1;
    if ( a1 <= 0x1B )
    {
      v13 = 138478080;
      if ( _bittest(&v13, a1) )
      {
LABEL_4:
        *(_DWORD *)(Irp + 16) = *(_DWORD *)(Irp + 16) & 0xFFF1FFFF | (((unsigned int)PsGetIoPriorityThread(*(_QWORD *)(Irp + 152))
                                                                     + 1) << 17);
        *(_QWORD *)(Irp + 72) = a6;
        return Irp;
      }
    }
    v15 = *(_DWORD *)(v9 + 48);
    if ( (v15 & 4) != 0 )
    {
      Pool = IopVerifierExAllocatePool(NonPagedPoolNxCacheAligned, v7);
      *(_QWORD *)(Irp + 24) = Pool;
      if ( Pool )
      {
        if ( a1 == 4 )
        {
          memmove(Pool, a3, v7);
          v20 = 48;
        }
        else
        {
          *(_QWORD *)(Irp + 112) = a3;
          v20 = 112;
        }
        *(_DWORD *)(Irp + 16) = v20;
        LODWORD(v7) = a4;
        goto LABEL_8;
      }
    }
    else
    {
      if ( (v15 & 0x10) == 0 )
      {
        *(_QWORD *)(Irp + 112) = a3;
LABEL_8:
        *(_DWORD *)(v12 - 64) = v7;
        if ( a5 )
          *(_QWORD *)(v12 - 48) = *a5;
        v16 = *(_DWORD *)(v9 + 72);
        if ( v16 >= 7 && (v16 <= 9 || v16 == 36) )
          IoSetDiskIoAttributionFromThread(Irp, *(_QWORD *)(Irp + 152));
        goto LABEL_4;
      }
      Mdl = IoAllocateMdl(a3, v7, 0, 0, 0LL);
      *(_QWORD *)(Irp + 8) = Mdl;
      if ( Mdl )
      {
        IopProbeAndLockPages_1((_DWORD)Mdl, v18, a1 == 3, v9, *(unsigned __int8 *)(v12 - 72));
        goto LABEL_8;
      }
    }
    IoFreeIrp((PIRP)Irp);
  }
  return 0LL;
}
