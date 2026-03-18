/*
 * XREFs of ??1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ @ 0x1800450C4
 * Callers:
 *     ??_ECGlobalCompositionSurfaceInfo@@UEAAPEAXI@Z @ 0x1800438E0 (--_ECGlobalCompositionSurfaceInfo@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateSwapChainTelemetry@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXW4SwapChainStat@CCompositionSurfaceInfo@@_N@Z @ 0x180021234 (-UpdateSwapChainTelemetry@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXW4SwapChainStat@CComposi.c)
 *     ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x180045160 (-Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800452B4 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18006AF70 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B6C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1800D4600 (-_Tidy@-$vector@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$c.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U4@U4@U4@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@6664@Z @ 0x1801F7988 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByV.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::~CBindInfo(CGlobalCompositionSurfaceInfo::CBindInfo *this)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  CRenderTargetBitmap *v4; // rcx
  __int64 v5; // rcx
  void *v6; // rcx

  if ( *((_QWORD *)this + 29) )
  {
    CGlobalCompositionSurfaceInfo::CBindInfo::UpdateSwapChainTelemetry((__int64)this, 0, 0);
    v5 = *((_QWORD *)this + 9);
    if ( v5 )
      (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
    if ( (unsigned int)dword_180341EF0 > 5
      && (qword_180341F00 & 0x400000000000LL) != 0
      && (qword_180341F08 & 0x400000000000LL) == qword_180341F08 )
    {
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v5,
        &unk_1802E6AC4);
    }
    v6 = (void *)*((_QWORD *)this + 29);
    if ( v6 )
      operator delete(v6);
  }
  CGlobalCompositionSurfaceInfo::CBindInfo::Reset(this);
  std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Tidy((char *)this + 80);
  v2 = *((_QWORD *)this + 6);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>>(
      *((_QWORD *)this + 6),
      *((_QWORD *)this + 7));
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 8) - v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = (CRenderTargetBitmap *)*((_QWORD *)this + 1);
  if ( v4 )
    CRenderTargetBitmap::Release(v4);
}
