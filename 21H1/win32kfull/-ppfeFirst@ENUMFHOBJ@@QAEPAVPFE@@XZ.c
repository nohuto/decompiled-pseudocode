/*
 * XREFs of ?ppfeFirst@ENUMFHOBJ@@QAEPAVPFE@@XZ @ 0x1F4F50
 * Callers:
 *     ?ppfeGetAMatch@@YGPAVPFE@@AAVXDCOBJ@@PAUtagENUMLOGFONTEXDVW@@PBGKKPAKPAU_POINTL@@3H@Z @ 0x49FBA (-ppfeGetAMatch@@YGPAVPFE@@AAVXDCOBJ@@PAUtagENUMLOGFONTEXDVW@@PBGKKPAKPAU_POINTL@@3H@Z.c)
 *     ?bFoundForcedMatch@MAPPER@@QAEHPAU_UNIVERSAL_FONT_ID@@@Z @ 0x1F4BAA (-bFoundForcedMatch@MAPPER@@QAEHPAU_UNIVERSAL_FONT_ID@@@Z.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QAEXXZ @ 0x1F4FA1 (-vAttemptDeviceMatch@MAPPER@@QAEXXZ.c)
 *     ?vEmergency@MAPPER@@QAEXXZ @ 0x1F50F6 (-vEmergency@MAPPER@@QAEXXZ.c)
 * Callees:
 *     <none>
 */

struct PFE *__thiscall ENUMFHOBJ::ppfeFirst(ENUMFHOBJ *this)
{
  int v1; // edx
  int v2; // eax
  int v3; // eax

  v1 = 0;
  v2 = *(_DWORD *)(*((_DWORD *)this + 1) + 20);
  *((_DWORD *)this + 3) = v2;
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 4);
    *((_DWORD *)this + 2) = v3;
  }
  else
  {
    v3 = *((_DWORD *)this + 2);
  }
  if ( v3 )
    return *(struct PFE **)(v3 + 4);
  return (struct PFE *)v1;
}
