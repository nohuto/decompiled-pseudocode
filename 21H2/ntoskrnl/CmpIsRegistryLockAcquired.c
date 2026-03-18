/*
 * XREFs of CmpIsRegistryLockAcquired @ 0x1402ACD00
 * Callers:
 *     CmpDoQueryKeyName @ 0x140346910 (CmpDoQueryKeyName.c)
 *     NtSaveKeyEx @ 0x14065A1F0 (NtSaveKeyEx.c)
 *     CmLoadDifferencingKey @ 0x14067CE4C (CmLoadDifferencingKey.c)
 *     NtDeleteKey @ 0x14067DE90 (NtDeleteKey.c)
 *     CmPostCallbackNotificationEx @ 0x14067FF60 (CmPostCallbackNotificationEx.c)
 *     CmUnloadKey @ 0x14069E454 (CmUnloadKey.c)
 *     NtEnumerateValueKey @ 0x1406A1370 (NtEnumerateValueKey.c)
 *     NtFlushKey @ 0x1406A5C00 (NtFlushKey.c)
 *     NtQueryMultipleValueKey @ 0x140713980 (NtQueryMultipleValueKey.c)
 *     NtDeleteValueKey @ 0x140714980 (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x14071FAA0 (NtSetValueKey.c)
 *     CmpSecurityMethod @ 0x140721010 (CmpSecurityMethod.c)
 *     NtQueryKey @ 0x1407333B0 (NtQueryKey.c)
 *     CmpParseKey @ 0x1407349A0 (CmpParseKey.c)
 *     NtSetInformationKey @ 0x1407C0160 (NtSetInformationKey.c)
 *     CmPostCallbackNotification @ 0x1407C04B4 (CmPostCallbackNotification.c)
 *     NtEnumerateKey @ 0x1407C1130 (NtEnumerateKey.c)
 *     CmpDeleteKeyObject @ 0x1407C2680 (CmpDeleteKeyObject.c)
 *     NtQueryValueKey @ 0x1407C9930 (NtQueryValueKey.c)
 *     NtRenameKey @ 0x14090EF60 (NtRenameKey.c)
 *     NtReplaceKey @ 0x14090F3F0 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x14090F750 (NtRestoreKey.c)
 *     NtSaveMergedKeys @ 0x14090F9B0 (NtSaveMergedKeys.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402D6B0C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14036B680 (ExIsResourceAcquiredSharedLite.c)
 *     CmpThreadInfoLogStack @ 0x14053E958 (CmpThreadInfoLogStack.c)
 */

ULONG CmpIsRegistryLockAcquired()
{
  __int64 v0; // rax

  wil_details_FeatureReporting_ReportUsageToService(
    (unsigned int)&Feature_AccessRegistryLockAcquireCount__private_reporting,
    29919768,
    0,
    0,
    (__int64)&Feature_HgsPlusParkingSupportRequired_logged_traits,
    1);
  v0 = *(_QWORD *)&KeGetCurrentThread()[1].ResourceIndex;
  if ( v0 )
    return *(_DWORD *)(v0 + 8);
  CmpThreadInfoLogStack();
  return ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock);
}
