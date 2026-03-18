/*
 * XREFs of ?DmmGetPathContentFromClientVidPnSource@@YAJQEAXIPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C039BBE0
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C0384354 (DxgkHandleVideoParameters.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000F08C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000F0C8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0010B98 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C01AA388 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmGetPathContentFromClientVidPnSource(
        DXGADAPTER *a1,
        unsigned int a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT *a3)
{
  unsigned int v3; // edi
  unsigned int v5; // r15d
  __int64 v8; // rsi
  __int64 v9; // rsi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT v10; // r12d
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rbp
  __int64 v15; // rbx
  DMMVIDPNTOPOLOGY **v16; // r13
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rsi
  struct DMMVIDPNPRESENTPATH *Path; // r15
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  _QWORD *v23; // rax
  __int64 v24[9]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v26; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v27; // [rsp+B8h] [rbp+20h] BYREF

  v3 = 0;
  v5 = a2;
  if ( !a3 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
  *a3 = D3DKMDT_VPPC_UNINITIALIZED;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    WdLogSingleEntry0(1LL);
  v8 = *((_QWORD *)a1 + 349);
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
  if ( v9 )
  {
    v10 = D3DKMDT_VPPC_UNINITIALIZED;
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v24, v9);
    v11 = *(_QWORD *)(v9 + 128);
    v27 = 0LL;
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 32));
      v12 = *(_QWORD *)(v9 + 128);
    }
    else
    {
      v12 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v27, v12);
    if ( v27 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 120) + 72LL));
      v14 = 0LL;
      v15 = *(_QWORD *)(v9 + 120);
      v16 = (DMMVIDPNTOPOLOGY **)(v27 + 96);
      while ( 1 )
      {
        v26 = -1;
        v17 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v16, v5, v14, &v26);
        v13 = v17;
        if ( v17 < 0 )
          break;
        v20 = v26;
        if ( v26 == -1 )
          goto LABEL_23;
        Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)v16, v5, v26);
        if ( !Path )
          WdLogSingleEntry0(1LL);
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v15, v20);
        if ( TargetById )
        {
          if ( *((_BYTE *)TargetById + 108) )
          {
            v10 = *((_DWORD *)Path + 41);
LABEL_23:
            if ( v15 )
              ReferenceCounted::Release((ReferenceCounted *)(v15 + 64));
            auto_rc<DMMVIDPN const>::reset(&v27, 0LL);
            *a3 = v10;
            goto LABEL_31;
          }
        }
        else
        {
          WdLogSingleEntry2(2LL, v20, v15);
        }
        v5 = a2;
        ++v14;
      }
      v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v18);
      v23[3] = v14;
      v23[4] = v5;
      v23[5] = v16;
      v23[6] = v13;
      if ( v15 )
        ReferenceCounted::Release((ReferenceCounted *)(v15 + 64));
    }
    else
    {
      WdLogSingleEntry1(2LL, a1);
      LODWORD(v13) = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v27, 0LL);
    v3 = v13;
LABEL_31:
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v24[0] + 40));
    return v3;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
}
