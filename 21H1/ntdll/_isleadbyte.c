/*
 * XREFs of _isleadbyte @ 0x4B2F85A1
 * Callers:
 *     ReadString @ 0x4B2FE156 (ReadString.c)
 *     __input_l @ 0x4B2FE430 (__input_l.c)
 * Callees:
 *     <none>
 */

int __cdecl isleadbyte(int C)
{
  return _pctype[(unsigned __int8)C] & 0x8000;
}
