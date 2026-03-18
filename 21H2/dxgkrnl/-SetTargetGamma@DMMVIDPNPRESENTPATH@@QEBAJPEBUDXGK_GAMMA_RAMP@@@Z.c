/*
 * XREFs of ?SetTargetGamma@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C01BCA7C
 * Callers:
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C01BC9FC (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C00136D0 (-IsTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?DdiSetTargetGamma@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETGAMMA@@@Z @ 0x1C01BCD34 (-DdiSetTargetGamma@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETGAMMA@@@Z.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SetTargetGamma(DMMVIDPNPRESENTPATH *this, const struct DXGK_GAMMA_RAMP *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rsi
  DXGADAPTER **v7; // rbx
  __int64 v8; // r8
  __int128 v9; // xmm0
  D3DDDI_VIDEO_PRESENT_TARGET_ID v10; // eax
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *v11; // xmm1_8
  int v12; // eax
  unsigned int v13; // ebx
  _DXGKARG_SETTARGETGAMMA v15; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  v5 = *(_QWORD *)(v4 + 40);
  if ( !v5 )
  {
    WdLogSingleEntry0(1LL);
    v5 = *(_QWORD *)(v4 + 40);
  }
  v6 = *(_QWORD *)(v5 + 88);
  v7 = *(DXGADAPTER ***)(v6 + 8);
  if ( !v7 )
  {
    WdLogSingleEntry0(1LL);
    v7 = *(DXGADAPTER ***)(v6 + 8);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v7[2]) )
    WdLogSingleEntry0(1LL);
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7[2] + 27) + 64LL) + 40LL) + 28LL) < 0x700Au )
    WdLogSingleEntry0(1LL);
  if ( !a2 || !DMMVIDEOPRESENTTARGET::IsTargetCurrentActive(*(DMMVIDEOPRESENTTARGET **)(*((_QWORD *)this + 12) + 96LL)) )
    return 0LL;
  v9 = *((_OWORD *)a2 + 1);
  *(&v15.TargetId + 1) = 0;
  v10 = *(_DWORD *)(v8 + 24);
  v11 = (D3DDDI_GAMMA_RAMP_RGB256x3x16 *)*((_QWORD *)a2 + 4);
  *(_OWORD *)&v15.GammaRamp.Type = v9;
  v15.TargetId = v10;
  v15.GammaRamp.Data.pRgb256x3x16 = v11;
  v12 = ADAPTER_DISPLAY::DdiSetTargetGamma((ADAPTER_DISPLAY *)v7, &v15);
  v13 = v12;
  if ( v12 == -1073741637 )
  {
    WdLogSingleEntry2(3LL, this, -1073741637LL);
    return 3221225659LL;
  }
  else
  {
    if ( v12 >= 0 )
      return 0LL;
    WdLogSingleEntry2(2LL, this, v12);
    return v13;
  }
}
