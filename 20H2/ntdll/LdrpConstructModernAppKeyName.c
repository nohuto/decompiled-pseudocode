/*
 * XREFs of LdrpConstructModernAppKeyName @ 0x1800D083C
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800D10CC (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x180069530 (RtlQueryPackageIdentity.c)
 *     RtlStringCbPrintfExW @ 0x1800698FC (RtlStringCbPrintfExW.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     memset @ 0x1800A4180 (memset.c)
 */

__int64 __fastcall LdrpConstructModernAppKeyName(_WORD *a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+40h] [rbp-1B8h] BYREF
  __int64 v4; // [rsp+48h] [rbp-1B0h] BYREF
  _BYTE v5[144]; // [rsp+50h] [rbp-1A8h] BYREF
  _BYTE v6[256]; // [rsp+E0h] [rbp-118h] BYREF

  v3 = 132LL;
  v4 = 256LL;
  memset(v6, 0, sizeof(v6));
  memset(v5, 0, 0x84uLL);
  result = RtlQueryPackageIdentity(-4, (int)v6, (int)&v4, (int)v5, (__int64)&v3, 0LL);
  if ( (int)result >= 0 )
    return RtlStringCbPrintfExW(a1, 0x184uLL, 0LL, 0LL, 0, L"%s!%s", v6, v5, v3, v4);
  return result;
}
