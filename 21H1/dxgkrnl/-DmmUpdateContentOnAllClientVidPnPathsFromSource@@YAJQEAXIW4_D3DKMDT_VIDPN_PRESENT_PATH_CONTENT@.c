/*
 * XREFs of ?DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C02DA880
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C02902A8 (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000ADD0 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000C5B8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000E170 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C001365C (-SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z.c)
 *     ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00E2410 (-UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C0129B6C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?SetTargetContentType@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C02E4DC0 (-SetTargetContentType@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 */

__int64 __fastcall DmmUpdateContentOnAllClientVidPnPathsFromSource(DXGADAPTER *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r14
  DXGADAPTER *v6; // rdi
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  char **v20; // rbp
  __int64 i; // rsi
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rdi
  __int64 v30; // rax
  int updated; // eax
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v35; // [rsp+60h] [rbp+8h] BYREF
  __int64 v36; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v4 = (unsigned int)a2;
  v6 = a1;
  if ( !a1 )
  {
    v7 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v7 + 24) = 0LL;
LABEL_3:
    WdLogEvent5_WdError(v7);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10, v9);
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = *((_QWORD *)v6 + 334);
  if ( !v12 )
  {
    v7 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v7 + 24) = v6;
    goto LABEL_3;
  }
  v13 = *(_QWORD *)(v12 + 88);
  if ( v13 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v34, v13);
    v15 = *(_QWORD *)(v13 + 88);
    v36 = 0LL;
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 32));
      v16 = *(_QWORD *)(v13 + 88);
    }
    else
    {
      v16 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v36, v16);
    if ( v36 )
    {
      v20 = (char **)(v36 + 96);
      for ( i = 0LL; ; ++i )
      {
        v35 = -1;
        v22 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v20, (unsigned int)v4, i, &v35);
        v6 = (DXGADAPTER *)v22;
        if ( v22 < 0 )
          break;
        if ( v35 == -1 )
          goto LABEL_27;
        Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)v20, v4, v35);
        if ( !Path )
        {
          v30 = WdLogNewEntry5_WdAssertion(v28, v27);
          WdLogEvent5_WdAssertion(v30);
        }
        DMMVIDPNPRESENTPATH::SetContentType(Path, a3);
        if ( *((_BYTE *)Path + 110) )
          updated = DMMVIDPNPRESENTPATH::SetTargetContentType(Path);
        else
          updated = DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath(Path, 0LL);
        LODWORD(v6) = updated;
        if ( updated < 0 )
          goto LABEL_26;
      }
      v32 = (_QWORD *)WdLogNewEntry5_WdTrace(v24, v23, v25, v26);
      v32[3] = i;
      v32[4] = v4;
      v32[5] = v20;
      v32[6] = v6;
    }
    else
    {
      v19 = WdLogNewEntry5_WdError(v18, v17);
      *(_QWORD *)(v19 + 24) = v6;
      WdLogEvent5_WdError(v19);
      LODWORD(v6) = -1071774884;
    }
LABEL_26:
    v3 = (unsigned int)v6;
LABEL_27:
    auto_rc<DMMVIDPN const>::reset(&v36, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v34[0] + 40), v33);
    return v3;
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v14 + 24) = v6;
    WdLogEvent5_WdError(v14);
    return 3223192373LL;
  }
}
