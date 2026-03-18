/*
 * XREFs of ?RemoveResourceNotifier@CD2DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x180032D6C
 * Callers:
 *     ??1CCachedBitmap@CD2DBitmapCache@@QEAA@XZ @ 0x180032D30 (--1CCachedBitmap@CD2DBitmapCache@@QEAA@XZ.c)
 *     ?RemoveResourceNotifier@CD2DResource@@$4PPPPPPPM@A@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x180108290 (-RemoveResourceNotifier@CD2DResource@@$4PPPPPPPM@A@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@$4PPPPPPPM@BA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1801093D0 (-RemoveResourceNotifier@CD2DResource@@$4PPPPPPPM@BA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@$4PPPPPPPM@7EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1801094D0 (-RemoveResourceNotifier@CD2DResource@@$4PPPPPPPM@7EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@$4PPPPPPPM@KI@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1801098D0 (-RemoveResourceNotifier@CD2DResource@@$4PPPPPPPM@KI@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@$4PPPPPPPM@NA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x180109B90 (-RemoveResourceNotifier@CD2DResource@@$4PPPPPPPM@NA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@$4PPPPPPPM@BAA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18010CD30 (-RemoveResourceNotifier@CD2DResource@@$4PPPPPPPM@BAA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@IEAAXXZ @ 0x1801A1F2C (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@IEAAXXZ.c)
 * Callees:
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 */

void __fastcall CD2DResource::RemoveResourceNotifier(CD2DResource *this, const struct IDeviceResourceNotify *a2)
{
  const struct IDeviceResourceNotify **v2; // r8
  const struct IDeviceResourceNotify **i; // rcx

  v2 = (const struct IDeviceResourceNotify **)*((_QWORD *)this - 5);
  for ( i = (const struct IDeviceResourceNotify **)*((_QWORD *)this - 6); i != v2; ++i )
  {
    if ( *i == a2 )
    {
      memmove_0(i, i + 1, (char *)v2 - (char *)(i + 1));
      *((_QWORD *)this - 5) -= 8LL;
      return;
    }
  }
}
