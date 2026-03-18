/*
 * XREFs of ?DmmIsSourcePresentedOnClientVidPnAnalogTvOut@@YAJQEAXIPEAEPEAI@Z @ 0x1C039C1C8
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
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C01AA388 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmIsSourcePresentedOnClientVidPnAnalogTvOut(
        DXGADAPTER *a1,
        unsigned int a2,
        unsigned __int8 *a3,
        unsigned int *a4)
{
  unsigned int v4; // edi
  __int64 v5; // r12
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rsi
  DMMVIDPNTOPOLOGY **v15; // r15
  __int64 v16; // rbx
  __int64 i; // rbp
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rsi
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  _QWORD *v23; // rax
  __int64 v24; // [rsp+50h] [rbp-38h] BYREF
  __int64 v25; // [rsp+58h] [rbp-30h] BYREF
  unsigned int v26; // [rsp+A8h] [rbp+20h] BYREF

  v4 = 0;
  v5 = a2;
  if ( !a4 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
  *a4 = -1;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    WdLogSingleEntry0(1LL);
  v10 = *((_QWORD *)a1 + 349);
  if ( !v10 )
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
  v11 = *(_QWORD *)(v10 + 104);
  if ( v11 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v25, v11);
    v12 = *(_QWORD *)(v11 + 128);
    v24 = 0LL;
    if ( v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 32));
      v13 = *(_QWORD *)(v11 + 128);
    }
    else
    {
      v13 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v24, v13);
    if ( v24 )
    {
      v15 = (DMMVIDPNTOPOLOGY **)(v24 + 96);
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 120) + 72LL));
      v16 = *(_QWORD *)(v11 + 120);
      for ( i = 0LL; ; ++i )
      {
        v26 = -1;
        v18 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v15, v5, i, &v26);
        v14 = v18;
        if ( v18 < 0 )
          break;
        v21 = v26;
        if ( v26 == -1 )
          goto LABEL_21;
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v16, v26);
        if ( TargetById )
        {
          if ( *((_BYTE *)TargetById + 108) )
          {
            *a3 = 1;
            *a4 = v21;
LABEL_21:
            if ( v16 )
              ReferenceCounted::Release((ReferenceCounted *)(v16 + 64));
            goto LABEL_28;
          }
        }
        else
        {
          WdLogSingleEntry2(2LL, v21, v16);
        }
      }
      v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19);
      v23[3] = i;
      v23[4] = v5;
      v23[5] = v15;
      v23[6] = v14;
      if ( v16 )
        ReferenceCounted::Release((ReferenceCounted *)(v16 + 64));
    }
    else
    {
      WdLogSingleEntry1(3LL, a1);
      LODWORD(v14) = -1071774884;
    }
    v4 = v14;
LABEL_28:
    auto_rc<DMMVIDPN const>::reset(&v24, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v25 + 40));
    return v4;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
}
