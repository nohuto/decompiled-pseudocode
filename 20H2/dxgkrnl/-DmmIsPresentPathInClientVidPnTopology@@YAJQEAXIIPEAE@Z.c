/*
 * XREFs of ?DmmIsPresentPathInClientVidPnTopology@@YAJQEAXIIPEAE@Z @ 0x1C011E5F4
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C011D760 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00054DC (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0007C30 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007EFC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 */

__int64 __fastcall DmmIsPresentPathInClientVidPnTopology(DXGADAPTER *a1, __int64 a2, int a3, bool *a4)
{
  bool v4; // bl
  int v7; // r15d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v22; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  v7 = a2;
  if ( !a4 )
  {
    v17 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v17 + 24) = 0LL;
    WdLogEvent5_WdError(v17);
    return 3221225485LL;
  }
  *a4 = 0;
  if ( !a1 )
  {
    v18 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v18 + 24) = 0LL;
LABEL_15:
    WdLogEvent5_WdError(v18);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v10, v9);
    WdLogEvent5_WdAssertion(v19);
  }
  v11 = *((_QWORD *)a1 + 337);
  if ( !v11 )
  {
    v18 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v18 + 24) = a1;
    goto LABEL_15;
  }
  v12 = *(_QWORD *)(v11 + 88);
  if ( v12 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v21, v12);
    v13 = *(_QWORD *)(v12 + 88);
    if ( v13 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 32));
      v14 = *(_QWORD *)(v12 + 88);
      v22 = v14;
      if ( v14 )
        v4 = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(v14 + 96), v7, a3) != 0LL;
    }
    else
    {
      v22 = 0LL;
    }
    *a4 = v4;
    auto_rc<DMMVIDPN const>::reset(&v22, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v21[0] + 40), v15);
    return 0LL;
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v20 + 24) = a1;
    WdLogEvent5_WdError(v20);
    return 3223192373LL;
  }
}
