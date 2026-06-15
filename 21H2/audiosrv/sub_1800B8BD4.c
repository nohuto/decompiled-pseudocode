/*
 * XREFs of sub_1800B8BD4 @ 0x1800B8BD4
 * Callers:
 *     sub_18006CDF4 @ 0x18006CDF4 (sub_18006CDF4.c)
 * Callees:
 *     sub_180063F00 @ 0x180063F00 (sub_180063F00.c)
 */

__int64 sub_1800B8BD4()
{
  __int64 result; // rax

  result = (unsigned int)dword_18019E57C;
  if ( !dword_18019E57C )
    return sub_180063F00((__int64)&byte_18019E560);
  return result;
}
