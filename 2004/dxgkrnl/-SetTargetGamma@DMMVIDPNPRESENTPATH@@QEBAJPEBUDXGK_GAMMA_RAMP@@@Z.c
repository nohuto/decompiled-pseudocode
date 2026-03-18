/*
 * XREFs of ?SetTargetGamma@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C02E94B0
 * Callers:
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C013B714 (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C000B5DC (-IsTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?DdiSetTargetGamma@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETGAMMA@@@Z @ 0x1C021EC1C (-DdiSetTargetGamma@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETGAMMA@@@Z.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SetTargetGamma(DMMVIDPNPRESENTPATH *this, D3DDDI_GAMMA_RAMP_RGB256x3x16 **a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  DXGADAPTER **v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r8
  __int128 v16; // xmm0
  D3DDDI_VIDEO_PRESENT_TARGET_ID v17; // eax
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *v18; // xmm1_8
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v26; // rax
  _DXGKARG_SETTARGETGAMMA v27; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  v5 = *(_QWORD *)(v4 + 40);
  if ( !v5 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v6);
    v5 = *(_QWORD *)(v4 + 40);
  }
  v7 = *(_QWORD *)(v5 + 88);
  v8 = *(DXGADAPTER ***)(v7 + 8);
  if ( !v8 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v9);
    v8 = *(DXGADAPTER ***)(v7 + 8);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v8[2]) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8[2] + 27) + 64LL) + 40LL);
  if ( *(_DWORD *)(v13 + 28) < 0x700Au )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13, v10);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !a2 || !DMMVIDEOPRESENTTARGET::IsTargetCurrentActive(*(DMMVIDEOPRESENTTARGET **)(*((_QWORD *)this + 12) + 96LL)) )
    return 0LL;
  v16 = *((_OWORD *)a2 + 1);
  *(&v27.TargetId + 1) = 0;
  v17 = *(_DWORD *)(v15 + 24);
  v18 = a2[4];
  *(_OWORD *)&v27.GammaRamp.Type = v16;
  v27.TargetId = v17;
  v27.GammaRamp.Data.pRgb256x3x16 = v18;
  v19 = ADAPTER_DISPLAY::DdiSetTargetGamma((ADAPTER_DISPLAY *)v8, &v27, v15);
  v23 = v19;
  if ( v19 == -1073741637 )
  {
    v24 = WdLogNewEntry5_WdWarning(v21, v20, v22);
    *(_QWORD *)(v24 + 24) = this;
    *(_QWORD *)(v24 + 32) = -1073741637LL;
    WdLogEvent5_WdWarning(v24);
    return 3221225659LL;
  }
  if ( v19 >= 0 )
    return 0LL;
  v26 = WdLogNewEntry5_WdError(v21, v20);
  *(_QWORD *)(v26 + 24) = this;
  *(_QWORD *)(v26 + 32) = v23;
  WdLogEvent5_WdError(v26);
  return (unsigned int)v23;
}
