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

_DWORD *__fastcall RtlpDecRefWnfUserSubscription(char *BaseAddress, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax
  char *v6; // ecx
  char **v7; // edx
  PVOID *v8; // ecx
  _DWORD *v9; // edi
  signed __int32 v10; // [esp+10h] [ebp-4h] BYREF

  if ( _InterlockedDecrement((volatile signed __int32 *)BaseAddress + 11) )
  {
    result = a3;
    *a2 = 0;
    *a3 = 0;
  }
  else
  {
    v6 = (char *)*((_DWORD *)BaseAddress + 10);
    if ( v6 )
      RtlpDecrementWnfSerializationGroup(v6);
    v7 = (char **)*((_DWORD *)BaseAddress + 1);
    if ( v7[1] != BaseAddress + 4 || (v8 = (PVOID *)*((_DWORD *)BaseAddress + 2), *v8 != BaseAddress + 4) )
      __fastfail(3u);
    *v8 = v7;
    v7[1] = (char *)v8;
    v9 = (_DWORD *)*((_DWORD *)BaseAddress + 12);
    *a2 = *((_DWORD *)BaseAddress + 14);
    *a3 = *((_DWORD *)BaseAddress + 15);
    result = (_DWORD *)RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    if ( v9 )
    {
      *v9 = 1;
      _InterlockedOr(&v10, 0);
      return (_DWORD *)RtlpWakeByAddress(0);
    }
  }
  return result;
}
