/*
 * XREFs of sub_18000EFB0 @ 0x18000EFB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000CA8C @ 0x18000CA8C (sub_18000CA8C.c)
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_18000EECC @ 0x18000EECC (sub_18000EECC.c)
 *     _alloca_probe @ 0x180123F50 (_alloca_probe.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18000EFB0(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // r8
  _BYTE v5[1024]; // [rsp+20h] [rbp-1418h] BYREF
  _WORD v6[2048]; // [rsp+420h] [rbp-1018h] BYREF

  v1 = (__int64 *)(a1 + 184);
  v2 = *(_QWORD *)(a1 + 184);
  if ( !v2 )
  {
    sub_18000CA8C(v6, 2048LL, a1 + 24);
    sub_18000E954(v5, 1024LL, (int)&unk_18013FEA0, v6);
    v3 = -1LL;
    do
      ++v3;
    while ( v5[v3] );
    sub_18000EECC((__int64)v1, (__int64)v5, v3 + 1);
    v2 = *v1;
  }
  return (v2 + 4) & -(__int64)(v2 != 0);
}
