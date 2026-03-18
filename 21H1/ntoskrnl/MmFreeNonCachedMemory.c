/*
 * XREFs of MmFreeNonCachedMemory @ 0x1408C1F90
 * Callers:
 *     <none>
 * Callees:
 *     MiMakeDemandZeroPte @ 0x1402233A0 (MiMakeDemandZeroPte.c)
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x14027AF40 (MiGetPteAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x1402AD460 (MiReadPteShadow.c)
 *     MmFreePagesFromMdl @ 0x14031FCB0 (MmFreePagesFromMdl.c)
 *     MiSetPfnOriginalPte @ 0x1405498FC (MiSetPfnOriginalPte.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  MiReleasePtes((__int64)&qword_140C4EE80, PteAddress, v2);
}
