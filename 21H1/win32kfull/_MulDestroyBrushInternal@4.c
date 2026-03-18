/*
 * XREFs of _MulDestroyBrushInternal@4 @ 0x20689F
 * Callers:
 *     <none>
 * Callees:
 *     ??0MULTIBRUSH@@QAE@PAU_BRUSHOBJ@@JPAU_VDEV@@PAU_SURFOBJ@@H@Z @ 0x20150E (--0MULTIBRUSH@@QAE@PAU_BRUSHOBJ@@JPAU_VDEV@@PAU_SURFOBJ@@H@Z.c)
 *     ?DestroyTable@MULTIBRUSH@@QAEXXZ @ 0x20177C (-DestroyTable@MULTIBRUSH@@QAEXXZ.c)
 */

void __stdcall MulDestroyBrushInternal(void *a1)
{
  _BYTE v1[28]; // [esp+0h] [ebp-28h] BYREF
  BRUSHOBJ pbo; // [esp+1Ch] [ebp-Ch] BYREF

  if ( a1 )
  {
    pbo.iSolidColor = -1;
    pbo.pvRbrush = a1;
    pbo.flColorType = 0;
    MULTIBRUSH::MULTIBRUSH((MULTIBRUSH *)v1, &pbo, -1, 0, 0, 1);
    MULTIBRUSH::DestroyTable((MULTIBRUSH *)v1);
  }
}
