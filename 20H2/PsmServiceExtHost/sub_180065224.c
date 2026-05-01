/*
 * XREFs of sub_180065224 @ 0x180065224
 * Callers:
 *     sub_180064B30 @ 0x180064B30 (sub_180064B30.c)
 * Callees:
 *     sub_180064F74 @ 0x180064F74 (sub_180064F74.c)
 *     sub_1800650C4 @ 0x1800650C4 (sub_1800650C4.c)
 */

__int64 __fastcall sub_180065224(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rax

  v1 = 0LL;
  if ( qword_1800B3FA8 )
  {
    v2 = sub_1800650C4(a1);
    v3 = v2;
    if ( v2 )
    {
      v4 = sub_180064F74(v2 + 8);
      v1 = v4;
      if ( v4 )
      {
        if ( !*(_QWORD *)(v4 + 8) )
          *(_QWORD *)(v4 + 8) = v3 + 4;
      }
    }
  }
  return v1;
}
