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

int __fastcall RtlpRemoveUserSubFromNameSub(int a1, int a2, _DWORD *a3)
{
  int v5; // eax
  unsigned int v6; // ecx
  _DWORD *v7; // edi
  _DWORD *v8; // edx
  int v9; // ecx
  unsigned int i; // eax
  int v11; // edi
  int v12; // eax
  int v14; // [esp+10h] [ebp-10h] BYREF
  volatile signed __int32 *v15; // [esp+14h] [ebp-Ch]
  _DWORD v16[2]; // [esp+18h] [ebp-8h] BYREF

  v14 = 0;
  *a3 = 0;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(dword_4B3A664C + 4));
  v15 = (volatile signed __int32 *)(a1 + 40);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 40));
  if ( *(_DWORD *)(a2 + 52) )
  {
    RtlReleaseSRWLockExclusive(v15);
    RtlReleaseSRWLockExclusive((volatile signed __int32 *)(dword_4B3A664C + 4));
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
        *(_DWORD *)(a1 + 80),
        *(_DWORD *)(a2 + 16),
        *(_DWORD *)(a2 + 36),
        *(_DWORD *)(a1 + 16),
        *(_DWORD *)(a1 + 20));
    v6 = 0;
    *a3 = 1;
    v7 = (_DWORD *)(a1 + 60);
    *(_DWORD *)(a2 + 52) = 1;
    v8 = (_DWORD *)(a1 + 60);
    do
    {
      if ( ((1 << v6) & *(_DWORD *)(a2 + 36)) != 0 )
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
    --*(_DWORD *)(a1 + 52);
    if ( (*(_BYTE *)(a2 + 32) & 4) != 0 )
      --*(_DWORD *)(a1 + 56);
    v11 = 0;
    if ( *(_QWORD *)(a1 + 8) )
    {
      v12 = NtSubscribeWnfStateChange(a1 + 16, *(_DWORD *)(a1 + 24), v9, v16);
      v11 = v12;
      if ( v12 < 0 )
      {
        if ( v12 == -1073741772 || v12 == -1073741431 )
          v11 = 0;
      }
      else
      {
        *(_DWORD *)(a1 + 8) = v16[0];
        *(_DWORD *)(a1 + 12) = v16[1];
      }
    }
    RtlpDecRefWnfUserSubscription(&v14);
    RtlReleaseSRWLockExclusive((volatile signed __int32 *)(a1 + 40));
    RtlReleaseSRWLockExclusive((volatile signed __int32 *)(dword_4B3A664C + 4));
    RtlpDecRefWnfNameSubscription(a1);
    return v11;
  }
}
