/*
 * XREFs of ?ConvertDIPSToPixels@ControllerProcessor@@AEAAKAEBK@Z @ 0x180120628
 * Callers:
 *     ?RefreshCursorMagnetismRegistrySettings@ControllerProcessor@@AEAAXXZ @ 0x180121638 (-RefreshCursorMagnetismRegistrySettings@ControllerProcessor@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 */

int __fastcall ControllerProcessor::ConvertDIPSToPixels(ControllerProcessor *this, const unsigned int *a2)
{
  int v3; // eax
  _DWORD v5[4]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v6[8]; // [rsp+30h] [rbp-28h] BYREF
  int nDenominator; // [rsp+38h] [rbp-20h]

  GetPointerDeviceRects(-1LL, v6, v5);
  v3 = MulDiv(v5[2] - v5[0], 2540, nDenominator);
  return MulDiv(*a2, v3, 96);
}
