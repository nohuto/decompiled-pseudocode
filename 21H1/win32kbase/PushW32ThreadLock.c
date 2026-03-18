/*
 * XREFs of PushW32ThreadLock @ 0x1C001C8B0
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C0067F7C (xxxCreateThreadInfo.c)
 *     ?ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x1C00D153C (-ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     NtUserSystemParametersInfo @ 0x1C013F7D0 (NtUserSystemParametersInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall PushW32ThreadLock(__int64 a1, __int64 a2, __int64 a3))(_QWORD, _QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax

  result = qword_1C0257E80;
  if ( qword_1C0257E80 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C0257E80(a1, a2, a3);
  return result;
}
