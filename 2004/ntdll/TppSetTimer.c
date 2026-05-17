/*
 * XREFs of TppSetTimer @ 0x1800139EC
 * Callers:
 *     TpSetTimerEx @ 0x1800126D0 (TpSetTimerEx.c)
 *     TppSetupNextWait @ 0x180013704 (TppSetupNextWait.c)
 * Callees:
 *     TppUpdateSubQueueTimer @ 0x180013B20 (TppUpdateSubQueueTimer.c)
 *     TppEnqueueTimer @ 0x180013C80 (TppEnqueueTimer.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlSetLastWin32Error @ 0x180050770 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x1800758E0 (RtlNtStatusToDosErrorNoTeb.c)
 *     TppETWTimerSet @ 0x18011290C (TppETWTimerSet.c)
 */

signed __int64 __fastcall TppSetTimer(__int64 a1, __int64 a2, __int64 *a3, int a4, int a5)
{
  __int64 v6; // rcx
  bool v8; // bp
  volatile signed __int64 *v9; // r15
  __int64 *v10; // rbx
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned int v16; // eax

  v6 = 1LL;
  v8 = *a3 >= 0;
  v9 = (volatile signed __int64 *)a2;
  *(_DWORD *)(a1 + 348) = a4;
  v10 = (__int64 *)(a1 + 328);
  *(_DWORD *)(a1 + 344) = a5;
  v11 = (-(__int64)v8 & 0xFFFFFFFFFFFFFF88uLL) + a2 + 128;
  if ( v8 )
  {
    *(_BYTE *)(a1 + 354) |= 2u;
    v12 = *a3;
    if ( !*a3 )
      v12 = 1LL;
  }
  else
  {
    if ( a1 == -328 )
    {
      v16 = RtlNtStatusToDosErrorNoTeb(3221225485LL);
      RtlSetLastWin32Error(v16);
      v6 = MEMORY[0];
    }
    else
    {
      v6 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
      *v10 = v6;
    }
    a2 = 0x7FFFFFFFFFFFFFFFLL;
    v12 = v6 - *a3;
    if ( v12 < v6 )
      v12 = 0x7FFFFFFFFFFFFFFFLL;
  }
  *v10 = v12;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v6, a2) )
    v13 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v13 = 2147353478LL;
  if ( *(_BYTE *)v13 )
    TppETWTimerSet(v11, a1);
  RtlAcquireSRWLockExclusive(v9);
  TppEnqueueTimer(v11, a1);
  LOBYTE(v14) = v8;
  TppUpdateSubQueueTimer(v11, v14);
  return RtlReleaseSRWLockExclusive(v9);
}
