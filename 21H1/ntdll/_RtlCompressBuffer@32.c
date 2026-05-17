/*
 * XREFs of _RtlCompressBuffer@32 @ 0x4B35A4F0
 * Callers:
 *     _EtwpWriteBufferCompressed@16 @ 0x4B3831CD (_EtwpWriteBufferCompressed@16.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

int __stdcall RtlCompressBuffer(__int16 a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  if ( !(_BYTE)a1 || (unsigned __int8)a1 == 1 )
    return -1073741811;
  if ( (unsigned __int8)a1 <= 4u )
    return ((int (__thiscall *)(int, int, int, int, int, int, int, int, int))RtlCompressBufferProcs[(unsigned __int8)a1])(
             RtlCompressBufferProcs[(unsigned __int8)a1],
             a1 & 0xFF00,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8);
  return -1073741217;
}
