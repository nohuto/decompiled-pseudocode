/*
 * XREFs of sub_180027CD0 @ 0x180027CD0
 * Callers:
 *     sub_180018AF0 @ 0x180018AF0 (sub_180018AF0.c)
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 * Callees:
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

int __fastcall sub_180027CD0(_QWORD *a1)
{
  void *v2; // rcx
  int result; // eax
  _QWORD *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD *v8; // rcx
  _QWORD *v9; // rcx

  v2 = (void *)a1[72];
  if ( v2 )
    result = NtClose(v2);
  v4 = (_QWORD *)a1[130];
  if ( v4 )
    result = sub_1800274E0(v4);
  if ( a1[99] )
    result = (*(__int64 (**)(void))(*(_QWORD *)(*(a1 - 2) + 40LL) + 176LL))();
  v5 = a1[103];
  if ( v5 )
    result = TpReleaseTimer(v5);
  v6 = a1[79];
  if ( v6 )
    result = TpReleaseWork(v6);
  v7 = a1[78];
  if ( v7 )
    result = TpReleaseWork(v7);
  v8 = (_QWORD *)a1[73];
  if ( v8 )
    result = sub_1800274E0(v8);
  v9 = (_QWORD *)a1[97];
  if ( v9 )
    return sub_1800274E0(v9);
  return result;
}
