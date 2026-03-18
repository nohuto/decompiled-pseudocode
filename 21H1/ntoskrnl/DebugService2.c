/*
 * XREFs of DebugService2 @ 0x1403FDD30
 * Callers:
 *     DbgLoadImageSymbols @ 0x14036ED90 (DbgLoadImageSymbols.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x14036FA60 (DbgUnLoadImageSymbolsUnicode.c)
 *     DbgLoadUserImageSymbols @ 0x1403C8778 (DbgLoadUserImageSymbols.c)
 *     KiBugcheckUnloadDebugSymbols @ 0x1405125C4 (KiBugcheckUnloadDebugSymbols.c)
 *     DbgCommandString @ 0x14057F9F0 (DbgCommandString.c)
 *     DbgUnLoadImageSymbols @ 0x14057FB50 (DbgUnLoadImageSymbols.c)
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
