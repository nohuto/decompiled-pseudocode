/*
 * XREFs of ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1C039BE90
 * Callers:
 *     DxgkInvalidateActiveVidPn @ 0x1C02F9600 (DxgkInvalidateActiveVidPn.c)
 *     DpiAcpiProcessEventRequests @ 0x1C0394D68 (DpiAcpiProcessEventRequests.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000F08C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000FBD8 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0010B98 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C0216A7C (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 *     ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C039A1C0 (-CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall DmmInvalidateActiveVidPn(
        DXGADAPTER *this,
        __int64 a2,
        void *a3,
        UINT a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5,
        int a6)
{
  DXGK_RECOMMENDFUNCTIONALVIDPN_REASON v8; // r12d
  __int64 v10; // r15
  __int64 v11; // r15
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rax
  struct DMMVIDPN *v18; // rbx
  char v19; // r14
  char *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdx
  DMMVIDPNTOPOLOGY *v23; // r13
  char *v24; // rax
  char *v25; // rsi
  char *v26; // rsi
  __int64 v27; // rax
  int v28; // eax
  char *v29; // rax
  int v30; // eax
  struct DMMVIDPN *v31; // [rsp+50h] [rbp-20h] BYREF
  __int64 v32; // [rsp+58h] [rbp-18h] BYREF
  char *v33; // [rsp+60h] [rbp-10h]
  __int64 v34; // [rsp+68h] [rbp-8h] BYREF
  struct DMMVIDPN *v35; // [rsp+A0h] [rbp+30h] BYREF

  v8 = (int)a2;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  if ( !this )
  {
    WdLogSingleEntry0(1LL);
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    WdLogSingleEntry0(1LL);
  v10 = *((_QWORD *)this + 349);
  if ( !v10 )
  {
    WdLogSingleEntry1(2LL, this);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)this,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v11 = *(_QWORD *)(v10 + 104);
  if ( v11 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v34, v11);
    v31 = 0LL;
    v35 = 0LL;
    v13 = VIDPN_MGR::RecommendFunctionalVidPn((ADAPTER_DISPLAY **)v11, v8, a3, a4, &v35);
    v16 = v13;
    if ( v13 >= 0 )
    {
      auto_rc<DMMVIDPN>::reset((__int64 *)&v31, (__int64)v35);
      v18 = v31;
      v19 = 0;
      if ( v8 == DXGK_RFVR_HOTKEY )
      {
        v20 = (char *)v31 + 96;
        v19 = 1;
        if ( v31 == (struct DMMVIDPN *)-96LL )
          WdLogSingleEntry0(1LL);
        v21 = *(_QWORD *)(v11 + 128);
        v32 = 0LL;
        if ( v21 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v21 + 32), 1u);
          v22 = *(_QWORD *)(v11 + 128);
          v18 = v31;
        }
        else
        {
          v22 = 0LL;
        }
        auto_rc<DMMVIDPN const>::reset(&v32, v22);
        if ( v32 )
        {
          v23 = (DMMVIDPNTOPOLOGY *)(v32 + 96);
          if ( v32 == -96 )
            WdLogSingleEntry0(1LL);
          if ( *((_QWORD *)v23 + 5) == *((_QWORD *)v20 + 5) )
          {
            v24 = v20 + 24;
            v25 = (char *)*((_QWORD *)v20 + 3);
            v33 = v24;
            if ( v25 == v24 )
              goto LABEL_31;
            v26 = v25 - 8;
            if ( !v26 )
              goto LABEL_31;
            do
            {
              v27 = *((_QWORD *)v26 + 12);
              LODWORD(v35) = *(_DWORD *)(*((_QWORD *)v26 + 11) + 24LL);
              v28 = *(_DWORD *)(v27 + 24);
              a6 = v28;
              if ( (_DWORD)v35 == -1 )
              {
                WdLogSingleEntry0(1LL);
                v28 = a6;
              }
              if ( v28 == -1 )
              {
                WdLogSingleEntry0(1LL);
                v28 = a6;
              }
              if ( !DMMVIDPNTOPOLOGY::FindPath(v23, (int)v35, v28) )
                break;
              v29 = (char *)*((_QWORD *)v26 + 1);
              v26 = v29 - 8;
              if ( v29 == v33 )
                v26 = 0LL;
            }
            while ( v26 );
            if ( !v26 )
LABEL_31:
              v19 = 0;
          }
        }
        auto_rc<DMMVIDPN const>::reset(&v32, 0LL);
        if ( v19 )
          WdLogSingleEntry1(7LL, v18);
      }
      v30 = VIDPN_MGR::CommitVidPnViaSDC((struct _KTHREAD **)v11, v18, v19, a5);
      LODWORD(v16) = v30;
      if ( v30 >= 0 )
        LODWORD(v16) = 0;
      else
        WdLogSingleEntry2(2LL, v18, v30);
    }
    else
    {
      v17 = WdLogNewEntry5_WdTrace(v15, v14);
      *(_QWORD *)(v17 + 24) = 0LL;
      *(_QWORD *)(v17 + 32) = v16;
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)&v31, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v34 + 40));
    return (unsigned int)v16;
  }
  else
  {
    WdLogSingleEntry1(2LL, this);
    return 3223192373LL;
  }
}
