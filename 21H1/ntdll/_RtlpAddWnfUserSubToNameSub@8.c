/*
 * XREFs of _RtlpAddWnfUserSubToNameSub@8 @ 0x4B2B0767
 * Callers:
 *     _RtlpSubscribeWnfStateChangeNotificationInternal@40 @ 0x4B2B068F (_RtlpSubscribeWnfStateChangeNotificationInternal@40.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtSubscribeWnfStateChange@16 @ 0x4B2F4520 (_NtSubscribeWnfStateChange@16.c)
 *     _RtlpWnfETWEventSubscribe@28 @ 0x4B33C4EC (_RtlpWnfETWEventSubscribe@28.c)
 */

NTSTATUS __fastcall RtlpAddWnfUserSubToNameSub(int a1, int a2)
{
  _DWORD *v4; // edx
  _DWORD *v5; // ecx
  _DWORD *v6; // eax
  unsigned int v7; // ecx
  _DWORD *v8; // ebx
  ULONG v9; // ebx
  _DWORD *v10; // ecx
  unsigned int i; // eax
  WNF_CHANGE_STAMP v12; // eax
  NTSTATUS v13; // ebx
  int v14; // eax
  _DWORD *j; // ecx
  unsigned __int64 SubscriptionId; // [esp+10h] [ebp-8h] BYREF

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(dword_4B3A664C + 4));
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
  v4 = (_DWORD *)(a1 + 44);
  v5 = *(_DWORD **)(a1 + 48);
  v6 = (_DWORD *)(a2 + 4);
  if ( *v5 != a1 + 44 )
    __fastfail(3u);
  *v6 = v4;
  *(_DWORD *)(a2 + 8) = v5;
  *v5 = v6;
  *(_DWORD *)(a1 + 48) = v6;
  *(_DWORD *)(a2 + 12) = a1;
  if ( *(_DWORD *)(a1 + 92) == 1 && (*(_DWORD *)(a2 + 36) & 0xFFFFFFEE) != 0 )
    *(_DWORD *)(a2 + 100) = 1;
  v7 = 0;
  v8 = (_DWORD *)(a1 + 60);
  do
  {
    if ( ((1 << v7) & *(_DWORD *)(a2 + 36)) != 0 )
      ++*v8;
    ++v7;
    ++v8;
  }
  while ( v7 < 5 );
  v9 = 0;
  v10 = (_DWORD *)(a1 + 60);
  for ( i = 0; i < 5; ++i )
  {
    if ( *v10 )
      v9 |= 1 << i;
    ++v10;
  }
  ++*(_DWORD *)(a1 + 52);
  if ( (*(_BYTE *)(a2 + 32) & 4) != 0 )
    ++*(_DWORD *)(a1 + 56);
  v12 = *(_DWORD *)(a2 + 28);
  if ( *(_DWORD *)(a1 + 24) < v12 )
  {
    for ( j = (_DWORD *)*v4; j != v4; j = (_DWORD *)*j )
    {
      if ( v12 > j[6] )
        v12 = j[6];
    }
  }
  *(_DWORD *)(a1 + 24) = v12;
  v13 = NtSubscribeWnfStateChange((PCWNF_STATE_NAME)(a1 + 16), v12, v9, &SubscriptionId);
  if ( v13 >= 0 )
    *(_QWORD *)(a1 + 8) = SubscriptionId;
  if ( RtlGetCurrentServiceSessionId() )
    v14 = (int)NtCurrentPeb()->SharedData + 564;
  else
    v14 = 2147353486;
  if ( *(_BYTE *)v14 && v13 >= 0 )
    RtlpWnfETWEventSubscribe(
      *(_DWORD *)(a1 + 80),
      *(_DWORD *)(a2 + 16),
      *(_DWORD *)(a2 + 36),
      *(_DWORD *)(a1 + 16),
      *(_DWORD *)(a1 + 20));
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(dword_4B3A664C + 4));
  return v13;
}
