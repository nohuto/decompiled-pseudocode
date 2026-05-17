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

int __fastcall RtlpAddWnfUserSubToNameSub(_DWORD *a1, int a2)
{
  _DWORD *v4; // edx
  _DWORD *v5; // ecx
  _DWORD *v6; // eax
  unsigned int v7; // ecx
  _DWORD *v8; // ebx
  int v9; // ebx
  _DWORD *v10; // ecx
  unsigned int i; // eax
  unsigned int v12; // eax
  int v13; // ebx
  int v14; // eax
  _DWORD *j; // ecx
  _DWORD v17[2]; // [esp+10h] [ebp-8h] BYREF

  RtlAcquireSRWLockExclusive(dword_4B3A664C + 4);
  RtlAcquireSRWLockExclusive(a1 + 10);
  v4 = a1 + 11;
  v5 = (_DWORD *)a1[12];
  v6 = (_DWORD *)(a2 + 4);
  if ( (_DWORD *)*v5 != a1 + 11 )
    __fastfail(3u);
  *v6 = v4;
  *(_DWORD *)(a2 + 8) = v5;
  *v5 = v6;
  a1[12] = v6;
  *(_DWORD *)(a2 + 12) = a1;
  if ( a1[23] == 1 && (*(_DWORD *)(a2 + 36) & 0xFFFFFFEE) != 0 )
    *(_DWORD *)(a2 + 100) = 1;
  v7 = 0;
  v8 = a1 + 15;
  do
  {
    if ( ((1 << v7) & *(_DWORD *)(a2 + 36)) != 0 )
      ++*v8;
    ++v7;
    ++v8;
  }
  while ( v7 < 5 );
  v9 = 0;
  v10 = a1 + 15;
  for ( i = 0; i < 5; ++i )
  {
    if ( *v10 )
      v9 |= 1 << i;
    ++v10;
  }
  ++a1[13];
  if ( (*(_BYTE *)(a2 + 32) & 4) != 0 )
    ++a1[14];
  v12 = *(_DWORD *)(a2 + 28);
  if ( a1[6] < v12 )
  {
    for ( j = (_DWORD *)*v4; j != v4; j = (_DWORD *)*j )
    {
      if ( v12 > j[6] )
        v12 = j[6];
    }
  }
  a1[6] = v12;
  v13 = NtSubscribeWnfStateChange(a1 + 4, v12, v9, v17);
  if ( v13 >= 0 )
  {
    a1[2] = v17[0];
    a1[3] = v17[1];
  }
  if ( RtlGetCurrentServiceSessionId() )
    v14 = (int)NtCurrentPeb()->SharedData + 564;
  else
    v14 = 2147353486;
  if ( *(_BYTE *)v14 && v13 >= 0 )
    RtlpWnfETWEventSubscribe(a1[20], *(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 36), a1[4], a1[5]);
  RtlReleaseSRWLockExclusive(a1 + 10);
  RtlReleaseSRWLockExclusive(dword_4B3A664C + 4);
  return v13;
}
