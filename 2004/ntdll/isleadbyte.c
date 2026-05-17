/*
 * XREFs of isleadbyte @ 0x18008FAB8
 * Callers:
 *     ReadString @ 0x180095384 (ReadString.c)
 *     _input_l @ 0x1800956F0 (_input_l.c)
 * Callees:
 *     <none>
 */

int __cdecl isleadbyte(int C)
{
  return pctype[(unsigned __int8)C] & 0x8000;
}
