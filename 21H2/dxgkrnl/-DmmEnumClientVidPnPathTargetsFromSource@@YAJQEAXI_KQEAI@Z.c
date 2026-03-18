/*
 * XREFs of ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C01A30A0
 * Callers:
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C015B6D4 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C01A24CC (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z @ 0x1C01A9974 (-CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C01B3CC0 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1C01C414C (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01C44E0 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C01D476C (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01E17E0 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkIsSourceInHardwareClone @ 0x1C01E7D30 (DxgkIsSourceInHardwareClone.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C02D0490 (DxgkAdjustFullscreenGamma.c)
 *     DxgkSetGammaRamp @ 0x1C02EAB70 (DxgkSetGammaRamp.c)
 *     DxgkDispMgrSourceOperation @ 0x1C02F49D0 (DxgkDispMgrSourceOperation.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000F08C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 */

__int64 __fastcall DmmEnumClientVidPnPathTargetsFromSource(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int *const a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r15
  __int64 v8; // rsi
  __int64 v9; // rsi
  struct _KTHREAD **v10; // r13
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rsi
  unsigned int v16; // ebp
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v20; // rax
  __int64 v21; // rdi
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rax
  __int64 v27; // [rsp+50h] [rbp-38h] BYREF

  v4 = 0;
  v5 = a2;
  if ( !a4 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  v8 = a1[349];
  if ( !v8 )
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
  v9 = *(_QWORD *)(v8 + 104);
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
  v10 = (struct _KTHREAD **)(v9 + 40);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v9 + 40));
  v13 = *(_QWORD *)(v9 + 128);
  if ( v13 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 32));
    v14 = *(_QWORD *)(v9 + 128);
    v27 = v14;
    if ( v14 )
    {
      v15 = v14 + 96;
      v16 = -1;
      v17 = 0LL;
      v18 = *(_QWORD *)(v14 + 120);
      if ( v18 == v14 + 120 )
        goto LABEL_22;
      v12 = (_QWORD *)(v18 - 8);
      while ( v12 )
      {
        if ( *(_DWORD *)(v12[11] + 24LL) == (_DWORD)v5 )
        {
          if ( v17 == a3 )
          {
            v16 = *(_DWORD *)(v12[12] + 24LL);
LABEL_13:
            ReferenceCounted::Release((ReferenceCounted *)(v14 + 24));
            *a4 = v16;
            goto LABEL_14;
          }
          ++v17;
        }
        v20 = v12[1];
        v12 = (_QWORD *)(v20 - 8);
        if ( v20 == v14 + 120 )
          v12 = 0LL;
      }
      if ( v18 == 8 )
      {
LABEL_22:
        v21 = v5;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v17) + 24) = v15;
      }
      else
      {
        v21 = v5;
        if ( v17 )
        {
          v22 = (_QWORD *)WdLogNewEntry5_WdTrace(0LL, v17);
          v22[3] = v15;
          v22[4] = v5;
          v22[5] = a3;
          goto LABEL_13;
        }
        v26 = WdLogNewEntry5_WdTrace(0LL, 0LL);
        *(_QWORD *)(v26 + 24) = v5;
        *(_QWORD *)(v26 + 32) = v15;
      }
      v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v24, v23);
      v4 = -1071774919;
      v25[3] = a3;
      v25[4] = v21;
      v25[5] = v15;
      v25[6] = -1071774919LL;
      goto LABEL_24;
    }
  }
  else
  {
    v27 = 0LL;
  }
  v4 = -1071774884;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11) + 24) = a1;
LABEL_24:
  auto_rc<DMMVIDPN const>::reset(&v27, 0LL);
LABEL_14:
  DXGFASTMUTEX::Release(v10);
  return v4;
}
