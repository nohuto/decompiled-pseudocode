/*
 * XREFs of sub_1800267DC @ 0x1800267DC
 * Callers:
 *     sub_18001DDD8 @ 0x18001DDD8 (sub_18001DDD8.c)
 *     sub_18001E1D8 @ 0x18001E1D8 (sub_18001E1D8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800267DC(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rsi
  __int64 v7; // rcx
  __int64 result; // rax

  v3 = (__int64 *)a1[3];
  v7 = *v3;
  if ( *v3 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v7 = *v3;
    }
    *v3 = a2;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  result = a1[4];
  *(_QWORD *)(result + 8 * ((__int64)(a1[3] - a1[2]) >> 3)) = a3;
  a1[3] += 8LL;
  return result;
}
