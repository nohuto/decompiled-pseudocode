/*
 * XREFs of ?DmmIsStaticAndLeafTarget@@YAJQEAXIPEA_N1@Z @ 0x1C01E0308
 * Callers:
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C01E0260 (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDP.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000F0FC (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?IsLeafTarget@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C001DCB8 (-IsLeafTarget@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 */

__int64 __fastcall DmmIsStaticAndLeafTarget(DXGADAPTER *a1, unsigned int a2, bool *a3, bool *a4)
{
  __int64 v4; // rbp
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rbx
  DMMVIDEOPRESENTTARGET *v11; // rax
  unsigned int v12; // edi
  __int64 v14; // r8
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF

  v4 = a2;
  if ( !a3 || !a4 )
  {
    WdLogSingleEntry2(2LL, a3, a4);
    return 3221225485LL;
  }
  *a3 = 0;
  *a4 = 0;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    WdLogSingleEntry0(1LL);
  v8 = *((_QWORD *)a1 + 349);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223191554LL;
  }
  v9 = *(_QWORD *)(v8 + 104);
  if ( v9 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v15, v9);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 120) + 72LL));
    v10 = *(_QWORD *)(v9 + 120);
    v11 = (DMMVIDEOPRESENTTARGET *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v10, v4);
    if ( v11 )
    {
      *a3 = *((_QWORD *)v11 + 59) == 0LL;
      *a4 = DMMVIDEOPRESENTTARGET::IsLeafTarget(v11);
      v12 = 0;
    }
    else
    {
      v14 = *(_QWORD *)(v9 + 8);
      if ( !v14 )
      {
        WdLogSingleEntry0(1LL);
        v14 = *(_QWORD *)(v9 + 8);
      }
      WdLogSingleEntry2(3LL, v4, *(_QWORD *)(v14 + 16));
      v12 = -1071774971;
    }
    if ( v10 )
      ReferenceCounted::Release((ReferenceCounted *)(v10 + 64));
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v15 + 40));
    return v12;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
}
