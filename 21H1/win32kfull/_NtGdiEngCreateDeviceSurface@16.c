/*
 * XREFs of _NtGdiEngCreateDeviceSurface@16 @ 0x217F3F
 * Callers:
 *     <none>
 * Callees:
 *     ?bIsProcessLocalSystem@@YGHPAU_EPROCESS@@@Z @ 0x1E7C30 (-bIsProcessLocalSystem@@YGHPAU_EPROCESS@@@Z.c)
 *     ?ValidUmpdSizl@@YGHUtagSIZE@@_N@Z @ 0x21680C (-ValidUmpdSizl@@YGHUtagSIZE@@_N@Z.c)
 */

HSURF __stdcall NtGdiEngCreateDeviceSurface(DHSURF dhsurf, SIZEL sizl, int a3)
{
  struct _KPROCESS *CurrentProcess; // eax
  bool savedregs; // [esp+0h] [ebp+0h]

  if ( gUMPDSecurityLevel != 2 )
  {
    if ( !gUMPDSecurityLevel
      || (CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(), !bIsProcessLocalSystem(CurrentProcess)) )
    {
      if ( !ValidUmpdSizl(0, sizl, savedregs) )
      {
        if ( gfUMPDDebug )
          _DbgPrint(
            "clientcore\\windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngCreateDeviceSurface:Invalid sizl.\n",
            3809);
        return 0;
      }
    }
  }
  if ( (unsigned int)(a3 - 1) > 7 )
    return 0;
  return EngCreateDeviceSurface(dhsurf, sizl, a3 | 0x8000);
}
