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

void __cdecl TpReleaseWait(PTP_WAIT Wait)
{
  int v1; // ecx
  int v2; // [esp+8h] [ebp-4h] BYREF
  _UNKNOWN *retaddr; // [esp+10h] [ebp+4h]

  if ( TppWaitpValidateWait(0) && TppCleanupGroupMemberRelease(Wait, 1) )
  {
    *((_DWORD *)Wait + 28) = retaddr;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Wait + 36);
    TppCancelWait(2, &v2);
    ++*((_BYTE *)Wait + 223);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Wait + 36);
    v1 = 1 - v2;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Wait, v2 - 1) == v1 )
      (**((void (__thiscall ***)(_DWORD, PTP_WAIT))Wait + 1))(**((_DWORD **)Wait + 1), Wait);
  }
}
