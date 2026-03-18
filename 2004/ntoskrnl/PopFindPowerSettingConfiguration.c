/*
 * XREFs of PopFindPowerSettingConfiguration @ 0x1406A8218
 * Callers:
 *     PopGetPowerSettingValue @ 0x1402DF490 (PopGetPowerSettingValue.c)
 *     PopInitilizeAcDcSettings @ 0x1403A61A4 (PopInitilizeAcDcSettings.c)
 *     PopGetSettingNotificationName @ 0x14064BA50 (PopGetSettingNotificationName.c)
 *     PopSetPowerSettingValue @ 0x1406A7D78 (PopSetPowerSettingValue.c)
 *     PopGetSettingValue @ 0x1406F0D30 (PopGetSettingValue.c)
 *     PoRegisterPowerSettingCallback @ 0x140711A90 (PoRegisterPowerSettingCallback.c)
 *     PopQueryPowerSettingUlong @ 0x140766B84 (PopQueryPowerSettingUlong.c)
 * Callees:
 *     PopGetListHead @ 0x1406A82A0 (PopGetListHead.c)
 *     PopStateIsSessionSpecific @ 0x1406A8314 (PopStateIsSessionSpecific.c)
 */

__int64 *__fastcall PopFindPowerSettingConfiguration(_QWORD *a1, int a2)
{
  __int64 **ListHead; // rdi
  __int64 *v5; // rbx
  __int64 v6; // rcx

  ListHead = (__int64 **)PopGetListHead(a1);
  v5 = *ListHead;
  if ( (unsigned __int8)PopStateIsSessionSpecific(a1) )
  {
    while ( v5 != (__int64 *)ListHead )
    {
      if ( *((_DWORD *)v5 + 12) == a2 && (*((_DWORD *)v5 + 13) & 4) == 0 )
        return v5;
      v5 = (__int64 *)*v5;
    }
  }
  else
  {
    while ( v5 != (__int64 *)ListHead )
    {
      v6 = v5[4] - *a1;
      if ( !v6 )
        v6 = v5[5] - a1[1];
      if ( !v6 )
        return v5;
      v5 = (__int64 *)*v5;
    }
  }
  return 0LL;
}
