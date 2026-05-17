/*
 * XREFs of RtlpWnfProcessCurrentDescriptor @ 0x18006297C
 * Callers:
 *     RtlpWnfNotificationThread @ 0x180062860 (RtlpWnfNotificationThread.c)
 *     RtlpWnfRetryTimerCallback @ 0x18008AEC0 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x180062BB0 (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlpDecRefWnfNameSubscription @ 0x180063128 (RtlpDecRefWnfNameSubscription.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtGetCompleteWnfStateSubscription @ 0x18009EEC0 (NtGetCompleteWnfStateSubscription.c)
 */

__int64 __fastcall RtlpWnfProcessCurrentDescriptor(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v5; // r14d
  unsigned int v6; // esi
  int v7; // r15d
  unsigned __int64 v8; // r9
  _QWORD *v9; // r8
  unsigned __int64 v10; // rcx
  _QWORD *v11; // rbx
  int v12; // eax
  __int64 *v13; // r14
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r9
  __int64 *v17; // rax
  __int64 *v19; // rdx
  int v20; // ecx
  unsigned __int64 v21; // r8
  volatile signed __int64 *v22; // rcx
  unsigned __int64 v23; // [rsp+30h] [rbp-48h]
  __int64 v24; // [rsp+38h] [rbp-40h]

  v5 = a2;
  v6 = 0;
  v7 = 0;
  RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_18016D250 + 8), a2, a3, a4);
  v8 = qword_18016D250 + 16;
  v9 = *(_QWORD **)(qword_18016D250 + 16);
  if ( v9 == (_QWORD *)(qword_18016D250 + 16) )
    goto LABEL_5;
  v10 = *(_QWORD *)(a1 + 8);
  v23 = v10;
  while ( 1 )
  {
    v11 = v9 - 4;
    v24 = *(v9 - 2);
    if ( v24 == v10 && v11[1] == *(_QWORD *)a1 )
      break;
    v9 = (_QWORD *)*v9;
    if ( v9 == (_QWORD *)v8 )
      goto LABEL_5;
  }
  RtlAcquireSRWLockExclusive((unsigned __int64)(v11 + 7), HIDWORD(v10), (unsigned __int64)v9, v8);
  v12 = *((_DWORD *)v11 + 32);
  if ( v12 != 2 )
  {
    if ( v12 != 1 )
      goto LABEL_9;
    v22 = v11 + 7;
    if ( !v5 )
    {
      v11[15] = a1;
      RtlReleaseSRWLockExclusive(v22);
      v6 = 259;
      goto LABEL_5;
    }
LABEL_39:
    RtlReleaseSRWLockExclusive(v22);
    v6 = 128;
LABEL_5:
    RtlReleaseSRWLockShared((volatile signed __int64 *)(qword_18016D250 + 8));
    goto LABEL_23;
  }
  if ( v5 )
  {
    v22 = v11 + 7;
    goto LABEL_39;
  }
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11[15]);
  v11[15] = 0LL;
  *((_DWORD *)v11 + 32) = 0;
LABEL_9:
  _InterlockedIncrement((volatile signed __int32 *)v11 + 27);
  *((_DWORD *)v11 + 32) = 1;
  RtlReleaseSRWLockExclusive(v11 + 7);
  RtlReleaseSRWLockShared((volatile signed __int64 *)(qword_18016D250 + 8));
  v13 = v11 + 8;
  while ( 1 )
  {
    v6 = 0;
    if ( (unsigned int)RtlpWnfWalkUserSubscriptionList(a1, v11, 0LL) == -1073741267 )
      v6 = -1073741267;
    if ( (unsigned int)RtlpWnfWalkUserSubscriptionList(a1, v11, 1LL) == -1073741267 )
      v6 = -1073741267;
    RtlAcquireSRWLockExclusive((unsigned __int64)(v11 + 7), v14, v15, v16);
    v17 = (__int64 *)*v13;
    ++v7;
    while ( v17 != v13 )
    {
      *((_DWORD *)v17 + 38) = 0;
      v17 = (__int64 *)*v17;
    }
    if ( !v11[15] )
      break;
    a1 = v11[15];
    v11[15] = 0LL;
    RtlReleaseSRWLockExclusive(v11 + 7);
  }
  if ( v6 )
  {
    v19 = (__int64 *)*v13;
    v20 = 1;
    v11[15] = a1;
    v21 = 0LL;
    for ( *((_DWORD *)v11 + 32) = 2; v19 != v13; v19 = (__int64 *)*v19 )
    {
      if ( (*((_BYTE *)v19 + 52) & 4) != 0 && *((_DWORD *)v19 + 28) )
      {
        if ( !v21 || v21 > v19[15] )
          v21 = v19[15];
        if ( *((_DWORD *)v19 + 32) < *(_DWORD *)(qword_18016D250 + 72) )
          v20 = 0;
      }
    }
    v11[17] = v21;
    *((_DWORD *)v11 + 36) = v20;
  }
  else
  {
    *((_DWORD *)v11 + 32) = 0;
    if ( !*((_DWORD *)v11 + 6) || *(_DWORD *)(a1 + 16) - *((_DWORD *)v11 + 6) > 0 )
      *((_DWORD *)v11 + 6) = *(_DWORD *)(a1 + 16);
  }
  RtlReleaseSRWLockExclusive(v11 + 7);
  RtlpDecRefWnfNameSubscription(v11);
LABEL_23:
  if ( v7 > 1 )
  {
    NtGetCompleteWnfStateSubscription(a1 + 8, a1, *(unsigned int *)(a1 + 24), v6, 0LL, 0, v23, v24);
    if ( !v6 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
    return 128;
  }
  return v6;
}
