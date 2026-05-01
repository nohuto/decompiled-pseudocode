/*
 * XREFs of ??0String@Platform@@QE$AAA@PEB_W@Z @ 0x1802EB45C
 * Callers:
 *     ?GetPlatformExceptionMessage@details@wil@@YAPE$AAVString@Platform@@PE$AAVException@4@@Z @ 0x1802EB4DC (-GetPlatformExceptionMessage@details@wil@@YAPE$AAVString@Platform@@PE$AAVException@4@@Z.c)
 *     ?ThrowPlatformException@details@wil@@YAXAEBUFailureInfo@2@PEB_W@Z @ 0x1802EBAA0 (-ThrowPlatformException@details@wil@@YAXAEBUFailureInfo@2@PEB_W@Z.c)
 *     ?GetResourceString@XamlAllUpViewController@@AE$AAAPE$AAVString@Platform@@I@Z @ 0x18031A290 (-GetResourceString@XamlAllUpViewController@@AE$AAAPE$AAVString@Platform@@I@Z.c)
 * Callees:
 *     WINRT_WindowsCreateString @ 0x18008E4C1 (WINRT_WindowsCreateString.c)
 *     wcslen_0 @ 0x180091771 (wcslen_0.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802EBB30 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

HSTRING __fastcall Platform::String::String(HSTRING a1, const wchar_t *a2)
{
  UINT32 v4; // eax
  HRESULT v5; // eax
  HSTRING string; // [rsp+30h] [rbp+8h] BYREF

  string = a1;
  if ( !a2 )
    return 0LL;
  string = 0LL;
  v4 = wcslen_0(a2);
  v5 = WINRT_WindowsCreateString(a2, v4, &string);
  if ( v5 < 0 )
  {
    __abi_WinRTraiseException(v5);
    __debugbreak();
  }
  return string;
}
