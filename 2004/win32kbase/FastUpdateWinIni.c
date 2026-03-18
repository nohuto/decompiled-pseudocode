/*
 * XREFs of FastUpdateWinIni @ 0x1C0124330
 * Callers:
 *     <none>
 * Callees:
 *     RtlLoadStringOrError @ 0x1C002EF20 (RtlLoadStringOrError.c)
 *     FastWriteProfileStringW @ 0x1C005C710 (FastWriteProfileStringW.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 */

__int64 __fastcall FastUpdateWinIni(__int64 a1, unsigned int a2, ULONG a3, _WORD *a4)
{
  WCHAR v8[40]; // [rsp+20h] [rbp-78h] BYREF

  RtlLoadStringOrError(a3, v8, 40, 0);
  return FastWriteProfileStringW(a1, a2, v8, a4);
}
