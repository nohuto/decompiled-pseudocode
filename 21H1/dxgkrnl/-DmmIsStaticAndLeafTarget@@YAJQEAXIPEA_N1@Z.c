/*
 * XREFs of ?DmmIsStaticAndLeafTarget@@YAJQEAXIPEA_N1@Z @ 0x1C01500EC
 * Callers:
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C015005C (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDP.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000BDF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000C5B8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000F360 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?IsLeafTarget@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C0019184 (-IsLeafTarget@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 */

__int64 __fastcall DmmIsStaticAndLeafTarget(DXGADAPTER *a1, __int64 a2, bool *a3, bool *a4)
{
  __int64 v4; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rbx
  DMMVIDEOPRESENTTARGET *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  unsigned int v17; // edi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // [rsp+50h] [rbp+18h] BYREF

  v4 = (unsigned int)a2;
  if ( !a3 || !a4 )
  {
    v27 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v27 + 24) = a3;
    *(_QWORD *)(v27 + 32) = a4;
    WdLogEvent5_WdError(v27);
    return 3221225485LL;
  }
  *a3 = 0;
  *a4 = 0;
  if ( !a1 )
  {
    v19 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v19 + 24) = 0LL;
LABEL_15:
    WdLogEvent5_WdError(v19);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v20);
  }
  v10 = *((_QWORD *)a1 + 334);
  if ( !v10 )
  {
    v19 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v19 + 24) = a1;
    goto LABEL_15;
  }
  v11 = *(_QWORD *)(v10 + 88);
  if ( v11 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v28, v11);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 80) + 72LL));
    v12 = *(_QWORD *)(v11 + 80);
    v13 = (DMMVIDEOPRESENTTARGET *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v12, v4);
    if ( v13 )
    {
      *a3 = *((_QWORD *)v13 + 59) == 0LL;
      *a4 = DMMVIDEOPRESENTTARGET::IsLeafTarget(v13);
      v17 = 0;
    }
    else
    {
      v24 = WdLogNewEntry5_WdWarning(0LL, v14, v15);
      *(_QWORD *)(v24 + 24) = v4;
      v25 = *(_QWORD *)(v11 + 8);
      if ( !v25 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v23, v22);
        WdLogEvent5_WdAssertion(v26);
        v25 = *(_QWORD *)(v11 + 8);
      }
      *(_QWORD *)(v24 + 32) = *(_QWORD *)(v25 + 16);
      WdLogEvent5_WdWarning(v24);
      v17 = -1071774971;
    }
    if ( v12 )
      ReferenceCounted::Release((ReferenceCounted *)(v12 + 64), v16);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v28 + 40), v16);
    return v17;
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v21 + 24) = a1;
    WdLogEvent5_WdError(v21);
    return 3223192373LL;
  }
}
