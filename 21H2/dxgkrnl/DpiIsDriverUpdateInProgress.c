/*
 * XREFs of DpiIsDriverUpdateInProgress @ 0x1C012B960
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0126EB0 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     DpiGetDevicePropertyDataBoolean @ 0x1C012BA00 (DpiGetDevicePropertyDataBoolean.c)
 */

char __fastcall DpiIsDriverUpdateInProgress(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rsi
  int DevicePropertyDataBoolean; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  char v9; // bl
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  char v17; // [rsp+40h] [rbp+8h] BYREF
  char v18; // [rsp+50h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v17 = 0;
  v18 = 0;
  v4 = *(_QWORD *)(v2 + 40);
  DevicePropertyDataBoolean = DpiGetDevicePropertyDataBoolean(
                                *(_QWORD *)(v2 + 152),
                                &DEVPKEY_Device_InstallInProgress,
                                &v17);
  v8 = DevicePropertyDataBoolean;
  if ( DevicePropertyDataBoolean < 0 )
  {
    v15 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v15 + 24) = v8;
    WdLogEvent5_WdError(v15);
  }
  v9 = v17;
  if ( !v17 && *(_DWORD *)(v4 + 28) < 0x6000u )
  {
    v10 = DpiGetDevicePropertyDataBoolean(*(_QWORD *)(v2 + 152), &DEVPKEY_Device_IsRebootRequired, &v18);
    v13 = v10;
    if ( v10 < 0 )
    {
      v16 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v16 + 24) = v13;
      WdLogEvent5_WdError(v16);
    }
    if ( v18 )
    {
      v9 = 1;
      *a2 = 1;
    }
  }
  return v9;
}
