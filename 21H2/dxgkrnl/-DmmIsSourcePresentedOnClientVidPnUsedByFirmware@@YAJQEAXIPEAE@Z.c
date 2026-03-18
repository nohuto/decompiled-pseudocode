/*
 * XREFs of ?DmmIsSourcePresentedOnClientVidPnUsedByFirmware@@YAJQEAXIPEAE@Z @ 0x1C01E37DC
 * Callers:
 *     DxgkIsBootPrimarySource @ 0x1C01E3720 (DxgkIsBootPrimarySource.c)
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

__int64 __fastcall DmmIsSourcePresentedOnClientVidPnUsedByFirmware(
        DXGADAPTER *a1,
        unsigned int a2,
        unsigned __int8 *a3)
{
  unsigned int v3; // edi
  __int64 v4; // r12
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  DMMVIDPNTOPOLOGY **v11; // r15
  __int64 v12; // rbx
  __int64 i; // rbp
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rsi
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  _QWORD *v21; // rax
  __int64 v22; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v23; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a2;
  if ( !a3 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
  *a3 = 0;
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
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v22, v8);
    v9 = *(_QWORD *)(v8 + 128);
    v24 = 0LL;
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 32));
      v10 = *(_QWORD *)(v8 + 128);
    }
    else
    {
      v10 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v24, v10);
    if ( v24 )
    {
      v11 = (DMMVIDPNTOPOLOGY **)(v24 + 96);
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 120) + 72LL));
      v12 = *(_QWORD *)(v8 + 120);
      for ( i = 0LL; ; ++i )
      {
        v23 = -1;
        v14 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v11, v4, i, &v23);
        v17 = v14;
        if ( v14 < 0 )
          break;
        v18 = v23;
        if ( v23 == -1 )
          goto LABEL_16;
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v12, v23);
        if ( TargetById )
        {
          if ( *((_BYTE *)TargetById + 417) )
          {
            *a3 = 1;
LABEL_16:
            if ( v12 )
              ReferenceCounted::Release((ReferenceCounted *)(v12 + 64));
            goto LABEL_18;
          }
        }
        else
        {
          WdLogSingleEntry2(2LL, v18, v12);
        }
      }
      v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v15);
      v21[3] = i;
      v21[4] = v4;
      v21[5] = v11;
      v21[6] = v17;
      if ( v12 )
        ReferenceCounted::Release((ReferenceCounted *)(v12 + 64));
    }
    else
    {
      WdLogSingleEntry1(3LL, a1);
      LODWORD(v17) = -1071774884;
    }
    v3 = v17;
LABEL_18:
    auto_rc<DMMVIDPN const>::reset(&v24, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v22 + 40));
    return v3;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
}
