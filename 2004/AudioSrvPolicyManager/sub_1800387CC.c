/*
 * XREFs of sub_1800387CC @ 0x1800387CC
 * Callers:
 *     sub_180037780 @ 0x180037780 (sub_180037780.c)
 * Callees:
 *     sub_18002B300 @ 0x18002B300 (sub_18002B300.c)
 *     sub_18002B8A0 @ 0x18002B8A0 (sub_18002B8A0.c)
 */

// Hidden C++ exception states: #wind=6
char __fastcall sub_1800387CC(_QWORD *a1)
{
  char v2; // si
  void *v3; // rbx
  LPVOID v4; // rsi
  void *v5; // rcx
  LPVOID pv; // [rsp+60h] [rbp+8h] BYREF
  LPVOID v8; // [rsp+68h] [rbp+10h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h]
  const wchar_t *v10; // [rsp+78h] [rbp+20h]

  v8 = 0LL;
  v9 = 0LL;
  v10 = L"SOFTWARE\\Microsoft\\Windows Embedded\\Lockdown";
  sub_18002B8A0(&pv, (char *)L"SOFTWARE\\Microsoft\\Windows Embedded\\Lockdown", 0xFFFFFFFFFFFFFFFFuLL);
  sub_18002B300(&v8, &pv);
  if ( pv )
    CoTaskMemFree(pv);
  v2 = 0;
  v3 = v8;
  if ( v8 )
  {
    v4 = v8;
    v3 = 0LL;
    v5 = (void *)a1[1];
    if ( v5 )
      CoTaskMemFree(v5);
    a1[1] = v4;
    a1[3] = -1LL;
    a1[2] = -1LL;
    v2 = 1;
  }
  if ( v3 )
    CoTaskMemFree(v3);
  return v2;
}
