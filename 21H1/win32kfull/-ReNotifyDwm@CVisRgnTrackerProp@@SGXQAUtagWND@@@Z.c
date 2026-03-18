/*
 * XREFs of ?ReNotifyDwm@CVisRgnTrackerProp@@SGXQAUtagWND@@@Z @ 0xF494A
 * Callers:
 *     _zzzComposeDesktop@4 @ 0xE0A14 (_zzzComposeDesktop@4.c)
 * Callees:
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCVisRgnTrackerProp@@@Z @ 0xF457E (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCVisRgnTrackerProp@@@Z.c)
 *     ?FreeTrackedRegions@CVisRgnTrackerProp@@AAEXXZ @ 0xF45D6 (-FreeTrackedRegions@CVisRgnTrackerProp@@AAEXXZ.c)
 *     ?MarkDirty@CVisRgnTrackerProp@@QAEXXZ @ 0xF48D6 (-MarkDirty@CVisRgnTrackerProp@@QAEXXZ.c)
 */

void __thiscall CVisRgnTrackerProp::ReNotifyDwm(void *this)
{
  CVisRgnTrackerProp *v1; // [esp+4h] [ebp-4h] BYREF

  v1 = 0;
  if ( CWindowProp::GetProp<CVisRgnTrackerProp>((int)this, (int *)&v1) )
  {
    CVisRgnTrackerProp::FreeTrackedRegions(v1);
    CVisRgnTrackerProp::MarkDirty(v1);
  }
}
