/*
 * XREFs of ?SpontaneousTerminate@@YGKPAKPAUtagDDECONV@@@Z @ 0x17EC27
 * Callers:
 *     ?xxxUnexpectedClientPost@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FDC3 (-xxxUnexpectedClientPost@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FE83 (-xxxUnexpectedServerPost@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 */

unsigned int __fastcall SpontaneousTerminate(_DWORD *a1, int a2)
{
  int v4; // eax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(14, 50, &WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
  v4 = *(_DWORD *)(a2 + 40);
  if ( (v4 & 2) != 0 )
    return 1;
  *(_DWORD *)(a2 + 40) = v4 | 2;
  *a1 |= 0x80000000;
  return 2;
}
