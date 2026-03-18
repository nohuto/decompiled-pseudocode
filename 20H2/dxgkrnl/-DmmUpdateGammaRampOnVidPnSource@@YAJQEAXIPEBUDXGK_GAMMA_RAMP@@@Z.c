/*
 * XREFs of ?DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C013911C
 * Callers:
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0138940 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005424 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00054DC (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0007C30 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007EFC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTSOURCE@@@@QEBAPEAVDMMVIDEOPRESENTSOURCE@@I@Z @ 0x1C000B70C (-FindById@-$IndexedSet@VDMMVIDEOPRESENTSOURCE@@@@QEBAPEAVDMMVIDEOPRESENTSOURCE@@I@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C01215E4 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C013A564 (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C013AA88 (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 */

__int64 __fastcall DmmUpdateGammaRampOnVidPnSource(DXGADAPTER *a1, __int64 a2, const struct DXGK_GAMMA_RAMP *a3)
{
  unsigned int v3; // edi
  __int64 v4; // r15
  DXGADAPTER *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r13
  ReferenceCounted *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  char **v21; // rbp
  __int64 i; // rbx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  DMMVIDPNPRESENTPATH *Path; // r14
  int updated; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v46; // [rsp+60h] [rbp+8h] BYREF
  __int64 v47; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v4 = (unsigned int)a2;
  v6 = a1;
  if ( !a1 )
  {
    v38 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v38 + 24) = 0LL;
LABEL_28:
    WdLogEvent5_WdError(v38);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v39 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v39);
  }
  v9 = *((_QWORD *)v6 + 337);
  if ( !v9 )
  {
    v38 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v38 + 24) = v6;
    goto LABEL_28;
  }
  v10 = *(_QWORD *)(v9 + 88);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v45, v10);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v10 + 72) + 72LL));
    v11 = *(_QWORD *)(v10 + 72);
    v12 = IndexedSet<DMMVIDEOPRESENTSOURCE>::FindById(v11, v4);
    v15 = v12;
    if ( v12 )
    {
      if ( a3 )
        _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
      v16 = *(ReferenceCounted **)(v12 + 128);
      if ( v16 )
        ReferenceCounted::Release(v16, v13);
      *(_QWORD *)(v15 + 128) = a3;
      if ( v11 )
        ReferenceCounted::Release((ReferenceCounted *)(v11 + 64), v13);
      v17 = *(_QWORD *)(v10 + 88);
      v47 = 0LL;
      if ( v17 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v17 + 32));
        v18 = *(_QWORD *)(v10 + 88);
      }
      else
      {
        v18 = 0LL;
      }
      auto_rc<DMMVIDPN const>::reset(&v47, v18);
      if ( v47 )
      {
        v21 = (char **)(v47 + 96);
        for ( i = 0LL; ; ++i )
        {
          v46 = -1;
          v23 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v21, (unsigned int)v4, i, &v46);
          v6 = (DXGADAPTER *)v23;
          if ( v23 < 0 )
            break;
          if ( v46 == -1 )
          {
            auto_rc<DMMVIDPN const>::reset(&v47, 0LL);
            goto LABEL_25;
          }
          Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)v21, v4, v46);
          if ( !Path )
          {
            v43 = WdLogNewEntry5_WdAssertion(v29, v28);
            WdLogEvent5_WdAssertion(v43);
          }
          updated = DMMVIDPNPRESENTPATH::UpdateGammaRamp(Path);
          LODWORD(v6) = updated;
          if ( updated < 0 )
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v33, v32, v34, v35) + 24) = updated;
            goto LABEL_37;
          }
          LODWORD(v6) = DMMVIDPNPRESENTPATH::SetDriverGammaRamp(Path, 0LL);
          if ( (int)v6 < 0 )
            goto LABEL_37;
        }
        v44 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v24, v26, v27);
        v44[3] = i;
        v44[4] = v4;
        v44[5] = v21;
        v44[6] = v6;
      }
      else
      {
        v42 = WdLogNewEntry5_WdError(v20, v19);
        *(_QWORD *)(v42 + 24) = v6;
        WdLogEvent5_WdError(v42);
        LODWORD(v6) = -1071774884;
      }
LABEL_37:
      auto_rc<DMMVIDPN const>::reset(&v47, 0LL);
      v3 = (unsigned int)v6;
    }
    else
    {
      v41 = WdLogNewEntry5_WdError(v14, v13);
      *(_QWORD *)(v41 + 24) = v4;
      WdLogEvent5_WdError(v41);
      if ( v11 )
        ReferenceCounted::Release((ReferenceCounted *)(v11 + 64), v36);
      v3 = -1071774972;
    }
LABEL_25:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v45[0] + 40), v36);
    return v3;
  }
  else
  {
    v40 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v40 + 24) = v6;
    WdLogEvent5_WdError(v40);
    return 3223192373LL;
  }
}
