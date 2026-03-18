/*
 * XREFs of DebugService2 @ 0x140405290
 * Callers:
 *     DbgLoadImageSymbols @ 0x140371910 (DbgLoadImageSymbols.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x1403725E0 (DbgUnLoadImageSymbolsUnicode.c)
 *     DbgLoadUserImageSymbols @ 0x1403CC1C8 (DbgLoadUserImageSymbols.c)
 *     KiBugcheckUnloadDebugSymbols @ 0x140516544 (KiBugcheckUnloadDebugSymbols.c)
 *     DbgCommandString @ 0x140583AA0 (DbgCommandString.c)
 *     DbgUnLoadImageSymbols @ 0x140583C00 (DbgUnLoadImageSymbols.c)
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
