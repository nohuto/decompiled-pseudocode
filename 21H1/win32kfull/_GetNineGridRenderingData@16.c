/*
 * XREFs of _GetNineGridRenderingData@16 @ 0xEC932
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__stdcall GetNineGridRenderingData(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *result; // eax

  *a1 = &apsoNineGrid;
  *a2 = &apsoNineGridBitmap;
  *a3 = &apsoNineGridBitmapHeader;
  result = a4;
  *a4 = &nineGridPushLock;
  return result;
}
