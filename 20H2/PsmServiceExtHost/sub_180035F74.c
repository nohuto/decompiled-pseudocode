/*
 * XREFs of sub_180035F74 @ 0x180035F74
 * Callers:
 *     sub_18000220C @ 0x18000220C (sub_18000220C.c)
 *     sub_180002618 @ 0x180002618 (sub_180002618.c)
 *     sub_180035EEC @ 0x180035EEC (sub_180035EEC.c)
 *     sub_18004198C @ 0x18004198C (sub_18004198C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180035F74(__int64 a1, __int64 a2, __int64 a3, __int64 (__fastcall *a4)(__int64))
{
  __int64 v5; // rbx
  __int64 result; // rax

  if ( a3 )
  {
    v5 = a3;
    do
    {
      result = a4(a1);
      a1 += a2;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
