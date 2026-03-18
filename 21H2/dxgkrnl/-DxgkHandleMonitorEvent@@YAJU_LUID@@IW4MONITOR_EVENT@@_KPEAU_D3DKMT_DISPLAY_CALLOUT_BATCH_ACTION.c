/*
 * XREFs of ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C02F07A8
 * Callers:
 *     DxgkPollDisplayChildrenInternal @ 0x1C02D31C0 (DxgkPollDisplayChildrenInternal.c)
 *     DxgkProcessDisplayCalloutBatch @ 0x1C02F3490 (DxgkProcessDisplayCalloutBatch.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?ExtendExistingHPDPeriod@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_EXTENSION@@U_LUID@@@Z @ 0x1C0058354 (-ExtendExistingHPDPeriod@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_EXTENSION@@U_LUID@@@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01A442C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01B32DC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ??0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ @ 0x1C01DB094 (--0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x1C01DB11C (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 *     DxgkSetPresenterViewMode @ 0x1C01E89D0 (DxgkSetPresenterViewMode.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F0FB0 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F20A0 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F254C (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 */

__int64 __fastcall DxgkHandleMonitorEvent(struct _LUID a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5)
{
  int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct DXGGLOBAL *Global; // rax
  bool v14; // zf
  int v15; // eax
  DXGGLOBAL *v16; // rax
  struct DXGADAPTER *v17; // rax
  char v18; // r8
  char v19; // r8
  unsigned int CurrentProcessSessionId; // eax
  struct _LUID v22; // [rsp+50h] [rbp-91h] BYREF
  int v23; // [rsp+58h] [rbp-89h] BYREF
  int v24; // [rsp+5Ch] [rbp-85h]
  int v25; // [rsp+60h] [rbp-81h]
  char v26; // [rsp+70h] [rbp-71h]
  char v27; // [rsp+72h] [rbp-6Fh]
  char v28; // [rsp+73h] [rbp-6Eh]
  char v29; // [rsp+74h] [rbp-6Dh]
  char v30; // [rsp+75h] [rbp-6Ch]
  char v31; // [rsp+77h] [rbp-6Ah]
  int v32; // [rsp+78h] [rbp-69h]
  unsigned __int64 v33; // [rsp+80h] [rbp-61h] BYREF
  _DWORD v34[2]; // [rsp+90h] [rbp-51h] BYREF
  __int128 v35; // [rsp+98h] [rbp-49h]
  __int64 v36; // [rsp+A8h] [rbp-39h]
  __int64 v37; // [rsp+B0h] [rbp-31h]
  int v38; // [rsp+B8h] [rbp-29h]
  int v39; // [rsp+BCh] [rbp-25h]
  unsigned int v40; // [rsp+C0h] [rbp-21h]
  unsigned int v41; // [rsp+C4h] [rbp-1Dh]
  __int64 v42; // [rsp+C8h] [rbp-19h]
  struct _LUID v43; // [rsp+D0h] [rbp-11h]
  unsigned int v44; // [rsp+D8h] [rbp-9h]
  int v45; // [rsp+DCh] [rbp-5h]
  int v46; // [rsp+E0h] [rbp-1h]
  int v47; // [rsp+E4h] [rbp+3h]
  int v48; // [rsp+E8h] [rbp+7h]
  int v49; // [rsp+ECh] [rbp+Bh]

  v22 = a1;
  v8 = 0;
  MONITORSCOUNT_CALLBACK_CONTEXT::MONITORSCOUNT_CALLBACK_CONTEXT((MONITORSCOUNT_CALLBACK_CONTEXT *)&v23);
  *(_BYTE *)a5 |= 2u;
  if ( !a3 && (a4 == 2 || a4 == 5) || a3 == 1 && a4 == 1 )
    goto LABEL_8;
  if ( a3 == 10 )
  {
    if ( a4 == 2 )
    {
LABEL_8:
      DxgkSetPresenterViewMode(0, 0);
      v8 = HandleMonitorDepartureCase(&v23, &v22, a2, a3, a4, a5 + 24);
      Global = DXGGLOBAL_GetGlobal();
      RAPID_HPD_MANAGER::ExtendExistingHPDPeriod((__int64)Global + 305224, 1u, *(_QWORD *)&v22);
      goto LABEL_23;
    }
    v14 = a4 == 1;
  }
  else
  {
    if ( !a3 && ((a4 - 1) & 0xFFFFFFFFFFFFFFFCuLL) == 0 && a4 != 2 || a3 == 1 && !a4 )
      goto LABEL_21;
    v14 = a3 == 3;
  }
  if ( v14 )
  {
LABEL_21:
    DxgkSetPresenterViewMode(0, 0);
    v15 = HandleMonitorArrival(&v23, &v22, a2, a3, a4, a5 + 24);
LABEL_22:
    v8 = v15;
LABEL_23:
    if ( v8 < 0 )
      goto LABEL_35;
    goto LABEL_24;
  }
  if ( a3 == 6 )
  {
    if ( a4 )
    {
      WdLogSingleEntry1(1LL, 4350LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_Parameter == (ULONG_PTR) 0", 4350LL, 0LL, 0LL, 0LL, 0LL);
    }
    v15 = HandleRapidHPDAction(
            (struct MONITORSCOUNT_CALLBACK_CONTEXT *const)&v23,
            &v22,
            a2,
            (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(a5 + 24));
    goto LABEL_22;
  }
LABEL_24:
  if ( !(unsigned int)DxgIsRemoteSessionUsingWddmMonitors(v10, v9, v11, v12) && !v24 )
  {
    v16 = DXGGLOBAL_GetGlobal();
    v17 = DXGGLOBAL::ReferenceAdapterByLuid(v16, v22, &v33);
    if ( v17 )
    {
      *(_BYTE *)a5 ^= (*(_BYTE *)a5 ^ (*(_BYTE *)a5 | (16 * *(_BYTE *)(*((_QWORD *)v17 + 349) + 24LL)))) & 0x10;
      DXGADAPTER::ReleaseReference(v17);
    }
  }
  if ( a3 || a4 != 1 )
    v18 = 0;
  else
    v18 = 32;
  v19 = *(_BYTE *)a5 | v18 & 0x20;
  v14 = v26 == 0;
  *(_BYTE *)a5 = v19;
  if ( v14 )
    *(_BYTE *)(a5 + 1) = *(_BYTE *)(a5 + 1) & 0xFE | (a3 == 9);
  else
    *(_BYTE *)a5 = (v31 != 0 ? 0x40 : 0) | (v19 ^ (v19 ^ ((v27 != 0 ? 4 : 0) | v19)) & 4) & 0xBF | (v30 != 0 ? 8 : 0);
LABEL_35:
  v38 = 0;
  v37 = 0LL;
  v39 = 0;
  v36 = 0LL;
  v34[0] = 2;
  v34[1] = 96;
  v41 = a3;
  v43 = v22;
  v45 = v32;
  v47 = v23;
  v48 = v25;
  v49 = v24;
  v35 = 0LL;
  v40 = v27 & 1 | (4 * (v28 & 1 | (2 * (v29 & 1))));
  v42 = a4;
  v44 = a2;
  v46 = v8;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v40);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v34, CurrentProcessSessionId);
  return (unsigned int)v8;
}
