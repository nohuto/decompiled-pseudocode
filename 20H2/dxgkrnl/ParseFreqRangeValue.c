/*
 * XREFs of ParseFreqRangeValue @ 0x1C02F4158
 * Callers:
 *     ?_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C01866C0 (-_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ParseModeCap @ 0x1C0186974 (ParseModeCap.c)
 */

char __fastcall ParseFreqRangeValue(_DWORD *a1, _DWORD *a2, int *a3, _DWORD *a4, _DWORD *a5)
{
  unsigned int v10; // eax
  size_t v11; // r8
  _WORD v12[264]; // [rsp+30h] [rbp-248h] BYREF

  if ( a1[1] != 1 )
    return 0;
  memset(v12, 0, 0x208uLL);
  v10 = a1[2];
  v11 = 518LL;
  if ( v10 <= 0x206 )
    v11 = v10;
  memmove(v12, a1 + 3, v11);
  return ParseModeCap(v12, 1, a2, a3, a4, a5);
}
