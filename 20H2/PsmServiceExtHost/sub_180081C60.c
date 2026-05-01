/*
 * XREFs of sub_180081C60 @ 0x180081C60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010220 @ 0x180010220 (sub_180010220.c)
 *     sub_180037B6C @ 0x180037B6C (sub_180037B6C.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180081C60(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  wchar_t String1[72]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = a1;
  v4 = (*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL) - 40;
  if ( v4 == a2[1] )
    goto LABEL_4;
  sub_180010220(v4 + 88, (__int64)String1);
  if ( !wcsicmp(String1, (const wchar_t *)(*a2 + 96LL)) )
  {
    a2[1] = v4;
    a1 = v3;
LABEL_4:
    sub_180037B6C(a1);
  }
  return 1LL;
}
