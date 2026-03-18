/*
 * XREFs of FastGetProfileStringFromIDW @ 0x1C002EE80
 * Callers:
 *     xxxODI_ColorInit @ 0x1C002E9F0 (xxxODI_ColorInit.c)
 * Callees:
 *     RtlLoadStringOrError @ 0x1C002EF20 (RtlLoadStringOrError.c)
 *     FastGetProfileStringW @ 0x1C007A050 (FastGetProfileStringW.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 */

__int64 __fastcall FastGetProfileStringFromIDW(
        __int64 a1,
        unsigned int a2,
        ULONG a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7)
{
  _BYTE v11[160]; // [rsp+40h] [rbp-C8h] BYREF

  RtlLoadStringOrError(a3, v11);
  return FastGetProfileStringW(a1, a2, v11, a4, a5, a6, a7);
}
