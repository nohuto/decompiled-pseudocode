/*
 * XREFs of _TpWaitForWait@8 @ 0x4B2B1D80
 * Callers:
 *     _RtlDeregisterWaitEx@8 @ 0x4B2A8010 (_RtlDeregisterWaitEx@8.c)
 * Callees:
 *     _TppWorkWait@8 @ 0x4B2B1F6A (_TppWorkWait@8.c)
 *     _TppCancelWait@16 @ 0x4B2B7B98 (_TppCancelWait@16.c)
 *     _TppWaitpValidateWait@12 @ 0x4B2B7C55 (_TppWaitpValidateWait@12.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

void __cdecl TpWaitForWait(PTP_WAIT Wait, LOGICAL CancelPendingCallbacks)
{
  unsigned int v2; // ebx
  _RTL_SRWLOCK *v3; // esi
  unsigned int v4; // [esp+8h] [ebp-8h] BYREF
  char v5; // [esp+Fh] [ebp-1h]

  v2 = 0;
  v4 = 0;
  v5 = 0;
  if ( TppWaitpValidateWait(0) )
  {
    v3 = (_RTL_SRWLOCK *)((char *)Wait + 144);
    if ( CancelPendingCallbacks )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Wait + 36);
      ++*((_BYTE *)Wait + 223);
      TppCancelWait(2, &v4);
      if ( *((_DWORD *)Wait + 8) )
        v5 = 1;
      else
        --*((_BYTE *)Wait + 223);
      v3 = (_RTL_SRWLOCK *)((char *)Wait + 144);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Wait + 36);
      v2 = v4;
    }
    TppWorkWait(Wait, CancelPendingCallbacks);
    if ( v5 )
    {
      RtlAcquireSRWLockExclusive(v3);
      --*((_BYTE *)Wait + 223);
      RtlReleaseSRWLockExclusive(v3);
    }
    if ( v2 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Wait, v2) == -v2 )
        (**((void (__thiscall ***)(_DWORD, PTP_WAIT))Wait + 1))(**((_DWORD **)Wait + 1), Wait);
    }
  }
}
