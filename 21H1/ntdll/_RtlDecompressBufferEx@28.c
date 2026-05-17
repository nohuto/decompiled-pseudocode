/*
 * XREFs of _RtlDecompressBufferEx@28 @ 0x4B35A5B0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

int __stdcall RtlDecompressBufferEx(unsigned __int8 a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  if ( !a1 || a1 == 1 )
    return -1073741811;
  if ( a1 <= 4u )
    return ((int (__thiscall *)(int, int, int, int, int, _DWORD, int, int))RtlDecompressBufferProcs[a1])(
             RtlDecompressBufferProcs[a1],
             a2,
             a3,
             a4,
             a5,
             0,
             a6,
             a7);
  return -1073741217;
}
