/*
 * XREFs of _RtlpWnfProcessCurrentDescriptor@8 @ 0x4B2DECC3
 * Callers:
 *     _RtlpWnfNotificationThread@16 @ 0x4B2DEA10 (_RtlpWnfNotificationThread@16.c)
 *     _RtlpWnfRetryTimerCallback@12 @ 0x4B33C760 (_RtlpWnfRetryTimerCallback@12.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpDecRefWnfNameSubscription@4 @ 0x4B2DEC15 (_RtlpDecRefWnfNameSubscription@4.c)
 *     _RtlpWnfWalkUserSubscriptionList@12 @ 0x4B2DEE18 (_RtlpWnfWalkUserSubscriptionList@12.c)
 *     _NtGetCompleteWnfStateSubscription@24 @ 0x4B2F3890 (_NtGetCompleteWnfStateSubscription@24.c)
 *     _RtlpWnfCalculateRetryTime@4 @ 0x4B33C30F (_RtlpWnfCalculateRetryTime@4.c)
 */

int __fastcall RtlpWnfProcessCurrentDescriptor(_DWORD *a1, int a2)
{
  int v2; // ebx
  _DWORD *i; // ecx
  int v5; // esi
  _DWORD *j; // eax
  volatile signed __int32 *v8; // [esp-4h] [ebp-18h]
  int v10; // [esp+10h] [ebp-4h]

  v2 = 0;
  v10 = 0;
  RtlAcquireSRWLockShared((volatile signed __int32 *)(dword_4B3A664C + 4));
  for ( i = *(_DWORD **)(dword_4B3A664C + 8); ; i = (_DWORD *)*i )
  {
    if ( i == (_DWORD *)(dword_4B3A664C + 8) )
      goto LABEL_27;
    v5 = (int)(i - 7);
    if ( *(i - 3) == a1[2]
      && *(_DWORD *)(v5 + 20) == a1[3]
      && *(_DWORD *)(v5 + 8) == *a1
      && *(_DWORD *)(v5 + 12) == a1[1] )
    {
      break;
    }
  }
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v5 + 40));
  if ( *(_DWORD *)(v5 + 92) != 2 )
  {
    if ( *(_DWORD *)(v5 + 92) != 1 )
      goto LABEL_9;
    v8 = (volatile signed __int32 *)(v5 + 40);
    if ( !a2 )
    {
      *(_DWORD *)(v5 + 88) = a1;
      RtlReleaseSRWLockExclusive(v8);
      v2 = 259;
      goto LABEL_27;
    }
LABEL_30:
    RtlReleaseSRWLockExclusive(v8);
    v2 = 128;
LABEL_27:
    RtlReleaseSRWLockShared((volatile signed __int32 *)(dword_4B3A664C + 4));
    goto LABEL_21;
  }
  if ( a2 )
  {
    v8 = (volatile signed __int32 *)(v5 + 40);
    goto LABEL_30;
  }
  RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, *(_DWORD *)(v5 + 88));
  *(_DWORD *)(v5 + 88) = 0;
  *(_DWORD *)(v5 + 92) = 0;
LABEL_9:
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 80));
  *(_DWORD *)(v5 + 92) = 1;
  RtlReleaseSRWLockExclusive((volatile signed __int32 *)(v5 + 40));
  RtlReleaseSRWLockShared((volatile signed __int32 *)(dword_4B3A664C + 4));
  while ( 1 )
  {
    v2 = 0;
    if ( RtlpWnfWalkUserSubscriptionList(0) == -1073741267 )
      v2 = -1073741267;
    if ( RtlpWnfWalkUserSubscriptionList(1) == -1073741267 )
      v2 = -1073741267;
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v5 + 40));
    ++v10;
    for ( j = *(_DWORD **)(v5 + 44); j != (_DWORD *)(v5 + 44); j = (_DWORD *)*j )
      j[24] = 0;
    if ( !*(_DWORD *)(v5 + 88) )
      break;
    a1 = *(_DWORD **)(v5 + 88);
    *(_DWORD *)(v5 + 88) = 0;
    RtlReleaseSRWLockExclusive((volatile signed __int32 *)(v5 + 40));
  }
  if ( v2 )
  {
    *(_DWORD *)(v5 + 88) = a1;
    *(_DWORD *)(v5 + 92) = 2;
    RtlpWnfCalculateRetryTime(v5);
  }
  else
  {
    *(_DWORD *)(v5 + 92) = 0;
    if ( !*(_DWORD *)(v5 + 24) || a1[4] - *(_DWORD *)(v5 + 24) > 0 )
      *(_DWORD *)(v5 + 24) = a1[4];
  }
  RtlReleaseSRWLockExclusive((volatile signed __int32 *)(v5 + 40));
  RtlpDecRefWnfNameSubscription(v5);
LABEL_21:
  if ( v10 > 1 )
  {
    NtGetCompleteWnfStateSubscription(a1 + 2, a1, a1[6], v2, 0, 0);
    if ( !v2 )
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)a1);
    return 128;
  }
  return v2;
}
