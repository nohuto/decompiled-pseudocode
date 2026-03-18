/*
 * XREFs of FreeTimer @ 0x1C01F7EB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall FreeTimer(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C0251A88;
  if ( qword_1C0251A88 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C0251A88(a1);
  return result;
}
