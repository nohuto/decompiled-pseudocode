/*
 * XREFs of MiCaptureSparsePages @ 0x1408D3C14
 * Callers:
 *     MiDeleteSparseRange @ 0x1408D3E00 (MiDeleteSparseRange.c)
 * Callees:
 *     MiSetPfnLink @ 0x14027AFCC (MiSetPfnLink.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x1402AD460 (MiReadPteShadow.c)
 *     MiLockAndDecrementShareCount @ 0x140351040 (MiLockAndDecrementShareCount.c)
 */

__int64 __fastcall MiCaptureSparsePages(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  unsigned __int64 v6; // rdi
  unsigned __int64 i; // r14
  unsigned __int64 PteShadow; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  _DWORD *v12; // r9
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v5 = 0LL;
  v6 = a1;
  for ( i = MiMakeValidPte(a1, qword_140C4ECC0, 1LL, a4); a2; --a2 )
  {
    v14 = MI_READ_PTE_LOCK_FREE(v6);
    PteShadow = v14;
    if ( v14 != i )
    {
      if ( MiPteInShadowRange((unsigned __int64)&v14) )
        PteShadow = MiReadPteShadow((unsigned __int64)&v14, PteShadow);
      MiSetPfnLink((_QWORD *)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL), v5);
      v5 = v9;
      MiLockAndDecrementShareCount(48 * v10 - 0x58000000000LL, 0LL, v11, v12);
    }
    v6 += 8LL;
  }
  return v5;
}
