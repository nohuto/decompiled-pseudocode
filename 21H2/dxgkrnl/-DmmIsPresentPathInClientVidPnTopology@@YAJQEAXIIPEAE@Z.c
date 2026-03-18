/*
 * XREFs of ?DmmIsPresentPathInClientVidPnTopology@@YAJQEAXIIPEAE@Z @ 0x1C01B4798
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C01B3730 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000F08C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0010B98 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 */

__int64 __fastcall DmmIsPresentPathInClientVidPnTopology(DXGADAPTER *a1, int a2, int a3, bool *a4)
{
  bool v4; // bl
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v14; // [rsp+50h] [rbp-28h] BYREF
  __int64 v15; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0;
  if ( !a4 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
  *a4 = 0;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    WdLogSingleEntry0(1LL);
  v9 = *((_QWORD *)a1 + 349);
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, a1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v10 = *(_QWORD *)(v9 + 104);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v14, v10);
    v11 = *(_QWORD *)(v10 + 128);
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 32));
      v12 = *(_QWORD *)(v10 + 128);
      v15 = v12;
      if ( v12 )
        v4 = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(v12 + 96), a2, a3) != 0LL;
    }
    else
    {
      v15 = 0LL;
    }
    *a4 = v4;
    auto_rc<DMMVIDPN const>::reset(&v15, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v14 + 40));
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
}
