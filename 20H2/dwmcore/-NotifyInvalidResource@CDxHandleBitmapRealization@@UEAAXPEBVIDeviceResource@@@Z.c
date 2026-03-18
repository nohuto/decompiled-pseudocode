/*
 * XREFs of ?NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180261CE0
 * Callers:
 *     ?NotifyInvalidResource@CDxHandleBitmapRealization@@$4PPPPPPPM@A@EAAXPEBVIDeviceResource@@@Z @ 0x1800F2E30 (-NotifyInvalidResource@CDxHandleBitmapRealization@@$4PPPPPPPM@A@EAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CDxHandleBitmapRealization@@$4PPPPPPPM@CA@EAAXPEBVIDeviceResource@@@Z @ 0x1800F2E40 (-NotifyInvalidResource@CDxHandleBitmapRealization@@$4PPPPPPPM@CA@EAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CDxHandleBitmapRealization@@$4PPPPPPPM@DA@EAAXPEBVIDeviceResource@@@Z @ 0x1800F3090 (-NotifyInvalidResource@CDxHandleBitmapRealization@@$4PPPPPPPM@DA@EAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CDxHandleStereoBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802624C0 (-NotifyInvalidResource@CDxHandleStereoBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?NotifyInvalid@CDeviceResource@@QEAAXPEBVIDeviceResource@@@Z @ 0x18001F450 (-NotifyInvalid@CDeviceResource@@QEAAXPEBVIDeviceResource@@@Z.c)
 *     ?RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z @ 0x1800DA1DC (-RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDxHandleBitmapRealization::NotifyInvalidResource(
        CDxHandleBitmapRealization *this,
        const struct IDeviceResource *a2)
{
  char *v2; // rsi
  const struct IDeviceResource *v4; // rbx

  v2 = (char *)this - 376;
  v4 = 0LL;
  if ( !CD2DBitmapCache::RemoveFromCache((CDxHandleBitmapRealization *)((char *)this - 376), a2) )
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 64LL))(v2);
    if ( v2 )
      v4 = (CDxHandleBitmapRealization *)((char *)this + *(int *)(*((_QWORD *)this - 45) + 20LL) - 360);
    CDeviceResource::NotifyInvalid((CDxHandleBitmapRealization *)((char *)this - 88), v4);
  }
}
