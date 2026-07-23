/*
 * XREFs of RtlpDecRefWnfUserSubscription @ 0x18006305C
 * Callers:
 *     RtlpRemoveUserSubFromNameSub @ 0x1800626EC (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x180062BB0 (RtlpWnfWalkUserSubscriptionList.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlpWakeByAddress @ 0x18006322C (RtlpWakeByAddress.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x180063BE8 (RtlpDecrementWnfSerializationGroup.c)
 */

LOGICAL __fastcall RtlpDecRefWnfUserSubscription(volatile signed __int32 *BaseAddress, _QWORD *a2, _QWORD *a3)
{
  LOGICAL result; // eax
  __int64 v7; // rcx
  volatile signed __int32 **v8; // rcx
  PVOID *v9; // rdx
  _DWORD *v10; // rdi
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  result = _InterlockedExchangeAdd(BaseAddress + 20, 0xFFFFFFFF);
  if ( result == 1 )
  {
    v7 = *((_QWORD *)BaseAddress + 9);
    if ( v7 )
      RtlpDecrementWnfSerializationGroup(v7);
    v8 = (volatile signed __int32 **)*((_QWORD *)BaseAddress + 1);
    if ( v8[1] != BaseAddress + 2 || (v9 = (PVOID *)*((_QWORD *)BaseAddress + 2), *v9 != BaseAddress + 2) )
      __fastfail(3u);
    *v9 = v8;
    v8[1] = (volatile signed __int32 *)v9;
    v10 = (_DWORD *)*((_QWORD *)BaseAddress + 11);
    *a2 = *((_QWORD *)BaseAddress + 13);
    *a3 = *((_QWORD *)BaseAddress + 14);
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)BaseAddress);
    if ( v10 )
    {
      *v10 = 1;
      _InterlockedOr(v11, 0);
      return RtlpWakeByAddress(v10, 0LL);
    }
  }
  else
  {
    *a2 = 0LL;
    *a3 = 0LL;
  }
  return result;
}
