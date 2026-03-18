/*
 * XREFs of ?RemoveResourceNotifier@CDeviceResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x18009DEF4
 * Callers:
 *     ?RemoveResourceNotifier@CRenderTargetBitmap@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x18009DF7C (-RemoveResourceNotifier@CRenderTargetBitmap@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@A@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800ED610 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@A@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@BII@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800EEA00 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@BII@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@OI@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800EECA0 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@OI@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@BAA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800EF130 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@BAA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@CJA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800EF570 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@CJA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@BEI@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800EF780 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@BEI@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@LA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800EFAB0 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@LA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@HA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800F02F0 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@HA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@JA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800F0300 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@JA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@KA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800F0500 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@KA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@NI@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800F06C0 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@NI@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 * Callees:
 *     memmove_0 @ 0x1800EBD77 (memmove_0.c)
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
