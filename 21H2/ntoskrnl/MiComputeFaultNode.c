/*
 * XREFs of MiComputeFaultNode @ 0x140339370
 * Callers:
 *     MiCopyOnWrite @ 0x140316400 (MiCopyOnWrite.c)
 *     MiMigratePfn @ 0x140327C60 (MiMigratePfn.c)
 *     MiResolveMappedFileFault @ 0x140339520 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x1403927C4 (MiResolvePageFileFault.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140599EBC (MiHandleSpecialPurposeMemoryCachedFault.c)
 * Callees:
 *     MiUnlockVadTree @ 0x1402806E0 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1402ED128 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1403126F0 (MiLocateAddress.c)
 */

__int64 __fastcall MiComputeFaultNode(__int64 a1, __int64 a2, __int64 ***a3)
{
  __int64 v3; // rdi
  unsigned int v7; // ebx
  unsigned int v8; // eax
  int v9; // edx
  unsigned __int64 v10; // rdi
  __int64 **Address; // r15
  struct _KTHREAD *CurrentThread; // rbp
  _KPROCESS *Process; // r14
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned int v17; // eax

  v3 = *(_QWORD *)(a1 + 16);
  if ( (v3 & 1) != 0
    && (v8 = *(unsigned __int8 *)(v3 & 0xFFFFFFFFFFFFFFFEuLL), (unsigned __int8)v8 <= 8u)
    && (v9 = 404, _bittest(&v9, v8)) )
  {
    v7 = *(_DWORD *)((v3 & 0xFFFFFFFFFFFFFFFEuLL) + 40);
    if ( v7 )
      goto LABEL_20;
  }
  else
  {
    v7 = 0;
  }
  v10 = v3 & 0xFFFFFFFFFFFFFFFEuLL;
  Address = *a3;
  if ( (*(_QWORD *)(a1 + 16) & 1LL) == 0 )
    v10 = 0LL;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 184LL) & 7) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    Process = CurrentThread->ApcState.Process;
    v14 = Process[1].ActiveProcessors.StaticBitmap[28];
    if ( Address
      || ((v15 = *(_QWORD *)a1, *(_QWORD *)a1 < 0xFFFFF68000000000uLL) || v15 > 0xFFFFF6FFFFFFFFFFuLL)
      && (v10 || *(_QWORD *)(v14 + 408) || *(_QWORD *)(v14 + 416) || *(_BYTE *)(v14 + 340))
      && (MiLockVadTree(1), Address = MiLocateAddress(*(_QWORD *)a1), MiUnlockVadTree(1, 0x11u), (*a3 = Address) != 0LL) )
    {
      v17 = *((_DWORD *)Address + 12);
      v7 = (v17 >> 12) & 0x7F;
      if ( v7 )
        goto LABEL_20;
      if ( (v17 & 0x200000) == 0 )
        a2 = *Address[9];
    }
    if ( !a2 || (v7 = (*(_DWORD *)(a2 + 56) >> 20) & 0x7F) == 0 )
    {
      if ( v10 && CurrentThread->ApcStateIndex == 1 )
        v7 = Process->IdealNode[CurrentThread->AffinityPrimaryGroup] + 1;
      if ( !v7 )
        return v7;
    }
LABEL_20:
    *(_DWORD *)(a1 + 80) |= 0x20000u;
  }
  return v7;
}
