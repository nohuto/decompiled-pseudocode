/*
 * XREFs of _RtlpRemoveUserSubFromNameSub@12 @ 0x4B2DEAEC
 * Callers:
 *     _RtlpSubscribeWnfStateChangeNotificationInternal@40 @ 0x4B2B068F (_RtlpSubscribeWnfStateChangeNotificationInternal@40.c)
 *     _RtlUnsubscribeWnfStateChangeNotification@4 @ 0x4B2DE990 (_RtlUnsubscribeWnfStateChangeNotification@4.c)
 *     _RtlUnsubscribeWnfNotificationWaitForCompletion@4 @ 0x4B2DE9B0 (_RtlUnsubscribeWnfNotificationWaitForCompletion@4.c)
 *     _RtlUnsubscribeWnfNotificationWithCompletionCallback@12 @ 0x4B33C060 (_RtlUnsubscribeWnfNotificationWithCompletionCallback@12.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlpDecRefWnfNameSubscription@4 @ 0x4B2DEC15 (_RtlpDecRefWnfNameSubscription@4.c)
 *     _RtlpDecRefWnfUserSubscription@12 @ 0x4B2DF21A (_RtlpDecRefWnfUserSubscription@12.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _NtSubscribeWnfStateChange@16 @ 0x4B2F4520 (_NtSubscribeWnfStateChange@16.c)
 *     _RtlpWnfETWEventUnsubscribe@28 @ 0x4B33C581 (_RtlpWnfETWEventUnsubscribe@28.c)
 */

NTSTATUS __fastcall RtlpRemoveUserSubFromNameSub(char *BaseAddress, _DWORD *a2, _DWORD *a3)
{
  int v5; // eax
  unsigned int v6; // ecx
  _DWORD *v7; // edi
  _DWORD *v8; // edx
  ULONG v9; // ecx
  unsigned int i; // eax
  NTSTATUS v11; // edi
  NTSTATUS v12; // eax
  int v14; // [esp+10h] [ebp-10h] BYREF
  PRTL_SRWLOCK SRWLock; // [esp+14h] [ebp-Ch]
  unsigned __int64 SubscriptionId; // [esp+18h] [ebp-8h] BYREF

  v14 = 0;
  *a3 = 0;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(dword_4B3A664C + 4));
  SRWLock = (PRTL_SRWLOCK)(BaseAddress + 40);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 10);
  if ( a2[13] )
  {
    RtlReleaseSRWLockExclusive(SRWLock);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(dword_4B3A664C + 4));
    return -1073741823;
  }
  else
  {
    if ( RtlGetCurrentServiceSessionId() )
      v5 = (int)NtCurrentPeb()->SharedData + 564;
    else
      v5 = 2147353486;
    if ( *(_BYTE *)v5 )
      RtlpWnfETWEventUnsubscribe(
        *((_DWORD *)BaseAddress + 20),
        a2[4],
        a2[9],
        *((_DWORD *)BaseAddress + 4),
        *((_DWORD *)BaseAddress + 5));
    v6 = 0;
    *a3 = 1;
    v7 = BaseAddress + 60;
    a2[13] = 1;
    v8 = BaseAddress + 60;
    do
    {
      if ( ((1 << v6) & a2[9]) != 0 )
        --*v8;
      ++v6;
      ++v8;
    }
    while ( v6 < 5 );
    v9 = 0;
    for ( i = 0; i < 5; ++i )
    {
      if ( *v7 )
        v9 |= 1 << i;
      ++v7;
    }
    --*((_DWORD *)BaseAddress + 13);
    if ( (a2[8] & 4) != 0 )
      --*((_DWORD *)BaseAddress + 14);
    v11 = 0;
    if ( *((_QWORD *)BaseAddress + 1) )
    {
      v12 = NtSubscribeWnfStateChange(
              (PCWNF_STATE_NAME)BaseAddress + 2,
              *((_DWORD *)BaseAddress + 6),
              v9,
              &SubscriptionId);
      v11 = v12;
      if ( v12 < 0 )
      {
        if ( v12 == -1073741772 || v12 == -1073741431 )
          v11 = 0;
      }
      else
      {
        *((_QWORD *)BaseAddress + 1) = SubscriptionId;
      }
    }
    RtlpDecRefWnfUserSubscription(a2, (int)&v14);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 10);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(dword_4B3A664C + 4));
    RtlpDecRefWnfNameSubscription(BaseAddress);
    return v11;
  }
}
