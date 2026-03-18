/*
 * XREFs of ?ClearRenderTargetMaps@CWindowBackgroundTreatment@@QEAAXXZ @ 0x1800B34D4
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180065300 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??1CWindowBackgroundTreatment@@UEAA@XZ @ 0x1800B2A3C (--1CWindowBackgroundTreatment@@UEAA@XZ.c)
 *     ?OnChanged@CWindowBackgroundTreatment@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800B3420 (-OnChanged@CWindowBackgroundTreatment@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateExistingBounds@CWindowBackgroundTreatment@@QEAAXXZ @ 0x1800BFCB4 (-InvalidateExistingBounds@CWindowBackgroundTreatment@@QEAAXXZ.c)
 *     ?NotifyInvalidResource@CWindowBackgroundTreatment@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801FBFB0 (-NotifyInvalidResource@CWindowBackgroundTreatment@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800B358C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEBVIDeviceTarget@@V-$ComPtr@VIRenderTarget.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowBackgroundTreatment::ClearRenderTargetMaps(CWindowBackgroundTreatment *this)
{
  _QWORD *v1; // rsi
  _QWORD *i; // rdi
  void *v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx

  v1 = (_QWORD *)*((_QWORD *)this + 10);
  for ( i = (_QWORD *)*v1; i != v1; i = (_QWORD *)*i )
  {
    v6 = i[3];
    if ( v6 )
    {
      v7 = v6 + 8 + *(int *)(*(_QWORD *)(v6 + 8) + 8LL);
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v7 + 48LL))(v7, (char *)this + 56);
    }
  }
  std::_List_node<std::pair<IDeviceTarget const * const,Microsoft::WRL::ComPtr<IRenderTargetBitmap>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<IDeviceTarget const * const,Microsoft::WRL::ComPtr<IRenderTargetBitmap>>,void *>>>(
    this,
    *((_QWORD *)this + 10));
  **((_QWORD **)this + 10) = *((_QWORD *)this + 10);
  *(_QWORD *)(*((_QWORD *)this + 10) + 8LL) = *((_QWORD *)this + 10);
  *((_QWORD *)this + 11) = 0LL;
  v4 = (void *)*((_QWORD *)this + 12);
  v5 = (unsigned __int64)(*((_QWORD *)this + 13) - (_QWORD)v4 + 7LL) >> 3;
  if ( (unsigned __int64)v4 > *((_QWORD *)this + 13) )
    v5 = 0LL;
  if ( v5 )
    memset64(v4, *((_QWORD *)this + 10), v5);
}
