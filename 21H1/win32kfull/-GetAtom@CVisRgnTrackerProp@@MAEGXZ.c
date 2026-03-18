/*
 * XREFs of ?GetAtom@CVisRgnTrackerProp@@MAEGXZ @ 0xF4608
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int16 __thiscall CVisRgnTrackerProp::GetAtom(CVisRgnTrackerProp *this)
{
  return (unsigned __int16)WPP_MAIN_CB.Queue.Wcb.DeviceObject;
}
