/*
 * XREFs of sub_18001B1D0 @ 0x18001B1D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001B1F0 @ 0x18001B1F0 (sub_18001B1F0.c)
 */

__int64 sub_18001B1D0()
{
  __int64 result; // rax

  result = (unsigned int)dword_18020F03C;
  if ( !dword_18020F03C )
    return sub_18001B1F0(&byte_18020F020);
  return result;
}
