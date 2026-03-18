/*
 * XREFs of SetWakeBit @ 0x1C00BE2CC
 * Callers:
 *     zzzDestroyQueue @ 0x1C0051DF0 (zzzDestroyQueue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall SetWakeBit(__int64 a1, __int64 a2))(_QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  result = qword_1C0250018;
  if ( qword_1C0250018 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C0250018(a1, a2);
  return result;
}
