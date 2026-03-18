/*
 * XREFs of _EngGetType1FontList@24 @ 0x1D890D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __stdcall EngGetType1FontList(
        HDEV hdev,
        TYPE1_FONT *pType1Buffer,
        ULONG cjType1Buffer,
        PULONG pulLocalFonts,
        PULONG pulRemoteFonts,
        LARGE_INTEGER *pLastModified)
{
  EngSetLastError(0x32u);
  return 0;
}
