/*
 * XREFs of PopIdleAoAcDozeToS4 @ 0x1408F2150
 * Callers:
 *     <none>
 * Callees:
 *     PopDeepSleepClearDisengageReason @ 0x1402DEDF0 (PopDeepSleepClearDisengageReason.c)
 *     PopExecutePowerAction @ 0x140762C18 (PopExecutePowerAction.c)
 *     PopTraceSystemIdleS0LowPowerDoze @ 0x1408E9344 (PopTraceSystemIdleS0LowPowerDoze.c)
 *     PopReleasePolicyLock @ 0x14098C4B8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C4F8 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopIdleAoAcDozeToS4(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v4; // [rsp+30h] [rbp-30h] BYREF
  int v5; // [rsp+38h] [rbp-28h]
  _DWORD v6[2]; // [rsp+40h] [rbp-20h] BYREF
  __int128 v7; // [rsp+48h] [rbp-18h]

  PopAcquirePolicyLock(a1);
  PopTraceSystemIdleS0LowPowerDoze();
  dword_140C22DB0 = 0;
  v7 = 0LL;
  if ( dword_140C22DC8 == 1 )
    goto LABEL_10;
  if ( dword_140C22DC8 != 2 )
  {
    if ( dword_140C22DC8 == 3 )
    {
      v6[0] = 13;
      goto LABEL_11;
    }
    if ( dword_140C22DC8 == 4 )
    {
      v6[0] = 14;
      goto LABEL_11;
    }
LABEL_10:
    v6[0] = 6;
    goto LABEL_11;
  }
  v6[0] = 11;
  if ( qword_140C22E98
    && MEMORY[0xFFFFF78000000008] - qword_140C22E98 > 10000000
                                                    * (unsigned __int64)(unsigned int)PopSmartUserPresenceCheckTimeout )
  {
    v6[0] = 12;
  }
LABEL_11:
  v5 = 0;
  v6[1] = 128;
  v4 = 0x8000002400000003uLL;
  PopExecutePowerAction((__int64)v6, 0, &v4, 5, 1u);
  PopReleasePolicyLock(v2, v1);
  _InterlockedAnd(&dword_140C22DCC, 0);
  return PopDeepSleepClearDisengageReason(4u);
}
