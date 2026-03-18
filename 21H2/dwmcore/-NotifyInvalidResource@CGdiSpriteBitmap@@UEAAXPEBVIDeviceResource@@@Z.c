/*
 * XREFs of ?NotifyInvalidResource@CGdiSpriteBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x180207900
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800443B0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ReleaseBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x180060888 (-ReleaseBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 */

void __fastcall CGdiSpriteBitmap::NotifyInvalidResource(CGdiSpriteBitmap *this, const struct IDeviceResource *a2)
{
  char *v2; // rbx

  v2 = (char *)this - 112;
  if ( CGdiSpriteBitmap::ReleaseBitmapRealization((CGdiSpriteBitmap *)((char *)this - 112)) )
    CResource::NotifyOnChanged((__int64)v2, 0, 0LL);
}
