/*
 * XREFs of ?DmmUpdateGammaRampOnVidPnTarget@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00E2290
 * Callers:
 *     ?_SetColorSpaceTransform@DXGMONITOR@@AEAAJKPEAX@Z @ 0x1C00DF944 (-_SetColorSpaceTransform@DXGMONITOR@@AEAAJKPEAX@Z.c)
 *     ?_NotifyDXGIGammaRampChange@DXGMONITOR@@QEAAJXZ @ 0x1C00E0080 (-_NotifyDXGIGammaRampChange@DXGMONITOR@@QEAAJXZ.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000ADD0 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000C5B8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000E170 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00E2390 (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C011DA1C (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

__int64 __fastcall DmmUpdateGammaRampOnVidPnTarget(DXGADAPTER *a1, __int64 a2, const struct DXGK_GAMMA_RAMP *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  DMMVIDPNTOPOLOGY *v15; // rdi
  int PathSourceFromTarget; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  DMMVIDPNPRESENTPATH *Path; // rdi
  __int64 v24; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // [rsp+40h] [rbp+8h] BYREF
  __int64 v32; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v4 = (unsigned int)a2;
  if ( !a1 )
  {
    v26 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v26 + 24) = 0LL;
LABEL_16:
    WdLogEvent5_WdError(v26);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v27);
  }
  v9 = *((_QWORD *)a1 + 334);
  if ( !v9 )
  {
    v26 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v26 + 24) = a1;
    goto LABEL_16;
  }
  v10 = *(_QWORD *)(v9 + 88);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v32, v10);
    v11 = *(_QWORD *)(v10 + 88);
    v31 = 0LL;
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 32));
      v12 = *(_QWORD *)(v10 + 88);
    }
    else
    {
      v12 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v31, v12);
    if ( v31 )
    {
      v15 = (DMMVIDPNTOPOLOGY *)(v31 + 96);
      PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget((DMMVIDPNTOPOLOGY *)(v31 + 96), v4);
      if ( PathSourceFromTarget == -1 )
      {
        v3 = -1071774919;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v18, v17, v19, v20) + 24) = v4;
      }
      else
      {
        Path = DMMVIDPNTOPOLOGY::FindPath(v15, PathSourceFromTarget, v4);
        if ( !Path )
        {
          v30 = WdLogNewEntry5_WdAssertion(v22, v21);
          WdLogEvent5_WdAssertion(v30);
        }
        DMMVIDPNPRESENTPATH::SetDriverGammaRamp(Path, a3);
      }
    }
    else
    {
      v29 = WdLogNewEntry5_WdError(v14, v13);
      *(_QWORD *)(v29 + 24) = a1;
      WdLogEvent5_WdError(v29);
      v3 = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v31, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v32 + 40), v24);
    return v3;
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v28 + 24) = a1;
    WdLogEvent5_WdError(v28);
    return 3223192373LL;
  }
}
