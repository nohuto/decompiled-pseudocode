/*
 * XREFs of ?NotifyInvalidResource@CDxHandleYUVBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802A60F8
 * Callers:
 *     ?NotifyInvalidResource@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAAXPEBVIDeviceResource@@@Z @ 0x18010C850 (-NotifyInvalidResource@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ @ 0x1802A614C (-ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ.c)
 */

void __fastcall CDxHandleYUVBitmapRealization::NotifyInvalidResource(
        CDxHandleYUVBitmapRealization *this,
        const struct IDeviceResource *a2)
{
  char *v2; // rbx
  const struct IDeviceResource *v4; // rdx

  v2 = (char *)this - 408;
  CDxHandleYUVBitmapRealization::ReleaseTexture((CDxHandleYUVBitmapRealization *)((char *)this - 408));
  v4 = 0LL;
  if ( v2 )
    v4 = (CDxHandleYUVBitmapRealization *)((char *)this + *(int *)(*((_QWORD *)this - 49) + 20LL) - 392);
  CDeviceResource::NotifyInvalid((CDxHandleYUVBitmapRealization *)((char *)this - 88), v4);
}
