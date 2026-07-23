/*
 * XREFs of MmFreeNonCachedMemory @ 0x1408C6A40
 * Callers:
 *     <none>
 * Callees:
 *     MmFreePagesFromMdl @ 0x14024E380 (MmFreePagesFromMdl.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     MiReadPteShadow @ 0x140310780 (MiReadPteShadow.c)
 *     MiGetPteAddress @ 0x140322E50 (MiGetPteAddress.c)
 *     MiMakeDemandZeroPte @ 0x140334CC0 (MiMakeDemandZeroPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiSetPfnOriginalPte @ 0x14054F65C (MiSetPfnOriginalPte.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __stdcall MmFreeNonCachedMemory(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  SIZE_T v2; // rdi
  _QWORD *PteAddress; // rsi
  unsigned __int64 PteShadow; // rbx
  struct _MDL *v5; // rbx
  __int64 DemandZeroPte; // rax
  __int64 v7; // r9
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = (NumberOfBytes >> 12) + ((NumberOfBytes & 0xFFF) != 0);
  PteAddress = (_QWORD *)MiGetPteAddress((unsigned __int64)BaseAddress);
  v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)PteAddress);
  PteShadow = v8;
  if ( MiPteInShadowRange((unsigned __int64)&v8) )
    PteShadow = MiReadPteShadow((unsigned __int64)&v8, PteShadow);
  v5 = *(struct _MDL **)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 16);
  DemandZeroPte = MiMakeDemandZeroPte(4);
  MiSetPfnOriginalPte(v7, DemandZeroPte);
  MmFreePagesFromMdl(v5);
  ExFreePoolWithTag(v5, 0);
  MiReleasePtes((__int64)&qword_140C4EF80, PteAddress, v2);
}
