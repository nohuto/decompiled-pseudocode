/*
 * XREFs of ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C0339ABC
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0186C8C (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DxgkSharedProtectedSessionObDeleteProcedure@@YAXPEAX@Z @ 0x1C031BAB0 (-DxgkSharedProtectedSessionObDeleteProcedure@@YAXPEAX@Z.c)
 *     ?SignalFenceWorkItemRoutine@DXGPROTECTEDSESSION@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C033A0D0 (-SignalFenceWorkItemRoutine@DXGPROTECTEDSESSION@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     DxgkCreateProtectedSession @ 0x1C033A220 (DxgkCreateProtectedSession.c)
 *     DxgkDestroyProtectedSession @ 0x1C033AF70 (DxgkDestroyProtectedSession.c)
 *     DxgkOpenProtectedSessionFromNtHandle @ 0x1C033B2D0 (DxgkOpenProtectedSessionFromNtHandle.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Close@DXGPROTECTEDSESSION@@QEAA_NI@Z @ 0x1C03395AC (-Close@DXGPROTECTEDSESSION@@QEAA_NI@Z.c)
 *     ?DestroyProtectedSession@ADAPTER_DISPLAY@@QEAAXPEAVDXGPROTECTEDSESSION@@@Z @ 0x1C03398D8 (-DestroyProtectedSession@ADAPTER_DISPLAY@@QEAAXPEAVDXGPROTECTEDSESSION@@@Z.c)
 */

__int64 __fastcall DXGPROTECTEDSESSION::DestroyProtectedSession(struct DXGPROTECTEDSESSION *a1, unsigned int a2)
{
  __int64 v4; // r8
  __int64 v5; // r9

  if ( DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a1 + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 1091LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!pThis->GetAdapter()->IsCoreResourceSharedOwner()",
      1091LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a1 + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 1092LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!pThis->GetAdapter()->IsCoreResourceExclusiveOwner()",
      1092LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( DXGPROTECTEDSESSION::Close(a1, a2, v4, v5) )
    ADAPTER_DISPLAY::DestroyProtectedSession(*((DXGADAPTER ***)a1 + 2), a1);
  return 0LL;
}
