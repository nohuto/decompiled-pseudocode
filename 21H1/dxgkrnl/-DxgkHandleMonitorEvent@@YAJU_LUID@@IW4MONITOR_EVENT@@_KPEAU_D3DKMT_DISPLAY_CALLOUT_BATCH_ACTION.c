/*
 * XREFs of ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C02911A8
 * Callers:
 *     DxgkPollDisplayChildrenInternal @ 0x1C0220DC0 (DxgkPollDisplayChildrenInternal.c)
 *     DxgkProcessDisplayCalloutBatch @ 0x1C0293800 (DxgkProcessDisplayCalloutBatch.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00E444C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0116E44 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x1C0127FA4 (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 *     ??0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ @ 0x1C014BDA8 (--0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ.c)
 *     DxgkSetPresenterViewMode @ 0x1C0159B60 (DxgkSetPresenterViewMode.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C029187C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02925C8 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0292A64 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 */

__int64 __fastcall DxgkHandleMonitorEvent(struct _LUID a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  unsigned int v7; // r12d
  unsigned int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  bool v12; // zf
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v17; // rax
  char v18; // dl
  char v19; // dl
  unsigned int CurrentProcessSessionId; // eax
  struct _LUID v22; // [rsp+30h] [rbp-91h] BYREF
  int v23; // [rsp+38h] [rbp-89h] BYREF
  int v24; // [rsp+3Ch] [rbp-85h]
  int v25; // [rsp+40h] [rbp-81h]
  char v26; // [rsp+50h] [rbp-71h]
  char v27; // [rsp+52h] [rbp-6Fh]
  char v28; // [rsp+53h] [rbp-6Eh]
  char v29; // [rsp+54h] [rbp-6Dh]
  char v30; // [rsp+55h] [rbp-6Ch]
  char v31; // [rsp+57h] [rbp-6Ah]
  int v32; // [rsp+58h] [rbp-69h]
  unsigned __int64 v33; // [rsp+60h] [rbp-61h] BYREF
  _DWORD v34[2]; // [rsp+70h] [rbp-51h] BYREF
  __int128 v35; // [rsp+78h] [rbp-49h]
  __int64 v36; // [rsp+88h] [rbp-39h]
  __int64 v37; // [rsp+90h] [rbp-31h]
  int v38; // [rsp+98h] [rbp-29h]
  int v39; // [rsp+9Ch] [rbp-25h]
  unsigned int v40; // [rsp+A0h] [rbp-21h]
  unsigned int v41; // [rsp+A4h] [rbp-1Dh]
  __int64 v42; // [rsp+A8h] [rbp-19h]
  struct _LUID v43; // [rsp+B0h] [rbp-11h]
  unsigned int v44; // [rsp+B8h] [rbp-9h]
  int v45; // [rsp+BCh] [rbp-5h]
  unsigned int v46; // [rsp+C0h] [rbp-1h]
  int v47; // [rsp+C4h] [rbp+3h]
  int v48; // [rsp+C8h] [rbp+7h]
  int v49; // [rsp+CCh] [rbp+Bh]

  v22 = a1;
  v7 = a2;
  v8 = 0;
  MONITORSCOUNT_CALLBACK_CONTEXT::MONITORSCOUNT_CALLBACK_CONTEXT((MONITORSCOUNT_CALLBACK_CONTEXT *)&v23, a2);
  *(_BYTE *)a5 |= 2u;
  if ( !a3 && (a4 == 2 || a4 == 5) || a3 == 1 && a4 == 1 )
    goto LABEL_8;
  if ( a3 == 10 )
  {
    if ( a4 == 2 )
    {
LABEL_8:
      DxgkSetPresenterViewMode(0LL, 0LL);
      v11 = HandleMonitorDepartureCase(&v23, &v22, v7, a3, a4, a5 + 24);
      goto LABEL_22;
    }
    v12 = a4 == 1;
  }
  else
  {
    if ( !a3 && ((a4 - 1) & 0xFFFFFFFFFFFFFFFCuLL) == 0 && a4 != 2 || a3 == 1 && !a4 )
      goto LABEL_21;
    v12 = a3 == 3;
  }
  if ( v12 )
  {
LABEL_21:
    DxgkSetPresenterViewMode(0LL, 0LL);
    v11 = HandleMonitorArrival(&v23, &v22, v7, a3, a4, a5 + 24);
    goto LABEL_22;
  }
  if ( a3 == 6 )
  {
    if ( a4 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v10, v9);
      *(_QWORD *)(v13 + 24) = 4313LL;
      WdLogEvent5_WdAssertion(v13);
    }
    v11 = HandleRapidHPDAction(
            (struct MONITORSCOUNT_CALLBACK_CONTEXT *const)&v23,
            &v22,
            v7,
            (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(a5 + 24));
LABEL_22:
    v8 = v11;
    if ( v11 < 0 )
      goto LABEL_34;
  }
  if ( !(unsigned int)DxgIsRemoteSessionUsingWddmMonitors(v10, v9) && !v24 )
  {
    Global = DXGGLOBAL::GetGlobal(v15, v14);
    v17 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v22, &v33);
    if ( v17 )
    {
      *(_BYTE *)a5 ^= (*(_BYTE *)a5 ^ (*(_BYTE *)a5 | (16 * *((_BYTE *)v17 + 2552)))) & 0x10;
      DXGADAPTER::ReleaseReferenceNoTracking(v17);
    }
  }
  if ( a3 || a4 != 1 )
    v18 = 0;
  else
    v18 = 32;
  v19 = *(_BYTE *)a5 | v18 & 0x20;
  v12 = v26 == 0;
  *(_BYTE *)a5 = v19;
  if ( v12 )
    *(_BYTE *)(a5 + 1) = *(_BYTE *)(a5 + 1) & 0xFE | (a3 == 9);
  else
    *(_BYTE *)a5 = (v31 != 0 ? 0x40 : 0) | (v19 ^ (v19 ^ (v19 | (v27 != 0 ? 4 : 0))) & 4) & 0xBF | (v30 != 0 ? 8 : 0);
LABEL_34:
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
  v44 = v7;
  v46 = v8;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v40);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v34, CurrentProcessSessionId);
  return v8;
}
