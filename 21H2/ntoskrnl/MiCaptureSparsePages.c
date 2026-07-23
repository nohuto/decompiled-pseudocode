/*
 * XREFs of MiCaptureSparsePages @ 0x1408D86C4
 * Callers:
 *     MiDeleteSparseRange @ 0x1408D88B0 (MiDeleteSparseRange.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140287230 (MiLockAndDecrementShareCount.c)
 *     MiReadPteShadow @ 0x140310780 (MiReadPteShadow.c)
 *     MiSetPfnLink @ 0x140322EDC (MiSetPfnLink.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiCaptureSparsePages(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // rdi
  unsigned __int64 i; // r14
  unsigned __int64 PteShadow; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0LL;
  v4 = a1;
  for ( i = MiMakeValidPte(a1, qword_140C4EDC0, 1); a2; --a2 )
  {
    v10 = MI_READ_PTE_LOCK_FREE(v4);
    PteShadow = v10;
    if ( v10 != i )
    {
      if ( MiPteInShadowRange((unsigned __int64)&v10) )
        PteShadow = MiReadPteShadow((unsigned __int64)&v10, PteShadow);
      MiSetPfnLink((_QWORD *)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL), v3);
      v3 = v7;
      MiLockAndDecrementShareCount(48 * v8 - 0x58000000000LL, 0);
    }
    v4 += 8LL;
  }
  return v3;
}
