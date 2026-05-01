/*
 * XREFs of sub_1800672BC @ 0x1800672BC
 * Callers:
 *     sub_1800674E0 @ 0x1800674E0 (sub_1800674E0.c)
 * Callees:
 *     j_j_free @ 0x1800460D8 (j_j_free.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_180067294 @ 0x180067294 (sub_180067294.c)
 */

__int64 __fastcall sub_1800672BC(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 **v3; // rdi
  __int64 *v4; // rcx
  __int64 *v5; // rdx
  __int64 v6; // rax
  void *v7; // rcx
  __int64 **v8; // rdi
  __int64 *v9; // rsi
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  void *v13; // rcx
  __int64 v14; // rdi
  __int64 *v15; // rbx
  __int64 result; // rax

  *a1 = off_18008D658;
  a1[1] = off_18008D630;
  v2 = a1[17];
  if ( v2 )
  {
    TpReleaseCleanupGroupMembers(v2, 1LL);
    TpReleaseCleanupGroup(a1[17]);
  }
  v3 = (__int64 **)(a1 + 21);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == (__int64 *)v3 )
      break;
    v5 = (__int64 *)v4[1];
    v6 = *v4;
    *v5 = *v4;
    *(_QWORD *)(v6 + 8) = v5;
    j_j_free(v4);
  }
  a1[24] = 0LL;
  v7 = (void *)a1[23];
  if ( v7 )
    j_j_free(v7);
  v8 = (__int64 **)(a1 + 11);
  while ( 1 )
  {
    v9 = *v8;
    if ( *v8 == (__int64 *)v8 )
      break;
    v10 = (__int64 *)v9[1];
    v11 = *v9;
    *v10 = *v9;
    *(_QWORD *)(v11 + 8) = v10;
    v12 = v9[4];
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    j_j_free(v9);
  }
  a1[14] = 0LL;
  v13 = (void *)a1[13];
  if ( v13 )
    j_j_free(v13);
  v14 = 2LL;
  v15 = a1 + 5;
  do
  {
    result = sub_180067294(--v15);
    --v14;
  }
  while ( v14 );
  return result;
}
