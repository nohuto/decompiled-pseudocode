/*
 * XREFs of FreeMessageList @ 0x1C00A2120
 * Callers:
 *     zzzDestroyQueue @ 0x1C0051DF0 (zzzDestroyQueue.c)
 *     xxxDestroyThreadInfo @ 0x1C00533CC (xxxDestroyThreadInfo.c)
 *     UserDeleteW32Thread @ 0x1C0121020 (UserDeleteW32Thread.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall FreeMessageList(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C0250048;
  if ( qword_1C0250048 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C0250048(a1);
  return result;
}
