/*
 * XREFs of ?RemoveResourceNotifier@CD2DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x18009DF38
 * Callers:
 *     ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x18002BA70 (-CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@2@_K1@Z @ 0x18002BCA4 (-_Change_array@-$vector@V-$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U-$default_delete@VCCached.c)
 *     ??1CD2DBitmapCache@@MEAA@XZ @ 0x180032EAC (--1CD2DBitmapCache@@MEAA@XZ.c)
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x180033098 (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?erase@?$vector@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1800D2828 (-erase@-$vector@V-$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U-$default_delete@VCCachedBitmap@C.c)
 *     ?RemoveResourceNotifier@CD2DResource@@$4PPPPPPPM@BAA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800ED9A0 (-RemoveResourceNotifier@CD2DResource@@$4PPPPPPPM@BAA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@$4PPPPPPPM@KI@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800ED9C0 (-RemoveResourceNotifier@CD2DResource@@$4PPPPPPPM@KI@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@$4PPPPPPPM@A@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800EE5D0 (-RemoveResourceNotifier@CD2DResource@@$4PPPPPPPM@A@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@$4PPPPPPPM@7EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800EEDE0 (-RemoveResourceNotifier@CD2DResource@@$4PPPPPPPM@7EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@$4PPPPPPPM@BI@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800EEE50 (-RemoveResourceNotifier@CD2DResource@@$4PPPPPPPM@BI@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@$4PPPPPPPM@BA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800EEEC0 (-RemoveResourceNotifier@CD2DResource@@$4PPPPPPPM@BA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@$4PPPPPPPM@NA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800EF950 (-RemoveResourceNotifier@CD2DResource@@$4PPPPPPPM@NA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@IEAAXXZ @ 0x1801745C8 (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@IEAAXXZ.c)
 * Callees:
 *     memmove_0 @ 0x1800EBD77 (memmove_0.c)
 */

void __fastcall CD2DResource::RemoveResourceNotifier(CD2DResource *this, const struct IDeviceResourceNotify *a2)
{
  const struct IDeviceResourceNotify **v2; // r8
  const struct IDeviceResourceNotify **i; // rcx

  v2 = (const struct IDeviceResourceNotify **)*((_QWORD *)this - 5);
  for ( i = (const struct IDeviceResourceNotify **)*((_QWORD *)this - 6); i != v2 && *i != a2; ++i )
    ;
  if ( i != v2 )
  {
    memmove_0(i, i + 1, (char *)v2 - (char *)(i + 1));
    *((_QWORD *)this - 5) -= 8LL;
  }
}
