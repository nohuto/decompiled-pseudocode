/*
 * XREFs of ?Release@CSceneWorld@@$4PPPPPPPM@JA@EAAKXZ @ 0x1800EF960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSceneWorld::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 144));
}
