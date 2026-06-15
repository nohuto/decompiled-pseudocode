/*
 * XREFs of sub_18002E450 @ 0x18002E450
 * Callers:
 *     sub_18002E570 @ 0x18002E570 (sub_18002E570.c)
 * Callees:
 *     sub_18000210C @ 0x18000210C (sub_18000210C.c)
 *     sub_180003780 @ 0x180003780 (sub_180003780.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     vsnprintf @ 0x18003A7E4 (vsnprintf.c)
 *     _alloca_probe @ 0x18003ADA0 (_alloca_probe.c)
 */

void __fastcall sub_18002E450(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        va_list ArgList)
{
  int v13; // eax
  char DstBuf[4094]; // [rsp+50h] [rbp-2038h] BYREF
  __int16 v15; // [rsp+104Eh] [rbp-103Ah]
  char Format[4096]; // [rsp+1050h] [rbp-1038h] BYREF

  if ( a9 )
  {
    if ( ArgList )
    {
      sub_18000210C(Format, 2048LL, (const char *)L"%hs");
      v13 = vsnprintf(DstBuf, 0x7FFuLL, Format, ArgList);
      if ( v13 < 0 || (unsigned __int64)v13 >= 0x7FF )
        v15 = 0;
    }
    else
    {
      sub_18000210C(DstBuf, 2048LL, (const char *)L"%hs");
    }
  }
  else
  {
    *(_WORD *)DstBuf = 0;
  }
  sub_180003780(a1, a2, a3, 0LL, 0LL, a6, 2, a8, DstBuf, 0);
}
