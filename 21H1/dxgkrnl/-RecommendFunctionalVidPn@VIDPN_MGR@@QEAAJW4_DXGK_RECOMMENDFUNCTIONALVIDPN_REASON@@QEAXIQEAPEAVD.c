/*
 * XREFs of ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C02DB888
 * Callers:
 *     ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x1C01874A4 (-DmmInitializeAdapter@@YAJQEAX@Z.c)
 *     ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1C02D8EB4 (-DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPL.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000F8C0 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?Enqueue@?$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C005A198 (-Enqueue@-$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     ?GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ @ 0x1C005A380 (-GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C011D4B0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C011D5D8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0128C08 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C0129070 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C0158260 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     ?DdiRecommendFunctionalVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDFUNCTIONALVIDPN@@@Z @ 0x1C0218EB4 (-DdiRecommendFunctionalVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDFUNCTIONALVIDPN@@@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z @ 0x1C021CE50 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z.c)
 *     ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@@Z @ 0x1C02D9B38 (-DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REA.c)
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
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  DMMVIDPN *v44; // rax
  unsigned __int8 v45; // r8
  DMMVIDPN *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  struct DMMVIDPN **v51; // rdi
  __int64 v52; // rax
  int v53; // ebx
  __int64 v54; // rcx
  _QWORD *v55; // rax
  unsigned __int64 v57; // [rsp+28h] [rbp-41h]
  DMMVIDPN *v58; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v59[24]; // [rsp+50h] [rbp-19h] BYREF
  _DXGKARG_RECOMMENDFUNCTIONALVIDPN v60; // [rsp+68h] [rbp-1h] BYREF
  enum _DXGK_RECOMMENDFUNCTIONALVIDPN_REASON v61; // [rsp+D0h] [rbp+67h]

  v61 = (int)a2;
  v5 = a5;
  v8 = (int)a2;
  if ( !a5 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v10);
  }
  *v5 = 0LL;
  v58 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn((struct VIDPN_MGR *)this, (__int64 *)&v58);
  v16 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v14, v15) + 24) = ClientVidPn;
    goto LABEL_34;
  }
  *(_QWORD *)&v60.NumberOfVidPnTargets = 0LL;
  *((_DWORD *)&v60.RequestReason + 1) = 0;
  *(&v60.PrivateDriverDataSize + 1) = 0;
  v60.pVidPnTargetPrioritizationVector = 0LL;
  v17 = v58;
  if ( v58 == (DMMVIDPN *)-88LL )
    v60.hRecommendedFunctionalVidPn = 0LL;
  else
    v60.hRecommendedFunctionalVidPn = (D3DKMDT_HVIDPN)v58;
  v60.pPrivateDriverData = a3;
  v18 = this[1];
  v60.RequestReason = v8;
  v60.PrivateDriverDataSize = a4;
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
    (__int64)v59,
    (__int64)v17 + 152,
    1u,
    v26,
    v57,
    NumTargetsWithMonitorObjects);
  v29 = this[1];
  if ( !v29 )
  {
    v30 = WdLogNewEntry5_WdAssertion(0LL, v27);
    WdLogEvent5_WdAssertion(v30);
    v29 = this[1];
  }
  v31 = ADAPTER_DISPLAY::DdiRecommendFunctionalVidPn(v29, &v60, v28);
  v34 = v31;
  v16 = -1071774941;
  if ( v31 == -1071774941 )
  {
    v35 = WdLogNewEntry5_WdDmmEvent(v33);
    *(_QWORD *)(v35 + 24) = v20;
    WdLogEvent5_WdDmmEvent(v35);
LABEL_20:
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v59, v36);
    goto LABEL_34;
  }
  if ( v31 < 0 )
  {
    v37 = WdLogNewEntry5_WdError(v33, v32);
    *(_QWORD *)(v37 + 24) = v20;
    *(_QWORD *)(v37 + 32) = v34;
    WdLogEvent5_WdError(v37);
    v16 = v34;
    goto LABEL_20;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v59, v32);
  if ( !DMMVIDPN::IsFunctional(v17) )
  {
    v40 = WdLogNewEntry5_WdAssertion(v39, v38);
    WdLogEvent5_WdAssertion(v40);
  }
  if ( DMMVIDPN::IsFunctional(v17) )
  {
    a5 = 0LL;
    v44 = (DMMVIDPN *)operator new[](0x140uLL, 0x4E506456u, PagedPool);
    if ( v44 )
      v46 = DMMVIDPN::DMMVIDPN(v44, v17, v45);
    else
      v46 = 0LL;
    auto_rc<DMMVIDPN>::reset((__int64 *)&a5, (__int64)v46);
    v51 = a5;
    if ( a5 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(struct DMMVIDPN **const))a5[9])(a5 + 9) )
      {
        DmmLogDriverRecommendVidPnPacket((DMMVIDPN *)((char *)v17 + 96), (unsigned int)v61);
        a5 = 0LL;
        Queue<DMMVIDPN>::Enqueue(this + 27, (__int64)v51);
        auto_rc<DMMVIDPN>::reset((__int64 *)&a5, 0LL);
        v58 = 0LL;
        v16 = 0;
        *v5 = v17;
        goto LABEL_34;
      }
      v55 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v54);
      v55[3] = v51;
      v55[4] = v17;
      v55[5] = *((int *)v51 + 20);
      WdLogEvent5_WdDmmEvent(v55);
      v53 = *((_DWORD *)v51 + 20);
    }
    else
    {
      v52 = WdLogNewEntry5_WdLowResource(v48, v47, v49, v50);
      *(_QWORD *)(v52 + 24) = v17;
      WdLogEvent5_WdLowResource(v52);
      v53 = -1073741801;
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)&a5, 0LL);
    v16 = v53;
  }
  else
  {
    v43 = WdLogNewEntry5_WdError(v42, v41);
    *(_QWORD *)(v43 + 24) = v20;
    *(_QWORD *)(v43 + 32) = -1071774941LL;
    WdLogEvent5_WdError(v43);
    DxgCreateLiveDumpWithWdLogs(0x193u, 2060LL, 0LL, 0LL, 0LL, 0);
  }
LABEL_34:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v58, 0LL);
  return v16;
}
