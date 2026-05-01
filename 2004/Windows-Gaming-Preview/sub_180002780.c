/*
 * XREFs of sub_180002780 @ 0x180002780
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001C5C @ 0x180001C5C (sub_180001C5C.c)
 *     sub_180001EC8 @ 0x180001EC8 (sub_180001EC8.c)
 *     sub_180002350 @ 0x180002350 (sub_180002350.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180045C20 (_alloca_probe.c)
 */

__int64 __fastcall sub_180002780(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // r8
  _BYTE v5[1024]; // [rsp+20h] [rbp-1418h] BYREF
  char v6[4096]; // [rsp+420h] [rbp-1018h] BYREF

  v1 = (__int64 *)(a1 + 184);
  v2 = *(_QWORD *)(a1 + 184);
  if ( !v2 )
  {
    sub_180001C5C(v6, 2048LL, a1 + 24);
    sub_180002350(v5, 1024LL, (int)"%ws", v6);
    v3 = -1LL;
    do
      ++v3;
    while ( v5[v3] );
    sub_180001EC8((__int64)v1, v5, v3 + 1);
    v2 = *v1;
  }
  return (v2 + 4) & -(__int64)(v2 != 0);
}
