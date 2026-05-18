/*
 * XREFs of sub_1800816F0 @ 0x1800816F0
 * Callers:
 *     sub_18007D180 @ 0x18007D180 (sub_18007D180.c)
 * Callees:
 *     sub_180075AF4 @ 0x180075AF4 (sub_180075AF4.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800816F0(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 *a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // r15
  _QWORD *v9; // r14
  _QWORD *i; // rdi
  volatile signed __int32 *v11; // rcx
  _QWORD *result; // rax

  v7 = sub_180075AF4(a4, *(__int64 **)(a1 + 8), a3);
  v8 = *(_QWORD **)(a1 + 8);
  v9 = v7;
  for ( i = v7; i != v8; i += 2 )
  {
    v11 = (volatile signed __int32 *)i[1];
    if ( v11 && _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
  }
  *a2 = a3;
  result = a2;
  *(_QWORD *)(a1 + 8) = v9;
  return result;
}
