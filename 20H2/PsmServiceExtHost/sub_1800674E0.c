/*
 * XREFs of sub_1800674E0 @ 0x1800674E0
 * Callers:
 *     sub_1800468F0 @ 0x1800468F0 (sub_1800468F0.c)
 * Callees:
 *     j_free @ 0x1800448FC (j_free.c)
 *     sub_1800672BC @ 0x1800672BC (sub_1800672BC.c)
 */

__int64 __fastcall sub_1800674E0(volatile signed __int32 *Block)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement(Block + 4);
  if ( !v2 && Block )
  {
    sub_1800672BC(Block);
    j_free((void *)Block);
  }
  return v2;
}
