/*
 * XREFs of ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C0295698
 * Callers:
 *     DxgkPollDisplayChildrenInternal @ 0x1C0225010 (DxgkPollDisplayChildrenInternal.c)
 *     DxgkProcessDisplayCalloutBatch @ 0x1C0297CF0 (DxgkProcessDisplayCalloutBatch.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C011D0FC (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x1C0130A14 (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C013746C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ??0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ @ 0x1C015A2D8 (--0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ.c)
 *     DxgkSetPresenterViewMode @ 0x1C01693A0 (DxgkSetPresenterViewMode.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0295D6C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0296AB8 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0296F54 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
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
  __int64 v14; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v16; // rax
  char v17; // dl
  unsigned int CurrentProcessSessionId; // eax
  struct _LUID v20; // [rsp+30h] [rbp-91h] BYREF
  int v21; // [rsp+38h] [rbp-89h] BYREF
  int v22; // [rsp+3Ch] [rbp-85h]
  int v23; // [rsp+40h] [rbp-81h]
  char v24; // [rsp+50h] [rbp-71h]
  char v25; // [rsp+52h] [rbp-6Fh]
  char v26; // [rsp+53h] [rbp-6Eh]
  char v27; // [rsp+54h] [rbp-6Dh]
  char v28; // [rsp+55h] [rbp-6Ch]
  char v29; // [rsp+57h] [rbp-6Ah]
  int v30; // [rsp+58h] [rbp-69h]
  unsigned __int64 v31; // [rsp+60h] [rbp-61h] BYREF
  _DWORD v32[2]; // [rsp+70h] [rbp-51h] BYREF
  __int128 v33; // [rsp+78h] [rbp-49h]
  __int64 v34; // [rsp+88h] [rbp-39h]
  __int64 v35; // [rsp+90h] [rbp-31h]
  int v36; // [rsp+98h] [rbp-29h]
  int v37; // [rsp+9Ch] [rbp-25h]
  unsigned int v38; // [rsp+A0h] [rbp-21h]
  unsigned int v39; // [rsp+A4h] [rbp-1Dh]
  __int64 v40; // [rsp+A8h] [rbp-19h]
  struct _LUID v41; // [rsp+B0h] [rbp-11h]
  unsigned int v42; // [rsp+B8h] [rbp-9h]
  int v43; // [rsp+BCh] [rbp-5h]
  unsigned int v44; // [rsp+C0h] [rbp-1h]
  int v45; // [rsp+C4h] [rbp+3h]
  int v46; // [rsp+C8h] [rbp+7h]
  int v47; // [rsp+CCh] [rbp+Bh]

  v20 = a1;
  v7 = a2;
  v8 = 0;
  MONITORSCOUNT_CALLBACK_CONTEXT::MONITORSCOUNT_CALLBACK_CONTEXT((MONITORSCOUNT_CALLBACK_CONTEXT *)&v21, a2);
  *(_BYTE *)a5 |= 2u;
  if ( !a3 && (a4 == 2 || a4 == 5) || a3 == 1 && a4 == 1 )
    goto LABEL_8;
  if ( a3 == 10 )
  {
    if ( a4 == 2 )
    {
LABEL_8:
      DxgkSetPresenterViewMode(0LL, 0LL);
      v11 = HandleMonitorDepartureCase(&v21, &v20, v7, a3, a4, a5 + 24);
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
    v11 = HandleMonitorArrival(&v21, &v20, v7, a3, a4, a5 + 24);
    goto LABEL_22;
  }
  if ( a3 == 6 )
  {
    if ( a4 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v10, v9);
      *(_QWORD *)(v13 + 24) = 4314LL;
      WdLogEvent5_WdAssertion(v13);
    }
    v11 = HandleRapidHPDAction(
            (struct MONITORSCOUNT_CALLBACK_CONTEXT *const)&v21,
            &v20,
            v7,
            (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(a5 + 24));
LABEL_22:
    v8 = v11;
    if ( v11 < 0 )
      goto LABEL_34;
  }
  if ( !(unsigned int)DxgIsRemoteSessionUsingWddmMonitors(v10, v9) && !v22 )
  {
    Global = DXGGLOBAL::GetGlobal(v14, v9);
    v16 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v20, &v31);
    if ( v16 )
    {
      *(_BYTE *)a5 ^= (*(_BYTE *)a5 ^ (*(_BYTE *)a5 | (16 * *((_BYTE *)v16 + 2576)))) & 0x10;
      DXGADAPTER::ReleaseReference(v16);
    }
  }
  if ( a3 || a4 != 1 )
    v17 = 0;
  else
    v17 = 32;
  LOBYTE(v9) = *(_BYTE *)a5 | v17 & 0x20;
  v12 = v24 == 0;
  *(_BYTE *)a5 = v9;
  if ( v12 )
  {
    *(_BYTE *)(a5 + 1) = *(_BYTE *)(a5 + 1) & 0xFE | (a3 == 9);
  }
  else
  {
    LOBYTE(v9) = (v29 != 0 ? 0x40 : 0) | (v9 ^ (v9 ^ (v9 | (v25 != 0 ? 4 : 0))) & 4) & 0xBF | (v28 != 0 ? 8 : 0);
    *(_BYTE *)a5 = v9;
  }
LABEL_34:
  v36 = 0;
  v35 = 0LL;
  v37 = 0;
  v34 = 0LL;
  v32[0] = 2;
  v32[1] = 96;
  v39 = a3;
  v41 = v20;
  v43 = v30;
  v45 = v21;
  v46 = v23;
  v47 = v22;
  v33 = 0LL;
  v38 = v25 & 1 | (4 * (v26 & 1 | (2 * (v27 & 1))));
  v40 = a4;
  v42 = v7;
  v44 = v8;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v38, v9);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v32, CurrentProcessSessionId);
  return v8;
}
