/*
 * XREFs of MiMakeTransitionPteValid @ 0x140234EB4
 * Callers:
 *     MiIssueHardFault @ 0x14027A1F0 (MiIssueHardFault.c)
 *     MiCompleteProtoPteFault @ 0x1403203D0 (MiCompleteProtoPteFault.c)
 *     MiMakeFaultPfnActive @ 0x140339240 (MiMakeFaultPfnActive.c)
 *     MiResolveProtoCombine @ 0x14033A920 (MiResolveProtoCombine.c)
 *     MiProtectAweRegion @ 0x1405ABD20 (MiProtectAweRegion.c)
 * Callees:
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiMakeTransitionPteValid(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx

  v2 = MI_READ_PTE_LOCK_FREE(a1);
  v3 = v2;
  if ( qword_140C50780 )
  {
    if ( (v2 & 0x10) != 0 )
      v3 = v2 & 0xFFFFFFFFFFFFFFEFuLL;
    else
      v3 = v2 & ~qword_140C50780;
  }
  return MiMakeValidPte(a1, (v3 >> 12) & 0xFFFFFFFFFFLL, (v2 >> 5) & 0x1F);
}
