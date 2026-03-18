/*
 * XREFs of ?FreeTrackedRegions@CVisRgnTrackerProp@@AAEXXZ @ 0xF45D6
 * Callers:
 *     ?Delete@CVisRgnTrackerProp@@UAEXXZ @ 0xF459E (-Delete@CVisRgnTrackerProp@@UAEXXZ.c)
 *     ?ReNotifyDwm@CVisRgnTrackerProp@@SGXQAUtagWND@@@Z @ 0xF494A (-ReNotifyDwm@CVisRgnTrackerProp@@SGXQAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall CVisRgnTrackerProp::FreeTrackedRegions(CVisRgnTrackerProp *this)
{
  _DWORD *v1; // esi
  int v2; // edi

  v1 = (_DWORD *)((char *)this + 20);
  v2 = 3;
  do
  {
    if ( *v1 )
    {
      GreSetRegionOwner(*v1, -2147483646);
      GreDeleteObject(*v1);
      *v1 = 0;
    }
    ++v1;
    --v2;
  }
  while ( v2 );
}
