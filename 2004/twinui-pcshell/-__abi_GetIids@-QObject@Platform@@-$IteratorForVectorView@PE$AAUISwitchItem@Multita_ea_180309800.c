/*
 * XREFs of ?__abi_GetIids@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@2@UE$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x180309800
 * Callers:
 *     ?__abi_GetIids@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@2@W7E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800F9100 (-__abi_GetIids@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@Composa.c)
 *     ?__abi_GetIids@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@2@WBA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800F9110 (-__abi_GetIids@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItem@Multita_ea_1800F9110.c)
 *     ?__abi_GetIids@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@2@WBI@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800F9120 (-__abi_GetIids@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItem@Multita_ea_1800F9120.c)
 *     ?__abi_GetIids@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@2@WCI@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800F9130 (-__abi_GetIids@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItem@Multita_ea_1800F9130.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z @ 0x180091968 (-__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z.c)
 */

int __fastcall ___abi_GetIids__QObject_Platform____IteratorForVectorView_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Details_Collections_2_UE_AAAJPEAKPEAPEAVGuid_2__Z(
        __int64 a1,
        unsigned int *a2,
        struct Platform::Guid **a3)
{
  __int64 v4; // [rsp+20h] [rbp-50h] BYREF
  int v5; // [rsp+28h] [rbp-48h]
  int v6; // [rsp+2Ch] [rbp-44h]
  int v7; // [rsp+30h] [rbp-40h]
  int v8; // [rsp+34h] [rbp-3Ch]
  int v9; // [rsp+38h] [rbp-38h]
  int v10; // [rsp+3Ch] [rbp-34h]
  int v11; // [rsp+40h] [rbp-30h]
  int v12; // [rsp+44h] [rbp-2Ch]
  int v13; // [rsp+48h] [rbp-28h]
  int v14; // [rsp+4Ch] [rbp-24h]
  __int64 v15; // [rsp+50h] [rbp-20h]
  int v16; // [rsp+58h] [rbp-18h]
  int v17; // [rsp+5Ch] [rbp-14h]

  v5 = -277948531;
  v6 = -541802773;
  v7 = -1243329832;
  v8 = 1356928540;
  v9 = 1402780291;
  v10 = -604490407;
  v11 = 1780313095;
  v12 = 1240598381;
  v13 = 754259075;
  v14 = 830708380;
  v15 = 56LL;
  v16 = 192;
  v17 = 1174405120;
  return __winRT::__getIids(
           (__winRT *)4,
           a2,
           (const struct __s_GUID *)&v4,
           a3,
           (struct Platform::Guid **)0x3153E46C1AC5146ALL);
}
