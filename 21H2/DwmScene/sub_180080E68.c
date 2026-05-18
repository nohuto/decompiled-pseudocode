/*
 * XREFs of sub_180080E68 @ 0x180080E68
 * Callers:
 *     sub_180073194 @ 0x180073194 (sub_180073194.c)
 *     sub_18012A922 @ 0x18012A922 (sub_18012A922.c)
 * Callees:
 *     sub_180012A18 @ 0x180012A18 (sub_180012A18.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180080E68(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v3; // rcx

  sub_180012A18((__int64 *)(a2 + 48));
  v3 = *(volatile signed __int32 **)(a2 + 40);
  if ( v3 && _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
  return j_j__o_free(a2);
}
