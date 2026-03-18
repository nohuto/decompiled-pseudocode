/*
 * XREFs of RtlUnregisterFeatureConfigurationChangeNotification @ 0x14091B8B0
 * Callers:
 *     <none>
 * Callees:
 *     CmFcManagerUnregisterFeatureConfigurationChangeNotification @ 0x140880294 (CmFcManagerUnregisterFeatureConfigurationChangeNotification.c)
 */

void __fastcall RtlUnregisterFeatureConfigurationChangeNotification(struct _EX_RUNDOWN_REF *a1)
{
  CmFcManagerUnregisterFeatureConfigurationChangeNotification((__int64)a1, a1);
}
