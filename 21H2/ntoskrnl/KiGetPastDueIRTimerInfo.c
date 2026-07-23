/*
 * XREFs of KiGetPastDueIRTimerInfo @ 0x140523CB4
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x1402C94E0 (KeResumeClockTimerFromIdle.c)
 *     KeQueryWakeSource @ 0x1405148EC (KeQueryWakeSource.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetPastDueIRTimerInfo(unsigned __int64 a1, _BYTE *a2, _BYTE *a3)
{
  unsigned __int64 v3; // rax
  char v4; // cl
  __int64 result; // rax

  if ( a1 < qword_140C31D30 )
    return 0LL;
  if ( (qword_140C31D28 & 1) != 0 )
  {
    if ( qword_140C31D28 == 1 )
      v3 = 0LL;
    else
      v3 = qword_140C31D28 ^ ((unsigned __int64)&unk_140C31D20 + 1);
  }
  else
  {
    v3 = qword_140C31D28;
  }
  *a2 = *(_BYTE *)(v3 - 46);
  v4 = *(_BYTE *)(v3 - 45);
  result = 1LL;
  *a3 = v4;
  return result;
}
