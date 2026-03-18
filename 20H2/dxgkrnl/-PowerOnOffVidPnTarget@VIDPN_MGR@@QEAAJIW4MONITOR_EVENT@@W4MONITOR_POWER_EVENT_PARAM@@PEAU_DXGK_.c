/*
 * XREFs of ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0171FE4
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0174C70 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005424 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000A4B0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013B32C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013EA84 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     DxgkStatusChangeNotify @ 0x1C0140680 (DxgkStatusChangeNotify.c)
 *     ?SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z @ 0x1C017226C (-SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PowerOnOffVidPnTarget(
        VIDPN_MGR *a1,
        __int64 a2,
        int a3,
        int a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  __int64 v7; // r14
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v13; // rax
  int v14; // ebx
  unsigned __int8 v15; // si
  char v16; // r15
  _QWORD *v17; // rbx
  _QWORD *v18; // r14
  unsigned int *i; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int8 v24; // al
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rsi
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v29; // rsi
  unsigned int j; // ebx
  __int64 v31; // rax
  __int64 v32; // r9
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v39; // ebx
  _QWORD *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  _QWORD *v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  char v54[8]; // [rsp+50h] [rbp-B0h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v55; // [rsp+58h] [rbp-A8h]
  _QWORD v56[2]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v57[64]; // [rsp+70h] [rbp-90h] BYREF

  v55 = a5;
  v7 = (unsigned int)a2;
  v9 = WdLogNewEntry5_WdDmmEvent(a1, a2);
  v10 = (unsigned int)v7;
  *(_QWORD *)(v9 + 24) = v7;
  *(_QWORD *)(v9 + 32) = a1;
  WdLogEvent5_WdDmmEvent(v9);
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 16LL) != CurrentThread )
  {
    v13 = WdLogNewEntry5_WdAssertion(CurrentThread, v11);
    WdLogEvent5_WdAssertion(v13);
  }
  if ( a4 )
  {
    v14 = a4 - 1;
    if ( v14 )
    {
      v39 = v14 - 1;
      if ( v39 )
      {
        if ( v39 != 1 )
        {
          v40 = (_QWORD *)WdLogNewEntry5_WdError(CurrentThread, v11);
          v40[3] = (unsigned int)v7;
          v40[4] = a1;
          v40[5] = -1073741811LL;
          WdLogEvent5_WdError(v40);
          return 3221225485LL;
        }
        v15 = 0;
      }
      else
      {
        v15 = 1;
      }
      v16 = 0;
    }
    else
    {
      v15 = 0;
      v16 = 1;
    }
  }
  else
  {
    v15 = 1;
    v16 = 1;
  }
  if ( (_DWORD)v7 == -1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a1 + 10) + 72LL));
    v17 = (_QWORD *)*((_QWORD *)a1 + 10);
    v18 = (_QWORD *)v17[3];
    if ( v18 != v17 + 3 )
    {
      for ( i = (unsigned int *)(v18 - 1);
            i;
            i = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                  (DMMVIDEOPRESENTTARGETSET *)v17,
                                  (const struct DMMVIDEOPRESENTTARGET *const)i) )
      {
        if ( a3 != 8 || v15 || !i[22] )
          VIDPN_MGR::SetTargetOwnership(a1, i[6], (v15 ^ 1u) + 1);
      }
    }
    ReferenceCounted::Release((ReferenceCounted *)(v17 + 8), v11);
  }
  else
  {
    VIDPN_MGR::SetTargetOwnership(a1, (unsigned int)v7, (v15 ^ 1u) + 1);
  }
  if ( v16 )
  {
    memset(v57, 0, sizeof(v57));
    v22 = *((_QWORD *)a1 + 1);
    v54[0] = 0;
    if ( !v22 )
    {
      v41 = WdLogNewEntry5_WdAssertion(v21, v20);
      WdLogEvent5_WdAssertion(v41);
      v22 = *((_QWORD *)a1 + 1);
    }
    v23 = *(_QWORD *)(*(_QWORD *)(v22 + 16) + 2704LL);
    if ( !v23 || (v24 = 0, *(_DWORD *)(v23 + 636)) )
      v24 = 1;
    v25 = VIDPN_MGR::SetTimingsFromVidPn(a1, 0LL, 4u, 0LL, (struct D3DKMT_VIDPN_SOURCE_MASKS *)v57, v54, v24, 0LL, 0LL);
    v28 = v25;
    if ( v25 < 0 )
    {
      v54[0] = 2;
      v44 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26);
      v44[3] = v10;
      v45 = *((_QWORD *)a1 + 1);
      if ( !v45 )
      {
        v46 = WdLogNewEntry5_WdAssertion(v43, v42);
        WdLogEvent5_WdAssertion(v46);
        v45 = *((_QWORD *)a1 + 1);
      }
      v47 = *(int *)(*(_QWORD *)(v45 + 16) + 320LL);
      v44[4] = v47;
      v48 = *((_QWORD *)a1 + 1);
      if ( !v48 )
      {
        v49 = WdLogNewEntry5_WdAssertion(v47, v42);
        WdLogEvent5_WdAssertion(v49);
        v48 = *((_QWORD *)a1 + 1);
      }
      v44[5] = *(unsigned int *)(*(_QWORD *)(v48 + 16) + 316LL);
      v44[6] = v28;
      WdLogEvent5_WdError(v44);
    }
    v29 = v55;
    if ( v57[6] )
    {
      for ( j = 0; ; ++j )
      {
        v31 = *((_QWORD *)a1 + 1);
        v32 = v31;
        if ( !v31 )
        {
          v50 = WdLogNewEntry5_WdAssertion(v27, v26);
          WdLogEvent5_WdAssertion(v50);
          v31 = *((_QWORD *)a1 + 1);
          v32 = v31;
        }
        v27 = *(_QWORD *)(*(_QWORD *)(v31 + 16) + 2696LL);
        if ( j >= *(_DWORD *)(v27 + 80) )
          break;
        v33 = v57[6];
        if ( _bittest(&v33, j) )
        {
          if ( !v32 )
          {
            v51 = WdLogNewEntry5_WdAssertion(v27, v26);
            WdLogEvent5_WdAssertion(v51);
            v32 = *((_QWORD *)a1 + 1);
          }
          DisplayRestoreVidPnResult(*(_QWORD *)(*(_QWORD *)(v32 + 16) + 316LL), j, 3LL, (unsigned int)v57[j + 21], v29);
        }
      }
    }
    else
    {
      v32 = *((_QWORD *)a1 + 1);
    }
    if ( !v32 )
    {
      v52 = WdLogNewEntry5_WdAssertion(v27, v26);
      WdLogEvent5_WdAssertion(v52);
      v32 = *((_QWORD *)a1 + 1);
    }
    DmmHandleSetTimingsResult(*(ADAPTER_DISPLAY ***)(v32 + 16), (struct _DMM_SET_TIMING_RESULT *)v54, v29);
    v56[0] = 1LL;
    v56[1] = 0LL;
    if ( (int)DxgkStatusChangeNotify((int *)v56, v34, v35) < 0 )
    {
      v53 = WdLogNewEntry5_WdAssertion(v37, v36);
      WdLogEvent5_WdAssertion(v53);
    }
  }
  return 0LL;
}
