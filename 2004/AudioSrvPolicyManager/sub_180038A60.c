/*
 * XREFs of sub_180038A60 @ 0x180038A60
 * Callers:
 *     sub_18003785C @ 0x18003785C (sub_18003785C.c)
 *     sub_180037938 @ 0x180037938 (sub_180037938.c)
 * Callees:
 *     sub_180038278 @ 0x180038278 (sub_180038278.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180038A60(_QWORD *a1)
{
  int v2; // ebx
  char v3; // si
  char v4; // di
  void *v5; // rbx
  LPVOID v6; // rdi
  void *v7; // rcx
  LPVOID pv; // [rsp+40h] [rbp+8h] BYREF

  pv = 0LL;
  v2 = sub_180038278(
         (char *)L"SOFTWARE\\Microsoft\\Windows\\AssignedAccessConfiguration",
         (__int64)L"AssignedAccessConfiguration",
         &pv);
  v3 = 1;
  if ( v2 >= 0 )
  {
    v4 = 0;
    v5 = pv;
    if ( pv )
    {
      v6 = pv;
      v5 = 0LL;
      v7 = (void *)a1[1];
      if ( v7 )
        CoTaskMemFree(v7);
      a1[1] = v6;
      a1[3] = -1LL;
      a1[2] = -1LL;
      v4 = 1;
    }
    if ( v5 )
      CoTaskMemFree(v5);
    v2 = 0;
  }
  else
  {
    if ( pv )
      CoTaskMemFree(pv);
    v4 = 0;
  }
  if ( v2 < 0 || !v4 )
    return 0;
  return v3;
}
