/*
 * XREFs of MiClearContainingMapping @ 0x14026B83C
 * Callers:
 *     MiDeleteTopLevelPage @ 0x14026B7A8 (MiDeleteTopLevelPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402385A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402F7480 (MiMapPageInHyperSpaceWorker.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 */

__int64 __fastcall MiClearContainingMapping(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  unsigned int v4; // ebx
  unsigned __int64 v5; // r14
  unsigned __int64 *v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  BOOL v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9

  v2 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
  result = ((*(_QWORD *)(a1 + 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (*(_QWORD *)(48 * v2 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL) == result )
  {
    v4 = (*(_DWORD *)(a1 + 8) >> 3) & 0x1FF;
    v5 = MiMapPageInHyperSpaceWorker(v2, 0LL, 0x80000000LL);
    v6 = (unsigned __int64 *)(v5 + 8LL * v4);
    v7 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v6);
    if ( (v7 & 1) != 0 )
    {
      v8 = v7 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
      v9 = 0;
      if ( MiPteInShadowRange((unsigned __int64)v6) )
        v9 = MiPteHasShadow(v11, v10, v12, v13) != 0;
      *v6 = v8;
      if ( v9 )
        MiWritePteShadow(v6, v8);
    }
    return MiUnmapPageInHyperSpaceWorker(v5, 0x11u, 0x80000000);
  }
  return result;
}
