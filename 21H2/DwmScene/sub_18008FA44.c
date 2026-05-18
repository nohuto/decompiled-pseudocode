/*
 * XREFs of sub_18008FA44 @ 0x18008FA44
 * Callers:
 *     sub_18008AC98 @ 0x18008AC98 (sub_18008AC98.c)
 *     sub_18008F35C @ 0x18008F35C (sub_18008F35C.c)
 *     sub_18008F920 @ 0x18008F920 (sub_18008F920.c)
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18008FA44(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v3; // rdi
  volatile signed __int32 *v6; // rcx
  _QWORD *result; // rax

  v3 = *a3;
  *(_QWORD *)a3[1] = *a3;
  *(_QWORD *)(*a3 + 8) = a3[1];
  --*(_QWORD *)(a1 + 8);
  v6 = (volatile signed __int32 *)a3[4];
  if ( v6 && _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
  j_j__o_free(a3);
  result = a2;
  *a2 = v3;
  return result;
}
