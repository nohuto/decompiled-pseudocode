/*
 * XREFs of FreeMessageList @ 0x1C0030FA0
 * Callers:
 *     zzzDestroyQueue @ 0x1C006FE70 (zzzDestroyQueue.c)
 *     xxxDestroyThreadInfo @ 0x1C0071CF4 (xxxDestroyThreadInfo.c)
 *     UserDeleteW32Thread @ 0x1C0129350 (UserDeleteW32Thread.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall FreeMessageList(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C0258008;
  if ( qword_1C0258008 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C0258008(a1);
  return result;
}
