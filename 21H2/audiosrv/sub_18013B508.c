/*
 * XREFs of sub_18013B508 @ 0x18013B508
 * Callers:
 *     sub_18013AF20 @ 0x18013AF20 (sub_18013AF20.c)
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     wcscmp @ 0x18007441B (wcscmp.c)
 *     sub_1800F3AD4 @ 0x1800F3AD4 (sub_1800F3AD4.c)
 *     sub_18013A830 @ 0x18013A830 (sub_18013A830.c)
 *     sub_18013B948 @ 0x18013B948 (sub_18013B948.c)
 */

__int64 __fastcall sub_18013B508(unsigned int *a1, __int64 a2, _QWORD *a3)
{
  int v6; // edi
  int v7; // ebx
  _DWORD *v8; // rax
  wchar_t String1[264]; // [rsp+40h] [rbp-248h] BYREF

  memset(String1, 0, 0x20AuLL);
  v6 = 0;
  v7 = sub_18013B948((_DWORD)a1, a2, (unsigned int)L"CallState", (unsigned int)String1, 261);
  if ( v7 >= 0 )
  {
    if ( wcscmp(String1, L"Active") )
    {
      if ( !wcscmp(String1, L"Hold") )
      {
        v6 = 1;
      }
      else
      {
        v7 = -2147024809;
        sub_1800F3AD4((__int64)L"Invalid call state %s", String1);
      }
    }
    if ( v7 >= 0 )
    {
      v7 = sub_18013A830(a1, a2, (__int64)L"PhoneCall");
      if ( v7 >= 0 )
      {
        v8 = sub_180055F40(0x18uLL);
        if ( v8 )
        {
          v8[2] = 0;
          *(_QWORD *)v8 = off_18014B3A8;
          v8[4] = v6;
        }
        *a3 = v8;
        if ( !v8 )
          return (unsigned int)-2147024882;
      }
    }
  }
  return (unsigned int)v7;
}
