/*
 * XREFs of MiCaptureSparsePages @ 0x1408D8564
 * Callers:
 *     MiDeleteSparseRange @ 0x1408D8750 (MiDeleteSparseRange.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x1402D5EE0 (MiLockAndDecrementShareCount.c)
 *     MiReadPteShadow @ 0x140305A30 (MiReadPteShadow.c)
 *     MiSetPfnLink @ 0x14031818C (MiSetPfnLink.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiCaptureSparsePages(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // rdi
  unsigned __int64 i; // r14
  unsigned __int64 PteShadow; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0LL;
  v4 = a1;
  for ( i = MiMakeValidPte(a1, qword_140C4ED80, 1); a2; --a2 )
  {
    v11 = MI_READ_PTE_LOCK_FREE(v4);
    PteShadow = v11;
    if ( v11 != i )
    {
      if ( MiPteInShadowRange((unsigned __int64)&v11) )
        PteShadow = MiReadPteShadow((unsigned __int64)&v11, PteShadow);
      MiSetPfnLink((_QWORD *)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL), v3);
      v3 = v7;
      MiLockAndDecrementShareCount(48 * v8 - 0x58000000000LL, 0LL, v9);
    }
    v4 += 8LL;
  }
  return v3;
}
