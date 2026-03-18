/*
 * XREFs of ?CheckForOcclusionChange@CDDisplayRenderTarget@@IEAAXJ@Z @ 0x1800E78E8
 * Callers:
 *     ?Present@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x180190630 (-Present@CDDisplayRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDDisplayRenderTarget::CheckForOcclusionChange(CDDisplayRenderTarget *this, int a2)
{
  if ( a2 == 142213121 )
  {
    *((_BYTE *)this + 18624) = 1;
  }
  else if ( a2 >= 0 )
  {
    if ( *((_BYTE *)this + 18624) )
    {
      *((_BYTE *)this + 18624) = 0;
      *((_BYTE *)this + 129) = 1;
      *((_BYTE *)this + 18622) = 1;
    }
  }
}
