/*
 * XREFs of IoRevertFromDemotedDumpType @ 0x140552B10
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x1405788B0 (KiAttemptBugcheckRecovery.c)
 *     KiBugCheckRecoveryPrepareForCrashDump @ 0x140578EF0 (KiBugCheckRecoveryPrepareForCrashDump.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *IoRevertFromDemotedDumpType())(_QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  result = qword_140C54E00;
  if ( qword_140C54E00 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD))qword_140C54E00(8LL, 0LL);
  return result;
}
