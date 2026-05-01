/*
 * XREFs of sub_180002110 @ 0x180002110
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002400 @ 0x180002400 (sub_180002400.c)
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     j_free @ 0x1800448FC (j_free.c)
 *     j_j_free @ 0x1800460D8 (j_j_free.c)
 */

__int64 **__fastcall sub_180002110(__int64 **Block, char a2)
{
  __int64 *v4; // rcx
  __int64 **v5; // rdi
  __int64 *v6; // rcx
  __int64 *v8; // rdx
  __int64 v9; // rax

  *Block = (__int64 *)off_180088000;
  v4 = Block[167];
  if ( v4 )
    sub_1800265B0(v4);
  if ( Block[168] )
    TpReleaseTimer();
  v5 = Block + 164;
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == (__int64 *)v5 )
      break;
    v8 = (__int64 *)v6[1];
    v9 = *v6;
    *v8 = *v6;
    *(_QWORD *)(v9 + 8) = v8;
    j_j_free(v6);
  }
  Block[166] = 0LL;
  *Block = (__int64 *)off_1800880A8;
  sub_180002400(Block + 5);
  if ( (a2 & 1) != 0 )
    j_free(Block);
  return Block;
}
