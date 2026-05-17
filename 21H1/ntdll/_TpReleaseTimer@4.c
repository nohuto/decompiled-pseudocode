/*
 * XREFs of _TpReleaseTimer@4 @ 0x4B2B3B90
 * Callers:
 *     _RtlDeleteTimerQueueEx@8 @ 0x4B2A8AC0 (_RtlDeleteTimerQueueEx@8.c)
 *     _RtlDeleteTimer@12 @ 0x4B2A8C40 (_RtlDeleteTimer@12.c)
 *     _RtlpInitializeWnf@12 @ 0x4B2AE9E0 (_RtlpInitializeWnf@12.c)
 * Callees:
 *     _TppCleanupGroupMemberRelease@8 @ 0x4B2B1EF6 (_TppCleanupGroupMemberRelease@8.c)
 *     _TppTimerpValidateTimer@12 @ 0x4B2B46DB (_TppTimerpValidateTimer@12.c)
 *     _TppCancelTimer@12 @ 0x4B2B7D76 (_TppCancelTimer@12.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

int __stdcall TpReleaseTimer(int a1)
{
  int v1; // edi
  int result; // eax
  _UNKNOWN *retaddr; // [esp+Ch] [ebp+4h]

  v1 = 1;
  result = TppTimerpValidateTimer(0);
  if ( result )
  {
    result = TppCleanupGroupMemberRelease(a1, 1);
    if ( result )
    {
      *(_DWORD *)(a1 + 112) = retaddr;
      RtlAcquireSRWLockExclusive(a1 + 144);
      ++*(_BYTE *)(a1 + 223);
      if ( (unsigned __int8)TppCancelTimer(0) )
        v1 = 2;
      result = _InterlockedExchangeAdd((volatile signed __int32 *)a1, -v1);
      if ( result == v1 )
        return (**(int (__thiscall ***)(_DWORD, int))(a1 + 4))(**(_DWORD **)(a1 + 4), a1);
    }
  }
  return result;
}
