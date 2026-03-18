/*
 * XREFs of ?DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C01C486C
 * Callers:
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01C44E0 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000F08C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0010B98 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C00114BC (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C01AA388 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C01BC9FC (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C01C4A20 (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 */

__int64 __fastcall DmmUpdateGammaRampOnVidPnSource(DXGADAPTER *a1, unsigned int a2, const struct DXGK_GAMMA_RAMP *a3)
{
  unsigned int v3; // edi
  __int64 v4; // r15
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r13
  ReferenceCounted *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  DMMVIDPNTOPOLOGY **v15; // rbp
  __int64 i; // rbx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  DMMVIDPNPRESENTPATH *Path; // r14
  int updated; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v25; // rax
  __int64 v26; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v27; // [rsp+90h] [rbp+8h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a2;
  v6 = (__int64)a1;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    WdLogSingleEntry0(1LL);
  v7 = *(_QWORD *)(v6 + 2792);
  if ( !v7 )
  {
    WdLogSingleEntry1(2LL, v6);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      v6,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v8 = *(_QWORD *)(v7 + 104);
  if ( v8 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v26, v8);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 112) + 72LL));
    v9 = *(_QWORD *)(v8 + 112);
    v10 = IndexedSet<DMMVIDPNSOURCE>::FindById(v9, v4);
    v11 = v10;
    if ( v10 )
    {
      if ( a3 )
        _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
      v12 = *(ReferenceCounted **)(v10 + 128);
      if ( v12 )
        ReferenceCounted::Release(v12);
      *(_QWORD *)(v11 + 128) = a3;
      if ( v9 )
        ReferenceCounted::Release((ReferenceCounted *)(v9 + 64));
      v13 = *(_QWORD *)(v8 + 128);
      v28 = 0LL;
      if ( v13 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 32));
        v14 = *(_QWORD *)(v8 + 128);
      }
      else
      {
        v14 = 0LL;
      }
      auto_rc<DMMVIDPN const>::reset(&v28, v14);
      if ( v28 )
      {
        v15 = (DMMVIDPNTOPOLOGY **)(v28 + 96);
        for ( i = 0LL; ; ++i )
        {
          v27 = -1;
          v17 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v15, v4, i, &v27);
          v6 = v17;
          if ( v17 < 0 )
            break;
          if ( v27 == -1 )
          {
            auto_rc<DMMVIDPN const>::reset(&v28, 0LL);
            goto LABEL_25;
          }
          Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)v15, v4, v27);
          if ( !Path )
            WdLogSingleEntry0(1LL);
          updated = DMMVIDPNPRESENTPATH::UpdateGammaRamp(Path);
          LODWORD(v6) = updated;
          if ( updated < 0 )
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v23, v22) + 24) = updated;
            goto LABEL_35;
          }
          LODWORD(v6) = DMMVIDPNPRESENTPATH::SetDriverGammaRamp(Path, 0LL);
          if ( (int)v6 < 0 )
            goto LABEL_35;
        }
        v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v18);
        v25[3] = i;
        v25[4] = v4;
        v25[5] = v15;
        v25[6] = v6;
      }
      else
      {
        WdLogSingleEntry1(2LL, v6);
        LODWORD(v6) = -1071774884;
      }
LABEL_35:
      auto_rc<DMMVIDPN const>::reset(&v28, 0LL);
      v3 = v6;
    }
    else
    {
      WdLogSingleEntry1(2LL, v4);
      if ( v9 )
        ReferenceCounted::Release((ReferenceCounted *)(v9 + 64));
      v3 = -1071774972;
    }
LABEL_25:
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v26 + 40));
    return v3;
  }
  else
  {
    WdLogSingleEntry1(2LL, v6);
    return 3223192373LL;
  }
}
