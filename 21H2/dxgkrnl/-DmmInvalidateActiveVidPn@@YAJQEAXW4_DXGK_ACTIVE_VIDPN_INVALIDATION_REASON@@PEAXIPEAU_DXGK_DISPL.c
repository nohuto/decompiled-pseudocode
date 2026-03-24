/*
 * XREFs of ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1C02DD774
 * Callers:
 *     DxgkInvalidateActiveVidPn @ 0x1C025EFB0 (DxgkInvalidateActiveVidPn.c)
 *     DpiAcpiProcessEventRequests @ 0x1C02D64EC (DpiAcpiProcessEventRequests.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004448 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00056AC (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0007EE0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00081AC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C00085F4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02DBB98 (-CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C02E0148 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 */

__int64 __fastcall DmmInvalidateActiveVidPn(
        DXGADAPTER *this,
        __int64 a2,
        void *a3,
        __int64 a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5,
        int a6)
{
  unsigned int v6; // edi
  enum _DXGK_RECOMMENDFUNCTIONALVIDPN_REASON v8; // r15d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rsi
  VIDPN_MGR *v21; // rsi
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct DMMVIDPN *v32; // rbx
  char v33; // r14
  char *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  DMMVIDPNTOPOLOGY *v40; // r15
  __int64 v41; // rax
  char *v42; // r12
  char *v43; // rdi
  char *v44; // rdi
  __int64 v45; // rcx
  __int64 v46; // rax
  int v47; // r13d
  __int64 v48; // rax
  __int64 v49; // rax
  char *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // [rsp+30h] [rbp-20h] BYREF
  struct DMMVIDPN *v60; // [rsp+38h] [rbp-18h] BYREF
  __int64 v61; // [rsp+40h] [rbp-10h] BYREF
  struct DMMVIDPN *v62; // [rsp+80h] [rbp+30h] BYREF

  v6 = a4;
  v8 = (int)a2;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( !this )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v12);
    v15 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v15 + 24) = 0LL;
LABEL_3:
    WdLogEvent5_WdError(v15);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v18, v17);
    WdLogEvent5_WdAssertion(v19);
  }
  v20 = *((_QWORD *)this + 337);
  if ( !v20 )
  {
    v15 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v15 + 24) = this;
    goto LABEL_3;
  }
  v21 = *(VIDPN_MGR **)(v20 + 88);
  if ( v21 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v61, (__int64)v21);
    v62 = 0LL;
    v60 = 0LL;
    v23 = VIDPN_MGR::RecommendFunctionalVidPn(v21, v8, a3, v6, &v60);
    v28 = v23;
    if ( v23 >= 0 )
    {
      auto_rc<DMMVIDPN>::reset((__int64 *)&v62, (__int64)v60);
      v32 = v62;
      v33 = 0;
      if ( v8 == DXGK_RFVR_HOTKEY )
      {
        v34 = (char *)v62 + 96;
        v33 = 1;
        if ( v62 == (struct DMMVIDPN *)-96LL )
        {
          v35 = WdLogNewEntry5_WdAssertion(v31, v30);
          WdLogEvent5_WdAssertion(v35);
        }
        v36 = *((_QWORD *)v21 + 11);
        v59 = 0LL;
        if ( v36 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v36 + 32));
          v37 = *((_QWORD *)v21 + 11);
          v32 = v62;
        }
        else
        {
          v37 = 0LL;
        }
        auto_rc<DMMVIDPN const>::reset(&v59, v37);
        if ( v59 )
        {
          v40 = (DMMVIDPNTOPOLOGY *)(v59 + 96);
          if ( v59 == -96 )
          {
            v41 = WdLogNewEntry5_WdAssertion(v39, v38);
            WdLogEvent5_WdAssertion(v41);
          }
          if ( *((_QWORD *)v40 + 5) == *((_QWORD *)v34 + 5) )
          {
            v42 = v34 + 24;
            v43 = (char *)*((_QWORD *)v34 + 3);
            if ( v43 == v42 )
              goto LABEL_33;
            v44 = v43 - 8;
            if ( !v44 )
              goto LABEL_33;
            do
            {
              v45 = *(unsigned int *)(*((_QWORD *)v44 + 11) + 24LL);
              v46 = *((_QWORD *)v44 + 12);
              a6 = v45;
              v47 = *(_DWORD *)(v46 + 24);
              if ( (_DWORD)v45 == -1 )
              {
                v48 = WdLogNewEntry5_WdAssertion(v45, v38);
                WdLogEvent5_WdAssertion(v48);
              }
              if ( v47 == -1 )
              {
                v49 = WdLogNewEntry5_WdAssertion(v45, v38);
                WdLogEvent5_WdAssertion(v49);
              }
              if ( !DMMVIDPNTOPOLOGY::FindPath(v40, a6, v47) )
                break;
              v50 = (char *)*((_QWORD *)v44 + 1);
              v44 = v50 - 8;
              if ( v50 == v42 )
                v44 = 0LL;
            }
            while ( v44 );
            v32 = v62;
            if ( !v44 )
LABEL_33:
              v33 = 0;
          }
        }
        auto_rc<DMMVIDPN const>::reset(&v59, 0LL);
        if ( v33 )
        {
          v53 = WdLogNewEntry5_WdDmmEvent(v52, v51);
          *(_QWORD *)(v53 + 24) = v32;
          WdLogEvent5_WdDmmEvent(v53);
        }
      }
      v54 = VIDPN_MGR::CommitVidPnViaSDC((DXGADAPTER ***)v21, v32, v33, a5);
      v28 = v54;
      if ( v54 >= 0 )
      {
        LODWORD(v28) = 0;
      }
      else
      {
        v57 = WdLogNewEntry5_WdError(v56, v55);
        *(_QWORD *)(v57 + 24) = v32;
        *(_QWORD *)(v57 + 32) = v28;
        WdLogEvent5_WdError(v57);
      }
    }
    else
    {
      v29 = WdLogNewEntry5_WdTrace(v25, v24, v26, v27);
      *(_QWORD *)(v29 + 24) = 0LL;
      *(_QWORD *)(v29 + 32) = v28;
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)&v62, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v61 + 40), v58);
    return (unsigned int)v28;
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v22 + 24) = this;
    WdLogEvent5_WdError(v22);
    return 3223192373LL;
  }
}
