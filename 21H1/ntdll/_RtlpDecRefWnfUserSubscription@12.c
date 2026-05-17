/*
 * XREFs of _RtlpDecRefWnfUserSubscription@12 @ 0x4B2DF21A
 * Callers:
 *     _RtlpRemoveUserSubFromNameSub@12 @ 0x4B2DEAEC (_RtlpRemoveUserSubFromNameSub@12.c)
 *     _RtlpWnfWalkUserSubscriptionList@12 @ 0x4B2DEE18 (_RtlpWnfWalkUserSubscriptionList@12.c)
 * Callees:
 *     _RtlpDecrementWnfSerializationGroup@4 @ 0x4B2AC0B6 (_RtlpDecrementWnfSerializationGroup@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     @RtlpWakeByAddress@12 @ 0x4B2DF2F6 (@RtlpWakeByAddress@12.c)
 */

int __fastcall RtlpDecRefWnfUserSubscription(int a1, _DWORD *a2, _DWORD *a3)
{
  int result; // eax
  int v6; // ecx
  int v7; // edx
  _DWORD *v8; // ecx
  _DWORD *v9; // edi
  signed __int32 v10; // [esp+10h] [ebp-4h] BYREF

  if ( _InterlockedDecrement((volatile signed __int32 *)(a1 + 44)) )
  {
    result = (int)a3;
    *a2 = 0;
    *a3 = 0;
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 40);
    if ( v6 )
      RtlpDecrementWnfSerializationGroup(v6);
    v7 = *(_DWORD *)(a1 + 4);
    if ( *(_DWORD *)(v7 + 4) != a1 + 4 || (v8 = *(_DWORD **)(a1 + 8), *v8 != a1 + 4) )
      __fastfail(3u);
    *v8 = v7;
    *(_DWORD *)(v7 + 4) = v8;
    v9 = *(_DWORD **)(a1 + 48);
    *a2 = *(_DWORD *)(a1 + 56);
    *a3 = *(_DWORD *)(a1 + 60);
    result = RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, a1);
    if ( v9 )
    {
      *v9 = 1;
      _InterlockedOr(&v10, 0);
      return RtlpWakeByAddress(0);
    }
  }
  return result;
}
