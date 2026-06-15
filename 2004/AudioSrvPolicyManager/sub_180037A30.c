/*
 * XREFs of sub_180037A30 @ 0x180037A30
 * Callers:
 *     sub_180037338 @ 0x180037338 (sub_180037338.c)
 * Callees:
 *     sub_180038118 @ 0x180038118 (sub_180038118.c)
 *     sub_180038278 @ 0x180038278 (sub_180038278.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_180037A30(__int64 a1)
{
  int v2; // eax
  void *v3; // rbx
  void *v4; // rsi
  char v5; // di
  void *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  v2 = sub_180038278(L"SOFTWARE\\Microsoft\\Windows\\AssignedAccessConfiguration", L"AssignedAccessConfiguration", &v7);
  v3 = v7;
  if ( v2 >= 0 && v7 )
  {
    v4 = v7;
    v3 = 0LL;
    if ( *(_QWORD *)a1 )
      CoTaskMemFree(*(LPVOID *)a1);
    *(_QWORD *)a1 = v4;
    *(_QWORD *)(a1 + 16) = -1LL;
    *(_QWORD *)(a1 + 8) = -1LL;
    *(_DWORD *)(a1 + 24) = sub_180038118(a1);
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  if ( v3 )
    CoTaskMemFree(v3);
  return v5;
}
