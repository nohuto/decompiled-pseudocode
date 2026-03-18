/*
 * XREFs of _EngCreateBitmap@24 @ 0xEDFC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
HBITMAP __stdcall EngCreateBitmap(SIZEL sizl, LONG lWidth, ULONG iFormat, FLONG fl, PVOID pvBits)
{
  return __imp__EngCreateBitmap@24(sizl, lWidth, iFormat, fl, pvBits);
}
