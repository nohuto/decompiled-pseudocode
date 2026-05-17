/*
 * XREFs of _TpSetTimerEx@16 @ 0x4B2B4620
 * Callers:
 *     _RtlDeleteTimer@12 @ 0x4B2A8C40 (_RtlDeleteTimer@12.c)
 *     _RtlCreateTimer@28 @ 0x4B2AA4F0 (_RtlCreateTimer@28.c)
 *     _TpSetTimer@16 @ 0x4B2B4560 (_TpSetTimer@16.c)
 *     _RtlpWnfSetRetryTimer@8 @ 0x4B33C90E (_RtlpWnfSetRetryTimer@8.c)
 *     _RtlpHpScheduleCompaction@4 @ 0x4B358965 (_RtlpHpScheduleCompaction@4.c)
 *     _RtlUpdateTimer@16 @ 0x4B385200 (_RtlUpdateTimer@16.c)
 * Callees:
 *     _TppSetTimer@20 @ 0x4B2B3EA0 (_TppSetTimer@20.c)
 *     _TpIsTimerSet@4 @ 0x4B2B4520 (_TpIsTimerSet@4.c)
 *     _TppTimerpValidateTimer@12 @ 0x4B2B46DB (_TppTimerpValidateTimer@12.c)
 *     _TppCancelTimer@12 @ 0x4B2B7D76 (_TppCancelTimer@12.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

int __stdcall TpSetTimerEx(int a1, _DWORD *a2, int a3, int a4)
{
  bool v4; // bl
  unsigned __int8 v5; // cl
  int v7; // [esp+10h] [ebp-8h]
  unsigned __int8 v8; // [esp+17h] [ebp-1h]

  if ( TppTimerpValidateTimer(a2 != 0) )
  {
    v4 = a2 != 0;
    v7 = *(_DWORD *)(a1 + 92) + 64;
    RtlAcquireSRWLockExclusive(a1 + 144);
    v5 = TppCancelTimer(a2 != 0);
    v8 = v5;
    if ( a2 && *(_BYTE *)(a1 + 223) )
    {
      RtlReleaseSRWLockExclusive(a1 + 144);
      v5 = v8;
      v4 = 0;
    }
    if ( !v5 )
    {
      if ( !v4 )
        return v5;
      if ( TpIsTimerSet(a1) )
        goto LABEL_11;
      _InterlockedIncrement((volatile signed __int32 *)a1);
      v5 = v8;
    }
    if ( !v4 )
    {
      if ( !v5 || _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) )
        return v5;
      (**(void (__thiscall ***)(_DWORD, int))(a1 + 4))(**(_DWORD **)(a1 + 4), a1);
      return v8;
    }
    TppSetTimer(a1, v7, a2, a3, a4);
LABEL_11:
    RtlReleaseSRWLockExclusive(a1 + 144);
    return v8;
  }
  return 0;
}
