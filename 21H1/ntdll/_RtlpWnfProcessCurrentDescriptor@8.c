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

ULONG __fastcall RtlpWnfProcessCurrentDescriptor(_WNF_STATE_NAME *BaseAddress, int a2)
{
  ULONG v2; // ebx
  _DWORD *i; // ecx
  _RTL_SRWLOCK *v5; // esi
  _RTL_SRWLOCK *j; // eax
  _RTL_SRWLOCK *v8; // [esp-4h] [ebp-18h]
  int v10; // [esp+10h] [ebp-4h]

  v2 = 0;
  v10 = 0;
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(dword_4B3A664C + 4));
  for ( i = *(_DWORD **)(dword_4B3A664C + 8); ; i = (_DWORD *)*i )
  {
    if ( i == (_DWORD *)(dword_4B3A664C + 8) )
      goto LABEL_27;
    v5 = (_RTL_SRWLOCK *)(i - 7);
    if ( *(i - 3) == BaseAddress[1].Data[0]
      && v5[5].Value == BaseAddress[1].Data[1]
      && v5[2].Value == BaseAddress->Data[0]
      && v5[3].Value == BaseAddress->Data[1] )
    {
      break;
    }
  }
  RtlAcquireSRWLockExclusive(v5 + 10);
  if ( v5[23].Value != 2 )
  {
    if ( v5[23].Value != 1 )
      goto LABEL_9;
    v8 = v5 + 10;
    if ( !a2 )
    {
      v5[22].Value = (unsigned int)BaseAddress;
      RtlReleaseSRWLockExclusive(v8);
      v2 = 259;
      goto LABEL_27;
    }
LABEL_30:
    RtlReleaseSRWLockExclusive(v8);
    v2 = 128;
LABEL_27:
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(dword_4B3A664C + 4));
    goto LABEL_21;
  }
  if ( a2 )
  {
    v8 = v5 + 10;
    goto LABEL_30;
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5[22].Ptr);
  v5[22].Value = 0;
  v5[23].Value = 0;
LABEL_9:
  _InterlockedIncrement((volatile signed __int32 *)&v5[20]);
  v5[23].Value = 1;
  RtlReleaseSRWLockExclusive(v5 + 10);
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(dword_4B3A664C + 4));
  while ( 1 )
  {
    v2 = 0;
    if ( RtlpWnfWalkUserSubscriptionList(0) == -1073741267 )
      v2 = -1073741267;
    if ( RtlpWnfWalkUserSubscriptionList(1) == -1073741267 )
      v2 = -1073741267;
    RtlAcquireSRWLockExclusive(v5 + 10);
    ++v10;
    for ( j = (_RTL_SRWLOCK *)v5[11].Value; j != &v5[11]; j = (_RTL_SRWLOCK *)j->Value )
      j[24].Value = 0;
    if ( !v5[22].Value )
      break;
    BaseAddress = (_WNF_STATE_NAME *)v5[22].Value;
    v5[22].Value = 0;
    RtlReleaseSRWLockExclusive(v5 + 10);
  }
  if ( v2 )
  {
    v5[22].Value = (unsigned int)BaseAddress;
    v5[23].Value = 2;
    RtlpWnfCalculateRetryTime(v5);
  }
  else
  {
    v5[23].Value = 0;
    if ( !v5[6].Value || (signed int)(BaseAddress[2].Data[0] - v5[6].Value) > 0 )
      v5[6].0 = ($64EDA4DD838E80CF9A7DD220E06F3FD2)BaseAddress[2].Data[0];
  }
  RtlReleaseSRWLockExclusive(v5 + 10);
  RtlpDecRefWnfNameSubscription((char *)v5);
LABEL_21:
  if ( v10 > 1 )
  {
    NtGetCompleteWnfStateSubscription(BaseAddress + 1, (ULONG64 *)BaseAddress->Data, BaseAddress[3].Data[0], v2, 0, 0);
    if ( !v2 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    return 128;
  }
  return v2;
}
