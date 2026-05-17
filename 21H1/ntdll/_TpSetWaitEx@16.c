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

BOOL __stdcall TpSetWaitEx(int a1, int a2, _DWORD *a3, int a4)
{
  char v4; // al
  signed int v5; // esi
  char v7; // al
  BOOL v8; // [esp+Ch] [ebp-4h] BYREF

  if ( !TppWaitpValidateWait(a2 != 0) )
    return 0;
  if ( a4 )
    TppRaiseInvalidParameter();
  RtlAcquireSRWLockExclusive(a1 + 144);
  v4 = TppCancelWait(0, &v8);
  v5 = v8;
  v8 = v8;
  if ( a2 && !*(_BYTE *)(a1 + 223) )
  {
    if ( !v4 )
    {
      v7 = *(_BYTE *)(a1 + 292) | 1;
      *(_DWORD *)(a1 + 232) = a2;
      *(_BYTE *)(a1 + 292) = v7;
      if ( a3 )
      {
        *(_BYTE *)(a1 + 292) = v7 | 2;
        *(_DWORD *)(a1 + 240) = *a3;
        *(_DWORD *)(a1 + 244) = a3[1];
      }
      goto LABEL_8;
    }
    if ( !*(_DWORD *)(a1 + 224) )
    {
      v5 += TppSetupNextWait(a3);
LABEL_8:
      if ( v5 > 0 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)a1, v5);
        v5 = 0;
      }
    }
  }
  RtlReleaseSRWLockExclusive(a1 + 144);
  if ( v5 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)a1, v5) == -v5 )
    (**(void (__thiscall ***)(_DWORD, int))(a1 + 4))(**(_DWORD **)(a1 + 4), a1);
  return v8;
}
