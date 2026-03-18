/*
 * XREFs of ?GetTargetModeRefreshRate@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DDDI_RATIONAL@@@Z @ 0x1C03A7EE0
 * Callers:
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C01B9F4C (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0011924 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::GetTargetModeRefreshRate(
        DMMVIDPNPRESENTPATH *this,
        struct _D3DDDI_RATIONAL *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  struct _D3DDDI_RATIONAL *v4; // rax
  unsigned int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 12);
  v3 = *(_QWORD *)(v2 + 104);
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 96));
    v3 = *(_QWORD *)(v2 + 104);
  }
  v7 = v3;
  v4 = *(struct _D3DDDI_RATIONAL **)(v3 + 144);
  if ( v4 )
  {
    v5 = 0;
    *a2 = v4[19];
  }
  else
  {
    v5 = 1075708679;
    WdLogSingleEntry2(2LL, this, 1075708679LL);
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset(&v7, 0LL);
  return v5;
}
