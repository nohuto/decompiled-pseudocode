/*
 * XREFs of sub_18007F6D0 @ 0x18007F6D0
 * Callers:
 *     sub_180018AF0 @ 0x180018AF0 (sub_180018AF0.c)
 *     sub_1800197C0 @ 0x1800197C0 (sub_1800197C0.c)
 * Callees:
 *     sub_1800060BC @ 0x1800060BC (sub_1800060BC.c)
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18001FD20 @ 0x18001FD20 (sub_18001FD20.c)
 *     sub_180020CC0 @ 0x180020CC0 (sub_180020CC0.c)
 */

__int64 __fastcall sub_18007F6D0(__int64 a1, NTSTATUS a2)
{
  unsigned int v3; // ebx
  signed int v4; // eax
  __int64 result; // rax
  _QWORD *v6; // rdi
  int v7; // [rsp+40h] [rbp-18h]

  if ( (a2 & 0x20000000) != 0 )
  {
    v3 = a2 & 0xDFFFFFFF;
  }
  else
  {
    v4 = RtlNtStatusToDosError(a2);
    v3 = v4;
    if ( v4 > 0 )
      v3 = (unsigned __int16)v4 | 0x80070000;
  }
  for ( result = (__int64)sub_18001FD20(a1); ; result = sub_180020CC0(v6) )
  {
    v6 = (_QWORD *)result;
    if ( !result )
      break;
    sub_1800093A0(result, 0);
    sub_1800060BC(
      (__int64)v6,
      3LL,
      12LL,
      v3,
      1,
      2048,
      0,
      (unsigned int (__fastcall *)(__int64, _QWORD))sub_1800811C0,
      v7,
      0LL);
    sub_18000A110((__int64)v6);
  }
  return result;
}
