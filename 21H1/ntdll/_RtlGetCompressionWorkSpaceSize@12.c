/*
 * XREFs of _RtlGetCompressionWorkSpaceSize@12 @ 0x4B35A670
 * Callers:
 *     _EtwpInitializeCompression@4 @ 0x4B383119 (_EtwpInitializeCompression@4.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

int __stdcall RtlGetCompressionWorkSpaceSize(__int16 a1, int a2, int a3)
{
  if ( !(_BYTE)a1 || (unsigned __int8)a1 == 1 )
    return -1073741811;
  if ( (unsigned __int8)a1 <= 4u )
    return ((int (__thiscall *)(int, int, int, int))RtlWorkSpaceProcs[(unsigned __int8)a1])(
             RtlWorkSpaceProcs[(unsigned __int8)a1],
             a1 & 0xFF00,
             a2,
             a3);
  return -1073741217;
}
