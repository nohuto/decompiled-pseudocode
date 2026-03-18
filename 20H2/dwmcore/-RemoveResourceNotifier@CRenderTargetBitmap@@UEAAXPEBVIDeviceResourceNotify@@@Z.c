/*
 * XREFs of ?RemoveResourceNotifier@CRenderTargetBitmap@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x180054C0C
 * Callers:
 *     ?RemoveResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800F0200 (-RemoveResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@7EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800F3640 (-RemoveResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@7EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800F3760 (-RemoveResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CRenderTargetBitmap::RemoveResourceNotifier(
        CRenderTargetBitmap *this,
        const struct IDeviceResourceNotify *a2)
{
  CDeviceResource::RemoveResourceNotifier((CRenderTargetBitmap *)((char *)this - 56), a2);
}
