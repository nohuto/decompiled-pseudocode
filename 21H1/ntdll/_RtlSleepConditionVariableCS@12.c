/*
 * XREFs of _RtlSleepConditionVariableCS@12 @ 0x4B366010
 * Callers:
 *     _EtwpSwitchBuffer@12 @ 0x4B2EFDE8 (_EtwpSwitchBuffer@12.c)
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _ZwWaitForAlertByThreadId@8 @ 0x4B2F4680 (_ZwWaitForAlertByThreadId@8.c)
 *     _RtlpOptimizeConditionVariableWaitList@8 @ 0x4B3661B5 (_RtlpOptimizeConditionVariableWaitList@8.c)
 *     _RtlpWakeSingle@8 @ 0x4B366206 (_RtlpWakeSingle@8.c)
 */

NTSTATUS __cdecl RtlSleepConditionVariableCS(
        PRTL_CONDITION_VARIABLE ConditionVariable,
        PRTL_CRITICAL_SECTION CriticalSection,
        PLARGE_INTEGER Timeout)
{
  signed __int32 Ptr; // edi
  unsigned int v4; // esi
  signed __int32 v5; // eax
  unsigned __int64 v6; // kr08_8
  unsigned __int64 v7; // kr00_8
  unsigned int v8; // ecx
  unsigned __int64 v9; // rax
  NTSTATUS v10; // esi
  int i; // edx
  NTSTATUS v12; // edi
  unsigned int v15; // [esp+18h] [ebp-28h]
  unsigned int v16; // [esp+20h] [ebp-20h] BYREF
  unsigned int *v17; // [esp+24h] [ebp-1Ch]
  int v18; // [esp+28h] [ebp-18h]
  void *UniqueThread; // [esp+2Ch] [ebp-14h]
  signed __int32 v20[3]; // [esp+34h] [ebp-Ch] BYREF

  Ptr = (signed __int32)ConditionVariable->Ptr;
  v18 = 0;
  v20[0] = 2;
  v20[1] = 0;
  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  while ( 1 )
  {
    v4 = (unsigned int)&v16 | Ptr & 0xF;
    v16 = Ptr & 0xFFFFFFF0;
    if ( (Ptr & 0xFFFFFFF0) != 0 )
    {
      v17 = 0;
      v4 |= 8u;
    }
    else
    {
      v17 = &v16;
    }
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)ConditionVariable, v4, Ptr);
    if ( v5 == Ptr )
      break;
    Ptr = v5;
  }
  RtlLeaveCriticalSection(CriticalSection);
  if ( (((unsigned __int8)Ptr ^ (unsigned __int8)v4) & 8) != 0 )
    RtlpOptimizeConditionVariableWaitList(v4);
  if ( MEMORY[0x7FFE036A] <= 1u )
    goto LABEL_20;
  if ( MEMORY[0x7FFE0297] )
  {
    v7 = __rdtsc();
    v6 = v7 + (unsigned int)ConditionVariableSpinCycleCount;
    while ( 1 )
    {
      __asm { monitorx eax, ecx, edx }
      if ( (v20[0] & 2) == 0 )
        break;
      v8 = HIDWORD(v7);
      v9 = __rdtsc();
      v15 = v7;
      v7 = v9;
      if ( v9 <= __PAIR64__(v8, v15) || v9 >= v6 )
        break;
      __asm { mwaitx  eax, ecx, ebx }
    }
LABEL_20:
    v10 = 0;
    goto LABEL_21;
  }
  v10 = 0;
  for ( i = 0; (v20[0] & 2) != 0 && i != ConditionVariableSpinCycleCount / (unsigned int)MEMORY[0x7FFE02D6]; ++i )
    _mm_pause();
LABEL_21:
  v12 = 0;
  if ( _interlockedbittestandreset(v20, 1u) )
    v12 = ZwWaitForAlertByThreadId(CriticalSection, Timeout);
  else
    _InterlockedOr(v20, 4u);
  if ( v12 == 258 || (v20[0] & 4) == 0 )
  {
    if ( (unsigned __int8)RtlpWakeSingle(ConditionVariable, &v16) )
    {
      v10 = v12 == 258 ? v12 : 0;
    }
    else
    {
      do
        ZwWaitForAlertByThreadId(CriticalSection, 0);
      while ( (v20[0] & 4) == 0 );
    }
  }
  RtlEnterCriticalSection(CriticalSection);
  return v10;
}
