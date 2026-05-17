/*
 * XREFs of _TpReleaseWait@4 @ 0x4B2B1E70
 * Callers:
 *     _RtlDeregisterWaitEx@8 @ 0x4B2A8010 (_RtlDeregisterWaitEx@8.c)
 *     _RtlpWnfRegisterTpNotification@0 @ 0x4B2AE96C (_RtlpWnfRegisterTpNotification@0.c)
 *     _EtwpRegisterTpNotificationOnce@12 @ 0x4B2B1C90 (_EtwpRegisterTpNotificationOnce@12.c)
 * Callees:
 *     _TppCleanupGroupMemberRelease@8 @ 0x4B2B1EF6 (_TppCleanupGroupMemberRelease@8.c)
 *     _TppCancelWait@16 @ 0x4B2B7B98 (_TppCancelWait@16.c)
 *     _TppWaitpValidateWait@12 @ 0x4B2B7C55 (_TppWaitpValidateWait@12.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

int __stdcall TpReleaseWait(int a1)
{
  int result; // eax
  int v2; // ecx
  int v3; // [esp+8h] [ebp-4h] BYREF
  _UNKNOWN *retaddr; // [esp+10h] [ebp+4h]

  result = TppWaitpValidateWait(0);
  if ( result )
  {
    result = TppCleanupGroupMemberRelease(a1, 1);
    if ( result )
    {
      *(_DWORD *)(a1 + 112) = retaddr;
      RtlAcquireSRWLockExclusive(a1 + 144);
      TppCancelWait(2, &v3);
      ++*(_BYTE *)(a1 + 223);
      RtlReleaseSRWLockExclusive(a1 + 144);
      v2 = 1 - v3;
      result = _InterlockedExchangeAdd((volatile signed __int32 *)a1, v3 - 1);
      if ( result == v2 )
        return (**(int (__thiscall ***)(_DWORD, int))(a1 + 4))(**(_DWORD **)(a1 + 4), a1);
    }
  }
  return result;
}
