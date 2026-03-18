/*
 * XREFs of MiMakeTransitionPteValid @ 0x1403037D0
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140213720 (MiCompleteProtoPteFault.c)
 *     MiFinishHardFault @ 0x140283A50 (MiFinishHardFault.c)
 *     MiIssueHardFault @ 0x1402B4770 (MiIssueHardFault.c)
 *     MiResolveProtoCombine @ 0x140367EE4 (MiResolveProtoCombine.c)
 *     MiProtectAweRegion @ 0x140547844 (MiProtectAweRegion.c)
 * Callees:
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiMakeTransitionPteValid(unsigned __int64 a1)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r9
  unsigned __int64 v4; // rdx

  v2 = MI_READ_PTE_LOCK_FREE(a1);
  v4 = v2;
  if ( qword_140C4DE80 )
  {
    if ( (v2 & 0x10) != 0 )
      v4 = v2 & 0xFFFFFFFFFFFFFFEFuLL;
    else
      v4 = v2 & ~qword_140C4DE80;
  }
  return MiMakeValidPte(a1, (v4 >> 12) & 0xFFFFFFFFFLL, (v2 >> 5) & 0x1F, v3);
}
