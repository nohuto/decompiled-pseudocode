/*
 * XREFs of ?HdrPowerPolicyChangeCallout@DXGGLOBAL@@QEAAXXZ @ 0x1C0269BE8
 * Callers:
 *     ?AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z @ 0x1C01988E0 (-AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007AE4 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C0120184 (DxgkReleaseSessionModeChangeLock.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1C026C070 (DxgkRequestAsyncDisplaySwitchCallout.c)
 */

void __fastcall DXGGLOBAL::HdrPowerPolicyChangeCallout(DXGGLOBAL *this)
{
  int v1; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rax
  _BYTE v9[16]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v10[10]; // [rsp+30h] [rbp-68h] BYREF

  v9[0] = 0;
  v1 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v9, 1);
  v4 = v1;
  if ( v1 < 0 )
  {
LABEL_4:
    v8 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v8 + 24) = v4;
    WdLogEvent5_WdError(v8);
    goto LABEL_6;
  }
  v6 = *((_QWORD *)DXGGLOBAL::GetGlobal(v3, v2) + 102);
  if ( *(_DWORD *)(v6 + 128) != -1 )
  {
    memset(v10, 0, 0x48uLL);
    EtwActivityIdControl(3u, (LPGUID)&v10[1]);
    v10[8] = MEMORY[0xFFFFF78000000014];
    LODWORD(v10[3]) = 63;
    LOBYTE(v10[6]) = -1;
    v7 = DxgkRequestAsyncDisplaySwitchCallout(0LL, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v10, 0x200000000uLL);
    v4 = v7;
    if ( v7 >= 0 )
      goto LABEL_6;
    goto LABEL_4;
  }
  *((_DWORD *)DXGGLOBAL::GetGlobal(v6, v5) + 76142) = 1;
LABEL_6:
  if ( v9[0] )
    DxgkReleaseSessionModeChangeLock(v3, v2);
}
