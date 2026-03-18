/*
 * XREFs of SetWakeBit @ 0x1C005025C
 * Callers:
 *     zzzDestroyQueue @ 0x1C006FE70 (zzzDestroyQueue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall SetWakeBit(__int64 a1, __int64 a2, __int64 a3))(_QWORD, _QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax

  result = qword_1C0257FD8;
  if ( qword_1C0257FD8 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C0257FD8(a1, a2, a3);
  return result;
}
