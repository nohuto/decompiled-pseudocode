/*
 * XREFs of LdrpOpenKey @ 0x14078A658
 * Callers:
 *     _RtlpRemovePendingDeleteLanguages @ 0x1403B3500 (_RtlpRemovePendingDeleteLanguages.c)
 *     _IsMachineLanguageListInMutableLocation @ 0x1403B35C0 (_IsMachineLanguageListInMutableLocation.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1403B3620 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     RtlpLoadInstallLanguageFallback @ 0x1407898E0 (RtlpLoadInstallLanguageFallback.c)
 *     RtlpLoadLanguageConfigList @ 0x14078A570 (RtlpLoadLanguageConfigList.c)
 * Callees:
 *     ZwOpenKey @ 0x1403F3800 (ZwOpenKey.c)
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
