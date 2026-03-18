/*
 * XREFs of DpiMiracastHandlePowerCallback @ 0x1C02CCF20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01362BC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C0158CD0 (DxgkMiracastStopAllMiracastSessions.c)
 */

__int64 __fastcall DpiMiracastHandlePowerCallback(LPCGUID SettingGuid, _DWORD *Value, ULONG ValueLength, PVOID Context)
{
  __int64 v4; // rax
  __int64 v5; // rax
  union _LARGE_INTEGER v7[2]; // [rsp+20h] [rbp-49h] BYREF
  _DWORD v8[2]; // [rsp+30h] [rbp-39h] BYREF
  __int128 v9; // [rsp+38h] [rbp-31h]
  __int64 v10; // [rsp+48h] [rbp-21h]
  __int64 v11; // [rsp+50h] [rbp-19h]
  __int64 v12; // [rsp+58h] [rbp-11h]
  __int64 v13; // [rsp+60h] [rbp-9h]
  __int64 v14; // [rsp+68h] [rbp-1h]
  _DWORD v15[2]; // [rsp+70h] [rbp+7h] BYREF
  __int128 v16; // [rsp+78h] [rbp+Fh]
  __int64 v17; // [rsp+88h] [rbp+1Fh]
  __int64 v18; // [rsp+90h] [rbp+27h]
  __int64 v19; // [rsp+98h] [rbp+2Fh]
  int v20; // [rsp+A0h] [rbp+37h]
  __int64 v21; // [rsp+A4h] [rbp+3Bh]
  int v22; // [rsp+ACh] [rbp+43h]

  v4 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
  if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 )
    v4 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4;
  if ( v4 )
  {
    v5 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_MONITOR_POWER_ON.Data1;
    if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_MONITOR_POWER_ON.Data1 )
      v5 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_MONITOR_POWER_ON.Data4;
    if ( !v5 )
    {
      if ( *Value )
      {
        if ( byte_1C00B0B1A && KeCancelTimer(&Timer) )
        {
          _InterlockedIncrement(&dword_1C00B0F50);
          v19 = 0LL;
          v15[0] = 6;
          v17 = 0LL;
          v16 = 0LL;
          v15[1] = 64;
          v18 = 0LL;
          v20 = 73;
          v21 = 2LL;
          v22 = 0;
          DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v15, 0x200000000LL);
        }
        byte_1C00B0B1A = 0;
      }
      else
      {
        byte_1C00B0B1A = 1;
        if ( byte_1C00B0B18 && dword_1C00B0F38 )
        {
          v7[0].QuadPart = -300000000LL;
          KeSetTimer(&Timer, (LARGE_INTEGER)-300000000LL, &Dpc);
          v12 = 0LL;
          v8[0] = 6;
          v10 = 0LL;
          v9 = 0LL;
          v8[1] = 64;
          v11 = 0LL;
          v13 = 73LL;
          v14 = 0LL;
          DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v8, 0x200000000LL);
        }
      }
    }
  }
  else if ( *Value )
  {
    v7[0].QuadPart = -300000000LL;
    DxgkMiracastStopAllMiracastSessions(1, v7, 0x89u);
  }
  return 0LL;
}
