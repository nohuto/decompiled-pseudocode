/*
 * XREFs of ?AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z @ 0x1C01988E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01306EC (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?HdrPowerPolicyChangeCallout@DXGGLOBAL@@QEAAXXZ @ 0x1C0269BE8 (-HdrPowerPolicyChangeCallout@DXGGLOBAL@@QEAAXXZ.c)
 */

__int64 __fastcall DXGGLOBAL::AdvancedColorPowerSettingsCallback(
        __int64 SettingGuid,
        _DWORD *Value,
        ULONG ValueLength,
        PVOID Context)
{
  __int64 v6; // rax
  char v7; // bl
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  DXGGLOBAL *v18; // rcx
  char v19; // [rsp+40h] [rbp+18h] BYREF

  if ( ValueLength < 4 )
  {
    v11 = WdLogNewEntry5_WdAssertion(SettingGuid, Value);
    *(_QWORD *)(v11 + 24) = 6193LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( *Value >= 2u )
  {
    v12 = WdLogNewEntry5_WdAssertion(SettingGuid, Value);
    *(_QWORD *)(v12 + 24) = 6194LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v6 = *(_QWORD *)SettingGuid - *(_QWORD *)&GUID_ADVANCED_COLOR_QUALITY_BIAS.Data1;
  if ( *(_QWORD *)SettingGuid == *(_QWORD *)&GUID_ADVANCED_COLOR_QUALITY_BIAS.Data1 )
    v6 = *(_QWORD *)(SettingGuid + 8) - *(_QWORD *)GUID_ADVANCED_COLOR_QUALITY_BIAS.Data4;
  if ( !v6 )
  {
    v7 = *Value != 0;
    if ( v7 != *((_BYTE *)DXGGLOBAL::GetGlobal(SettingGuid, (__int64)Value) + 304564) )
    {
      *((_BYTE *)DXGGLOBAL::GetGlobal(v9, v8) + 304564) = v7;
      v19 = 0;
      Global = DXGGLOBAL::GetGlobal(v14, v13);
      if ( (unsigned int)DXGGLOBAL::IterateAdaptersWithCallback(
                           (__int64)Global,
                           (__int64 (__fastcall *)(_QWORD *, __int64))FindDisplayModeResetNeededDueToHdrPowerPolicy,
                           (__int64)&v19,
                           1) == -2147483622 )
      {
        if ( v19 )
        {
          DXGGLOBAL::GetGlobal(v17, v16);
          DXGGLOBAL::HdrPowerPolicyChangeCallout(v18);
        }
      }
    }
  }
  return 0LL;
}
