/*
 * XREFs of ?IsPrimaryMonitor@CDDisplayRenderTarget@@UEBA_NXZ @ 0x1801740A0
 * Callers:
 *     ?Present@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x180190630 (-Present@CDDisplayRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDDisplayRenderTarget::IsPrimaryMonitor(CDDisplayRenderTarget *this)
{
  bool result; // al

  result = 0;
  if ( !*((_DWORD *)this + 4532) )
    return *((_DWORD *)this + 4533) == 0;
  return result;
}
