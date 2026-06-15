/*
 * XREFs of sub_180043D40 @ 0x180043D40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180043D40(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  unsigned int v5; // ebx
  unsigned __int64 v6; // rcx
  __int64 result; // rax

  if ( a3 < 0 )
    return 0LL;
  if ( 0x7FFFFFFF - a3 < 1 )
    return 0LL;
  v5 = (a3 + 8) & 0xFFFFFFF8;
  if ( a3 >= (int)v5 )
    return 0LL;
  v6 = a4 * (unsigned __int64)v5;
  if ( v6 > 0xFFFFFFFF )
    return 0LL;
  if ( (unsigned int)v6 > 0xFFFFFFE7 )
    return 0LL;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 16LL))(
             *(_QWORD *)(a1 + 8),
             a2,
             (unsigned int)(v6 + 24));
  if ( !result )
    return 0LL;
  *(_DWORD *)(result + 12) = v5 - 1;
  return result;
}
