/*
 * XREFs of MiClearContainingMapping @ 0x1402D51DC
 * Callers:
 *     MiDeleteTopLevelPage @ 0x1402D5148 (MiDeleteTopLevelPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402915F0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140353460 (MiMapPageInHyperSpaceWorker.c)
 */

__int64 __fastcall MiClearContainingMapping(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  unsigned int v4; // ebx
  unsigned __int64 v5; // r14
  unsigned __int64 *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  BOOL v10; // edi
  __int64 v11; // rcx

  v2 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
  result = ((*(_QWORD *)(a1 + 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (*(_QWORD *)(48 * v2 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL) == result )
  {
    v4 = (*(_DWORD *)(a1 + 8) >> 3) & 0x1FF;
    v5 = MiMapPageInHyperSpaceWorker(v2, 0LL, 0x80000000LL, 0xFFFFF68000000000uLL);
    v6 = (unsigned __int64 *)(v5 + 8LL * v4);
    v7 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v6);
    if ( (v7 & 1) != 0 )
    {
      v9 = v7 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
      v10 = 0;
      if ( MiPteInShadowRange((unsigned __int64)v6) )
        v10 = MiPteHasShadow(v11, v8) != 0;
      *v6 = v9;
      if ( v10 )
        MiWritePteShadow(v6, v9);
    }
    LOBYTE(v8) = 17;
    return MiUnmapPageInHyperSpaceWorker(v5, v8, 0x80000000);
  }
  return result;
}
