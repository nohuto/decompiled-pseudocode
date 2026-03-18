/*
 * XREFs of SepAdtOpenRegAndSetupNotification @ 0x1407B8A58
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140A6B21C (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     SepRegOpenKey @ 0x14068D944 (SepRegOpenKey.c)
 *     NtNotifyChangeKey @ 0x1406BF900 (NtNotifyChangeKey.c)
 */

NTSTATUS SepAdtOpenRegAndSetupNotification()
{
  NTSTATUS result; // eax

  result = SepRegOpenKey(
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa",
             0x211u,
             &SepAdtRegNotifyHandle);
  if ( result >= 0 )
  {
    qword_140CF4470 = (__int64)SepAdtRegNotificationCallback;
    qword_140CF4478 = 0LL;
    SepAdtLsaRegWatchWorkItem = 0LL;
    return NtNotifyChangeKey(
             (__int64)SepAdtRegNotifyHandle,
             0LL,
             (void (__stdcall *)(POPLOCK))&SepAdtLsaRegWatchWorkItem,
             1LL,
             SepAdtIoStatusBlock,
             5u,
             0,
             0LL,
             0,
             1);
  }
  return result;
}
