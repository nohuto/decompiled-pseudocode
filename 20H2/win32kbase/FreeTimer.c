/*
 * XREFs of FreeTimer @ 0x1C01F6580
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall FreeTimer(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C024FA88;
  if ( qword_1C024FA88 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C024FA88(a1);
  return result;
}
