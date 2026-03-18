/*
 * XREFs of ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C02DEE48
 * Callers:
 *     ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x1C01844E8 (-DmmInitializeAdapter@@YAJQEAX@Z.c)
 *     ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1C02DC474 (-DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPL.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0008344 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?Enqueue@?$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C005B0E8 (-Enqueue@-$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     ?GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ @ 0x1C005B2D0 (-GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C010EDA0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C010EEC8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C010F170 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01222CC (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C0166DC0 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     ?DdiRecommendFunctionalVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDFUNCTIONALVIDPN@@@Z @ 0x1C021BF54 (-DdiRecommendFunctionalVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDFUNCTIONALVIDPN@@@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z @ 0x1C021FEF0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z.c)
 *     ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@@Z @ 0x1C02DD0F8 (-DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REA.c)
 */

__int64 __fastcall VIDPN_MGR::RecommendFunctionalVidPn(
        ADAPTER_DISPLAY **this,
        __int64 a2,
        void *const a3,
        UINT a4,
        struct DMMVIDPN **const a5)
{
  struct DMMVIDPN **v5; // r12
  DXGK_RECOMMENDFUNCTIONALVIDPN_REASON v8; // r13d
  __int64 v10; // rax
  int ClientVidPn; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // edi
  DMMVIDPN *v17; // rbx
  ADAPTER_DISPLAY *v18; // r14
  __int64 v19; // rax
  DXGADAPTER *v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 NumTargetsWithMonitorObjects; // rax
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  ADAPTER_DISPLAY *v29; // rcx
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  DMMVIDPN *v48; // rax
  unsigned __int8 v49; // r8
  DMMVIDPN *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  struct DMMVIDPN **v55; // rdi
  __int64 v56; // rax
  int v57; // ebx
  __int64 v58; // rdx
  __int64 v59; // rcx
  _QWORD *v60; // rax
  unsigned __int64 v62; // [rsp+28h] [rbp-41h]
  DMMVIDPN *v63; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v64[24]; // [rsp+50h] [rbp-19h] BYREF
  _DXGKARG_RECOMMENDFUNCTIONALVIDPN v65; // [rsp+68h] [rbp-1h] BYREF
  enum _DXGK_RECOMMENDFUNCTIONALVIDPN_REASON v66; // [rsp+D0h] [rbp+67h]

  v66 = (int)a2;
  v5 = a5;
  v8 = (int)a2;
  if ( !a5 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v10);
  }
  *v5 = 0LL;
  v63 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn((struct VIDPN_MGR *)this, (__int64 *)&v63);
  v16 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v14, v15) + 24) = ClientVidPn;
    goto LABEL_34;
  }
  *(_QWORD *)&v65.NumberOfVidPnTargets = 0LL;
  *((_DWORD *)&v65.RequestReason + 1) = 0;
  *(&v65.PrivateDriverDataSize + 1) = 0;
  v65.pVidPnTargetPrioritizationVector = 0LL;
  v17 = v63;
  if ( v63 == (DMMVIDPN *)-88LL )
    v65.hRecommendedFunctionalVidPn = 0LL;
  else
    v65.hRecommendedFunctionalVidPn = (D3DKMDT_HVIDPN)v63;
  v65.pPrivateDriverData = a3;
  v18 = this[1];
  v65.RequestReason = v8;
  v65.PrivateDriverDataSize = a4;
  if ( !v18 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v13, v12);
    WdLogEvent5_WdAssertion(v19);
    v18 = this[1];
  }
  v20 = (DXGADAPTER *)*((_QWORD *)v18 + 2);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v20) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v22, v21);
    WdLogEvent5_WdAssertion(v23);
  }
  LOBYTE(v22) = *((_BYTE *)v17 + 172);
  if ( ((unsigned __int16)((2 << v22) - 1) & *((_WORD *)v17 + 87)) != 0 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v22, v21);
    WdLogEvent5_WdAssertion(v24);
  }
  NumTargetsWithMonitorObjects = VIDPN_MGR::GetNumTargetsWithMonitorObjects((VIDPN_MGR *)this, v21);
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v64,
    (__int64)v17 + 152,
    1u,
    v26,
    v62,
    NumTargetsWithMonitorObjects);
  v29 = this[1];
  if ( !v29 )
  {
    v30 = WdLogNewEntry5_WdAssertion(0LL, v27);
    WdLogEvent5_WdAssertion(v30);
    v29 = this[1];
  }
  v31 = ADAPTER_DISPLAY::DdiRecommendFunctionalVidPn(v29, &v65, v28);
  v36 = v31;
  v16 = -1071774941;
  if ( v31 == -1071774941 )
  {
    v37 = WdLogNewEntry5_WdDmmEvent(v33, v32);
    *(_QWORD *)(v37 + 24) = v20;
    WdLogEvent5_WdDmmEvent(v37);
LABEL_20:
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
      (ApplyPermissionWithinThisScope *)v64,
      v38,
      v39,
      v40);
    goto LABEL_34;
  }
  if ( v31 < 0 )
  {
    v41 = WdLogNewEntry5_WdError(v33, v32);
    *(_QWORD *)(v41 + 24) = v20;
    *(_QWORD *)(v41 + 32) = v36;
    WdLogEvent5_WdError(v41);
    v16 = v36;
    goto LABEL_20;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v64, v32, v34, v35);
  if ( !DMMVIDPN::IsFunctional(v17) )
  {
    v44 = WdLogNewEntry5_WdAssertion(v43, v42);
    WdLogEvent5_WdAssertion(v44);
  }
  if ( DMMVIDPN::IsFunctional(v17) )
  {
    a5 = 0LL;
    v48 = (DMMVIDPN *)operator new[](0x140uLL, 0x4E506456u, PagedPool);
    if ( v48 )
      v50 = DMMVIDPN::DMMVIDPN(v48, v17, v49);
    else
      v50 = 0LL;
    auto_rc<DMMVIDPN>::reset((__int64 *)&a5, (__int64)v50);
    v55 = a5;
    if ( a5 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(struct DMMVIDPN **const))a5[9])(a5 + 9) )
      {
        DmmLogDriverRecommendVidPnPacket((DMMVIDPN *)((char *)v17 + 96), (unsigned int)v66);
        a5 = 0LL;
        Queue<DMMVIDPN>::Enqueue(this + 27, (__int64)v55);
        auto_rc<DMMVIDPN>::reset((__int64 *)&a5, 0LL);
        v63 = 0LL;
        v16 = 0;
        *v5 = v17;
        goto LABEL_34;
      }
      v60 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v59, v58);
      v60[3] = v55;
      v60[4] = v17;
      v60[5] = *((int *)v55 + 20);
      WdLogEvent5_WdDmmEvent(v60);
      v57 = *((_DWORD *)v55 + 20);
    }
    else
    {
      v56 = WdLogNewEntry5_WdLowResource(v52, v51, v53, v54);
      *(_QWORD *)(v56 + 24) = v17;
      WdLogEvent5_WdLowResource(v56);
      v57 = -1073741801;
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)&a5, 0LL);
    v16 = v57;
  }
  else
  {
    v47 = WdLogNewEntry5_WdError(v46, v45);
    *(_QWORD *)(v47 + 24) = v20;
    *(_QWORD *)(v47 + 32) = -1071774941LL;
    WdLogEvent5_WdError(v47);
    DxgCreateLiveDumpWithWdLogs(0x193u, 2060LL, 0LL, 0LL, 0LL, 0);
  }
LABEL_34:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v63, 0LL);
  return v16;
}
