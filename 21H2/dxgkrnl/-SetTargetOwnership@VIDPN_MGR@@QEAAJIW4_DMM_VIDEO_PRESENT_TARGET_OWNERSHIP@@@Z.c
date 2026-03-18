/*
 * XREFs of ?SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z @ 0x1C01F1A90
 * Callers:
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01F1820 (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000F0C8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     DxgkStatusChangeNotify @ 0x1C01C26A0 (DxgkStatusChangeNotify.c)
 */

__int64 __fastcall VIDPN_MGR::SetTargetOwnership(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rsi
  __int64 v5; // r14
  __int64 v6; // r8
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  struct DMMVIDEOPRESENTTARGET *TargetById; // r14
  __int64 v13; // r8
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a3;
  v5 = a2;
  v6 = *(_QWORD *)(a1 + 8);
  if ( !v6 )
  {
    WdLogSingleEntry0(1LL);
    v6 = *(_QWORD *)(a1 + 8);
  }
  v7 = v5;
  WdLogSingleEntry3(7LL, v5, *(_QWORD *)(v6 + 16), v3);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 120) + 72LL));
  v8 = *(_QWORD *)(a1 + 120);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v8, v5);
  if ( TargetById )
  {
    if ( v8 )
      ReferenceCounted::Release((ReferenceCounted *)(v8 + 64));
    v14[1] = 0LL;
    *((_DWORD *)TargetById + 30) = v3;
    v14[0] = 1LL;
    if ( (int)DxgkStatusChangeNotify((int *)v14, v9, v10) < 0 )
      WdLogSingleEntry0(1LL);
    return 0LL;
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 8);
    if ( !v13 )
    {
      WdLogSingleEntry0(1LL);
      v13 = *(_QWORD *)(a1 + 8);
    }
    WdLogSingleEntry2(2LL, v7, *(_QWORD *)(v13 + 16));
    if ( v8 )
      ReferenceCounted::Release((ReferenceCounted *)(v8 + 64));
    return 3223192325LL;
  }
}
