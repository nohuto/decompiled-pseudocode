/*
 * XREFs of PopSuspendResumePdc @ 0x140765C38
 * Callers:
 *     NtPowerInformation @ 0x14070B1B0 (NtPowerInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall PopSuspendResumePdc(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_140C542E0;
  if ( qword_140C542E0 )
    return (__int64 (__fastcall *)(_QWORD))qword_140C542E0(a1);
  return result;
}
