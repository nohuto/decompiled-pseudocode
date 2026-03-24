/*
 * XREFs of DpiKsrSetBootGraphicsInformation @ 0x1C02D3004
 * Callers:
 *     DpiFdoHandleSystemPower @ 0x1C017695C (DpiFdoHandleSystemPower.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 */

NTSTATUS DpiKsrSetBootGraphicsInformation()
{
  __int64 SystemInformation; // [rsp+20h] [rbp-30h] BYREF
  int v2; // [rsp+28h] [rbp-28h]
  __int64 v3; // [rsp+2Ch] [rbp-24h]
  __int64 v4; // [rsp+34h] [rbp-1Ch]
  int v5; // [rsp+3Ch] [rbp-14h]

  v4 = 0LL;
  v5 = 0;
  v2 = xmmword_1C00B2DC8;
  v3 = DWORD1(xmmword_1C00B2DC8);
  SystemInformation = xmmword_1C00B2DD8;
  if ( HIDWORD(xmmword_1C00B2DC8) == 20 )
  {
    HIDWORD(v4) = 3;
    HIDWORD(v3) = DWORD2(xmmword_1C00B2DC8) / 3;
    return ZwSetSystemInformation(MaxSystemInfoClass|SystemTimeAdjustmentInformation, &SystemInformation, 0x20uLL);
  }
  if ( SHIDWORD(xmmword_1C00B2DC8) <= 20 )
    goto LABEL_8;
  if ( SHIDWORD(xmmword_1C00B2DC8) <= 22 )
  {
    HIDWORD(v4) = 4;
    goto LABEL_7;
  }
  if ( (unsigned int)(HIDWORD(xmmword_1C00B2DC8) - 32) > 1 )
  {
LABEL_8:
    HIDWORD(v4) = 0;
    return ZwSetSystemInformation(MaxSystemInfoClass|SystemTimeAdjustmentInformation, &SystemInformation, 0x20uLL);
  }
  HIDWORD(v4) = 2;
LABEL_7:
  HIDWORD(v3) = DWORD2(xmmword_1C00B2DC8) >> 2;
  return ZwSetSystemInformation(MaxSystemInfoClass|SystemTimeAdjustmentInformation, &SystemInformation, 0x20uLL);
}
