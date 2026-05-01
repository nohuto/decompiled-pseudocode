/*
 * XREFs of ?InternalClose@?$HandleT@UHBITMAPTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@MEAA_NXZ @ 0x18047B450
 * Callers:
 *     s_DrawThemeTextPPIAware @ 0x18047B930 (s_DrawThemeTextPPIAware.c)
 * Callees:
 *     <none>
 */

bool __fastcall Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HBITMAPTraits>::InternalClose(
        __int64 a1)
{
  return DeleteObject(*(HGDIOBJ *)(a1 + 8));
}
