/*
 * XREFs of ??$_ReadOptionalRegistryValueWithPrefix@N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBG1PEAN@Z @ 0x180396DC8
 * Callers:
 *     ?_ReadOptionalRegistryValue@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAURelativeMargins@@@Z @ 0x180397C64 (-_ReadOptionalRegistryValue@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAURelativeMargin.c)
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18002BE30 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007D4C4 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??$_ReadOptionalRegistryValue@N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAN@Z @ 0x180396CE8 (--$_ReadOptionalRegistryValue@N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAN@Z.c)
 */

void __fastcall MultitaskingViewConfigHelpers::_ReadOptionalRegistryValueWithPrefix<double>(
        MultitaskingViewConfigHelpers *a1,
        __int64 a2,
        __int64 a3,
        double *a4)
{
  unsigned int *v6; // r9
  HKEY v7[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v7, 0, 24);
  if ( (int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
              (__int64)v7,
              L"%s_%s",
              a2,
              a3) >= 0 )
    MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<double>(a1, v7[0], a4, v6);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v7);
}
