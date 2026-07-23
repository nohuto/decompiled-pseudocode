/*
 * XREFs of _RtlSleepConditionVariableSRW@16 @ 0x4B2C2180
 * Callers:
 *     __LdrpInitialize@8 @ 0x4B2E6327 (__LdrpInitialize@8.c)
 *     _TpTrimPools@0 @ 0x4B383ED0 (_TpTrimPools@0.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlpIsWaitBlockSpinSatisfied@8 @ 0x4B2C2465 (_RtlpIsWaitBlockSpinSatisfied@8.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _ZwWaitForAlertByThreadId@8 @ 0x4B2F4680 (_ZwWaitForAlertByThreadId@8.c)
 *     _RtlpOptimizeConditionVariableWaitList@8 @ 0x4B3661B5 (_RtlpOptimizeConditionVariableWaitList@8.c)
 *     _RtlpWakeSingle@8 @ 0x4B366206 (_RtlpWakeSingle@8.c)
 */

NTSTATUS __cdecl RtlSleepConditionVariableSRW(
        PRTL_CONDITION_VARIABLE ConditionVariable,
        PRTL_SRWLOCK SRWLock,
        PLARGE_INTEGER Timeout,
        ULONG Flags)
{
  signed __int32 Ptr; // edi
  unsigned int v5; // esi
  signed __int32 v6; // eax
  NTSTATUS v7; // esi
  int i; // edi
  NTSTATUS v9; // eax
  PRTL_SRWLOCK v11; // edi
  unsigned __int64 v13; // kr08_8
  unsigned __int64 v14; // kr00_8
  unsigned int v15; // ecx
  unsigned __int64 v16; // rax
  NTSTATUS v17; // [esp+14h] [ebp-2Ch]
  unsigned int v18; // [esp+18h] [ebp-28h]
  unsigned int v19; // [esp+1Ch] [ebp-24h]
  unsigned int v20; // [esp+20h] [ebp-20h] BYREF
  unsigned int *v21; // [esp+24h] [ebp-1Ch]
  int v22; // [esp+28h] [ebp-18h]
  void *UniqueThread; // [esp+2Ch] [ebp-14h]
  signed __int32 v24[3]; // [esp+34h] [ebp-Ch] BYREF
  ULONG Flagsa; // [esp+54h] [ebp+14h]

  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741584;
  Ptr = (signed __int32)ConditionVariable->Ptr;
  v22 = 0;
  v24[0] = 2;
  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  v24[1] = (signed __int32)SRWLock;
  Flagsa = Flags & 1;
  if ( !Flagsa )
    v24[0] = 3;
  while ( 1 )
  {
    v5 = (unsigned int)&v20 | Ptr & 0xF;
    v20 = Ptr & 0xFFFFFFF0;
    if ( (Ptr & 0xFFFFFFF0) != 0 )
    {
      v21 = 0;
      v5 |= 8u;
    }
    else
    {
      v21 = &v20;
    }
    v6 = _InterlockedCompareExchange((volatile signed __int32 *)ConditionVariable, v5, Ptr);
    if ( v6 == Ptr )
      break;
    Ptr = v6;
  }
  if ( Flagsa )
    RtlReleaseSRWLockShared(SRWLock);
  else
    RtlReleaseSRWLockExclusive(SRWLock);
  if ( (((unsigned __int8)Ptr ^ (unsigned __int8)v5) & 8) != 0 )
    RtlpOptimizeConditionVariableWaitList(v5);
  if ( MEMORY[0x7FFE036A] > 1u )
  {
    if ( !MEMORY[0x7FFE0297] )
    {
      v7 = 0;
      v19 = ConditionVariableSpinCycleCount / (unsigned int)MEMORY[0x7FFE02D6];
      for ( i = 0; !(unsigned __int8)RtlpIsWaitBlockSpinSatisfied(&v20, 0) && i != v19; ++i )
        _mm_pause();
      goto LABEL_17;
    }
    v14 = __rdtsc();
    v13 = v14 + (unsigned int)ConditionVariableSpinCycleCount;
    while ( 1 )
    {
      __asm { monitorx eax, ecx, edx }
      if ( (v24[0] & 2) == 0 )
        break;
      v15 = HIDWORD(v14);
      v16 = __rdtsc();
      v18 = v14;
      v14 = v16;
      if ( v16 <= __PAIR64__(v15, v18) || v16 >= v13 )
        break;
      __asm { mwaitx  eax, ecx, ebx }
    }
  }
  v7 = 0;
LABEL_17:
  v9 = 0;
  v17 = 0;
  if ( _interlockedbittestandreset(v24, 1u) )
  {
    v11 = SRWLock;
    v9 = ZwWaitForAlertByThreadId(SRWLock, Timeout);
    v17 = v9;
  }
  else
  {
    _InterlockedOr(v24, 4u);
    v11 = SRWLock;
  }
  if ( v9 == 258 || (v24[0] & 4) == 0 )
  {
    if ( (unsigned __int8)RtlpWakeSingle(ConditionVariable, &v20) )
    {
      v7 = v17 == 258 ? v17 : 0;
    }
    else
    {
      do
        ZwWaitForAlertByThreadId(v11, 0);
      while ( (v24[0] & 4) == 0 );
    }
  }
  if ( Flagsa )
    RtlAcquireSRWLockShared(v11);
  else
    RtlAcquireSRWLockExclusive(v11);
  return v7;
}
