/*
 * XREFs of ?GetTargetModeRefreshRate@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DDDI_RATIONAL@@@Z @ 0x1C02E7FBC
 * Callers:
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C013CD80 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0008108 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::GetTargetModeRefreshRate(
        DMMVIDPNPRESENTPATH *this,
        struct _D3DDDI_RATIONAL *a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 12);
  v4 = *(_QWORD *)(v2 + 104);
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 96));
    v4 = *(_QWORD *)(v2 + 104);
  }
  v9 = v4;
  v5 = *(_QWORD *)(v4 + 144);
  if ( v5 )
  {
    v7 = 0;
    *a2 = *(struct _D3DDDI_RATIONAL *)(v5 + 92);
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v6 + 24) = this;
    v7 = 1075708679;
    *(_QWORD *)(v6 + 32) = 1075708679LL;
    WdLogEvent5_WdError(v6);
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset(&v9, 0LL);
  return v7;
}
