/*
 * XREFs of LockQCursor @ 0x1C0076C10
 * Callers:
 *     zzzDestroyQueue @ 0x1C0051DF0 (zzzDestroyQueue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall LockQCursor(__int64 a1, __int64 a2))(_QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  result = qword_1C024FFF8;
  if ( qword_1C024FFF8 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C024FFF8(a1, a2);
  return result;
}
