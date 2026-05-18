/*
 * XREFs of sub_18001BF2C @ 0x18001BF2C
 * Callers:
 *     sub_18001C3CC @ 0x18001C3CC (sub_18001C3CC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001BF2C(int a1)
{
  __int64 result; // rax
  int v3; // eax
  int v4; // ecx

  if ( a1 >= 0 )
    return 0LL;
  if ( a1 == -1073741801 )
    return 2147942414LL;
  if ( !qword_18021F4F0 )
    return a1 | 0x10000000u;
  v3 = qword_18021F4F0();
  v4 = v3;
  if ( !v3 || v3 == 317 )
    return a1 | 0x10000000u;
  result = (unsigned __int16)v3 | 0x80070000;
  if ( v4 <= 0 )
    return (unsigned int)v4;
  return result;
}
