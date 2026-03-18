/*
 * XREFs of ?NotifyInvalidResource@CDxHandleStereoBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802624C0
 * Callers:
 *     ?NotifyInvalidResource@CDxHandleStereoBitmapRealization@@$4PPPPPPPM@A@EAAXPEBVIDeviceResource@@@Z @ 0x1800F3250 (-NotifyInvalidResource@CDxHandleStereoBitmapRealization@@$4PPPPPPPM@A@EAAXPEBVIDeviceResource@@@.c)
 * Callees:
 *     ?RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z @ 0x1800DA1DC (-RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180261CE0 (-NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 */

void __fastcall CDxHandleStereoBitmapRealization::NotifyInvalidResource(
        CDxHandleStereoBitmapRealization *this,
        const struct IDeviceResource *a2)
{
  CDxHandleBitmapRealization *v2; // rdi

  v2 = (CDxHandleStereoBitmapRealization *)((char *)this - 104);
  if ( !CD2DBitmapCache::RemoveFromCache((CDxHandleStereoBitmapRealization *)((char *)this - 104), a2) )
    CDxHandleBitmapRealization::NotifyInvalidResource(v2, a2);
}
