/*
 * XREFs of SepAdtOpenRegAndSetupNotification @ 0x1407AAB18
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140A63F4C (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     NtNotifyChangeKey @ 0x1405E2150 (NtNotifyChangeKey.c)
 *     SepRegOpenKey @ 0x140631044 (SepRegOpenKey.c)
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
    qword_140CF43A0 = (__int64)SepAdtRegNotificationCallback;
    qword_140CF43A8 = 0LL;
    SepAdtLsaRegWatchWorkItem = 0LL;
    return NtNotifyChangeKey(
             (int)SepAdtRegNotifyHandle,
             0,
             (__int64)&SepAdtLsaRegWatchWorkItem,
             1LL,
             &SepAdtIoStatusBlock,
             5,
             0,
             0LL,
             0,
             1);
  }
  return result;
}
