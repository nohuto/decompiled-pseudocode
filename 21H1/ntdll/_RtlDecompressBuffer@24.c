/*
 * XREFs of _RtlDecompressBuffer@24 @ 0x4B35A550
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

int __stdcall RtlDecompressBuffer(unsigned __int8 a1, int a2, int a3, int a4, int a5, int a6)
{
  if ( !a1 || a1 == 1 )
    return -1073741811;
  if ( a1 <= 4u )
    return ((int (__thiscall *)(int, int, int, int, int, _DWORD, int, _DWORD))RtlDecompressBufferProcs[a1])(
             RtlDecompressBufferProcs[a1],
             a2,
             a3,
             a4,
             a5,
             0,
             a6,
             0);
  return -1073741217;
}
