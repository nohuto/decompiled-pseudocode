/*
 * XREFs of RtlUnregisterFeatureConfigurationChangeNotification @ 0x140914A20
 * Callers:
 *     <none>
 * Callees:
 *     CmFcManagerUnregisterFeatureConfigurationChangeNotification @ 0x140879434 (CmFcManagerUnregisterFeatureConfigurationChangeNotification.c)
 */

void __fastcall RtlUnregisterFeatureConfigurationChangeNotification(struct _EX_RUNDOWN_REF *a1)
{
  CmFcManagerUnregisterFeatureConfigurationChangeNotification((__int64)a1, a1);
}
