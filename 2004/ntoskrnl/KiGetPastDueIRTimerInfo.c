/*
 * XREFs of KiGetPastDueIRTimerInfo @ 0x14051E5C4
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x140219980 (KeResumeClockTimerFromIdle.c)
 *     KeQueryWakeSource @ 0x14050F23C (KeQueryWakeSource.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetPastDueIRTimerInfo(unsigned __int64 a1, _BYTE *a2, _BYTE *a3)
{
  unsigned __int64 v3; // rax
  char v4; // cl
  __int64 result; // rax

  if ( a1 < qword_140C31AF0 )
    return 0LL;
  if ( (qword_140C31AE8 & 1) != 0 )
  {
    if ( qword_140C31AE8 == 1 )
      v3 = 0LL;
    else
      v3 = qword_140C31AE8 ^ ((unsigned __int64)&unk_140C31AE0 + 1);
  }
  else
  {
    v3 = qword_140C31AE8;
  }
  *a2 = *(_BYTE *)(v3 - 46);
  v4 = *(_BYTE *)(v3 - 45);
  result = 1LL;
  *a3 = v4;
  return result;
}
