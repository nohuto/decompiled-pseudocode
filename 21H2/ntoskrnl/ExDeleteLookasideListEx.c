/*
 * XREFs of ExDeleteLookasideListEx @ 0x14023CEA0
 * Callers:
 *     <none>
 * Callees:
 *     ExFlushLookasideListEx @ 0x14023CEE0 (ExFlushLookasideListEx.c)
 *     ExpRemoveGeneralLookaside @ 0x14023CF24 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeleteLookasideListEx(PLOOKASIDE_LIST_EX Lookaside)
{
  bool v2; // zf
  KSPIN_LOCK *v3; // rcx

  v2 = (Lookaside->L.Type & 1) == 0;
  v3 = &ExNPagedLookasideLock;
  if ( !v2 )
    v3 = &ExPagedLookasideLock;
  ExpRemoveGeneralLookaside(v3);
  ExFlushLookasideListEx(Lookaside);
}
