/*
 * XREFs of DebugService2 @ 0x140407900
 * Callers:
 *     DbgLoadImageSymbols @ 0x140372000 (DbgLoadImageSymbols.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x14037294C (DbgUnLoadImageSymbolsUnicode.c)
 *     DbgLoadUserImageSymbols @ 0x1403CCB98 (DbgLoadUserImageSymbols.c)
 *     KiBugcheckUnloadDebugSymbols @ 0x140518084 (KiBugcheckUnloadDebugSymbols.c)
 *     DbgCommandString @ 0x1405854B0 (DbgCommandString.c)
 *     DbgUnLoadImageSymbols @ 0x140585610 (DbgUnLoadImageSymbols.c)
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
