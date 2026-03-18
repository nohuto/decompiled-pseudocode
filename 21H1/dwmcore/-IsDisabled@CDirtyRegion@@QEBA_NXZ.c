/*
 * XREFs of ?IsDisabled@CDirtyRegion@@QEBA_NXZ @ 0x1800BC3C8
 * Callers:
 *     ?Add@CDirtyRegion@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BC32C (-Add@CDirtyRegion@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BC37C (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 * Callees:
 *     <none>
 */

char __fastcall CDirtyRegion::IsDisabled(CDirtyRegion *this)
{
  char result; // al

  result = 0;
  if ( *((_BYTE *)this + 4456) || *((_DWORD *)this + 1108) )
    return 1;
  return result;
}
