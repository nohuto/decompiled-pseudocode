/*
 * XREFs of ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C03A7788
 * Callers:
 *     ?Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@Z @ 0x1C00696B0 (-Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZ.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C039899C (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C03993EC (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C03A7C10 (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000FD8C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0010B98 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0011924 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x1C0069240 (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00697AC (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?GetNextTarget@DMMVIDPNTARGETSET@@QEBAPEAVDMMVIDPNTARGET@@QEBV2@@Z @ 0x1C0069CB0 (-GetNextTarget@DMMVIDPNTARGETSET@@QEBAPEAVDMMVIDPNTARGET@@QEBV2@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C01AA388 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C01BB920 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01BD088 (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 */

__int64 __fastcall DMMVIDPN::Serialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  _QWORD *v7; // r12
  unsigned __int8 v8; // bl
  __int64 v9; // r14
  _QWORD *v10; // r15
  _QWORD *v11; // rdi
  struct DMMVIDPNTARGET *NextTarget; // rdi
  unsigned int v13; // edx
  int NumPathsFromSource; // eax
  unsigned __int64 v15; // rax
  unsigned __int8 v16; // al
  unsigned __int64 v17; // r14
  int v18; // eax
  unsigned int v19; // edi
  unsigned __int8 v20; // r12
  unsigned __int8 v21; // cl
  _QWORD *v22; // rdi
  __int64 v23; // rbx
  struct DMMVIDPNTARGET *v24; // rdi
  DMMVIDPNTOPOLOGY *v25; // r14
  unsigned int v26; // r15d
  int v27; // eax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rax
  DMMVIDPNSOURCEMODE *v33; // rcx
  unsigned __int64 v34; // rsi
  DMMVIDPNTOPOLOGY **v35; // r13
  _DWORD *v36; // rbx
  struct DMMVIDPNPRESENTPATH *Path; // r14
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  unsigned __int64 v42; // [rsp+20h] [rbp-30h] BYREF
  DMMVIDPNTOPOLOGY *v43; // [rsp+28h] [rbp-28h]
  __int64 v44; // [rsp+30h] [rbp-20h] BYREF
  __int64 v45; // [rsp+38h] [rbp-18h] BYREF
  __int64 v46; // [rsp+40h] [rbp-10h]
  DMMVIDPNTARGETSET *v47; // [rsp+48h] [rbp-8h]
  unsigned int v49; // [rsp+A0h] [rbp+50h] BYREF
  unsigned __int64 v50; // [rsp+A8h] [rbp+58h] BYREF

  v4 = a2;
  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
      WdLogSingleEntry0(1LL);
    v7 = *(_QWORD **)(a1 + 304);
    v8 = 0;
    v43 = (DMMVIDPNTOPOLOGY *)(a1 + 96);
    v47 = (DMMVIDPNTARGETSET *)v7;
    v9 = 12LL;
    v10 = v7 + 3;
    v11 = (_QWORD *)v7[3];
    if ( v11 == v7 + 3 )
      goto LABEL_15;
    NextTarget = (struct DMMVIDPNTARGET *)(v11 - 1);
    if ( !NextTarget )
      goto LABEL_15;
    do
    {
      v13 = *((_DWORD *)NextTarget + 6);
      v42 = 0LL;
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource((DMMVIDPNTOPOLOGY *)(a1 + 96), v13, &v42);
      if ( NumPathsFromSource != -1071774919 )
      {
        if ( NumPathsFromSource < 0 )
          WdLogSingleEntry0(1LL);
        ++v8;
        v15 = 1LL;
        if ( v42 > 1 )
          v15 = v42;
        v9 += 440 * v15 + 48;
      }
      NextTarget = DMMVIDPNTARGETSET::GetNextTarget((DMMVIDPNTARGETSET *)v7, NextTarget);
    }
    while ( NextTarget );
    v4 = a2;
    v16 = v8;
    if ( v8 <= 1u )
