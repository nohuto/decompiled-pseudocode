/*
 * XREFs of ?SetIlluminance@LPMDisplayCtrl@@QEAAJPEAU_D3DKMT_LPMD_ILLUMINANCE_ARGS@@@Z @ 0x1C02750CC
 * Callers:
 *     ?DxgkLPMDisplayControl@@YAJPEAU_D3DKMT_LPM_DISPLAY_CONTROL@@@Z @ 0x1C02745A0 (-DxgkLPMDisplayControl@@YAJPEAU_D3DKMT_LPM_DISPLAY_CONTROL@@@Z.c)
 * Callees:
 *     ?CallDriver@LPMDisplayCtrl@@AEAAJKPEAXK0KPEA_K@Z @ 0x1C02743C8 (-CallDriver@LPMDisplayCtrl@@AEAAJKPEAXK0KPEA_K@Z.c)
 */

NTSTATUS __fastcall LPMDisplayCtrl::SetIlluminance(LPMDisplayCtrl *this, LPMDisplayCtrl **a2)
{
  LPMDisplayCtrl *InputBuffer; // [rsp+50h] [rbp+8h] BYREF

  InputBuffer = this;
  if ( !a2 )
    return -1073741811;
  InputBuffer = *a2;
  return LPMDisplayCtrl::CallDriver(FileObject, 0x83212140, &InputBuffer, 8u, 0LL, 0, 0LL);
}
