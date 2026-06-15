/*
 * XREFs of sub_1800309F0 @ 0x1800309F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800309F0(__int64 a1, int a2, int a3)
{
  signed int v4; // ebx
  unsigned __int64 v5; // rcx
  __int64 result; // rax

  if ( a2 < 0 )
    return 0LL;
  if ( 0x7FFFFFFF - a2 < 1 )
    return 0LL;
  v4 = (a2 + 8) & 0xFFFFFFF8;
  if ( a2 >= v4 )
    return 0LL;
  if ( v4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v4 < a3 )
      return 0LL;
    v5 = a3 * (__int64)v4;
    if ( v5 > 0xFFFFFFFFFFFFFFE7uLL )
      return 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  result = (***(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 8))(*(_QWORD *)(a1 + 8), v5 + 24);
  if ( result )
  {
    *(_QWORD *)result = a1;
    *(_DWORD *)(result + 12) = v4 - 1;
    *(_DWORD *)(result + 16) = 1;
    *(_DWORD *)(result + 8) = 0;
    return result;
  }
  return 0LL;
}
