/*
 * XREFs of ?MulDeleteDeviceOrRedirectionBitmap@@YGXPAUDHSURF__@@@Z @ 0x202DAA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall MulDeleteDeviceOrRedirectionBitmap(_DWORD *pv)
{
  _DWORD *i; // esi
  SURFOBJ *v2; // eax
  HSURF hsurf; // ebx

  for ( i = *(_DWORD **)*pv; i; i = (_DWORD *)*i )
  {
    v2 = *(SURFOBJ **)(pv[1] + 4 * i[2]);
    if ( v2 )
    {
      v2[1].pvBits = 0;
      hsurf = v2->hsurf;
      EngUnlockSurface(v2);
      if ( !HmgQueryAltLock(hsurf) )
      {
        GreMarkDeletableBitmap(hsurf);
        EngDeleteSurface(hsurf);
      }
    }
  }
  EngFreeMem(pv);
}
