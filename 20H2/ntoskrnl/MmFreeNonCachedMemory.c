/*
 * XREFs of MmFreeNonCachedMemory @ 0x1408C9120
 * Callers:
 *     <none>
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiGetPteAddress @ 0x140230160 (MiGetPteAddress.c)
 *     MiReadPteShadow @ 0x1402366E0 (MiReadPteShadow.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     MiMakeDemandZeroPte @ 0x1402AD380 (MiMakeDemandZeroPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MmFreePagesFromMdl @ 0x14032E320 (MmFreePagesFromMdl.c)
 *     MiSetPfnOriginalPte @ 0x14054D91C (MiSetPfnOriginalPte.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  MiReleasePtes((__int64)&qword_140C4EDC0, PteAddress, v2);
}
