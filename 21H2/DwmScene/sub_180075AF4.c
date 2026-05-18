/*
 * XREFs of sub_180075AF4 @ 0x180075AF4
 * Callers:
 *     sub_1800816F0 @ 0x1800816F0 (sub_1800816F0.c)
 *     sub_18012AA15 @ 0x18012AA15 (sub_18012AA15.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180075AF4(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  __int64 *i; // rbx
  __int64 v6; // r8
  __int64 v7; // rax
  volatile signed __int32 *v8; // rcx

  for ( i = a1; i != a2; i += 2 )
  {
    v6 = i[1];
    i[1] = 0LL;
    v7 = *i;
    *i = 0LL;
    v8 = (volatile signed __int32 *)a3[1];
    *a3 = v7;
    a3[1] = v6;
    if ( v8 && _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    a3 += 2;
  }
  return a3;
}
