/*
 * XREFs of ?RetrievePinnedModeForTarget@@YAJQEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPN__@@IPEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C025CC7C
 * Callers:
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C025C050 (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000B8A8 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RetrievePinnedModeForTarget(
        const struct _DXGDMM_VIDPN_INTERFACE *const a1,
        struct D3DKMDT_HVIDPN__ *a2,
        unsigned int a3,
        struct _D3DKMDT_VIDPN_TARGET_MODE *a4)
{
  __int64 (__fastcall *v4)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *); // rax
  __int64 v7; // rsi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rax
  _OWORD *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v24; // [rsp+30h] [rbp-40h] BYREF
  _OWORD *v25; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v26[8]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v27; // [rsp+48h] [rbp-28h]
  void (__fastcall *v28)(__int64, __int64); // [rsp+50h] [rbp-20h]
  __int64 v29; // [rsp+58h] [rbp-18h]
  int v30; // [rsp+60h] [rbp-10h]
  __int64 v31; // [rsp+90h] [rbp+20h] BYREF

  v4 = (__int64 (__fastcall *)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *))*((_QWORD *)a1 + 3);
  v31 = 0LL;
  v24 = 0LL;
  v7 = a3;
  v9 = v4(a2, a3, &v31, &v24);
  v12 = v9;
  if ( v9 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
    v13[3] = v7;
    v13[4] = a2;
    v13[5] = v12;
    WdLogEvent5_WdError(v13);
    return (unsigned int)v12;
  }
  v14 = *((_QWORD *)a1 + 4);
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0;
  v26[0] = 0;
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v26,
    v31,
    v14,
    (__int64)a2);
  v25 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, _OWORD **))(v24 + 24))(v31, &v25);
  v18 = v27;
  v12 = v15;
  if ( v15 < 0 )
    goto LABEL_6;
  if ( v15 == 1075708679 )
  {
    v12 = -1071774970LL;
LABEL_6:
    v19 = WdLogNewEntry5_WdError(v17, v16);
    *(_QWORD *)(v19 + 24) = v18;
    *(_QWORD *)(v19 + 32) = v12;
    WdLogEvent5_WdError(v19);
    goto LABEL_8;
  }
  v20 = v25;
  v21 = v24;
  v22 = v31;
  *(_OWORD *)&a4->Id = *v25;
  *(_OWORD *)&a4->VideoSignalInfo.TotalSize.cy = v20[1];
  *(_OWORD *)&a4->VideoSignalInfo.VSyncFreq.Denominator = v20[2];
  *(_OWORD *)&a4->VideoSignalInfo.PixelRate = v20[3];
  *(_QWORD *)&a4->WireFormatAndPreference.0 = *((_QWORD *)v20 + 8);
  (*(void (__fastcall **)(__int64))(v21 + 32))(v22);
LABEL_8:
  if ( v26[0] )
    v28(v29, v18);
  return (unsigned int)v12;
}
