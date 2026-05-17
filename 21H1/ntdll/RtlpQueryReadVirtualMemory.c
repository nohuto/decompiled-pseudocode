/*
 * XREFs of RtlpQueryReadVirtualMemory @ 0x4B337BF0
 * Callers:
 *     <none>
 * Callees:
 *     _NtReadVirtualMemory@20 @ 0x4B2F2D70 (_NtReadVirtualMemory@20.c)
 */

int __stdcall RtlpQueryReadVirtualMemory(int a1, int a2, int a3, int a4, _DWORD *a5)
{
  int result; // eax

  result = NtReadVirtualMemory(a1, a2, a3, a4, (int)a5);
  if ( result >= 0 )
    return a4 != *a5 ? 0x8000000D : 0;
  *a5 = 0;
  return result;
}
