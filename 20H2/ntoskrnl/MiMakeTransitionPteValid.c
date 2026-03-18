/*
 * XREFs of MiMakeTransitionPteValid @ 0x1403115D0
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140275570 (MiCompleteProtoPteFault.c)
 *     MiFinishHardFault @ 0x1402C80B0 (MiFinishHardFault.c)
 *     MiIssueHardFault @ 0x1402CFFA0 (MiIssueHardFault.c)
 *     MiResolveProtoCombine @ 0x14036A884 (MiResolveProtoCombine.c)
 *     MiProtectAweRegion @ 0x14054B864 (MiProtectAweRegion.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 */

unsigned __int64 __fastcall MiMakeTransitionPteValid(unsigned __int64 a1)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r9
  unsigned __int64 v4; // rdx

  v2 = MI_READ_PTE_LOCK_FREE(a1);
  v4 = v2;
  if ( qword_140C4DDC0 )
  {
    if ( (v2 & 0x10) != 0 )
      v4 = v2 & 0xFFFFFFFFFFFFFFEFuLL;
    else
      v4 = v2 & ~qword_140C4DDC0;
  }
  return MiMakeValidPte(a1, (v4 >> 12) & 0xFFFFFFFFFLL, (v2 >> 5) & 0x1F, v3);
}
