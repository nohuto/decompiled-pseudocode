/*
 * XREFs of DebugService2 @ 0x140429850
 * Callers:
 *     DbgLoadImageSymbols @ 0x1402D9D60 (DbgLoadImageSymbols.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x1402DC0E8 (DbgUnLoadImageSymbolsUnicode.c)
 *     KiBugcheckUnloadDebugSymbols @ 0x1405675F4 (KiBugcheckUnloadDebugSymbols.c)
 *     DbgCommandString @ 0x1405E4080 (DbgCommandString.c)
 *     DbgLoadUserImageSymbols @ 0x1405E40E4 (DbgLoadUserImageSymbols.c)
 *     DbgUnLoadImageSymbols @ 0x1405E4210 (DbgUnLoadImageSymbols.c)
 * Callees:
 *     <none>
 */

__int64 DebugService2()
{
  __asm { int     2Dh; Windows NT - debugging services: eax = type }
  __debugbreak();
  return DebugService2AfterInt3();
}
