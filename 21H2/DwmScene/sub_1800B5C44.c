/*
 * XREFs of sub_1800B5C44 @ 0x1800B5C44
 * Callers:
 *     sub_1800B3E78 @ 0x1800B3E78 (sub_1800B3E78.c)
 *     sub_18012CE51 @ 0x18012CE51 (sub_18012CE51.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800B5C44(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // rcx

  v2 = *(volatile signed __int32 **)(a2 + 40);
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  return j_j__o_free(a2);
}
