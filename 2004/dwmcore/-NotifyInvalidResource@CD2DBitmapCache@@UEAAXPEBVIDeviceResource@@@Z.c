/*
 * XREFs of ?NotifyInvalidResource@CD2DBitmapCache@@UEAAXPEBVIDeviceResource@@@Z @ 0x1800DA80C
 * Callers:
 *     ?NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@A@EAAXPEBVIDeviceResource@@@Z @ 0x1800F0560 (-NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@A@EAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@BBI@EAAXPEBVIDeviceResource@@@Z @ 0x1800F2D90 (-NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@BBI@EAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@BDI@EAAXPEBVIDeviceResource@@@Z @ 0x1800F2DB0 (-NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@BDI@EAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@NA@EAAXPEBVIDeviceResource@@@Z @ 0x1800F2DD0 (-NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@NA@EAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@CA@EAAXPEBVIDeviceResource@@@Z @ 0x1800F2E70 (-NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@CA@EAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@BFI@EAAXPEBVIDeviceResource@@@Z @ 0x1800F2F70 (-NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@BFI@EAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@BI@EAAXPEBVIDeviceResource@@@Z @ 0x1800F32C0 (-NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@BI@EAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CD2DBitmapCache::NotifyInvalidResource(CD2DBitmapCache *this, const struct IDeviceResource *a2)
{
  CD2DBitmapCache::RemoveFromCache((CD2DBitmapCache *)((char *)this - 88), a2);
}
