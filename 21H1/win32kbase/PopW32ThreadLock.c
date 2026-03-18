/*
 * XREFs of PopW32ThreadLock @ 0x1C01FDC0C
 * Callers:
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x1C00D157C (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall PopW32ThreadLock(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C0257E90;
  if ( qword_1C0257E90 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C0257E90(a1);
  return result;
}
