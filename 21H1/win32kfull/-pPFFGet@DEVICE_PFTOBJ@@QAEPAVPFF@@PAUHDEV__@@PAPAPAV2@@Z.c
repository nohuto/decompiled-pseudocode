/*
 * XREFs of ?pPFFGet@DEVICE_PFTOBJ@@QAEPAVPFF@@PAUHDEV__@@PAPAPAV2@@Z @ 0x88C66
 * Callers:
 *     ?ppfeGetAMatch@@YGPAVPFE@@AAVXDCOBJ@@PAUtagENUMLOGFONTEXDVW@@PBGKKPAKPAU_POINTL@@3H@Z @ 0x49FBA (-ppfeGetAMatch@@YGPAVPFE@@AAVXDCOBJ@@PAUtagENUMLOGFONTEXDVW@@PBGKKPAKPAU_POINTL@@3H@Z.c)
 *     _GreEnumFonts@28 @ 0x888D8 (_GreEnumFonts@28.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QAEHPAVPDEVOBJ@@@Z @ 0x1D08B0 (-bLoadFonts@DEVICE_PFTOBJ@@QAEHPAVPDEVOBJ@@@Z.c)
 *     _DEVICE_PFTOBJ_pPFFGetWrap@12 @ 0x1D1019 (_DEVICE_PFTOBJ_pPFFGetWrap@12.c)
 *     ?bFoundForcedMatch@MAPPER@@QAEHPAU_UNIVERSAL_FONT_ID@@@Z @ 0x1F4BAA (-bFoundForcedMatch@MAPPER@@QAEHPAU_UNIVERSAL_FONT_ID@@@Z.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QAEXXZ @ 0x1F4FA1 (-vAttemptDeviceMatch@MAPPER@@QAEXXZ.c)
 * Callees:
 *     <none>
 */

struct PFF *__thiscall DEVICE_PFTOBJ::pPFFGet(DEVICE_PFTOBJ *this, HDEV a2, struct PFF ***a3)
{
  struct PFF **v3; // ecx
  struct PFF *result; // eax

  v3 = (struct PFF **)(*(_DWORD *)this + 4 * (((unsigned int)a2 >> 4) % *(_DWORD *)(*(_DWORD *)this + 12)) + 24);
  result = *v3;
  if ( a3 )
    *a3 = v3;
  while ( result && a2 != *((HDEV *)result + 15) )
    result = (struct PFF *)*((_DWORD *)result + 1);
  return result;
}
