/*
 * XREFs of KiGetPastDueIRTimerInfo @ 0x140521F94
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x1402843F0 (KeResumeClockTimerFromIdle.c)
 *     KeQueryWakeSource @ 0x140512B6C (KeQueryWakeSource.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetPastDueIRTimerInfo(unsigned __int64 a1, _BYTE *a2, _BYTE *a3)
{
  unsigned __int64 v3; // rax
  char v4; // cl
  __int64 result; // rax

  if ( a1 < qword_140C31BB0 )
    return 0LL;
  if ( (qword_140C31BA8 & 1) != 0 )
  {
    if ( qword_140C31BA8 == 1 )
      v3 = 0LL;
    else
      v3 = qword_140C31BA8 ^ ((unsigned __int64)&unk_140C31BA0 + 1);
  }
  else
  {
    v3 = qword_140C31BA8;
  }
  *a2 = *(_BYTE *)(v3 - 46);
  v4 = *(_BYTE *)(v3 - 45);
  result = 1LL;
  *a3 = v4;
  return result;
}
