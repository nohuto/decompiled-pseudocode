/*
 * XREFs of FreeHwndList @ 0x1C00D277C
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0074C34 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall FreeHwndList(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C0252208;
  if ( qword_1C0252208 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C0252208(a1);
  return result;
}
