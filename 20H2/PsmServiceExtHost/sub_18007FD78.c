/*
 * XREFs of sub_18007FD78 @ 0x18007FD78
 * Callers:
 *     _wsetlocale_set_cat @ 0x180079634 (_wsetlocale_set_cat.c)
 *     sub_18007984C @ 0x18007984C (sub_18007984C.c)
 * Callees:
 *     sub_18000375C @ 0x18000375C (sub_18000375C.c)
 *     sub_180025F18 @ 0x180025F18 (sub_180025F18.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_180027598 @ 0x180027598 (sub_180027598.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_18007FD78(__int64 a1, const wchar_t *a2)
{
  unsigned int v4; // edi
  _QWORD *v5; // rbx
  int v7[4]; // [rsp+20h] [rbp-C8h] BYREF
  wchar_t String1[72]; // [rsp+30h] [rbp-B8h] BYREF

  memset(String1, 0, 0x82uLL);
  v4 = 0;
  v5 = (_QWORD *)sub_180025F18(a1, 1);
  if ( v5 )
  {
    do
    {
      if ( !a2 || (v7[0] = 130, PsmGetApplicationNameFromKey(v5 + 12, String1, v7), !wcsicmp(String1, a2)) )
      {
        v4 = sub_18000375C();
        if ( v4 )
          break;
      }
      v5 = (_QWORD *)sub_180027598(a1, v5);
    }
    while ( v5 );
    if ( v5 )
      sub_1800274E0(v5);
  }
  return v4;
}
