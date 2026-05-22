/*
 * XREFs of ?GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z @ 0x18003A830
 * Callers:
 *     _dynamic_initializer_for__SpatialInteractionDevices::SpatialInteractionHeartbeat::ReportIntervalTickCount64__ @ 0x180001800 (_dynamic_initializer_for__SpatialInteractionDevices--SpatialInteractionHeartbeat--ReportInterval.c)
 *     ?Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ @ 0x1800C5FC4 (-Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ.c)
 *     GetConfigurationFlag @ 0x1800CB86C (GetConfigurationFlag.c)
 *     ??0SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@QEAA@PEAUISpatialObjectDevice@Holographic@23@PEAUISpatialObject@523@@Z @ 0x1800DE36C (--0SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@QEAA@PEAUISpatialObjectDev.c)
 *     SpatialGraphDriverClientHelpers::DefaultSpatialGraphSettings @ 0x18015ACAC (SpatialGraphDriverClientHelpers--DefaultSpatialGraphSettings.c)
 *     ??0SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@PEAUIHidDevice@123@KKV?$function@$$A6AXXZ@std@@@Z @ 0x180169604 (--0SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@PEAUIHidDevice@.c)
 *     ?EnsureInitializationRetryParameters@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXXZ @ 0x18016BF68 (-EnsureInitializationRetryParameters@SpatialInteractionSourceController@SpatialInteractions@Inte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RegistryHelpers::GetDwordWithDefault(
        RegistryHelpers *this,
        const WCHAR *a2,
        const wchar_t *a3,
        const wchar_t *a4)
{
  unsigned int v4; // ebx
  __int64 result; // rax
  DWORD v6; // [rsp+40h] [rbp-18h] BYREF
  _DWORD v7[5]; // [rsp+44h] [rbp-14h] BYREF
  DWORD v8; // [rsp+60h] [rbp+8h] BYREF
  int v9; // [rsp+64h] [rbp+Ch]

  v9 = HIDWORD(this);
  v8 = 0;
  v7[0] = 0;
  v4 = (unsigned int)a4;
  v6 = 4;
  if ( RegGetValueW(HKEY_LOCAL_MACHINE, a2, a3, 0x10u, &v8, v7, &v6) )
    return v4;
  if ( v8 != 4 )
    return v4;
  result = v7[0];
  if ( v6 != 4 )
    return v4;
  return result;
}
