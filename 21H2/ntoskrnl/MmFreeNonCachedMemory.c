/*
 * XREFs of MmFreeNonCachedMemory @ 0x14096A680
 * Callers:
 *     DifMmFreeNonCachedMemoryWrapper @ 0x140616EB0 (DifMmFreeNonCachedMemoryWrapper.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x140221A10 (MmFreePagesFromMdl.c)
 *     MiMakeDemandZeroPte @ 0x14026E548 (MiMakeDemandZeroPte.c)
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x140313C70 (MiGetPteAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSetPfnOriginalPte @ 0x140416A74 (MiSetPfnOriginalPte.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __stdcall MmFreeNonCachedMemory(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  _QWORD *PteAddress; // rdi
  struct _MDL *v4; // rbx
  __int64 v5; // rdx
  __int64 DemandZeroPte; // rax
  __int64 v7; // r8
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  PteAddress = (_QWORD *)MiGetPteAddress((unsigned __int64)BaseAddress);
  v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)PteAddress);
  v4 = *(struct _MDL **)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v8) >> 12) & 0xFFFFFFFFFFLL)
                       - 0x220000000000LL
                       + 16);
  DemandZeroPte = MiMakeDemandZeroPte(4, v5);
  MiSetPfnOriginalPte(v7, DemandZeroPte);
  MmFreePagesFromMdl(v4);
  ExFreePoolWithTag(v4, 0);
  MiReleasePtes((__int64)&qword_140C534C0, PteAddress, (NumberOfBytes >> 12) + ((NumberOfBytes & 0xFFF) != 0));
}
