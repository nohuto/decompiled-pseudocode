/*
 * XREFs of bInitOneStockFont @ 0x1C03941B0
 * Callers:
 *     bInitStockFontsInternal @ 0x1C039453C (bInitStockFontsInternal.c)
 * Callees:
 *     ?bQueryValueKey@@YAHPEBGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z @ 0x1C000F274 (-bQueryValueKey@@YAHPEBGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     bInitOneStockFontInternal @ 0x1C0394918 (bInitOneStockFontInternal.c)
 */

__int64 __fastcall bInitOneStockFont(
        const WCHAR *a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        unsigned int *KeyValueInformation,
        __int64 a6,
        unsigned __int16 *a7,
        void *a8)
{
  unsigned int v8; // ebx

  v8 = 0;
  if ( bQueryValueKey(a1, a4, KeyValueInformation, 0x200u) )
  {
    memmove(a8, KeyValueInformation + 3, KeyValueInformation[2]);
    return (unsigned int)bInitOneStockFontInternal(a7);
  }
  return v8;
}
