/*
 * XREFs of sub_180067D30 @ 0x180067D30
 * Callers:
 *     <none>
 * Callees:
 *     sub_180067BE8 @ 0x180067BE8 (sub_180067BE8.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180067D30(__int64 a1, char a2)
{
  volatile signed __int32 *v4; // rcx

  v4 = *(volatile signed __int32 **)(a1 + 80);
  if ( v4 && _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
  sub_180067BE8(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
