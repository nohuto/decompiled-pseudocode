/*
 * XREFs of _TppSingleTimerExpiration@12 @ 0x4B2B75E3
 * Callers:
 *     _TppTimerQueueExpiration@16 @ 0x4B2B7250 (_TppTimerQueueExpiration@16.c)
 * Callees:
 *     _TppUpdateSubQueueTimer@8 @ 0x4B2B77B9 (_TppUpdateSubQueueTimer@8.c)
 *     _TppEnqueueTimer@8 @ 0x4B2B7991 (_TppEnqueueTimer@8.c)
 *     _TppWorkPost@4 @ 0x4B2C1B97 (_TppWorkPost@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _TppWaitTimerExpiration@4 @ 0x4B2ECC37 (_TppWaitTimerExpiration@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     __allrem @ 0x4B2F6530 (__allrem.c)
 *     _TppIteWakeWaiters@4 @ 0x4B384822 (_TppIteWakeWaiters@4.c)
 *     _TppETWTimerExpiration@8 @ 0x4B384DCC (_TppETWTimerExpiration@8.c)
 */

int __fastcall TppSingleTimerExpiration(int a1, _RTL_SRWLOCK *a2, char a3)
{
  int v5; // eax
  __int64 v6; // kr08_8
  char v7; // al
  unsigned int v8; // edx
  unsigned int v9; // ecx
  __int64 v10; // rax
  int v11; // edx
  int result; // eax
  int v13; // esi
  unsigned int v16; // [esp+28h] [ebp-4h]

  if ( RtlGetCurrentServiceSessionId() )
    v5 = (int)NtCurrentPeb()->SharedData + 556;
  else
    v5 = 2147353478;
  if ( *(_BYTE *)v5 )
    TppETWTimerExpiration((char *)a2 + (a3 != 0 ? 8 : 80), a1);
  while ( MEMORY[0x7FFE000C] != MEMORY[0x7FFE0010] )
    _mm_pause();
  v6 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 144));
  v7 = *(_BYTE *)(a1 + 222);
  *(_BYTE *)(a1 + 222) = 0;
  if ( (v7 & 4) == 0 )
  {
    if ( *(_BYTE *)(a1 + 221) )
    {
      *(_DWORD *)(a1 + 200) = 0;
      *(_DWORD *)(a1 + 204) = 0;
      if ( !(unsigned __int8)TppWaitTimerExpiration(a1) )
        goto LABEL_15;
    }
    else
    {
      v8 = *(_DWORD *)(a1 + 216);
      if ( v8 )
      {
        if ( a3 )
        {
          v16 = HIDWORD(v6);
          v9 = v6;
        }
        else
        {
          v9 = *(_DWORD *)(a1 + 200);
          v16 = *(_DWORD *)(a1 + 204);
        }
        v10 = 10000LL * v8;
        *(_QWORD *)(a1 + 200) = v10 + __PAIR64__(v16, v9);
        if ( (__int64)(v10 + __PAIR64__(v16, v9)) <= v6 )
          *(_QWORD *)(a1 + 200) = v6 + v10 - (__int64)(v6 - (v10 + __PAIR64__(v16, v9))) % v10;
        _InterlockedIncrement((volatile signed __int32 *)a1);
        RtlAcquireSRWLockExclusive(a2);
        TppEnqueueTimer(&a2[20], a1);
        LOBYTE(v11) = 0;
        TppUpdateSubQueueTimer(&a2[20], v11);
        RtlReleaseSRWLockExclusive(a2);
      }
    }
    TppWorkPost(a1);
LABEL_15:
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 144));
    goto LABEL_16;
  }
  v13 = *(_DWORD *)(a1 + 208);
  *(_DWORD *)(a1 + 216) = 0;
  *(_DWORD *)(a1 + 200) = 0;
  *(_DWORD *)(a1 + 204) = 0;
  *(_DWORD *)(a1 + 208) = 0;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 144));
  TppIteWakeWaiters(v13);
LABEL_16:
  result = _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( !result )
    return (**(int (__thiscall ***)(_DWORD, int))(a1 + 4))(**(_DWORD **)(a1 + 4), a1);
  return result;
}
