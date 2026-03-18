/*
 * XREFs of MiGetStandbyPageType @ 0x140390CE4
 * Callers:
 *     MiRebuildStandbyLookasideList @ 0x1402E8BCC (MiRebuildStandbyLookasideList.c)
 *     MiFindSuitableLookasideReplacement @ 0x1402E9070 (MiFindSuitableLookasideReplacement.c)
 * Callees:
 *     MiIsDecayPfn @ 0x1402C1520 (MiIsDecayPfn.c)
 */

__int64 __fastcall MiGetStandbyPageType(ULONG_PTR a1)
{
  __int64 v1; // rcx

  if ( MiIsDecayPfn(a1) )
    return 1LL;
  else
    return (*(unsigned __int8 *)(48 * v1 - 0x21FFFFFFFFDDLL) >> 2) & 2;
}
