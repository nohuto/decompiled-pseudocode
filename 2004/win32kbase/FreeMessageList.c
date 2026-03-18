/*
 * XREFs of FreeMessageList @ 0x1C003FB40
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0074C34 (xxxDestroyThreadInfo.c)
 *     zzzDestroyQueue @ 0x1C0076490 (zzzDestroyQueue.c)
 *     UserDeleteW32Thread @ 0x1C0123370 (UserDeleteW32Thread.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall FreeMessageList(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C0252048;
  if ( qword_1C0252048 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C0252048(a1);
  return result;
}
