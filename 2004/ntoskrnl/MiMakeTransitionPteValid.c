/*
 * XREFs of MiMakeTransitionPteValid @ 0x1403405A0
 * Callers:
 *     MiFinishHardFault @ 0x14022AA00 (MiFinishHardFault.c)
 *     MiIssueHardFault @ 0x14025B740 (MiIssueHardFault.c)
 *     MiCompleteProtoPteFault @ 0x1402A6230 (MiCompleteProtoPteFault.c)
 *     MiResolveProtoCombine @ 0x1403688A4 (MiResolveProtoCombine.c)
 *     MiProtectAweRegion @ 0x140547E94 (MiProtectAweRegion.c)
 * Callees:
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiMakeTransitionPteValid(unsigned __int64 a1)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r9
  unsigned __int64 v4; // rdx

  v2 = MI_READ_PTE_LOCK_FREE(a1);
  v4 = v2;
  if ( qword_140C4DD40 )
  {
    if ( (v2 & 0x10) != 0 )
      v4 = v2 & 0xFFFFFFFFFFFFFFEFuLL;
    else
      v4 = v2 & ~qword_140C4DD40;
  }
  return MiMakeValidPte(a1, (v4 >> 12) & 0xFFFFFFFFFLL, (v2 >> 5) & 0x1F, v3);
}
