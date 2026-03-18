/*
 * XREFs of ?DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z @ 0x1C0133E60
 * Callers:
 *     ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0133C90 (-DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0184628 (-_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005424 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007EFC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000A4B0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000A4FC (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?IsLeafTarget@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C0019270 (-IsLeafTarget@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 */

__int64 __fastcall DmmGetEmergentSimulatedTarget(DXGADAPTER *a1, unsigned int *a2)
{
  unsigned int v2; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned int v10; // eax
  _QWORD *v11; // rbx
  const struct DMMVIDEOPRESENTTARGET *v12; // rbp
  _QWORD *v13; // rsi
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rsi
  __int64 v15; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v17 = WdLogNewEntry5_WdError(a1, 0LL);
    *(_QWORD *)(v17 + 24) = 0LL;
    WdLogEvent5_WdError(v17);
    return 3221225485LL;
  }
  *a2 = -1;
  if ( !a1 )
  {
    v18 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v18 + 24) = 0LL;
LABEL_27:
    WdLogEvent5_WdError(v18);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v6, v5);
    WdLogEvent5_WdAssertion(v19);
  }
  v7 = *((_QWORD *)a1 + 337);
  if ( !v7 )
  {
    v18 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v18 + 24) = a1;
    goto LABEL_27;
  }
  v8 = *(_QWORD *)(v7 + 88);
  if ( v8 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v22, v8);
    v10 = *(_DWORD *)(v8 + 492);
    if ( v10 == -1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 80) + 72LL));
      v11 = *(_QWORD **)(v8 + 80);
      v12 = 0LL;
      v13 = (_QWORD *)v11[3];
      if ( v13 == v11 + 3 )
        goto LABEL_22;
      NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v13 - 1);
      if ( !NextTarget )
        goto LABEL_22;
      while ( !IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)NextTarget + 20)) )
      {
        if ( !v12
          && DMMVIDEOPRESENTTARGET::IsLeafTarget(NextTarget)
          && !*((_QWORD *)NextTarget + 59)
          && !*((_DWORD *)NextTarget + 22) )
        {
          v12 = NextTarget;
        }
        NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v11, NextTarget);
        if ( !NextTarget )
          goto LABEL_13;
      }
      if ( *((_QWORD *)NextTarget + 59) || !DMMVIDEOPRESENTTARGET::IsLeafTarget(NextTarget) )
      {
        v21 = WdLogNewEntry5_WdAssertion(v15, v9);
        WdLogEvent5_WdAssertion(v21);
      }
      v12 = NextTarget;
LABEL_13:
      if ( v12 )
        *a2 = *((_DWORD *)v12 + 6);
      else
LABEL_22:
        v2 = -1073741275;
      ReferenceCounted::Release((ReferenceCounted *)(v11 + 8), v9);
    }
    else
    {
      *a2 = v10;
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v22 + 40), v9);
    return v2;
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v20 + 24) = a1;
    WdLogEvent5_WdError(v20);
    return 3223192373LL;
  }
}
