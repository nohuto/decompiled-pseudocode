/*
 * XREFs of ?DmmIsSourcePresentedOnClientVidPnUsedByFirmware@@YAJQEAXIPEAE@Z @ 0x1C02DD9E8
 * Callers:
 *     DxgkIsBootPrimarySource @ 0x1C0165300 (DxgkIsBootPrimarySource.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005424 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00054DC (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0007B74 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007EFC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C0122764 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmIsSourcePresentedOnClientVidPnUsedByFirmware(DXGADAPTER *a1, __int64 a2, unsigned __int8 *a3)
{
  unsigned int v3; // edi
  __int64 v4; // r12
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rsi
  char **v23; // r15
  __int64 v24; // rbx
  __int64 i; // rbp
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rsi
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v39; // [rsp+70h] [rbp+18h] BYREF
  __int64 v40; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v4 = (unsigned int)a2;
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v7 + 24) = 0LL;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
  *a3 = 0;
  if ( !a1 )
  {
    v9 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v9 + 24) = 0LL;
LABEL_5:
    WdLogEvent5_WdError(v9);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = *((_QWORD *)a1 + 337);
  if ( !v13 )
  {
    v9 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v9 + 24) = a1;
    goto LABEL_5;
  }
  v14 = *(_QWORD *)(v13 + 88);
  if ( v14 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v38, v14);
    v16 = *(_QWORD *)(v14 + 88);
    v40 = 0LL;
    if ( v16 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 32));
      v17 = *(_QWORD *)(v14 + 88);
    }
    else
    {
      v17 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v40, v17);
    if ( v40 )
    {
      v23 = (char **)(v40 + 96);
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 80) + 72LL));
      v24 = *(_QWORD *)(v14 + 80);
      for ( i = 0LL; ; ++i )
      {
        v39 = -1;
        v26 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v23, (unsigned int)v4, i, &v39);
        v22 = v26;
        if ( v26 < 0 )
          break;
        v31 = v39;
        if ( v39 == -1 )
          goto LABEL_23;
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v24, v39);
        if ( TargetById )
        {
          if ( *((_BYTE *)TargetById + 417) )
          {
            *a3 = 1;
LABEL_23:
            if ( v24 )
              ReferenceCounted::Release((ReferenceCounted *)(v24 + 64), v27);
            goto LABEL_30;
          }
        }
        else
        {
          v34 = WdLogNewEntry5_WdError(v33, v27);
          *(_QWORD *)(v34 + 24) = v31;
          *(_QWORD *)(v34 + 32) = v24;
          WdLogEvent5_WdError(v34);
        }
      }
      v35 = (_QWORD *)WdLogNewEntry5_WdTrace(v28, v27, v29, v30);
      v35[3] = i;
      v35[4] = v4;
      v35[5] = v23;
      v35[6] = v22;
      if ( v24 )
        ReferenceCounted::Release((ReferenceCounted *)(v24 + 64), v36);
    }
    else
    {
      v21 = WdLogNewEntry5_WdWarning(v19, v18, v20);
      *(_QWORD *)(v21 + 24) = a1;
      WdLogEvent5_WdWarning(v21);
      LODWORD(v22) = -1071774884;
    }
    v3 = v22;
LABEL_30:
    auto_rc<DMMVIDPN const>::reset(&v40, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v38[0] + 40), v37);
    return v3;
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v15 + 24) = a1;
    WdLogEvent5_WdError(v15);
    return 3223192373LL;
  }
}
