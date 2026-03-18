/*
 * XREFs of PopSuspendResumePdc @ 0x1407675F8
 * Callers:
 *     NtPowerInformation @ 0x140649BC0 (NtPowerInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall PopSuspendResumePdc(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_140C541E0;
  if ( qword_140C541E0 )
    return (__int64 (__fastcall *)(_QWORD))qword_140C541E0(a1);
  return result;
}
