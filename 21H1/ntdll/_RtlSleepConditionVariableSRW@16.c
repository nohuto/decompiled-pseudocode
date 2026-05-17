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

int __stdcall RtlSleepConditionVariableSRW(volatile signed __int32 *a1, volatile signed __int32 *a2, int a3, int a4)
{
  signed __int32 v4; // edi
  unsigned int v5; // esi
  signed __int32 v6; // eax
  int v7; // esi
  int i; // edi
  int v9; // eax
  volatile signed __int32 *v11; // edi
  unsigned int v13; // esi
  unsigned __int64 v14; // kr00_8
  unsigned int v15; // ecx
  unsigned __int64 v16; // rax
  int v17; // [esp+14h] [ebp-2Ch]
  unsigned int v18; // [esp+18h] [ebp-28h]
  unsigned int v19; // [esp+1Ch] [ebp-24h]
  unsigned int v20; // [esp+1Ch] [ebp-24h]
  unsigned int v21; // [esp+20h] [ebp-20h] BYREF
  unsigned int *v22; // [esp+24h] [ebp-1Ch]
  int v23; // [esp+28h] [ebp-18h]
  void *UniqueThread; // [esp+2Ch] [ebp-14h]
  signed __int32 v25[3]; // [esp+34h] [ebp-Ch] BYREF
  int v26; // [esp+54h] [ebp+14h]

  if ( (a4 & 0xFFFFFFFE) != 0 )
    return -1073741584;
  v4 = *a1;
  v23 = 0;
  v25[0] = 2;
  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  v25[1] = (signed __int32)a2;
  v26 = a4 & 1;
  if ( !v26 )
    v25[0] = 3;
  while ( 1 )
  {
    v5 = (unsigned int)&v21 | v4 & 0xF;
    v21 = v4 & 0xFFFFFFF0;
    if ( (v4 & 0xFFFFFFF0) != 0 )
    {
      v22 = 0;
      v5 |= 8u;
    }
    else
    {
      v22 = &v21;
    }
    v6 = _InterlockedCompareExchange(a1, v5, v4);
    if ( v6 == v4 )
      break;
    v4 = v6;
  }
  if ( v26 )
    RtlReleaseSRWLockShared(a2);
  else
    RtlReleaseSRWLockExclusive(a2);
  if ( (((unsigned __int8)v4 ^ (unsigned __int8)v5) & 8) != 0 )
    RtlpOptimizeConditionVariableWaitList(v5);
  if ( MEMORY[0x7FFE036A] > 1u )
  {
    if ( !MEMORY[0x7FFE0297] )
    {
      v7 = 0;
      v19 = ConditionVariableSpinCycleCount / (unsigned int)MEMORY[0x7FFE02D6];
      for ( i = 0; !(unsigned __int8)RtlpIsWaitBlockSpinSatisfied(&v21, 0) && i != v19; ++i )
        _mm_pause();
      goto LABEL_17;
    }
    v14 = __rdtsc();
    v13 = v14 + ConditionVariableSpinCycleCount;
    v20 = (v14 + (unsigned int)ConditionVariableSpinCycleCount) >> 32;
    while ( 1 )
    {
      __asm { monitorx eax, ecx, edx }
      if ( (v25[0] & 2) == 0 )
        break;
      v15 = HIDWORD(v14);
      v16 = __rdtsc();
      v18 = v14;
      v14 = v16;
      if ( v16 <= __PAIR64__(v15, v18) || v16 >= __PAIR64__(v20, v13) )
        break;
      __asm { mwaitx  eax, ecx, ebx }
    }
  }
  v7 = 0;
LABEL_17:
  v9 = 0;
  v17 = 0;
  if ( _interlockedbittestandreset(v25, 1u) )
  {
    v11 = a2;
    v9 = ZwWaitForAlertByThreadId(a2, a3);
    v17 = v9;
  }
  else
  {
    _InterlockedOr(v25, 4u);
    v11 = a2;
  }
  if ( v9 == 258 || (v25[0] & 4) == 0 )
  {
    if ( (unsigned __int8)RtlpWakeSingle(a1, &v21) )
    {
      v7 = v17 == 258 ? v17 : 0;
    }
    else
    {
      do
        ZwWaitForAlertByThreadId(v11, 0);
      while ( (v25[0] & 4) == 0 );
    }
  }
  if ( v26 )
    RtlAcquireSRWLockShared(v11);
  else
    RtlAcquireSRWLockExclusive(v11);
  return v7;
}
