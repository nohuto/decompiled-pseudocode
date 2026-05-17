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

int __stdcall RtlpWnfRetryTimerCallback(int a1, int a2, int a3)
{
  int result; // eax
  int v4; // eax
  _DWORD *v5; // edi
  int v6; // ebx
  int v7; // ecx
  int *v8; // esi
  int v9; // eax
  unsigned int v10; // [esp+0h] [ebp-20h]
  unsigned int v11; // [esp+4h] [ebp-1Ch]
  int v12; // [esp+1Ch] [ebp-4h]

  result = dword_4B3A664C;
  if ( dword_4B3A664C )
  {
    v12 = 0;
    RtlAcquireSRWLockShared((volatile signed __int32 *)(dword_4B3A664C + 4));
    v4 = dword_4B3A664C;
    *(_DWORD *)(dword_4B3A664C + 56) = 0;
    *(_DWORD *)(v4 + 60) = 0;
    RtlReleaseSRWLockShared((volatile signed __int32 *)(v4 + 4));
    while ( 1 )
    {
      while ( MEMORY[0x7FFE000C] != MEMORY[0x7FFE0010] )
        _mm_pause();
      v5 = 0;
      v6 = v12;
      v11 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias + 500000;
      v10 = (unsigned __int64)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias + 500000) >> 32;
      RtlAcquireSRWLockShared((volatile signed __int32 *)(dword_4B3A664C + 4));
      v7 = dword_4B3A664C;
      v8 = *(int **)(dword_4B3A664C + 8);
      if ( v8 != (int *)(dword_4B3A664C + 8) )
      {
        while ( 1 )
        {
          RtlAcquireSRWLockExclusive(v8 + 3);
          if ( v8[16] == 2 && __PAIR64__(v10, v11) >= *(_QWORD *)(v8 + 17) )
            break;
          RtlReleaseSRWLockExclusive(v8 + 3);
          v7 = dword_4B3A664C;
          v8 = (int *)*v8;
          if ( v8 == (int *)(dword_4B3A664C + 8) )
            goto LABEL_11;
        }
        v5 = (_DWORD *)v8[15];
        v8[15] = 0;
        v8[16] = 0;
        RtlReleaseSRWLockExclusive(v8 + 3);
        v7 = dword_4B3A664C;
LABEL_11:
        v6 = v12;
      }
      result = RtlReleaseSRWLockShared((volatile signed __int32 *)(v7 + 4));
      if ( !v5 )
        break;
      RtlpWnfCalculateAndSetNextTimer();
      v12 = 0;
      v9 = RtlpWnfProcessCurrentDescriptor(v5, 1);
      if ( v9 == -1073741267 )
      {
        v12 = 1;
      }
      else
      {
        if ( !v9 )
          NtGetCompleteWnfStateSubscription((int)(v5 + 2), (int)v5, v5[6], 0, 0, 0);
        RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v5);
      }
    }
    if ( v6 )
      return RtlpWnfCalculateAndSetNextTimer();
  }
  return result;
}
