/*
 * XREFs of xxxWindowEvent @ 0x1C00D1D54
 * Callers:
 *     zzzDestroyQueue @ 0x1C006FE70 (zzzDestroyQueue.c)
 *     xxxDestroyThreadInfo @ 0x1C0071CF4 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall xxxWindowEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5))(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD); // rax

  result = qword_1C0257FE8;
  if ( qword_1C0257FE8 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))qword_1C0257FE8(a1, a2, a3, a4, a5);
  return result;
}
