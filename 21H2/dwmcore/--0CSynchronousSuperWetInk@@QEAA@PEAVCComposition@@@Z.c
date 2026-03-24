/*
 * XREFs of ??0CSynchronousSuperWetInk@@QEAA@PEAVCComposition@@@Z @ 0x1801EF3C4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A2008 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180050B88 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x18009F004 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1801542D8 (McTemplateU0x_EventWriteTransfer.c)
 */

CSynchronousSuperWetInk *__fastcall CSynchronousSuperWetInk::CSynchronousSuperWetInk(
        CSynchronousSuperWetInk *this,
        struct CComposition *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx

  *((_QWORD *)this + 7) = &CSynchronousSuperWetInk::`vbtable'{for `CContent'};
  *((_QWORD *)this + 36) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 35) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 36) + 4LL) + 288) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *(_QWORD *)this = &CSynchronousSuperWetInk::`vftable'{for `CSynchronousSuperWetInkGeneratedT<CSynchronousSuperWetInk,CContent>'};
  *((_QWORD *)this + 14) = &CSynchronousSuperWetInk::`vftable'{for `CSuperWetSource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 4LL) + 56) = &CSynchronousSuperWetInk::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 8LL) + 56) = &CSynchronousSuperWetInk::`vftable'{for `IContent'};
  v3 = *(int *)(*((_QWORD *)this + 7) + 4LL);
  *(_DWORD *)((char *)this + v3 + 52) = v3 - 208;
  v4 = *(int *)(*((_QWORD *)this + 7) + 8LL);
  *(_DWORD *)((char *)this + v4 + 52) = v4 - 224;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *(_QWORD *)v5 = v5;
  *(_QWORD *)(v5 + 8) = v5;
  *(_QWORD *)(v5 + 16) = v5;
  *(_WORD *)(v5 + 24) = 257;
  *((_QWORD *)this + 23) = v5;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
    McTemplateU0x_EventWriteTransfer(v6, &EVTDESC_SYNCHRONOUSSUPERWETINK_CREATED, (__int64)this);
  return this;
}
