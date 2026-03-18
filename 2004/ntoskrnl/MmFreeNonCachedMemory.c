/*
 * XREFs of MmFreeNonCachedMemory @ 0x1408C32E0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetPteAddress @ 0x140221EF0 (MiGetPteAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x140254430 (MiReadPteShadow.c)
 *     MiReleasePtes @ 0x140284720 (MiReleasePtes.c)
 *     MiMakeDemandZeroPte @ 0x1402B6020 (MiMakeDemandZeroPte.c)
 *     MmFreePagesFromMdl @ 0x14035D760 (MmFreePagesFromMdl.c)
 *     MiSetPfnOriginalPte @ 0x140549F4C (MiSetPfnOriginalPte.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __stdcall MmFreeNonCachedMemory(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  SIZE_T v2; // rdi
  _QWORD *PteAddress; // rsi
  unsigned __int64 PteShadow; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _MDL *v8; // rbx
  __int64 DemandZeroPte; // rax
  __int64 v10; // r9
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v2 = (NumberOfBytes >> 12) + ((NumberOfBytes & 0xFFF) != 0);
  PteAddress = (_QWORD *)MiGetPteAddress((unsigned __int64)BaseAddress);
  v11 = MI_READ_PTE_LOCK_FREE((unsigned __int64)PteAddress);
  PteShadow = v11;
  if ( MiPteInShadowRange((unsigned __int64)&v11) )
    PteShadow = MiReadPteShadow((unsigned __int64)&v11, PteShadow);
  v7 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v8 = *(struct _MDL **)(v7 + 16);
  DemandZeroPte = MiMakeDemandZeroPte(4, v5, v6, v7);
  MiSetPfnOriginalPte(v10, DemandZeroPte);
  MmFreePagesFromMdl(v8);
  ExFreePoolWithTag(v8, 0);
  MiReleasePtes((__int64)&qword_140C4ED40, PteAddress, v2);
}
