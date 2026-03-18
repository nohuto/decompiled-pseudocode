/*
 * XREFs of RtlNtStatusToDosError @ 0x1406BA6D0
 * Callers:
 *     LocalConvertSDToStringSD_Rev1 @ 0x14068ED94 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalConvertAclToString @ 0x14068FE40 (LocalConvertAclToString.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x140772DC4 (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x1407730BC (LocalGetAclForString.c)
 *     LocalGetSidForString @ 0x140773650 (LocalGetSidForString.c)
 *     EtwpEnumerateKeyProviders @ 0x14077D364 (EtwpEnumerateKeyProviders.c)
 *     EtwpEnableAutoLoggerProvider @ 0x14077D4C0 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpEnumerateAutologgerPath @ 0x1407A035C (EtwpEnumerateAutologgerPath.c)
 *     EtwStartAutoLogger @ 0x1407A05CC (EtwStartAutoLogger.c)
 *     LocalGetStringForSid @ 0x140921838 (LocalGetStringForSid.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x1402F4FC0 (RtlNtStatusToDosErrorNoTeb.c)
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
