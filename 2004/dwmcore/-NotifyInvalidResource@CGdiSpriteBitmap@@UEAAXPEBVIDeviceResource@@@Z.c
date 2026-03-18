/*
 * XREFs of ?NotifyInvalidResource@CGdiSpriteBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801C3580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CGdiSpriteBitmap::NotifyInvalidResource(CGdiSpriteBitmap *this, const struct IDeviceResource *a2)
{
  CGdiSpriteBitmap::ReleaseBitmapRealization((CGdiSpriteBitmap *)((char *)this - 72));
}
