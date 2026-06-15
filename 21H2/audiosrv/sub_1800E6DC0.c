/*
 * XREFs of sub_1800E6DC0 @ 0x1800E6DC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006FD50 @ 0x18006FD50 (sub_18006FD50.c)
 */

__int64 __fastcall sub_1800E6DC0(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v2; // rcx
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v5; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD **)(a1 + 16);
  v2 = a1 + 8;
  if ( v1[3] >= 8uLL )
    v1 = (_QWORD *)*v1;
  v5 = v1;
  v4[0] = v2;
  v4[1] = &v5;
  return sub_18006FD50((__int64)v4);
}
