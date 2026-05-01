/*
 * XREFs of sub_180074B80 @ 0x180074B80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012D40 @ 0x180012D40 (sub_180012D40.c)
 *     sub_18006B218 @ 0x18006B218 (sub_18006B218.c)
 */

bool __fastcall sub_180074B80(__int64 a1)
{
  __int64 v1; // rcx

  return (unsigned int)sub_18006B218(a1, 1) && (unsigned int)sub_180012D40(v1);
}
