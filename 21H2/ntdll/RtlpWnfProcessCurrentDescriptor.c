/*
 * XREFs of RtlpWnfProcessCurrentDescriptor @ 0x180063E6C
 * Callers:
 *     RtlpWnfNotificationThread @ 0x180063D50 (RtlpWnfNotificationThread.c)
 *     RtlpWnfRetryTimerCallback @ 0x18008B4C0 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x1800640A0 (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlpDecRefWnfNameSubscription @ 0x180064618 (RtlpDecRefWnfNameSubscription.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtGetCompleteWnfStateSubscription @ 0x18009F430 (NtGetCompleteWnfStateSubscription.c)
 */

__int64 __fastcall RtlpWnfProcessCurrentDescriptor(_WNF_STATE_NAME *BaseAddress, int a2)
{
  ULONG v4; // esi
  int v5; // r15d
  _QWORD *v6; // r8
  _QWORD *v7; // rbx
  int v8; // eax
  __int64 *v9; // r14
  __int64 *v10; // rax
  __int64 *v12; // rdx
  int v13; // ecx
  unsigned __int64 v14; // r8
  _RTL_SRWLOCK *v15; // rcx

  v4 = 0;
  v5 = 0;
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_18016D250 + 8));
  v6 = *(_QWORD **)(qword_18016D250 + 16);
  if ( v6 == (_QWORD *)(qword_18016D250 + 16) )
    goto LABEL_4;
  while ( 1 )
  {
    v7 = v6 - 4;
    if ( *(v6 - 2) == *(_QWORD *)&BaseAddress[1] && v7[1] == *BaseAddress )
      break;
    v6 = (_QWORD *)*v6;
    if ( v6 == (_QWORD *)(qword_18016D250 + 16) )
      goto LABEL_4;
  }
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v7 + 7);
  v8 = *((_DWORD *)v7 + 32);
  if ( v8 != 2 )
  {
    if ( v8 != 1 )
      goto LABEL_8;
    v15 = (_RTL_SRWLOCK *)(v7 + 7);
    if ( !a2 )
    {
      v7[15] = BaseAddress;
      RtlReleaseSRWLockExclusive(v15);
      v4 = 259;
      goto LABEL_4;
    }
LABEL_38:
    RtlReleaseSRWLockExclusive(v15);
    v4 = 128;
LABEL_4:
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(qword_18016D250 + 8));
    goto LABEL_22;
  }
  if ( a2 )
  {
    v15 = (_RTL_SRWLOCK *)(v7 + 7);
    goto LABEL_38;
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v7[15]);
  v7[15] = 0LL;
  *((_DWORD *)v7 + 32) = 0;
LABEL_8:
  _InterlockedIncrement((volatile signed __int32 *)v7 + 27);
  *((_DWORD *)v7 + 32) = 1;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v7 + 7);
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(qword_18016D250 + 8));
  v9 = v7 + 8;
  while ( 1 )
  {
    v4 = 0;
    if ( (unsigned int)RtlpWnfWalkUserSubscriptionList(BaseAddress, v7, 0LL) == -1073741267 )
      v4 = -1073741267;
    if ( (unsigned int)RtlpWnfWalkUserSubscriptionList(BaseAddress, v7, 1LL) == -1073741267 )
      v4 = -1073741267;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v7 + 7);
    v10 = (__int64 *)*v9;
    ++v5;
    while ( v10 != v9 )
    {
      *((_DWORD *)v10 + 38) = 0;
      v10 = (__int64 *)*v10;
    }
    if ( !v7[15] )
      break;
    BaseAddress = (_WNF_STATE_NAME *)v7[15];
    v7[15] = 0LL;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v7 + 7);
  }
  if ( v4 )
  {
    v12 = (__int64 *)*v9;
    v13 = 1;
    v7[15] = BaseAddress;
    v14 = 0LL;
    for ( *((_DWORD *)v7 + 32) = 2; v12 != v9; v12 = (__int64 *)*v12 )
    {
      if ( (*((_BYTE *)v12 + 52) & 4) != 0 && *((_DWORD *)v12 + 28) )
      {
        if ( !v14 || v14 > v12[15] )
          v14 = v12[15];
        if ( *((_DWORD *)v12 + 32) < *(_DWORD *)(qword_18016D250 + 72) )
          v13 = 0;
      }
    }
    v7[17] = v14;
    *((_DWORD *)v7 + 36) = v13;
  }
  else
  {
    *((_DWORD *)v7 + 32) = 0;
    if ( !*((_DWORD *)v7 + 6) || (signed int)(BaseAddress[2].Data[0] - *((_DWORD *)v7 + 6)) > 0 )
      *((_DWORD *)v7 + 6) = BaseAddress[2].Data[0];
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v7 + 7);
  RtlpDecRefWnfNameSubscription(v7);
LABEL_22:
  if ( v5 > 1 )
  {
    NtGetCompleteWnfStateSubscription(BaseAddress + 1, (ULONG64 *)BaseAddress, BaseAddress[3].Data[0], v4, 0LL, 0);
    if ( !v4 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    return 128;
  }
  return v4;
}
