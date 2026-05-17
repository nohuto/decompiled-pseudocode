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

int __stdcall RtlSleepConditionVariableCS(volatile signed __int32 *a1, int a2, int a3)
{
  signed __int32 v3; // edi
  unsigned int v4; // esi
  signed __int32 v5; // eax
  unsigned int v6; // esi
  unsigned __int64 v7; // kr00_8
  unsigned int v8; // ecx
  unsigned __int64 v9; // rax
  int v10; // esi
  int i; // edx
  int v12; // edi
  unsigned int v15; // [esp+18h] [ebp-28h]
  unsigned int v16; // [esp+1Ch] [ebp-24h]
  unsigned int v17; // [esp+20h] [ebp-20h] BYREF
  unsigned int *v18; // [esp+24h] [ebp-1Ch]
  int v19; // [esp+28h] [ebp-18h]
  void *UniqueThread; // [esp+2Ch] [ebp-14h]
  signed __int32 v21[3]; // [esp+34h] [ebp-Ch] BYREF

  v3 = *a1;
  v19 = 0;
  v21[0] = 2;
  v21[1] = 0;
  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  while ( 1 )
  {
    v4 = (unsigned int)&v17 | v3 & 0xF;
    v17 = v3 & 0xFFFFFFF0;
    if ( (v3 & 0xFFFFFFF0) != 0 )
    {
      v18 = 0;
      v4 |= 8u;
    }
    else
    {
      v18 = &v17;
    }
    v5 = _InterlockedCompareExchange(a1, v4, v3);
    if ( v5 == v3 )
      break;
    v3 = v5;
  }
  RtlLeaveCriticalSection(a2);
  if ( (((unsigned __int8)v3 ^ (unsigned __int8)v4) & 8) != 0 )
    RtlpOptimizeConditionVariableWaitList(v4);
  if ( MEMORY[0x7FFE036A] <= 1u )
    goto LABEL_20;
  if ( MEMORY[0x7FFE0297] )
  {
    v7 = __rdtsc();
    v6 = v7 + ConditionVariableSpinCycleCount;
    v16 = (v7 + (unsigned int)ConditionVariableSpinCycleCount) >> 32;
    while ( 1 )
    {
      __asm { monitorx eax, ecx, edx }
      if ( (v21[0] & 2) == 0 )
        break;
      v8 = HIDWORD(v7);
      v9 = __rdtsc();
      v15 = v7;
      v7 = v9;
      if ( v9 <= __PAIR64__(v8, v15) || v9 >= __PAIR64__(v16, v6) )
        break;
      __asm { mwaitx  eax, ecx, ebx }
    }
LABEL_20:
    v10 = 0;
    goto LABEL_21;
  }
  v10 = 0;
  for ( i = 0; (v21[0] & 2) != 0 && i != ConditionVariableSpinCycleCount / (unsigned int)MEMORY[0x7FFE02D6]; ++i )
    _mm_pause();
LABEL_21:
  v12 = 0;
  if ( _interlockedbittestandreset(v21, 1u) )
    v12 = ZwWaitForAlertByThreadId(a2, a3);
  else
    _InterlockedOr(v21, 4u);
  if ( v12 == 258 || (v21[0] & 4) == 0 )
  {
    if ( (unsigned __int8)RtlpWakeSingle(a1, &v17) )
    {
      v10 = v12 == 258 ? v12 : 0;
    }
    else
    {
      do
        ZwWaitForAlertByThreadId(a2, 0);
      while ( (v21[0] & 4) == 0 );
    }
  }
  RtlEnterCriticalSection(a2);
  return v10;
}
