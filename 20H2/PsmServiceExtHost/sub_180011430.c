/*
 * XREFs of sub_180011430 @ 0x180011430
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     j_free @ 0x1800448FC (j_free.c)
 *     j_j_free @ 0x1800460D8 (j_j_free.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 **__fastcall sub_180011430(__int64 **Block, char a2)
{
  __int64 *v4; // rcx
  __int64 *v5; // rcx
  __int64 **v6; // rsi
  __int64 *v7; // rdi
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx

  *Block = (__int64 *)off_180088050;
  v4 = Block[165];
  if ( v4 )
    sub_1800265B0(v4);
  v5 = Block[214];
  if ( v5 )
    (*(void (__fastcall **)(__int64 *))(*v5 + 16))(v5);
  *Block = (__int64 *)off_1800880A8;
  v6 = Block + 5;
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == (__int64 *)v6 )
      break;
    v9 = (__int64 *)v7[1];
    v10 = *v7;
    *v9 = *v7;
    *(_QWORD *)(v10 + 8) = v9;
    v11 = v7[2];
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    j_j_free(v7);
  }
  Block[7] = 0LL;
  if ( (a2 & 1) != 0 )
    j_free(Block);
  return Block;
}
