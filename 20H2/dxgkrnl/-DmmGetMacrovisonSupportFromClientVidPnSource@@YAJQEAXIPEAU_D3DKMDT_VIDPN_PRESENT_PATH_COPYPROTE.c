/*
 * XREFs of ?DmmGetMacrovisonSupportFromClientVidPnSource@@YAJQEAXIPEAU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C02DB9BC
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C02937B8 (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005424 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00054DC (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0007B74 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0007C30 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007EFC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C01215E4 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmGetMacrovisonSupportFromClientVidPnSource(
        _QWORD *a1,
        __int64 a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT *a3)
{
  unsigned int v3; // esi
  unsigned int v5; // r13d
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rbp
  __int64 v12; // rax
  struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT v13; // edi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // r15
  __int64 v21; // rbx
  char **v22; // r12
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rbp
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // r13
  __int64 v32; // rax
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  _QWORD *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // [rsp+20h] [rbp-48h] BYREF
  __int64 v41[8]; // [rsp+28h] [rbp-40h] BYREF
  unsigned int v42; // [rsp+78h] [rbp+10h]
  char v43; // [rsp+80h] [rbp+18h]
  unsigned int v44; // [rsp+88h] [rbp+20h] BYREF

  v42 = a2;
  v3 = 0;
  v5 = a2;
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v7 + 24) = 0LL;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
  *a3 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)1;
  if ( !a1 )
  {
    v9 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v9 + 24) = 0LL;
LABEL_5:
    WdLogEvent5_WdError(v9);
    return 3223191554LL;
  }
  v10 = a1[337];
  if ( !v10 )
  {
    v9 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v9 + 24) = a1;
    goto LABEL_5;
  }
  v11 = *(_QWORD *)(v10 + 88);
  if ( v11 )
  {
    v43 = 0;
    v13 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)7;
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v41, v11);
    v14 = *(_QWORD *)(v11 + 88);
    v40 = 0LL;
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 32));
      v15 = *(_QWORD *)(v11 + 88);
    }
    else
    {
      v15 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v40, v15);
    if ( v40 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 80) + 72LL));
      v20 = 0LL;
      v21 = *(_QWORD *)(v11 + 80);
      v22 = (char **)(v40 + 96);
      while ( 1 )
      {
        v44 = -1;
        v23 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v22, v5, v20, &v44);
        v19 = v23;
        if ( v23 < 0 )
          break;
        v28 = v44;
        if ( v44 == -1 )
        {
          if ( v21 )
            ReferenceCounted::Release((ReferenceCounted *)(v21 + 64), v24);
          auto_rc<DMMVIDPN const>::reset(&v40, 0LL);
          if ( v43 )
            *a3 = v13;
          goto LABEL_32;
        }
        Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)v22, v5, v44);
        if ( !Path )
        {
          v32 = WdLogNewEntry5_WdAssertion(v30, v29);
          WdLogEvent5_WdAssertion(v32);
        }
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v21, (unsigned int)v28);
        if ( TargetById )
        {
          if ( *((_BYTE *)TargetById + 104) )
          {
            v43 = 1;
            v13 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)((*((_DWORD *)Path + 42) | 0xFFFFFFF8) & *(_DWORD *)&v13);
          }
        }
        else
        {
          v36 = WdLogNewEntry5_WdError(v35, v34);
          *(_QWORD *)(v36 + 24) = v28;
          *(_QWORD *)(v36 + 32) = v21;
          WdLogEvent5_WdError(v36);
        }
        v5 = v42;
        ++v20;
      }
      v38 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v24, v26, v27);
      v38[3] = v20;
      v38[4] = v5;
      v38[5] = v22;
      v38[6] = v19;
      if ( v21 )
        ReferenceCounted::Release((ReferenceCounted *)(v21 + 64), v39);
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(v17, v16);
      *(_QWORD *)(v18 + 24) = a1;
      WdLogEvent5_WdError(v18);
      LODWORD(v19) = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v40, 0LL);
    v3 = v19;
LABEL_32:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v41[0] + 40), v37);
    return v3;
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v12 + 24) = a1;
    WdLogEvent5_WdError(v12);
    return 3223192373LL;
  }
}
