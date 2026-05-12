/*
 * XREFs of RaidPowerSettingCallback @ 0x1C0031340
 * Callers:
 *     <none>
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C00100E8 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C00166D8 (RaidIsAdapterControlSupported.c)
 *     __security_check_cookie @ 0x1C0019FC0 (__security_check_cookie.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C00293FC (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     RaidAdapterGetSystemPowerHint @ 0x1C002B730 (RaidAdapterGetSystemPowerHint.c)
 *     RaidAdapterGetSystemPowerResumeLatency @ 0x1C002B754 (RaidAdapterGetSystemPowerResumeLatency.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C003D624 (RaidAdapterSetMaxOperationalPower.c)
 *     StorpCSEntryTelemetry @ 0x1C0050278 (StorpCSEntryTelemetry.c)
 *     StorpCSExitTelemetry @ 0x1C00506C4 (StorpCSExitTelemetry.c)
 */

__int64 __fastcall RaidPowerSettingCallback(
        _OWORD *SettingGuid,
        unsigned int *Value,
        __int64 ValueLength,
        __int64 Context)
{
  __int64 v5; // rax
  char v6; // di
  int SystemPowerHint; // eax
  char v8; // cl
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  char v13; // r9
  char v14; // r10
  char v15; // al
  int SystemPowerResumeLatency; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  char v20; // r9
  __int64 v22; // rax
  __int128 v23; // xmm0
  unsigned __int64 v24; // [rsp+40h] [rbp-40h] BYREF
  __int128 v25; // [rsp+48h] [rbp-38h]
  unsigned int *v26; // [rsp+58h] [rbp-28h]
  int v27; // [rsp+60h] [rbp-20h]
  int v28; // [rsp+64h] [rbp-1Ch]
  int v29; // [rsp+68h] [rbp-18h]
  int v30; // [rsp+6Ch] [rbp-14h]
  __int64 v31; // [rsp+70h] [rbp-10h]

  v28 = 0;
  v31 = 0LL;
  v5 = *(_QWORD *)SettingGuid - *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
  if ( *(_QWORD *)SettingGuid == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 )
    v5 = *((_QWORD *)SettingGuid + 1) - *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4;
  if ( v5 )
  {
    v22 = *(_QWORD *)SettingGuid - *(_QWORD *)&GUID_DISK_MAX_POWER.Data1;
    if ( *(_QWORD *)SettingGuid == *(_QWORD *)&GUID_DISK_MAX_POWER.Data1 )
      v22 = *((_QWORD *)SettingGuid + 1) - *(_QWORD *)GUID_DISK_MAX_POWER.Data4;
    if ( !v22 )
    {
      v24 = *Value;
      if ( v24 <= 0x64 )
      {
        LOBYTE(ValueLength) = 1;
        RaidAdapterSetMaxOperationalPower(Context, &v24, ValueLength, 1LL);
      }
      return 0LL;
    }
    v23 = *SettingGuid;
    v26 = Value;
    v27 = ValueLength;
    v25 = v23;
    if ( (unsigned int)RaidIsAdapterControlSupported(Context, 5) )
      goto LABEL_29;
  }
  else
  {
    if ( (_DWORD)ValueLength != 4 || !Value )
      return 3221225485LL;
    v6 = *(_BYTE *)Value;
    if ( (unsigned int)RaidIsAdapterControlSupported(Context, 12)
      && *(_QWORD *)(Context + 5096)
      && *(_QWORD *)(Context + 5112) )
    {
      SystemPowerHint = RaidAdapterGetSystemPowerHint(Context);
      RaidAdapterGetSystemPowerResumeLatency(SystemPowerHint);
      v29 = 1;
      v30 = 16;
      if ( v6 != 1 )
      {
        if ( v6 )
          return 0LL;
        v15 = *(_BYTE *)(Context + 108);
        if ( v15 >= 0 )
          return 0LL;
        *(_BYTE *)(Context + 108) = v15 & 0x7F;
        LODWORD(v31) = RaidAdapterGetSystemPowerHint(Context);
        SystemPowerResumeLatency = RaidAdapterGetSystemPowerResumeLatency(v31);
        HIDWORD(v31) = SystemPowerResumeLatency;
        if ( StorEtwLoggingEnabled && (byte_1C0068841 & 1) != 0 )
          McTemplateK0qqqqq_EtwWriteTransfer(
            v18,
            v17,
            v19,
            *(_DWORD *)(Context + 56),
            v19,
            v20,
            v17,
            SystemPowerResumeLatency);
        StorpCSExitTelemetry(Context);
        goto LABEL_29;
      }
      v8 = *(_BYTE *)(Context + 108);
      if ( v8 >= 0 )
      {
        *(_BYTE *)(Context + 108) = v8 | 0x80;
        LODWORD(v31) = RaidAdapterGetSystemPowerHint(Context);
        v9 = RaidAdapterGetSystemPowerResumeLatency(v31);
        HIDWORD(v31) = v9;
        if ( StorEtwLoggingEnabled )
        {
          if ( (byte_1C0068841 & 1) != 0 )
            McTemplateK0qqqqq_EtwWriteTransfer(v11, v10, v12, *(_DWORD *)(Context + 56), v12, v13, v14, v9);
        }
        StorpCSEntryTelemetry(Context);
LABEL_29:
        RaCallMiniportAdapterControl(Context + 304);
      }
    }
  }
  return 0LL;
}
