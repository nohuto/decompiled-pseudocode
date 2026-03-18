/*
 * XREFs of IopBuildAsynchronousFsdRequest @ 0x140318510
 * Callers:
 *     IoBuildAsynchronousFsdRequest @ 0x1403184D0 (IoBuildAsynchronousFsdRequest.c)
 *     IopBuildSynchronousFsdRequest @ 0x1406C2190 (IopBuildSynchronousFsdRequest.c)
 * Callees:
 *     IoFreeMdl @ 0x14020A410 (IoFreeMdl.c)
 *     IopVerifierExAllocatePool @ 0x14020AC94 (IopVerifierExAllocatePool.c)
 *     IopAllocateIrpExReturn @ 0x1402113B0 (IopAllocateIrpExReturn.c)
 *     IoFreeIrp @ 0x140218F40 (IoFreeIrp.c)
 *     IoAllocateMdl @ 0x140248500 (IoAllocateMdl.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14024E710 (IoSetDiskIoAttributionFromThread.c)
 *     PsGetIoPriorityThread @ 0x14028EE50 (PsGetIoPriorityThread.c)
 *     IopProbeAndLockPages_0 @ 0x1403186D0 (IopProbeAndLockPages_0.c)
 *     memmove @ 0x140411040 (memmove.c)
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
          IoSetDiskIoAttributionFromThread(Irp, *(struct _KTHREAD **)(Irp + 152));
        goto LABEL_4;
      }
      Mdl = IoAllocateMdl(a3, v7, 0, 0, 0LL);
      *(_QWORD *)(Irp + 8) = Mdl;
      if ( Mdl )
      {
        IopProbeAndLockPages_0((_DWORD)Mdl, v18, a1 == 3, v9, *(unsigned __int8 *)(v12 - 72));
        goto LABEL_8;
      }
    }
    IoFreeIrp((PIRP)Irp);
  }
  return 0LL;
}
