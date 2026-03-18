/*
 * XREFs of CmFcRegisterFeatureConfigurationChangeNotification @ 0x14083332C
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x1403C7A30 (RtlRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x140833350 (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 */

__int64 __fastcall CmFcRegisterFeatureConfigurationChangeNotification(int a1, int a2, int a3, __int64 a4)
{
  return CmFcManagerRegisterFeatureConfigurationChangeNotification(a1, a1, a2, a3, a4);
}
