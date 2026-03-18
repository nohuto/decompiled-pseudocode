/*
 * XREFs of DebugService2 @ 0x1403FEFC0
 * Callers:
 *     DbgLoadImageSymbols @ 0x14036F9C0 (DbgLoadImageSymbols.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x140370690 (DbgUnLoadImageSymbolsUnicode.c)
 *     DbgLoadUserImageSymbols @ 0x1403C9588 (DbgLoadUserImageSymbols.c)
 *     KiBugcheckUnloadDebugSymbols @ 0x140512C14 (KiBugcheckUnloadDebugSymbols.c)
 *     DbgCommandString @ 0x140580140 (DbgCommandString.c)
 *     DbgUnLoadImageSymbols @ 0x1405802A0 (DbgUnLoadImageSymbols.c)
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
