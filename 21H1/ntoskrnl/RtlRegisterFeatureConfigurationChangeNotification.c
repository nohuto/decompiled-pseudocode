/*
 * XREFs of RtlRegisterFeatureConfigurationChangeNotification @ 0x1409149F0
 * Callers:
 *     wil_RegisterFeatureStagingChangeNotification @ 0x1405C6564 (wil_RegisterFeatureStagingChangeNotification.c)
 * Callees:
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x14087933C (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 */

__int64 __fastcall RtlRegisterFeatureConfigurationChangeNotification(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  return CmFcManagerRegisterFeatureConfigurationChangeNotification(a1, a1, a2, a3, a4);
}
