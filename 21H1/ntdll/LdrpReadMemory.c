/*
 * XREFs of LdrpReadMemory @ 0x4B32F4DC
 * Callers:
 *     _LdrQueryModuleInfoFromLdrEntry@20 @ 0x4B32E910 (_LdrQueryModuleInfoFromLdrEntry@20.c)
 *     _LdrQueryNextListEntry@12 @ 0x4B32EA90 (_LdrQueryNextListEntry@12.c)
 *     _LdrQueryProcessModuleInformationEx2@20 @ 0x4B32EAC0 (_LdrQueryProcessModuleInformationEx2@20.c)
 *     _LdrpGetModuleName@16 @ 0x4B32F32C (_LdrpGetModuleName@16.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

signed int __fastcall LdrpReadMemory(int a1, int a2, int a3, int a4)
{
  signed int result; // eax
  int v5; // [esp+4h] [ebp-4h] BYREF

  result = (*(int (__thiscall **)(_DWORD, _DWORD, int, int, int, int *))(a1 + 4))(
             *(_DWORD *)(a1 + 4),
             *(_DWORD *)a1,
             a2,
             a3,
             a4,
             &v5);
  if ( result >= 0 )
    return a4 != v5 ? 0x8000000D : 0;
  return result;
}
