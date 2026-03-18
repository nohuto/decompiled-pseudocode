/*
 * XREFs of ?DmmUpdateGammaRampOnVidPnTarget@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C01BC8EC
 * Callers:
 *     ?UpdateGammaRampOnVidPnTarget@KernelDriver@@UEAAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C01BC8C0 (-UpdateGammaRampOnVidPnTarget@KernelDriver@@UEAAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000F08C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0010B98 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C01A8564 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C01BC9FC (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 */

__int64 __fastcall DmmUpdateGammaRampOnVidPnTarget(DXGADAPTER *a1, unsigned int a2, const struct DXGK_GAMMA_RAMP *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rbp
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  DMMVIDPNTOPOLOGY *v11; // rdi
  int PathSourceFromTarget; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  DMMVIDPNPRESENTPATH *Path; // rdi
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF
  __int64 v18; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a2;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    WdLogSingleEntry0(1LL);
  v7 = *((_QWORD *)a1 + 349);
  if ( !v7 )
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
  v8 = *(_QWORD *)(v7 + 104);
  if ( v8 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v18, v8);
    v9 = *(_QWORD *)(v8 + 128);
    v17 = 0LL;
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 32));
      v10 = *(_QWORD *)(v8 + 128);
    }
    else
    {
      v10 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v17, v10);
    if ( v17 )
    {
      v11 = (DMMVIDPNTOPOLOGY *)(v17 + 96);
      PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget((DMMVIDPNTOPOLOGY *)(v17 + 96), (unsigned int)v4);
      if ( PathSourceFromTarget == -1 )
      {
        v3 = -1071774919;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v14, v13) + 24) = v4;
      }
      else
      {
        Path = DMMVIDPNTOPOLOGY::FindPath(v11, PathSourceFromTarget, v4);
        if ( !Path )
          WdLogSingleEntry0(1LL);
        DMMVIDPNPRESENTPATH::SetDriverGammaRamp(Path, a3);
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, a1);
      v3 = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v17, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v18 + 40));
    return v3;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
}
