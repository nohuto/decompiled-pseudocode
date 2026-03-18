/*
 * XREFs of ?ConvertD3DddiRotationToDmmRotation@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DDDI_ROTATION@@@Z @ 0x1C02F6A08
 * Callers:
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_DXGK_DISPLAYMODE_INFO@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C02F765C (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall ConvertD3DddiRotationToDmmRotation(enum _D3DDDI_ROTATION a1)
{
  __int64 v1; // rbx

  switch ( a1 )
  {
    case D3DDDI_ROTATION_IDENTITY:
      return 1LL;
    case D3DDDI_ROTATION_90:
      return 2LL;
    case D3DDDI_ROTATION_180:
      return 3LL;
    case D3DDDI_ROTATION_270:
      return 4LL;
  }
  v1 = a1;
  WdLogSingleEntry1(2LL, a1);
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Unknown orientation %I64d", v1, 0LL, 0LL, 0LL, 0LL);
  return 255LL;
}
