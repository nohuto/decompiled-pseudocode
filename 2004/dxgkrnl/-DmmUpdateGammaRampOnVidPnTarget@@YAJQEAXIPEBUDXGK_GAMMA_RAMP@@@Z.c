/*
 * XREFs of ?DmmUpdateGammaRampOnVidPnTarget@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C013B614
 * Callers:
 *     ?_SetColorSpaceTransform@DXGMONITOR@@AEAAJKPEAX@Z @ 0x1C013960C (-_SetColorSpaceTransform@DXGMONITOR@@AEAAJKPEAX@Z.c)
 *     ?_NotifyDXGIGammaRampChange@DXGMONITOR@@QEAAJXZ @ 0x1C013A158 (-_NotifyDXGIGammaRampChange@DXGMONITOR@@QEAAJXZ.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00054DC (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0007C30 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007EFC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C010F05C (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C013B714 (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
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
  char *v15; // r8
  DMMVIDPNTOPOLOGY *v16; // rdi
  int PathSourceFromTarget; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  DMMVIDPNPRESENTPATH *Path; // rdi
  __int64 v25; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // [rsp+40h] [rbp+8h] BYREF
  __int64 v33; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v4 = (unsigned int)a2;
  if ( !a1 )
  {
    v27 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v27 + 24) = 0LL;
LABEL_16:
    WdLogEvent5_WdError(v27);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v28);
  }
  v9 = *((_QWORD *)a1 + 337);
  if ( !v9 )
  {
    v27 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v27 + 24) = a1;
    goto LABEL_16;
  }
  v10 = *(_QWORD *)(v9 + 88);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v33, v10);
    v11 = *(_QWORD *)(v10 + 88);
    v32 = 0LL;
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 32));
      v12 = *(_QWORD *)(v10 + 88);
    }
    else
    {
      v12 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v32, v12);
    if ( v32 )
    {
      v16 = (DMMVIDPNTOPOLOGY *)(v32 + 96);
      PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
                               (DMMVIDPNTOPOLOGY *)(v32 + 96),
                               (unsigned int)v4,
                               v15);
      if ( PathSourceFromTarget == -1 )
      {
        v3 = -1071774919;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v19, v18, v20, v21) + 24) = v4;
      }
      else
      {
        Path = DMMVIDPNTOPOLOGY::FindPath(v16, PathSourceFromTarget, v4);
        if ( !Path )
        {
          v31 = WdLogNewEntry5_WdAssertion(v23, v22);
          WdLogEvent5_WdAssertion(v31);
        }
        DMMVIDPNPRESENTPATH::SetDriverGammaRamp(Path, a3);
      }
    }
    else
    {
      v30 = WdLogNewEntry5_WdError(v14, v13);
      *(_QWORD *)(v30 + 24) = a1;
      WdLogEvent5_WdError(v30);
      v3 = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v32, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v33 + 40), v25);
    return v3;
  }
  else
  {
    v29 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v29 + 24) = a1;
    WdLogEvent5_WdError(v29);
    return 3223192373LL;
  }
}
