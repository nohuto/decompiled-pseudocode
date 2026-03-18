/*
 * XREFs of ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01F1820
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01F3C90 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0012B30 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B85D0 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01BC204 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     DxgkStatusChangeNotify @ 0x1C01C26A0 (DxgkStatusChangeNotify.c)
 *     ?SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z @ 0x1C01F1A90 (-SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PowerOnOffVidPnTarget(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  __int64 v9; // r13
  int v10; // ebx
  unsigned __int8 v11; // si
  char v12; // r15
  _QWORD *v13; // rbx
  _QWORD *v14; // r14
  unsigned int *i; // r14
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int8 v18; // al
  int v19; // eax
  __int64 v20; // rbx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v21; // rsi
  unsigned int j; // ebx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  int v30; // ebx
  __int64 v31; // rcx
  char v32[8]; // [rsp+50h] [rbp-B0h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v33; // [rsp+58h] [rbp-A8h]
  _QWORD v34[2]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v35[68]; // [rsp+70h] [rbp-90h] BYREF

  v33 = a5;
  v9 = a2;
  WdLogSingleEntry2(7LL, a2, a1);
  if ( *(struct _KTHREAD **)(a1 + 64) != KeGetCurrentThread() )
    WdLogSingleEntry0(1LL);
  if ( a4 )
  {
    v10 = a4 - 1;
    if ( v10 )
    {
      v30 = v10 - 1;
      if ( v30 )
      {
        if ( v30 != 1 )
        {
          WdLogSingleEntry3(2LL, v9, a1, -1073741811LL);
          return 3221225485LL;
        }
        v11 = 0;
      }
      else
      {
        v11 = 1;
      }
      v12 = 0;
    }
    else
    {
      v11 = 0;
      v12 = 1;
    }
  }
  else
  {
    v11 = 1;
    v12 = 1;
  }
  if ( a2 == -1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 120) + 72LL));
    v13 = *(_QWORD **)(a1 + 120);
    v14 = (_QWORD *)v13[3];
    if ( v14 != v13 + 3 )
    {
      for ( i = (unsigned int *)(v14 - 1);
            i;
            i = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                  (DMMVIDEOPRESENTTARGETSET *)v13,
                                  (const struct DMMVIDEOPRESENTTARGET *const)i) )
      {
        if ( a3 != 8 || v11 || !i[23] )
          VIDPN_MGR::SetTargetOwnership(a1, i[6], (v11 ^ 1u) + 1);
      }
    }
    ReferenceCounted::Release((ReferenceCounted *)(v13 + 8));
  }
  else
  {
    VIDPN_MGR::SetTargetOwnership(a1, a2, (v11 ^ 1u) + 1);
  }
  if ( v12 )
  {
    memset(v35, 0, 0x104uLL);
    v16 = *(_QWORD *)(a1 + 8);
    v32[0] = 0;
    if ( !v16 )
    {
      WdLogSingleEntry0(1LL);
      v16 = *(_QWORD *)(a1 + 8);
    }
    v17 = *(_QWORD *)(*(_QWORD *)(v16 + 16) + 2800LL);
    if ( !v17 || (v18 = 0, *(_DWORD *)(v17 + 644)) )
      v18 = 1;
    v19 = VIDPN_MGR::SetTimingsFromVidPn(
            (VIDPN_MGR *)a1,
            0,
            4u,
            0LL,
            (struct D3DKMT_VIDPN_SOURCE_MASKS *)v35,
            v32,
            v18,
            0LL,
            0LL);
    v20 = v19;
    if ( v19 < 0 )
    {
      v32[0] = 2;
      v31 = *(_QWORD *)(a1 + 8);
      if ( !v31 )
      {
        WdLogSingleEntry0(1LL);
        v31 = *(_QWORD *)(a1 + 8);
      }
      WdLogSingleEntry4(
        2LL,
        v9,
        *(int *)(*(_QWORD *)(v31 + 16) + 408LL),
        *(unsigned int *)(*(_QWORD *)(v31 + 16) + 404LL),
        v20);
    }
    v21 = v33;
    if ( v35[6] )
    {
      for ( j = 0; ; ++j )
      {
        v23 = *(_QWORD *)(a1 + 8);
        if ( !v23 )
        {
          WdLogSingleEntry0(1LL);
          v23 = *(_QWORD *)(a1 + 8);
        }
        v24 = *(_QWORD *)(v23 + 16);
        v25 = v23;
        if ( j >= *(_DWORD *)(*(_QWORD *)(v24 + 2792) + 96LL) )
          break;
        v26 = v35[6];
        if ( _bittest(&v26, j) )
          DisplayRestoreVidPnResult(*(_QWORD *)(v24 + 404), j, 3LL, (unsigned int)v35[j + 22], v21);
      }
    }
    else
    {
      v25 = *(_QWORD *)(a1 + 8);
    }
    if ( !v25 )
    {
      WdLogSingleEntry0(1LL);
      v25 = *(_QWORD *)(a1 + 8);
    }
    DmmHandleSetTimingsResult(*(ADAPTER_DISPLAY ***)(v25 + 16), (struct _DMM_SET_TIMING_RESULT *)v32, v21);
    v34[0] = 1LL;
    v34[1] = 0LL;
    if ( (int)DxgkStatusChangeNotify((int *)v34, v27, v28) < 0 )
      WdLogSingleEntry0(1LL);
  }
  return 0LL;
}
