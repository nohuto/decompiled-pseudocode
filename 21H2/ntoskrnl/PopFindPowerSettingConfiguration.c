/*
 * XREFs of PopFindPowerSettingConfiguration @ 0x14066E4B8
 * Callers:
 *     PopGetPowerSettingValue @ 0x140270104 (PopGetPowerSettingValue.c)
 *     PopInitilizeAcDcSettings @ 0x1403AE554 (PopInitilizeAcDcSettings.c)
 *     PopGetSettingValue @ 0x14060048C (PopGetSettingValue.c)
 *     PopGetSettingNotificationName @ 0x14066CF64 (PopGetSettingNotificationName.c)
 *     PopSetPowerSettingValue @ 0x14066E018 (PopSetPowerSettingValue.c)
 *     PoRegisterPowerSettingCallback @ 0x14066F440 (PoRegisterPowerSettingCallback.c)
 *     PopQueryPowerSettingUlong @ 0x140779D24 (PopQueryPowerSettingUlong.c)
 * Callees:
 *     PopGetListHead @ 0x14066E540 (PopGetListHead.c)
 *     PopStateIsSessionSpecific @ 0x14066E5B4 (PopStateIsSessionSpecific.c)
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
