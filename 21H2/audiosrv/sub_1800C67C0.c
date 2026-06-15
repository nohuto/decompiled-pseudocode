/*
 * XREFs of sub_1800C67C0 @ 0x1800C67C0
 * Callers:
 *     sub_1800C64F8 @ 0x1800C64F8 (sub_1800C64F8.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_1800C67C0(struct _SYSTEMTIME *a1, DOUBLE *a2)
{
  unsigned int v2; // edi
  struct _SYSTEMTIME SystemTime; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  if ( !a2 )
    sub_1800B8610(-2147467259);
  SystemTime = 0LL;
  if ( SystemTimeToVariantTime(a1, a2)
    && VariantTimeToSystemTime(*a2, &SystemTime)
    && a1->wYear == SystemTime.wYear
    && a1->wMonth == SystemTime.wMonth
    && a1->wDay == SystemTime.wDay
    && a1->wHour == SystemTime.wHour
    && a1->wMinute == SystemTime.wMinute )
  {
    return a1->wSecond == SystemTime.wSecond;
  }
  return v2;
}
