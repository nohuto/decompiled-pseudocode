/*
 * XREFs of sub_1800F6198 @ 0x1800F6198
 * Callers:
 *     sub_1800F65D8 @ 0x1800F65D8 (sub_1800F65D8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F6198(int a1)
{
  __int64 result; // rax

  if ( a1 >= 0 )
    return 0LL;
  if ( a1 == -1073741801 )
    return 2147942414LL;
  if ( !qword_18019E3D8 )
    return a1 | 0x10000000u;
  result = qword_18019E3D8();
  if ( !(_DWORD)result || (_DWORD)result == 317 )
    return a1 | 0x10000000u;
  if ( (int)result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
