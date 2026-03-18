/*
 * XREFs of ?RemoveResourceNotifier@CDeviceResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x180054C64
 * Callers:
 *     ?RemoveResourceNotifier@CRenderTargetBitmap@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x180054C0C (-RemoveResourceNotifier@CRenderTargetBitmap@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@A@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800F01F0 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@A@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@BII@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800F15E0 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@BII@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@OI@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800F1880 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@OI@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@BAA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800F1D10 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@BAA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@CJA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800F2150 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@CJA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@BEI@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800F2360 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@BEI@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@LA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800F2690 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@LA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@HA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800F2ED0 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@HA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@JA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800F2EE0 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@JA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@KA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800F30E0 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@KA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@NI@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800F32A0 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@NI@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 * Callees:
 *     memmove_0 @ 0x1800EE9D7 (memmove_0.c)
 */

void __fastcall CDeviceResource::RemoveResourceNotifier(CDeviceResource *this, const struct IDeviceResourceNotify *a2)
{
  const struct IDeviceResourceNotify **v2; // r8
  const struct IDeviceResourceNotify **i; // rcx

  v2 = (const struct IDeviceResourceNotify **)*((_QWORD *)this - 4);
  for ( i = (const struct IDeviceResourceNotify **)*((_QWORD *)this - 5); i != v2 && *i != a2; ++i )
    ;
  if ( i != v2 )
  {
    memmove_0(i, i + 1, (char *)v2 - (char *)(i + 1));
    *((_QWORD *)this - 4) -= 8LL;
  }
}
