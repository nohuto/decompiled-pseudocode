/*
 * XREFs of sub_18006B218 @ 0x18006B218
 * Callers:
 *     sub_180071270 @ 0x180071270 (sub_180071270.c)
 *     sub_180071918 @ 0x180071918 (sub_180071918.c)
 *     sub_180074B80 @ 0x180074B80 (sub_180074B80.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006B218(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 1160) & 4) == 0 )
    return 1LL;
  if ( (*(_BYTE *)(a1 + 1162) & 4) == 0 )
    return 1LL;
  result = 0LL;
  if ( !a2 )
    return 1LL;
  return result;
}
