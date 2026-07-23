/*
 * XREFs of MiMakeTransitionPteValid @ 0x140230140
 * Callers:
 *     MiCompleteProtoPteFault @ 0x1402B8690 (MiCompleteProtoPteFault.c)
 *     MiFinishHardFault @ 0x1402DE0E0 (MiFinishHardFault.c)
 *     MiIssueHardFault @ 0x140319700 (MiIssueHardFault.c)
 *     MiResolveProtoCombine @ 0x14036ACE4 (MiResolveProtoCombine.c)
 *     MiProtectAweRegion @ 0x14054D5A4 (MiProtectAweRegion.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 */

__int64 __fastcall MiMakeTransitionPteValid(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx

  v2 = MI_READ_PTE_LOCK_FREE(a1);
  v3 = v2;
  if ( qword_140C4DF80 )
  {
    if ( (v2 & 0x10) != 0 )
      v3 = v2 & 0xFFFFFFFFFFFFFFEFuLL;
    else
      v3 = v2 & ~qword_140C4DF80;
  }
  return MiMakeValidPte(a1, (v3 >> 12) & 0xFFFFFFFFFLL, (v2 >> 5) & 0x1F);
}
