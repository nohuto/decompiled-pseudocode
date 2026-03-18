/*
 * XREFs of _EditionReportMouseBreakToAccessibility@24 @ 0x147CA6
 * Callers:
 *     <none>
 * Callees:
 *     ?MSGLUA_GPQFOREGROUND@@YGXXZ @ 0xC5904 (-MSGLUA_GPQFOREGROUND@@YGXXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?IsGpqForegroundAccessibleOnInputThread@@YG_N_NABUtagUIPI_INFO_INT@@@Z @ 0x146B56 (-IsGpqForegroundAccessibleOnInputThread@@YG_N_NABUtagUIPI_INFO_INT@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall EditionReportMouseBreakToAccessibility(int a1, __int16 a2, int a3, int a4, int a5, int a6)
{
  _DWORD v7[3]; // [esp+8h] [ebp-10h] BYREF

  v7[0] = a3;
  v7[1] = a4;
  v7[2] = a5;
  if ( (*(_BYTE *)(&_gMouseKeys + 1) & 1) != 0 )
    _gwMKButtonState &= ~a2;
  if ( (_gStickyKeys[4] & 1) == 0 )
    return 1;
  xxxUnlatchStickyKeys();
  if ( IsGpqForegroundAccessibleOnInputThread(a6 != 0, (int)v7) )
    return 1;
  MSGLUA_GPQFOREGROUND();
  return 0;
}
