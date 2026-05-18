/*
 * XREFs of sub_180010120 @ 0x180010120
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002E35C @ 0x18002E35C (sub_18002E35C.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180010120(__int64 a1, char a2)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a1 + 1696);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 1696) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  sub_18002E35C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
