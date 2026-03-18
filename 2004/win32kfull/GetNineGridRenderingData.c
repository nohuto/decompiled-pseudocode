/*
 * XREFs of GetNineGridRenderingData @ 0x1C012BA20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall GetNineGridRenderingData(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  void *result; // rax

  *a1 = apsoNineGrid;
  *a2 = &apsoNineGridBitmap;
  *a3 = &apsoNineGridBitmapHeader;
  result = &nineGridPushLock;
  *a4 = &nineGridPushLock;
  return result;
}
