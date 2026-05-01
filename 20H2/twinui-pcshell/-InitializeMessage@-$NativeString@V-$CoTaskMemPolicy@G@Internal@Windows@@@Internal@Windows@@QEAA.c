/*
 * XREFs of ?InitializeMessage@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180418F74
 * Callers:
 *     TabletModeDragPattern::GenerateStringWithMap @ 0x180418848 (TabletModeDragPattern--GenerateStringWithMap.c)
 *     ?GenerateDropEffectPlaceMode@@YAJPEBGW4PlaceModeEvent@@PEAPEAG@Z @ 0x18042D2C4 (-GenerateDropEffectPlaceMode@@YAJPEBGW4PlaceModeEvent@@PEAPEAG@Z.c)
 * Callees:
 *     ??$_InitializeHelper@V_lambda_255728157cf8e92998065ff06efe801f_@@@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBGPEADAEBV_lambda_255728157cf8e92998065ff06efe801f_@@@Z @ 0x180418424 (--$_InitializeHelper@V_lambda_255728157cf8e92998065ff06efe801f_@@@-$NativeString@V-$CoTaskMemPol.c)
 */

__int64 Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeMessage(
        WCHAR **a1,
        const void *a2,
        ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_InitializeHelper<_lambda_255728157cf8e92998065ff06efe801f_>(
           a1,
           a2,
           va);
}
