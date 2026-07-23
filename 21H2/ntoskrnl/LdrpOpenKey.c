/*
 * XREFs of LdrpOpenKey @ 0x14078F948
 * Callers:
 *     _RtlpRemovePendingDeleteLanguages @ 0x1403A8490 (_RtlpRemovePendingDeleteLanguages.c)
 *     _IsMachineLanguageListInMutableLocation @ 0x1403A8550 (_IsMachineLanguageListInMutableLocation.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1403A85B0 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     RtlpLoadLanguageConfigList @ 0x14078F860 (RtlpLoadLanguageConfigList.c)
 *     RtlpLoadInstallLanguageFallback @ 0x140790514 (RtlpLoadInstallLanguageFallback.c)
 * Callees:
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 */

NTSTATUS __fastcall LdrpOpenKey(UNICODE_STRING *a1, void *a2, __int64 a3, HANDLE *a4)
{
  OBJECT_ATTRIBUTES v5; // [rsp+20h] [rbp-38h] BYREF

  v5.RootDirectory = a2;
  v5.ObjectName = a1;
  *(_QWORD *)&v5.Length = 48LL;
  *(_QWORD *)&v5.Attributes = 576LL;
  *a4 = 0LL;
  *(_OWORD *)&v5.SecurityDescriptor = 0LL;
  return ZwOpenKey(a4, 0x20019u, &v5);
}
