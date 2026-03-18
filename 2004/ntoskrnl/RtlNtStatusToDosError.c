/*
 * XREFs of RtlNtStatusToDosError @ 0x1406DB9E0
 * Callers:
 *     LocalConvertSDToStringSD_Rev1 @ 0x14063EC74 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalConvertAclToString @ 0x140641F7C (LocalConvertAclToString.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1407751D4 (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x1407754CC (LocalGetAclForString.c)
 *     LocalGetSidForString @ 0x140775A60 (LocalGetSidForString.c)
 *     EtwpEnumerateKeyProviders @ 0x14077C948 (EtwpEnumerateKeyProviders.c)
 *     EtwpEnableAutoLoggerProvider @ 0x14077CAA4 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpEnumerateAutologgerPath @ 0x14079C8A0 (EtwpEnumerateAutologgerPath.c)
 *     EtwStartAutoLogger @ 0x14079CB10 (EtwStartAutoLogger.c)
 *     LocalGetStringForSid @ 0x140922AE8 (LocalGetStringForSid.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x140331CF0 (RtlNtStatusToDosErrorNoTeb.c)
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
