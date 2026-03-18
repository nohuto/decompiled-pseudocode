/*
 * XREFs of ?GetDevice@CDxHandleBitmapRealization@@$4PPPPPPPM@CA@EBAPEAVCD3DDevice@@XZ @ 0x1800F2CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CDxHandleBitmapRealization::GetDevice(__int64 a1)
{
  return CDxHandleBitmapRealization::GetDevice((CDxHandleBitmapRealization *)(a1 - *(int *)(a1 - 4) - 32));
}
