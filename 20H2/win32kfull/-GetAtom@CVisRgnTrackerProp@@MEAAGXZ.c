/*
 * XREFs of ?GetAtom@CVisRgnTrackerProp@@MEAAGXZ @ 0x1C012E960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisRgnTrackerProp::GetAtom(CVisRgnTrackerProp *this)
{
  return LOWORD(WPP_MAIN_CB.AlignmentRequirement);
}
