/*
 * XREFs of sub_180042828 @ 0x180042828
 * Callers:
 *     sub_1800414C4 @ 0x1800414C4 (sub_1800414C4.c)
 *     sub_180126D9E @ 0x180126D9E (sub_180126D9E.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180042828(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a2 + 40);
  if ( v2 )
  {
    *(_QWORD *)(a2 + 40) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return j_j__o_free(a2);
}
