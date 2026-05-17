/*
 * XREFs of isleadbyte @ 0x18008FBB8
 * Callers:
 *     ReadString @ 0x180095484 (ReadString.c)
 *     _input_l @ 0x1800957F0 (_input_l.c)
 * Callees:
 *     <none>
 */

int __cdecl isleadbyte(int C)
{
  return pctype[(unsigned __int8)C] & 0x8000;
}
