/*
 * XREFs of _TpSetWaitEx@16 @ 0x4B2B7AB0
 * Callers:
 *     _RtlDeregisterWaitEx@8 @ 0x4B2A8010 (_RtlDeregisterWaitEx@8.c)
 *     _RtlpTpWaitCheckReset@8 @ 0x4B2A8A69 (_RtlpTpWaitCheckReset@8.c)
 *     _EtwpNotificationThread@16 @ 0x4B2AE380 (_EtwpNotificationThread@16.c)
 *     _RtlpWnfRegisterTpNotification@0 @ 0x4B2AE96C (_RtlpWnfRegisterTpNotification@0.c)
 *     _EtwpRegisterTpNotificationOnce@12 @ 0x4B2B1C90 (_EtwpRegisterTpNotificationOnce@12.c)
 *     _RtlRegisterWait@24 @ 0x4B2B2020 (_RtlRegisterWait@24.c)
 *     _TpSetWait@12 @ 0x4B2B7A90 (_TpSetWait@12.c)
 *     _RtlpWnfNotificationThread@16 @ 0x4B2DEA10 (_RtlpWnfNotificationThread@16.c)
 * Callees:
 *     _TppCancelWait@16 @ 0x4B2B7B98 (_TppCancelWait@16.c)
 *     _TppWaitpValidateWait@12 @ 0x4B2B7C55 (_TppWaitpValidateWait@12.c)
 *     _TppSetupNextWait@12 @ 0x4B2B7C92 (_TppSetupNextWait@12.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

NTSTATUS __cdecl TpSetWaitEx(PTP_WAIT Wait, HANDLE Handle, PLARGE_INTEGER Timeout, PVOID Reserved)
{
  char v4; // al
  signed int v5; // esi
  char v7; // al
  NTSTATUS v8; // [esp+Ch] [ebp-4h] BYREF

  if ( !TppWaitpValidateWait(Handle != 0) )
    return 0;
  if ( Reserved )
    TppRaiseInvalidParameter();
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Wait + 36);
  v4 = TppCancelWait(0, &v8);
  v5 = v8;
  v8 = v8 != 0;
  if ( Handle && !*((_BYTE *)Wait + 223) )
  {
    if ( !v4 )
    {
      v7 = *((_BYTE *)Wait + 292) | 1;
      *((_DWORD *)Wait + 58) = Handle;
      *((_BYTE *)Wait + 292) = v7;
      if ( Timeout )
      {
        *((_BYTE *)Wait + 292) = v7 | 2;
        *((LARGE_INTEGER *)Wait + 30) = *Timeout;
      }
      goto LABEL_8;
    }
    if ( !*((_DWORD *)Wait + 56) )
    {
      v5 += TppSetupNextWait(Wait, Handle, (int)Timeout);
LABEL_8:
      if ( v5 > 0 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)Wait, v5);
        v5 = 0;
      }
    }
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Wait + 36);
  if ( v5 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)Wait, v5) == -v5 )
    (**((void (__thiscall ***)(_DWORD, PTP_WAIT))Wait + 1))(**((_DWORD **)Wait + 1), Wait);
  return v8;
}
