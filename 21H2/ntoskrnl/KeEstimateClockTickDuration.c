/*
 * XREFs of KeEstimateClockTickDuration @ 0x140513DE0
 * Callers:
 *     PpmEstimateIdleDuration @ 0x140565C14 (PpmEstimateIdleDuration.c)
 * Callees:
 *     KiGetNextTimerExpirationDueTime @ 0x1402C9EA0 (KiGetNextTimerExpirationDueTime.c)
 */

int *__fastcall KeEstimateClockTickDuration(
        __int64 a1,
        char a2,
        char a3,
        unsigned __int8 a4,
        unsigned __int64 a5,
        __int64 *a6,
        int *a7)
{
  int v7; // edi
  bool v8; // zf
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  int *result; // rax
  unsigned __int64 v12[3]; // [rsp+40h] [rbp-18h] BYREF
  int v13; // [rsp+60h] [rbp+8h] BYREF

  v7 = 2;
  v12[0] = 0LL;
  v8 = *(_BYTE *)(a1 + 33) == 0;
  v9 = KiClockTimerNextTickTime;
  v13 = 2;
  if ( v8 )
  {
    KiGetNextTimerExpirationDueTime(a1, 0, a5, a3, a4, v12, &v13);
    if ( v9 <= v12[0] )
      v9 = v12[0];
    goto LABEL_11;
  }
  if ( a2 )
  {
    if ( (_BYTE)KiDynamicTickDisableReason || KiClockState )
      a2 = 0;
    if ( a2 )
    {
      KiGetNextTimerExpirationDueTime(a1, 1u, a5, a3, a4, v12, &v13);
      if ( a5 + (unsigned int)KiLastRequestedTimeIncrement < v12[0] )
      {
        v9 = v12[0];
LABEL_11:
        v7 = v13;
      }
    }
  }
  v10 = -1LL;
  if ( v9 != -1LL )
  {
    if ( v9 <= a5 )
      v10 = 0LL;
    else
      v10 = v9 - a5;
  }
  *a6 = v10;
  result = a7;
  *a7 = v7;
  return result;
}
