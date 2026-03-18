/*
 * XREFs of ?DmmIsSourcePresentedOnClientVidPnAnalogTvOut@@YAJQEAXIPEAEPEAI@Z @ 0x1C02DD788
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C0294798 (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005424 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00054DC (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0007B74 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007EFC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C0122764 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmIsSourcePresentedOnClientVidPnAnalogTvOut(
        DXGADAPTER *a1,
        __int64 a2,
        unsigned __int8 *a3,
        unsigned int *a4)
{
  unsigned int v4; // edi
  __int64 v5; // r12
  __int64 v9; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rsi
  char **v25; // r15
  __int64 v26; // rbx
  __int64 i; // rbp
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rsi
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // [rsp+20h] [rbp-38h] BYREF
  __int64 v41[6]; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v42; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  v5 = (unsigned int)a2;
  if ( !a4 )
  {
    v9 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v9 + 24) = 0LL;
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
  *a4 = -1;
  if ( !a1 )
  {
    v11 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v11 + 24) = 0LL;
LABEL_5:
    WdLogEvent5_WdError(v11);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13, v12);
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = *((_QWORD *)a1 + 337);
  if ( !v15 )
  {
    v11 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v11 + 24) = a1;
    goto LABEL_5;
  }
  v16 = *(_QWORD *)(v15 + 88);
  if ( v16 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v41, v16);
    v18 = *(_QWORD *)(v16 + 88);
    v40 = 0LL;
    if ( v18 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v18 + 32));
      v19 = *(_QWORD *)(v16 + 88);
    }
    else
    {
      v19 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v40, v19);
    if ( v40 )
    {
      v25 = (char **)(v40 + 96);
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v16 + 80) + 72LL));
      v26 = *(_QWORD *)(v16 + 80);
      for ( i = 0LL; ; ++i )
      {
        v42 = -1;
        v28 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v25, (unsigned int)v5, i, &v42);
        v24 = v28;
        if ( v28 < 0 )
          break;
        v33 = v42;
        if ( v42 == -1 )
          goto LABEL_23;
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v26, v42);
        if ( TargetById )
        {
          if ( *((_BYTE *)TargetById + 104) )
          {
            *a3 = 1;
            *a4 = v33;
LABEL_23:
            if ( v26 )
              ReferenceCounted::Release((ReferenceCounted *)(v26 + 64), v29);
            goto LABEL_30;
          }
        }
        else
        {
          v36 = WdLogNewEntry5_WdError(v35, v29);
          *(_QWORD *)(v36 + 24) = v33;
          *(_QWORD *)(v36 + 32) = v26;
          WdLogEvent5_WdError(v36);
        }
      }
      v37 = (_QWORD *)WdLogNewEntry5_WdTrace(v30, v29, v31, v32);
      v37[3] = i;
      v37[4] = v5;
      v37[5] = v25;
      v37[6] = v24;
      if ( v26 )
        ReferenceCounted::Release((ReferenceCounted *)(v26 + 64), v38);
    }
    else
    {
      v23 = WdLogNewEntry5_WdWarning(v21, v20, v22);
      *(_QWORD *)(v23 + 24) = a1;
      WdLogEvent5_WdWarning(v23);
      LODWORD(v24) = -1071774884;
    }
    v4 = v24;
LABEL_30:
    auto_rc<DMMVIDPN const>::reset(&v40, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v41[0] + 40), v39);
    return v4;
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v17 + 24) = a1;
    WdLogEvent5_WdError(v17);
    return 3223192373LL;
  }
}
