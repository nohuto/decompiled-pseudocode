/*
 * XREFs of _RtlpWnfRetryTimerCallback@12 @ 0x4B33C760
 * Callers:
 *     <none>
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpWnfProcessCurrentDescriptor@8 @ 0x4B2DECC3 (_RtlpWnfProcessCurrentDescriptor@8.c)
 *     _NtGetCompleteWnfStateSubscription@24 @ 0x4B2F3890 (_NtGetCompleteWnfStateSubscription@24.c)
 *     _RtlpWnfCalculateAndSetNextTimer@0 @ 0x4B33C27B (_RtlpWnfCalculateAndSetNextTimer@0.c)
 */

void __stdcall RtlpWnfRetryTimerCallback(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_TIMER a3)
{
  _RTL_SRWLOCK *v3; // eax
  _WNF_STATE_NAME *v4; // edi
  int v5; // ebx
  _RTL_SRWLOCK *v6; // ecx
  int *v7; // esi
  ULONG v8; // eax
  unsigned int v9; // [esp+0h] [ebp-20h]
  ULONG64 *OldSubscriptionId; // [esp+4h] [ebp-1Ch]
  int v11; // [esp+1Ch] [ebp-4h]

  if ( dword_4B3A664C )
  {
    v11 = 0;
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(dword_4B3A664C + 4));
    v3 = (_RTL_SRWLOCK *)dword_4B3A664C;
    *(_DWORD *)(dword_4B3A664C + 56) = 0;
    v3[15].Value = 0;
    RtlReleaseSRWLockShared(v3 + 1);
    while ( 1 )
    {
      while ( MEMORY[0x7FFE000C] != MEMORY[0x7FFE0010] )
        _mm_pause();
      v4 = 0;
      v5 = v11;
      OldSubscriptionId = (ULONG64 *)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias + 500000);
      v9 = (unsigned __int64)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias + 500000) >> 32;
      RtlAcquireSRWLockShared((PRTL_SRWLOCK)(dword_4B3A664C + 4));
      v6 = (_RTL_SRWLOCK *)dword_4B3A664C;
      v7 = *(int **)(dword_4B3A664C + 8);
      if ( v7 != (int *)(dword_4B3A664C + 8) )
      {
        while ( 1 )
        {
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v7 + 3);
          if ( v7[16] == 2 && __PAIR64__(v9, (unsigned int)OldSubscriptionId) >= *(_QWORD *)(v7 + 17) )
            break;
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v7 + 3);
          v6 = (_RTL_SRWLOCK *)dword_4B3A664C;
          v7 = (int *)*v7;
          if ( v7 == (int *)(dword_4B3A664C + 8) )
            goto LABEL_11;
        }
        v4 = (_WNF_STATE_NAME *)v7[15];
        v7[15] = 0;
        v7[16] = 0;
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v7 + 3);
        v6 = (_RTL_SRWLOCK *)dword_4B3A664C;
LABEL_11:
        v5 = v11;
      }
      RtlReleaseSRWLockShared(v6 + 1);
      if ( !v4 )
        break;
      RtlpWnfCalculateAndSetNextTimer();
      v11 = 0;
      v8 = RtlpWnfProcessCurrentDescriptor(v4, 1);
      if ( v8 == -1073741267 )
      {
        v11 = 1;
      }
      else
      {
        if ( !v8 )
          NtGetCompleteWnfStateSubscription(v4 + 1, (ULONG64 *)v4->Data, v4[3].Data[0], 0, 0, 0);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
      }
    }
    if ( v5 )
      RtlpWnfCalculateAndSetNextTimer();
  }
}
