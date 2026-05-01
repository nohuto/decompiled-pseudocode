/*
 * XREFs of sub_1800389E0 @ 0x1800389E0
 * Callers:
 *     sub_180038718 @ 0x180038718 (sub_180038718.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800389E0(int a1)
{
  __int64 result; // rax

  if ( a1 >= 0 )
    return 0LL;
  if ( a1 == -1073741801 )
    return 2147942414LL;
  if ( !qword_1800B4EF0 )
    return a1 | 0x10000000u;
  result = qword_1800B4EF0();
  if ( !(_DWORD)result || (_DWORD)result == 317 )
    return a1 | 0x10000000u;
  if ( (int)result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
