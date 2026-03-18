/*
 * XREFs of RtlNtStatusToDosError @ 0x1406B2FF0
 * Callers:
 *     LocalConvertSDToStringSD_Rev1 @ 0x1406FB214 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalConvertAclToString @ 0x1406FCD64 (LocalConvertAclToString.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1407837D4 (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x140783ACC (LocalGetAclForString.c)
 *     LocalGetSidForString @ 0x140784060 (LocalGetSidForString.c)
 *     EtwpEnumerateKeyProviders @ 0x14078ED40 (EtwpEnumerateKeyProviders.c)
 *     EtwpEnableAutoLoggerProvider @ 0x14078EE9C (EtwpEnableAutoLoggerProvider.c)
 *     EtwpEnumerateAutologgerPath @ 0x1407ABBD0 (EtwpEnumerateAutologgerPath.c)
 *     EtwStartAutoLogger @ 0x1407ABE40 (EtwStartAutoLogger.c)
 *     LocalGetStringForSid @ 0x140928910 (LocalGetStringForSid.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x1403051B0 (RtlNtStatusToDosErrorNoTeb.c)
 */

ULONG __stdcall RtlNtStatusToDosError(NTSTATUS Status)
{
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *Teb; // rdx

  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) == 0 && CurrentThread->ApcStateIndex != 1 )
  {
    Teb = CurrentThread->Teb;
    if ( Teb )
      Teb[1172] = Status;
  }
  return RtlNtStatusToDosErrorNoTeb(Status);
}
