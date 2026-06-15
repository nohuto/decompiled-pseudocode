/*
 * XREFs of sub_18013AF20 @ 0x18013AF20
 * Callers:
 *     sub_18013B62C @ 0x18013B62C (sub_18013B62C.c)
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     wcscmp @ 0x18007441B (wcscmp.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800F3AD4 @ 0x1800F3AD4 (sub_1800F3AD4.c)
 *     sub_18013A830 @ 0x18013A830 (sub_18013A830.c)
 *     sub_18013AC1C @ 0x18013AC1C (sub_18013AC1C.c)
 *     sub_18013B508 @ 0x18013B508 (sub_18013B508.c)
 *     sub_18013BAA8 @ 0x18013BAA8 (sub_18013BAA8.c)
 */

__int64 __fastcall sub_18013AF20(unsigned int *a1, __int64 *a2, wchar_t **a3)
{
  int v6; // ebx
  __int64 v7; // rax
  int v8; // eax
  wchar_t *v9; // rax
  wchar_t *String1; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+58h] [rbp+20h] BYREF

  v6 = sub_18013AC1C(a1, (__int64)a2, &v12);
  if ( v6 < 0 )
    return (unsigned int)v6;
  if ( v12 == 1 )
  {
    v7 = *a2;
    String1 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64 *, wchar_t **, _QWORD))(v7 + 112))(a2, &String1, 0LL);
    if ( v6 )
      goto LABEL_16;
    if ( !wcscmp(String1, L"PhoneCall") )
    {
      v8 = sub_18013B508(a1, a2, a3);
LABEL_8:
      v6 = v8;
      goto LABEL_16;
    }
    if ( !wcscmp(String1, L"Stream") )
    {
      v8 = sub_18013BAA8(a1, a2, a3);
      goto LABEL_8;
    }
    if ( !wcscmp(String1, L"KeywordDetector") )
    {
      v9 = (wchar_t *)sub_180055F40(0x10uLL);
      String1 = v9;
      if ( v9 )
      {
        *((_DWORD *)v9 + 2) = 2;
        *(_QWORD *)v9 = off_18014B3A0;
      }
      *a3 = v9;
      if ( v9 )
        return (unsigned int)sub_18013A830(a1, (__int64)a2, (__int64)L"ConsumerInfo");
      return (unsigned int)-2147024882;
    }
    v6 = -2147024809;
    sub_1800F3AD4((__int64)L"Invalid resource consumer type %s", String1);
  }
  else
  {
    v6 = -2147024809;
  }
LABEL_16:
  if ( v6 >= 0 )
    return (unsigned int)sub_18013A830(a1, (__int64)a2, (__int64)L"ConsumerInfo");
  return (unsigned int)v6;
}
