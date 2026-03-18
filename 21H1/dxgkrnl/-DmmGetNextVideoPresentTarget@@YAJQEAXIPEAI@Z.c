/*
 * XREFs of ?DmmGetNextVideoPresentTarget@@YAJQEAXIPEAI@Z @ 0x1C014DE4C
 * Callers:
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C0113ED0 (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 *     MonitorRebuildMonitorModeListCache @ 0x1C02EF8FC (MonitorRebuildMonitorModeListCache.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000BDF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000C5B8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000F2C0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000F32C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 */

__int64 __fastcall DmmGetNextVideoPresentTarget(DXGADAPTER *a1, __int64 a2, unsigned int *a3)
{
  unsigned int v4; // ebp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdx
  _QWORD *v11; // rbx
  _QWORD *v12; // rcx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rax
  unsigned int v14; // edi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v21; // [rsp+40h] [rbp+18h] BYREF

  v4 = a2;
  if ( !a3 )
  {
    v16 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v16 + 24) = 0LL;
    WdLogEvent5_WdError(v16);
    return 3221225485LL;
  }
  *a3 = -1;
  if ( !a1 )
  {
    v17 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v17 + 24) = 0LL;
LABEL_20:
    WdLogEvent5_WdError(v17);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v18);
  }
  v8 = *((_QWORD *)a1 + 334);
  if ( !v8 )
  {
    v17 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v17 + 24) = a1;
    goto LABEL_20;
  }
  v9 = *(_QWORD *)(v8 + 88);
  if ( v9 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v21, v9);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 80) + 72LL));
    v11 = *(_QWORD **)(v9 + 80);
    if ( v4 == -1 )
    {
      v12 = (_QWORD *)v11[3];
      if ( v12 == v11 + 3 )
        NextTarget = 0LL;
      else
        NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v12 - 1);
    }
    else
    {
      TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(*(DMMVIDEOPRESENTTARGETSET **)(v9 + 80), v4);
      NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v11, TargetById);
    }
    if ( NextTarget )
    {
      v14 = 0;
      *a3 = *((_DWORD *)NextTarget + 6);
    }
    else
    {
      v14 = -1073741275;
    }
    if ( v11 )
      ReferenceCounted::Release((ReferenceCounted *)(v11 + 8), v10);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v21 + 40), v10);
    return v14;
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v19 + 24) = a1;
    WdLogEvent5_WdError(v19);
    return 3223192373LL;
  }
}
