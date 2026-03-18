/*
 * XREFs of FreeProfileUserName @ 0x1C0059AA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall FreeProfileUserName(__int64 a1, __int64 a2))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  if ( a1 )
  {
    result = qword_1C0251FE8;
    if ( qword_1C0251FE8 )
      return (__int64 (__fastcall *)(_QWORD))qword_1C0251FE8(a2);
  }
  return result;
}
