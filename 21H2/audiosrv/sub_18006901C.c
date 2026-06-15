/*
 * XREFs of sub_18006901C @ 0x18006901C
 * Callers:
 *     sub_180064438 @ 0x180064438 (sub_180064438.c)
 *     sub_1800D0B80 @ 0x1800D0B80 (sub_1800D0B80.c)
 *     sub_1800D0FCC @ 0x1800D0FCC (sub_1800D0FCC.c)
 * Callees:
 *     sub_18002AD80 @ 0x18002AD80 (sub_18002AD80.c)
 */

__int64 __fastcall sub_18006901C(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return sub_18002AD80(v1);
  }
  return result;
}
