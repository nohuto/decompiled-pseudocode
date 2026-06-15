/*
 * XREFs of sub_180029F80 @ 0x180029F80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F8F4 @ 0x18000F8F4 (sub_18000F8F4.c)
 *     sub_180029FD4 @ 0x180029FD4 (sub_180029FD4.c)
 */

__int64 __fastcall sub_180029F80(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = a3;
  v7 = a1;
  v5[0] = &v7;
  v5[1] = &v8;
  v3 = sub_180029FD4(v5);
  if ( v3 < 0 )
    sub_18000F8F4(retaddr, 2394, (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp", v3);
  return 0LL;
}
