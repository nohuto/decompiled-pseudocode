/*
 * XREFs of ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C0129954
 * Callers:
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00D5870 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z @ 0x1C00E80B4 (-CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C0126C7C (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C0128708 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C012A464 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C012AE30 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C0134CF4 (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1C01527B0 (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 *     DxgkIsSourceInHardwareClone @ 0x1C0157B90 (DxgkIsSourceInHardwareClone.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C021E6F0 (DxgkAdjustFullscreenGamma.c)
 *     DxgkSetGammaRamp @ 0x1C0255830 (DxgkSetGammaRamp.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000ADD0 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000C5B8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C0129B6C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmEnumClientVidPnPathTargetsFromSource(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int *const a4)
{
  __int64 v4; // r14
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // [rsp+20h] [rbp-28h] BYREF
  __int64 v29[4]; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v30; // [rsp+68h] [rbp+20h] BYREF

  v4 = (unsigned int)a2;
  v7 = a1;
  if ( !a4 )
  {
    v25 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v25 + 24) = 0LL;
    WdLogEvent5_WdError(v25);
    return 3221225485LL;
  }
  if ( !a1 )
  {
    v26 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v26 + 24) = 0LL;
LABEL_16:
    WdLogEvent5_WdError(v26);
    return 3223191554LL;
  }
  v8 = a1[334];
  if ( !v8 )
  {
    v26 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v26 + 24) = v7;
    goto LABEL_16;
  }
  v9 = *(_QWORD *)(v8 + 88);
  if ( v9 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v29, v9);
    v10 = *(_QWORD *)(v9 + 88);
    v30 = -1;
    v28 = 0LL;
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 32));
      v11 = *(_QWORD *)(v9 + 88);
    }
    else
    {
      v11 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v28, v11);
    if ( v28 )
    {
      v16 = v28 + 96;
      v17 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((DMMVIDPNTOPOLOGY *)(v28 + 96), v4, a3, &v30);
      v7 = (_QWORD *)v17;
      if ( v17 >= 0 )
      {
        auto_rc<DMMVIDPN const>::reset(&v28, 0LL);
        LODWORD(v7) = 0;
        *a4 = v30;
LABEL_10:
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v29[0] + 40), v22);
        return (unsigned int)v7;
      }
      v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v18, v20, v21);
      v24[3] = a3;
      v24[4] = v4;
      v24[5] = v16;
      v24[6] = v7;
    }
    else
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v14, v15) + 24) = v7;
      LODWORD(v7) = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v28, 0LL);
    goto LABEL_10;
  }
  v27 = WdLogNewEntry5_WdError(a1, a2);
  *(_QWORD *)(v27 + 24) = v7;
  WdLogEvent5_WdError(v27);
  return 3223192373LL;
}
