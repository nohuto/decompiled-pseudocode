/*
 * XREFs of ?GetSizeOverride@@YA_NPEAN@Z @ 0x18046BA98
 * Callers:
 *     ?InitializeMonitors@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ @ 0x180368860 (-InitializeMonitors@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 */

bool __fastcall GetSizeOverride(double *a1)
{
  int v1; // eax
  double v3; // xmm6_8
  double v4; // xmm0_8
  DWORD pcbData[4]; // [rsp+40h] [rbp-248h] BYREF
  _BYTE pvData[528]; // [rsp+50h] [rbp-238h] BYREF

  v1 = dword_1805CE6E0;
  if ( dword_1805CE6E0 )
  {
    v3 = *(double *)&qword_1805CE6D8;
  }
  else
  {
    pcbData[0] = 520;
    v3 = 0.0;
    if ( !RegGetValueW(
            HKEY_LOCAL_MACHINE,
            L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Scaling",
            L"MonitorSize",
            2u,
            0LL,
            pvData,
            pcbData) )
    {
      v4 = _o_wcstod(pvData, 0LL);
      v3 = v4;
      if ( v4 == INFINITY || v4 == -INFINITY )
        v3 = 0.0;
    }
    qword_1805CE6D8 = *(_QWORD *)&v3;
    v1 = (v3 <= 0.0) + 1;
    dword_1805CE6E0 = v1;
  }
  *a1 = v3;
  return v1 == 1;
}
