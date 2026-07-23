/*
 * XREFs of DebugService2 @ 0x140407AE0
 * Callers:
 *     DbgLoadImageSymbols @ 0x140371B50 (DbgLoadImageSymbols.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x14037249C (DbgUnLoadImageSymbolsUnicode.c)
 *     DbgLoadUserImageSymbols @ 0x1403CCD08 (DbgLoadUserImageSymbols.c)
 *     KiBugcheckUnloadDebugSymbols @ 0x1405182C4 (KiBugcheckUnloadDebugSymbols.c)
 *     DbgCommandString @ 0x1405856E0 (DbgCommandString.c)
 *     DbgUnLoadImageSymbols @ 0x140585840 (DbgUnLoadImageSymbols.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DebugService2(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  result = a3;
  __asm { int     2Dh; Windows NT - debugging services: eax = type }
  __debugbreak();
  return result;
}
