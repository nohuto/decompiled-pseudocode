/*
 * XREFs of ?DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1C01A97B8
 * Callers:
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C01A6D08 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C01A77A0 (-PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C01A7B04 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C01AA47C (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C01DF790 (-PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@.c)
 *     ?DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MULTISAMPLINGMETHOD@@PEA_K@Z @ 0x1C039B524 (-DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MUL.c)
 *     ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C039D9F8 (-PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_R.c)
 *     ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C039DE58 (-PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000FD8C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 */

unsigned __int8 __fastcall DmmIsAllSourcesPixelFormatValid(struct DMMVIDPNTOPOLOGY *a1)
{
  char *v2; // rsi
  char *v3; // rbx
  char *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdi
  char *v9; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    WdLogSingleEntry0(1LL);
  v2 = (char *)a1 + 24;
  v3 = (char *)*((_QWORD *)a1 + 3);
  if ( v3 == v2 )
    return 1;
  v4 = v3 - 8;
  if ( !v4 )
    return 1;
  while ( 1 )
  {
    v5 = *((_QWORD *)v4 + 11);
    if ( !v5 )
      WdLogSingleEntry0(1LL);
    v6 = *(_QWORD *)(v5 + 104);
    v13 = 0LL;
    if ( !v6 )
    {
      v7 = 0LL;
LABEL_18:
      WdLogSingleEntry0(1LL);
      goto LABEL_9;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 96));
    v7 = *(_QWORD *)(v5 + 104);
    if ( !v7 )
      goto LABEL_18;
LABEL_9:
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v13, v7);
    v8 = *(_QWORD *)(v13 + 144);
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v13, 0LL);
    if ( v8 )
    {
      v11 = *(int *)(v8 + 96);
      if ( (unsigned int)v11 <= 0x29 )
      {
        v12 = 0x20003900000LL;
        if ( _bittest64(&v12, v11) )
          return 0;
      }
    }
    v9 = (char *)*((_QWORD *)v4 + 1);
    v4 = v9 - 8;
    if ( v9 == v2 )
      v4 = 0LL;
    if ( !v4 )
      return 1;
  }
}