LABEL_15:
      v16 = 1;
    v17 = v9 + 4LL * v16 - 4;
    v18 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize((_QWORD *)v4, v17, a3, a4);
    v19 = v18;
    if ( v18 >= 0 )
    {
      v20 = 0;
      v21 = 1;
      **(_DWORD **)(v4 + 32) = v17;
      *(_BYTE *)(*(_QWORD *)(v4 + 32) + 4LL) = v8;
      v22 = (_QWORD *)*v10;
      if ( v8 > 1u )
        v21 = v8;
      v23 = 4LL * v21 + 8;
      if ( v22 != v10 )
      {
        v24 = (struct DMMVIDPNTARGET *)(v22 - 1);
        if ( v24 )
        {
          v25 = v43;
          do
          {
            v26 = *((_DWORD *)v24 + 6);
            v50 = 0LL;
            v27 = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v25, v26, &v50);
            if ( v27 != -1071774919 )
            {
              if ( v27 < 0 )
                WdLogSingleEntry0(1LL);
              *(_DWORD *)(*(_QWORD *)(v4 + 32) + 4LL * v20 + 8) = v23;
              v28 = 1LL;
              if ( v50 > 1 )
                v28 = v50;
              v29 = 440 * v28 + 48 + v23;
              v30 = *(_QWORD *)(v4 + 32);
              v46 = v29;
              v31 = v30 + *(unsigned int *)(v30 + 4LL * v20 + 8);
              v32 = *((_QWORD *)v24 + 13);
              if ( v32 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(v32 + 96));
                v32 = *((_QWORD *)v24 + 13);
              }
              v33 = *(DMMVIDPNSOURCEMODE **)(v32 + 144);
              v44 = v32;
              if ( v33 )
                DMMVIDPNSOURCEMODE::Serialize(v33, (struct _D3DKMDT_VIDPN_SOURCE_MODE *const)v31);
              auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v44, 0LL);
              v34 = 0LL;
              *(_BYTE *)(v31 + 40) = v50;
              if ( v50 )
              {
                v35 = (DMMVIDPNTOPOLOGY **)v43;
                v36 = (_DWORD *)(v31 + 472);
                do
                {
                  v49 = -1;
                  if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v35, v26, v34, &v49) < 0 )
                    WdLogSingleEntry0(1LL);
                  Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)v35, v26, v49);
                  if ( !Path )
                    WdLogSingleEntry0(1LL);
                  DMMVIDPNPRESENTPATH::Serialize(Path, (struct _D3DKMDT_VIDPN_PRESENT_PATH *const)(v36 - 106));
                  v38 = *((_QWORD *)Path + 12);
                  v39 = *(_QWORD *)(v38 + 104);
                  if ( v39 )
                  {
                    _InterlockedIncrement((volatile signed __int32 *)(v39 + 96));
                    v40 = *(_QWORD *)(v38 + 104);
                  }
                  else
                  {
                    v40 = 0LL;
                  }
                  v45 = v40;
                  v41 = *(_QWORD *)(v40 + 144);
                  if ( v41 )
                  {
                    *(v36 - 16) = *(_DWORD *)(v41 + 24);
                    *(_OWORD *)(v36 - 14) = *(_OWORD *)(v41 + 72);
                    *(_OWORD *)(v36 - 10) = *(_OWORD *)(v41 + 88);
                    *(_OWORD *)(v36 - 6) = *(_OWORD *)(v41 + 104);
                    *((_QWORD *)v36 - 1) = *(_QWORD *)(v41 + 120);
                    *v36 = *(_DWORD *)(v41 + 128);
                  }
                  auto_rc<DMMVIDPNTARGETMODESET>::reset(&v45, 0LL);
                  ++v34;
                  v36 += 110;
                }
                while ( v34 < v50 );
                v4 = a2;
                v25 = v43;
              }
              v23 = v46;
              ++v20;
            }
            v24 = DMMVIDPNTARGETSET::GetNextTarget(v47, v24);
          }
          while ( v24 );
        }
      }
      return 0LL;
    }
    else
    {
      WdLogSingleEntry3(2LL, v17, a1, v18);
      return v19;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
}
