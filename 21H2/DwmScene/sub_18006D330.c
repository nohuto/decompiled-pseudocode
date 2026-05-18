/*
 * XREFs of sub_18006D330 @ 0x18006D330
 * Callers:
 *     sub_18012A4C5 @ 0x18012A4C5 (sub_18012A4C5.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006D330(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      v5 = *(_QWORD *)(v4 + 56);
      if ( v5 )
      {
        LOBYTE(a2) = v5 != v4;
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 32LL))(v5, a2);
        *(_QWORD *)(v4 + 56) = 0LL;
      }
      v4 += 64LL;
    }
    while ( v4 != a3 );
  }
  return result;
}
