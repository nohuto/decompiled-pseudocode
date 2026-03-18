/*
 * XREFs of ?Delete@CVisRgnTrackerProp@@UAEXXZ @ 0xF459E
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeTrackedRegions@CVisRgnTrackerProp@@AAEXXZ @ 0xF45D6 (-FreeTrackedRegions@CVisRgnTrackerProp@@AAEXXZ.c)
 */

void __thiscall CVisRgnTrackerProp::Delete(CVisRgnTrackerProp ***this)
{
  CVisRgnTrackerProp **v2; // ecx
  CVisRgnTrackerProp **v3; // edx

  CVisRgnTrackerProp::FreeTrackedRegions((CVisRgnTrackerProp *)this);
  if ( *((_BYTE *)this + 33) )
  {
    v2 = this[2];
    if ( v2[1] != (CVisRgnTrackerProp *)(this + 2) || (v3 = this[3], *v3 != (CVisRgnTrackerProp *)(this + 2)) )
      __fastfail(3u);
    *v3 = (CVisRgnTrackerProp *)v2;
    v2[1] = (CVisRgnTrackerProp *)v3;
    *((_BYTE *)this + 33) = 0;
  }
  Win32FreePool(this);
}
