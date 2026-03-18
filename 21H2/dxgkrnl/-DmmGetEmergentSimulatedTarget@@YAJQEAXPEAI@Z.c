/*
 * XREFs of ?DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z @ 0x1C01B1404
 * Callers:
 *     ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01B3570 (-DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02185D4 (-_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0011E60 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?IsLeafTarget@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C001DCB8 (-IsLeafTarget@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 */

__int64 __fastcall DmmGetEmergentSimulatedTarget(DXGADAPTER *a1, unsigned int *a2)
{
  unsigned int v2; // edi
  __int64 v5; // rsi
  __int64 v6; // rsi
  unsigned int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v15; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
  *a2 = -1;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    WdLogSingleEntry0(1LL);
  v5 = *((_QWORD *)a1 + 349);
  if ( !v5 )
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223191554LL;
  }
  v6 = *(_QWORD *)(v5 + 104);
  if ( v6 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v15, v6);
    v7 = *(_DWORD *)(v6 + 548);
    if ( v7 == -1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v6 + 120) + 72LL));
      v8 = *(_QWORD *)(v6 + 120);
      v9 = *(_QWORD *)(v8 + 24);
      if ( v9 == v8 + 24 )
        goto LABEL_24;
      v10 = v9 - 8;
      if ( !v10 )
        goto LABEL_24;
      while ( !IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v10 + 80)) )
      {
        if ( !v11
          && DMMVIDEOPRESENTTARGET::IsLeafTarget((DMMVIDEOPRESENTTARGET *)v10)
          && !*(_QWORD *)(v10 + 472)
          && !*(_DWORD *)(v10 + 92) )
        {
          v11 = v10;
        }
        v13 = *(_QWORD *)(v10 + 8);
        v10 = v13 - 8;
        if ( v13 == v12 )
          v10 = 0LL;
        if ( !v10 )
          goto LABEL_15;
      }
      if ( *(_QWORD *)(v10 + 472) || !DMMVIDEOPRESENTTARGET::IsLeafTarget((DMMVIDEOPRESENTTARGET *)v10) )
        WdLogSingleEntry0(1LL);
      v11 = v10;
LABEL_15:
      if ( v11 )
        *a2 = *(_DWORD *)(v11 + 24);
      else
LABEL_24:
        v2 = -1073741275;
      ReferenceCounted::Release((ReferenceCounted *)(v8 + 64));
    }
    else
    {
      *a2 = v7;
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v15 + 40));
    return v2;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
}
