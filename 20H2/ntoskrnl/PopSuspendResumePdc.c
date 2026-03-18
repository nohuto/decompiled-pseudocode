/*
 * XREFs of PopSuspendResumePdc @ 0x140776628
 * Callers:
 *     NtPowerInformation @ 0x1406F7470 (NtPowerInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall PopSuspendResumePdc(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_140C54260;
  if ( qword_140C54260 )
    return (__int64 (__fastcall *)(_QWORD))qword_140C54260(a1);
  return result;
}
