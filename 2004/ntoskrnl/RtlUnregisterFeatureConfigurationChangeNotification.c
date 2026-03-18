/*
 * XREFs of RtlUnregisterFeatureConfigurationChangeNotification @ 0x14090CE80
 * Callers:
 *     <none>
 * Callees:
 *     CmFcManagerUnregisterFeatureConfigurationChangeNotification @ 0x14087A724 (CmFcManagerUnregisterFeatureConfigurationChangeNotification.c)
 */

void __fastcall RtlUnregisterFeatureConfigurationChangeNotification(struct _EX_RUNDOWN_REF *a1)
{
  CmFcManagerUnregisterFeatureConfigurationChangeNotification((__int64)a1, a1);
}
