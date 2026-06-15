/*
 * XREFs of sub_18002147C @ 0x18002147C
 * Callers:
 *     sub_1800214DC @ 0x1800214DC (sub_1800214DC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002147C(int a1)
{
  __int64 result; // rax
  int v3; // eax
  int v4; // ecx

  if ( a1 >= 0 )
    return 0LL;
  if ( a1 == -1073741801 )
    return 2147942414LL;
  if ( !qword_18004FD80 )
    return a1 | 0x10000000u;
  v3 = qword_18004FD80();
  v4 = v3;
  if ( !v3 || v3 == 317 )
    return a1 | 0x10000000u;
  result = (unsigned __int16)v3 | 0x80070000;
  if ( v4 <= 0 )
    return (unsigned int)v4;
  return result;
}
