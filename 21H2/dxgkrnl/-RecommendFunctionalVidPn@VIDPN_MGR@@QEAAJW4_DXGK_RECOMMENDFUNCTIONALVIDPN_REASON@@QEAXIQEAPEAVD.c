/*
 * XREFs of ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C0216A7C
 * Callers:
 *     ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x1C0216960 (-DmmInitializeAdapter@@YAJQEAX@Z.c)
 *     ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1C039BE90 (-DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPL.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000FBD8 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ @ 0x1C0029D40 (-GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?Enqueue@?$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C0068E28 (-Enqueue@-$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C01A6FD0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01A80EC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01A8214 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01B0CF4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C01DE414 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     ?DdiRecommendFunctionalVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDFUNCTIONALVIDPN@@@Z @ 0x1C0216BF4 (-DdiRecommendFunctionalVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDFUNCTIONALVIDPN@@@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1C02CEAA0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 *     ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@@Z @ 0x1C039C714 (-DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REA.c)
 */

__int64 __fastcall VIDPN_MGR::RecommendFunctionalVidPn(
        ADAPTER_DISPLAY **this,
        DXGK_RECOMMENDFUNCTIONALVIDPN_REASON a2,
        void *const a3,
        UINT a4,
        struct DMMVIDPN **const a5)
{
  struct DMMVIDPN **v5; // r12
  int ClientVidPn; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // edi
  DMMVIDPN *v14; // rbx
  ADAPTER_DISPLAY *v15; // rax
  DXGADAPTER *v16; // r15
  __int64 NumTargetsWithMonitorObjects; // rax
  __int64 v18; // r9
  ADAPTER_DISPLAY *v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  unsigned int v22; // esi
  __int64 v23; // rdx
  __int64 v25; // r9
  DMMVIDPN *v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  DMMVIDPN *v29; // rax
  struct DMMVIDPN **v30; // rdi
  int v31; // ebx
  __int64 v32; // [rsp+28h] [rbp-41h]
  DMMVIDPN *v33; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v34[24]; // [rsp+50h] [rbp-19h] BYREF
  _DXGKARG_RECOMMENDFUNCTIONALVIDPN v35; // [rsp+68h] [rbp-1h] BYREF

  v5 = a5;
  if ( !a5 )
    WdLogSingleEntry0(1LL);
  *v5 = 0LL;
  v33 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn((struct VIDPN_MGR *)this, (__int64 *)&v33);
  v13 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11) + 24) = ClientVidPn;
    goto LABEL_17;
  }
  *(_QWORD *)&v35.NumberOfVidPnTargets = 0LL;
  *((_DWORD *)&v35.RequestReason + 1) = 0;
  *(&v35.PrivateDriverDataSize + 1) = 0;
  v35.pVidPnTargetPrioritizationVector = 0LL;
  v14 = v33;
  if ( v33 == (DMMVIDPN *)-88LL )
    v35.hRecommendedFunctionalVidPn = 0LL;
  else
    v35.hRecommendedFunctionalVidPn = (D3DKMDT_HVIDPN)v33;
  v15 = this[1];
  v35.RequestReason = a2;
  v35.pPrivateDriverData = a3;
  v35.PrivateDriverDataSize = a4;
  if ( !v15 )
  {
    WdLogSingleEntry0(1LL);
    v15 = this[1];
  }
  v16 = (DXGADAPTER *)*((_QWORD *)v15 + 2);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v16) )
    WdLogSingleEntry0(1LL);
  if ( ((unsigned __int16)((2 << *((_BYTE *)v14 + 172)) - 1) & *((_WORD *)v14 + 87)) != 0 )
    WdLogSingleEntry0(1LL);
  NumTargetsWithMonitorObjects = VIDPN_MGR::GetNumTargetsWithMonitorObjects((VIDPN_MGR *)this);
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v34,
    (__int64)v14 + 152,
    1u,
    v18,
    v32,
    NumTargetsWithMonitorObjects);
  v19 = this[1];
  if ( !v19 )
  {
    WdLogSingleEntry0(1LL);
    v19 = this[1];
  }
  v20 = ADAPTER_DISPLAY::DdiRecommendFunctionalVidPn(v19, &v35);
  v22 = v20;
  v13 = -1071774941;
  if ( v20 == -1071774941 )
  {
    WdLogSingleEntry1(7LL, v16);
LABEL_16:
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v34, v23);
    goto LABEL_17;
  }
  if ( v20 < 0 )
  {
    WdLogSingleEntry2(2LL, v16, v20);
    v13 = v22;
    goto LABEL_16;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v34, v21);
  if ( !DMMVIDPN::IsFunctional(v14) )
    WdLogSingleEntry0(1LL);
  if ( DMMVIDPN::IsFunctional(v14) )
  {
    a5 = 0LL;
    v26 = (DMMVIDPN *)operator new[](0x140uLL, 0x4E506456u, 256LL, v25);
    if ( v26 )
      v29 = DMMVIDPN::DMMVIDPN(v26, v14, v27, v28);
    else
      v29 = 0LL;
    auto_rc<DMMVIDPN>::reset((__int64 *)&a5, (__int64)v29);
    v30 = a5;
    if ( a5 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(struct DMMVIDPN **const))a5[9])(a5 + 9) )
      {
        DmmLogDriverRecommendVidPnPacket((DMMVIDPN *)((char *)v14 + 96), a2);
        a5 = 0LL;
        Queue<DMMVIDPN>::Enqueue(this + 32, (__int64)v30);
        auto_rc<DMMVIDPN>::reset((__int64 *)&a5, 0LL);
        v33 = 0LL;
        v13 = 0;
        *v5 = v14;
        goto LABEL_17;
      }
      WdLogSingleEntry3(7LL, v30, v14, *((int *)v30 + 20));
      v31 = *((_DWORD *)v30 + 20);
    }
    else
    {
      WdLogSingleEntry1(6LL, v14);
      v31 = -1073741801;
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)&a5, 0LL);
    v13 = v31;
  }
  else
  {
    WdLogSingleEntry2(2LL, v16, -1071774941LL);
    DxgCreateLiveDumpWithWdLogs(403LL, 2060LL);
  }
LABEL_17:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v33, 0LL);
  return v13;
}
