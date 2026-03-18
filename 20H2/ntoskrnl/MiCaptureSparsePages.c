/*
 * XREFs of MiCaptureSparsePages @ 0x1408DADA4
 * Callers:
 *     MiDeleteSparseRange @ 0x1408DAF90 (MiDeleteSparseRange.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiSetPfnLink @ 0x1402301EC (MiSetPfnLink.c)
 *     MiReadPteShadow @ 0x1402366E0 (MiReadPteShadow.c)
 *     MiLockAndDecrementShareCount @ 0x140250E00 (MiLockAndDecrementShareCount.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 */

__int64 __fastcall MiCaptureSparsePages(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  unsigned __int64 v6; // rdi
  unsigned __int64 i; // r14
  unsigned __int64 PteShadow; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  v5 = 0LL;
  v6 = a1;
  for ( i = MiMakeValidPte(a1, qword_140C4EC00, 1LL, a4); a2; --a2 )
  {
    v12 = MI_READ_PTE_LOCK_FREE(v6);
    PteShadow = v12;
    if ( v12 != i )
    {
      if ( MiPteInShadowRange((unsigned __int64)&v12) )
        PteShadow = MiReadPteShadow((unsigned __int64)&v12, PteShadow);
      MiSetPfnLink((_QWORD *)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL), v5);
      v5 = v9;
      MiLockAndDecrementShareCount(48 * v10 - 0x58000000000LL, 0);
    }
    v6 += 8LL;
  }
  return v5;
}
