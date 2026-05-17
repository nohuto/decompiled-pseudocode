/*
 * XREFs of _RtlpReportInvalidExceptionChain@8 @ 0x4B366649
 * Callers:
 *     _RtlDispatchException@8 @ 0x4B2E8F8C (_RtlDispatchException@8.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlReportException@12 @ 0x4B33A4D0 (_RtlReportException@12.c)
 */

int __fastcall RtlpReportInvalidExceptionChain(int a1, int a2)
{
  _DWORD v5[21]; // [esp+8h] [ebp-58h] BYREF

  memset(v5, 0, 0x50u);
  v5[3] = *(_DWORD *)(a1 + 12);
  v5[0] = -1073740791;
  v5[1] = 8;
  v5[2] = a1;
  v5[4] = 1;
  v5[5] = 21;
  return RtlReportException((int)v5, a2, 15);
}
