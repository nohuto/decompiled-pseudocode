/*
 * XREFs of ?NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x18001FD98
 * Callers:
 *     ?NotifyInvalidResource@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAXPEBVIDeviceResource@@@Z @ 0x1800ED5E0 (-NotifyInvalidResource@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CRenderTargetBitmap@@$4PPPPPPPM@7EAAXPEBVIDeviceResource@@@Z @ 0x1800F0A30 (-NotifyInvalidResource@CRenderTargetBitmap@@$4PPPPPPPM@7EAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAXPEBVIDeviceResource@@@Z @ 0x1800F0B70 (-NotifyInvalidResource@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?NotifyInvalid@CDeviceResource@@QEAAXPEBVIDeviceResource@@@Z @ 0x18001FE30 (-NotifyInvalid@CDeviceResource@@QEAAXPEBVIDeviceResource@@@Z.c)
 *     ?ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ @ 0x18003293C (-ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z @ 0x1800D27BC (-RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRenderTargetBitmap::NotifyInvalidResource(CRenderTargetBitmap *this, const struct IDeviceResource *a2)
{
  const struct IDeviceResource *v2; // rdi

  v2 = 0LL;
  if ( *((_BYTE *)this - 16) || !CD2DBitmapCache::RemoveFromCache((CRenderTargetBitmap *)((char *)this - 160), a2) )
  {
    (*(void (__fastcall **)(char *, const struct IDeviceResource *))(*((_QWORD *)this - 20) + 8LL))(
      (char *)this - 160,
      a2);
    if ( this != (CRenderTargetBitmap *)160 )
      v2 = (CRenderTargetBitmap *)((char *)this + *(int *)(*((_QWORD *)this - 18) + 12LL) - 144);
    CDeviceResource::NotifyInvalid((CRenderTargetBitmap *)((char *)this - 80), v2);
    CRenderTargetBitmap::ReleaseDeviceTarget((CRenderTargetBitmap *)((char *)this - 160));
    (*(void (__fastcall **)(char *))(*((_QWORD *)this - 20) + 16LL))((char *)this - 160);
  }
}
