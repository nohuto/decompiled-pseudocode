/*
 * XREFs of ?ReclaimClonedVidPnTarget@@YAJPEBU_DXGDMM_INTERFACE@@QEAXQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@EQEAI4@Z @ 0x1C02F80E0
 * Callers:
 *     ?AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEQEA_KQEAI@Z @ 0x1C02F64C8 (-AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_TARGET_MODE@@Q6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@0@Z1@Z @ 0x1C001CF0C (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ReclaimClonedVidPnTarget(
        const struct _DXGDMM_INTERFACE *a1,
        __int64 a2,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a3,
        __int64 (__fastcall **a4)(struct D3DKMDT_HVIDPNTOPOLOGY__ *const, __int64, unsigned int *const *),
        char a5,
        unsigned int *const a6,
        unsigned int *const a7)
{
  unsigned int *v7; // r14
  unsigned int *v12; // r12
  unsigned int *v13; // rbx
  __int64 (__fastcall *v14)(__int64, __int64 *, __int64 *); // rax
  int v15; // eax
  __int64 v16; // rsi
  __int64 (__fastcall *v17)(__int64, unsigned int *const *); // rax
  int v18; // eax
  unsigned int *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 (__fastcall *v23)(struct D3DKMDT_HVIDPNTOPOLOGY__ *const, __int64, unsigned int *const *); // rax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int64 v27; // r9
  const wchar_t *v28; // r9
  __int64 v29; // r8
  int v30; // eax
  char v32[8]; // [rsp+50h] [rbp-30h] BYREF
  unsigned int *v33; // [rsp+58h] [rbp-28h]
  void (__fastcall *v34)(__int64, unsigned int *); // [rsp+60h] [rbp-20h]
  __int64 v35; // [rsp+68h] [rbp-18h]
  int v36; // [rsp+70h] [rbp-10h]
  unsigned int v37; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v38; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v39; // [rsp+D0h] [rbp+50h] BYREF

  v7 = 0LL;
  if ( !a1 )
  {
    WdLogSingleEntry1(1LL, 3051LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_pDxgDmmInterface != NULL", 3051LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 3052LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_hDxgAdapter != NULL", 3052LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a3 )
  {
    WdLogSingleEntry1(1LL, 3053LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_hVidPnTopology != NULL", 3053LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry1(1LL, 3054LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"i_pDmmVidPnTopologyInterface != NULL",
      3054LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v12 = a6;
  if ( !a6 )
  {
    WdLogSingleEntry1(1LL, 3055LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"o_pReclaimedVidPnTargetId != NULL",
      3055LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v13 = a7;
  if ( !a7 )
  {
    WdLogSingleEntry1(1LL, 3056LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"o_pReclaimedPathSourceId != NULL",
      3056LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v7 = 0LL;
  }
  v38 = 0LL;
  *v12 = -1;
  *v13 = -1;
  v14 = (__int64 (__fastcall *)(__int64, __int64 *, __int64 *))*((_QWORD *)a1 + 1);
  v39 = 0LL;
  v15 = v14(a2, &v38, &v39);
  v16 = v15;
  if ( v15 >= 0 )
  {
    a6 = 0LL;
    v33 = 0LL;
    v17 = *(__int64 (__fastcall **)(__int64, unsigned int *const *))(v39 + 8);
    v34 = 0LL;
    v35 = 0LL;
    v36 = 0;
    v32[0] = 0;
    v18 = v17(v38, &a6);
    v16 = v18;
    if ( v18 >= 0 )
    {
      v19 = a6;
      if ( !a6 )
      {
        WdLogSingleEntry1(1LL, 3099LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pVidPnSourceInfo != NULL", 3099LL, 0LL, 0LL, 0LL, 0LL);
        v19 = a6;
      }
      DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
        (__int64)v32,
        (__int64)v19,
        *(_QWORD *)(v39 + 24),
        v38);
      v37 = -1;
      v7 = v33;
      if ( v33 )
      {
        while ( 1 )
        {
          v22 = *v7;
          v23 = *a4;
          a6 = 0LL;
          v24 = v23(a3, v22, &a6);
          v16 = v24;
          if ( v24 == -1071774919 )
          {
            if ( a6 )
            {
              WdLogSingleEntry1(1LL, 3124LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"sztNumPathsFromSource == 0",
                3124LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
          }
          else if ( v24 < 0 )
          {
            WdLogSingleEntry3(2LL, a3, v22, v24);
            v28 = L"Failed to get the number of paths in topology 0x%I64x originating from source 0x%I64x (status = 0x%I64x)";
            goto LABEL_37;
          }
          if ( (unsigned __int64)a6 > 1 )
            break;
          a7 = 0LL;
          v25 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned int *const *))(v39 + 16))(v38, v7, &a7);
          v16 = v25;
          if ( v25 < 0 )
          {
            WdLogSingleEntry3(2LL, v7, v38, v25);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to acquire source following 0x%I64x in VidPN source set 0x%I64x (status = 0x%I64x)",
              (__int64)v7,
              v38,
              v16,
              0LL,
              0LL);
            goto LABEL_39;
          }
          DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
            (__int64)v32,
            (__int64)a7,
            *(_QWORD *)(v39 + 24),
            v38);
          v7 = v33;
          if ( !v33 )
            goto LABEL_27;
        }
        v26 = ((__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *const, _QWORD, __int64, unsigned int *))a4[1])(
                a3,
                (unsigned int)v22,
                1LL,
                &v37);
        v16 = v26;
        if ( v26 < 0 )
        {
          WdLogSingleEntry3(2LL, a3, v22, v26);
          v28 = L"Failed to get target of the second path in topology 0x%I64x originating from source 0x%I64x (status = 0x%I64x)";
LABEL_37:
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v28, (__int64)a3, v22, v16, 0LL, 0LL);
          goto LABEL_39;
        }
        v29 = v37;
        if ( v37 == -1 )
        {
          WdLogSingleEntry1(1LL, 3156LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"ClonedVidPnTargetId != D3DDDI_ID_UNINITIALIZED",
            3156LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v29 = v37;
        }
        LOBYTE(v27) = a5;
        v30 = ((__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *const, _QWORD, __int64, __int64))a4[6])(
                a3,
                (unsigned int)v22,
                v29,
                v27);
        v16 = v30;
        if ( v30 < 0 )
        {
          WdLogSingleEntry4(2LL, v22, v37, a3, v30);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to remove path (0x%I64x, 0x%I64x) from topology 0x%I64x which is the second path originating"
                      " from that source (status = 0x%I64x)",
            v22,
            v37,
            (__int64)a3,
            v16,
            0LL);
          goto LABEL_39;
        }
LABEL_27:
        if ( v37 == -1 )
          goto LABEL_38;
        *v12 = v37;
        LODWORD(v16) = 0;
        *v13 = v22;
      }
      else
      {
LABEL_38:
        LODWORD(v16) = -1071774925;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v21, v20) + 24) = a3;
      }
    }
    else
    {
      WdLogSingleEntry2(2LL, v38, v18);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire first source in VidPN source set 0x%I64x (status = 0x%I64x)",
        v38,
        v16,
        0LL,
        0LL,
        0LL);
    }
LABEL_39:
    if ( v32[0] )
      v34(v35, v7);
  }
  else
  {
    WdLogSingleEntry2(2LL, a2, v15);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire source set for adapter 0x%I64x (status = 0x%I64x)",
      a2,
      v16,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v16;
}
