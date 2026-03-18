/*
 * XREFs of ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCVisRgnTrackerProp@@@Z @ 0xF457E
 * Callers:
 *     ?MarkDirtyWorker@@YGXPAUtagWND@@@Z @ 0xF4906 (-MarkDirtyWorker@@YGXPAUtagWND@@@Z.c)
 *     ?ReNotifyDwm@CVisRgnTrackerProp@@SGXQAUtagWND@@@Z @ 0xF494A (-ReNotifyDwm@CVisRgnTrackerProp@@SGXQAUtagWND@@@Z.c)
 *     _CreateVisRgnTracker@8 @ 0xF4C7C (_CreateVisRgnTracker@8.c)
 *     _DirtyVisRgnTrackers@4 @ 0xF4CDE (_DirtyVisRgnTrackers@4.c)
 *     _RemoveVisRgnTracker@8 @ 0xF4D94 (_RemoveVisRgnTracker@8.c)
 * Callees:
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 */

BOOL __fastcall CWindowProp::GetProp<CVisRgnTrackerProp>(int a1, int *a2)
{
  int Prop; // eax

  Prop = _GetProp(a1, LOWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject), 1);
  *a2 = Prop;
  return Prop != 0;
}
