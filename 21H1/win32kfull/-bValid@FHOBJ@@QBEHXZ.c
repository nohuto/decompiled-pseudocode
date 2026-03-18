/*
 * XREFs of ?bValid@FHOBJ@@QBEHXZ @ 0x88B7E
 * Callers:
 *     ?EnumEngineOnly@@YG_NPBGKKPAU_EFFILTER_INFO@@AAVPUBLIC_PFTOBJ@@2PAVDCOBJ@@PAKPAX@Z @ 0x88A46 (-EnumEngineOnly@@YG_NPBGKKPAU_EFFILTER_INFO@@AAVPUBLIC_PFTOBJ@@2PAVDCOBJ@@PAKPAX@Z.c)
 *     ?bFindBitmapFont@MAPPER@@QAEHPBG@Z @ 0x8ADEA (-bFindBitmapFont@MAPPER@@QAEHPBG@Z.c)
 *     ?bCleanupFontHash@@YGHPAPAU_FONTHASH@@@Z @ 0xCD688 (-bCleanupFontHash@@YGHPAPAU_FONTHASH@@@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QAEXXZ @ 0xCE2F8 (-vRemoveHash@PFFOBJ@@QAEXXZ.c)
 *     ?bAddHash@PFFOBJ@@QAEHH@Z @ 0xDE594 (-bAddHash@PFFOBJ@@QAEHH@Z.c)
 *     ?EnumDeviceAndEngine@@YG_NPBGKKPAU_EFFILTER_INFO@@AAVPUBLIC_PFTOBJ@@2AAVPFFOBJ@@AAVPDEVOBJ@@PAVDCOBJ@@PAKPAX@Z @ 0x21F000 (-EnumDeviceAndEngine@@YG_NPBGKKPAU_EFFILTER_INFO@@AAVPUBLIC_PFTOBJ@@2AAVPFFOBJ@@AAVPDEVOBJ@@PAVD.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall FHOBJ::bValid(FHOBJ *this)
{
  _DWORD *v1; // ecx
  BOOL result; // eax

  v1 = *(_DWORD **)this;
  result = 0;
  if ( v1 )
    return *v1 != 0;
  return result;
}
