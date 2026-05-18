/*
 * XREFs of sub_18000C0B0 @ 0x18000C0B0
 * Callers:
 *     sub_18011FBB2 @ 0x18011FBB2 (sub_18011FBB2.c)
 * Callees:
 *     sub_18000C498 @ 0x18000C498 (sub_18000C498.c)
 */

__int64 __fastcall sub_18000C0B0(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return sub_18000C498();
  return result;
}
