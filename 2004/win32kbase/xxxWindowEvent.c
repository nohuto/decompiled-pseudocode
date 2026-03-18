/*
 * XREFs of xxxWindowEvent @ 0x1C00D27C4
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0074C34 (xxxDestroyThreadInfo.c)
 *     zzzDestroyQueue @ 0x1C0076490 (zzzDestroyQueue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall xxxWindowEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5))(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD); // rax

  result = qword_1C0252028;
  if ( qword_1C0252028 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))qword_1C0252028(a1, a2, a3, a4, a5);
  return result;
}
