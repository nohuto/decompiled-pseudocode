/*
 * XREFs of sub_180002400 @ 0x180002400
 * Callers:
 *     sub_180002110 @ 0x180002110 (sub_180002110.c)
 *     sub_18000220C @ 0x18000220C (sub_18000220C.c)
 *     sub_180014F00 @ 0x180014F00 (sub_180014F00.c)
 *     sub_180016100 @ 0x180016100 (sub_180016100.c)
 *     sub_1800719C8 @ 0x1800719C8 (sub_1800719C8.c)
 *     sub_180073C30 @ 0x180073C30 (sub_180073C30.c)
 * Callees:
 *     j_j_free @ 0x1800460D8 (j_j_free.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180002400(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx

  while ( 1 )
  {
    v2 = *(__int64 **)a1;
    if ( *(_QWORD *)a1 == a1 )
      break;
    v3 = (__int64 *)v2[1];
    v4 = *v2;
    *v3 = *v2;
    *(_QWORD *)(v4 + 8) = v3;
    v5 = v2[2];
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    j_j_free(v2);
  }
  *(_QWORD *)(a1 + 16) = 0LL;
}
