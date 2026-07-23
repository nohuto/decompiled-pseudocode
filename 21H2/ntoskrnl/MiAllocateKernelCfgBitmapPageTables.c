/*
 * XREFs of MiAllocateKernelCfgBitmapPageTables @ 0x1408D78F0
 * Callers:
 *     MiMarkKernelImageCfgBits @ 0x140773364 (MiMarkKernelImageCfgBits.c)
 * Callees:
 *     MiGetPteAddress @ 0x140322E50 (MiGetPteAddress.c)
 *     MiMakeZeroedPageTables @ 0x14039DF90 (MiMakeZeroedPageTables.c)
 */

__int64 __fastcall MiAllocateKernelCfgBitmapPageTables(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // r9
  __int64 PteAddress; // rax
  __int64 v4; // rdx

  MiGetPteAddress(qword_140C4CC78 + ((2 * (((unsigned __int64)a2 + 0x7FFFFFFFFFFFLL + a1) >> 4)) >> 3));
  PteAddress = MiGetPteAddress(v2);
  return (unsigned int)MiMakeZeroedPageTables(PteAddress, v4, 1u, 9) == 0 ? 0xC000009A : 0;
}
