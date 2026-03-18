/*
 * XREFs of ?PinResources@CD3DDevice@@QEAAJV?$span@PEAUIDXGIResource@@$0?0@gsl@@@Z @ 0x18023E4A8
 * Callers:
 *     ?PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJU_LUID@@@Z @ 0x1801F9D94 (-PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJU_LUID@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180064188 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?clear_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801656F0 (-clear_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$01$00Vlibe.c)
 *     ?reserve_region@?$vector_facade@PEAUIDXGIResource@@V?$buffer_impl@PEAUIDXGIResource@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAUIDXGIResource@@_K0@Z @ 0x1801658A4 (-reserve_region@-$vector_facade@PEAUIDXGIResource@@V-$buffer_impl@PEAUIDXGIResource@@$06$00Vlibe.c)
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_J@Z @ 0x18017B954 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ?erase@?$vector_facade@VCUnpinResource@CD3DDevice@@V?$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VCUnpinResource@CD3DDevice@@@2@V?$basic_iterator@$$CBVCUnpinResource@CD3DDevice@@@2@@Z @ 0x18023F35C (-erase@-$vector_facade@VCUnpinResource@CD3DDevice@@V-$buffer_impl@VCUnpinResource@CD3DDevice@@$0.c)
 */

__int64 __fastcall CD3DDevice::PinResources(__int64 a1, unsigned __int64 *a2)
{
  int v2; // ebx
  _BYTE *v3; // r8
  unsigned __int64 v5; // rsi
  _BYTE *v6; // rdx
  __int64 v8; // r14
  _QWORD **v9; // r13
  __int64 v10; // r12
  _QWORD *i; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned int v15; // ebx
  _BYTE *v16; // rcx
  unsigned __int64 v17; // r8
  _QWORD *v19; // [rsp+30h] [rbp-49h] BYREF
  _BYTE v20[8]; // [rsp+38h] [rbp-41h] BYREF
  _BYTE *v21; // [rsp+40h] [rbp-39h] BYREF
  _BYTE *v22; // [rsp+48h] [rbp-31h]
  __int64 *v23; // [rsp+50h] [rbp-29h]
  _BYTE v24[56]; // [rsp+58h] [rbp-21h] BYREF
  __int64 v25; // [rsp+90h] [rbp+17h] BYREF

  v2 = *(_DWORD *)(a1 + 1128);
  v3 = v24;
  v22 = v24;
  v5 = 0LL;
  v6 = v24;
  v21 = v24;
  v23 = &v25;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(a1, &dword_1803045A8, 2u, v2, 0xF2Du, 0LL);
  }
  else
  {
    if ( *(_DWORD *)a2 )
    {
      v8 = *(unsigned int *)a2;
      v9 = (_QWORD **)(a1 + 1232);
      do
      {
        v10 = *(_QWORD *)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a2, v5);
        for ( i = *v9; i != *(_QWORD **)(a1 + 1240); i += 2 )
        {
          if ( *i == v10 )
          {
            v19 = i;
            detail::vector_facade<CD3DDevice::CUnpinResource,detail::buffer_impl<CD3DDevice::CUnpinResource,7,1,detail::liberal_expansion_policy>>::erase(
              v9,
              v20,
              &v19);
            goto LABEL_10;
          }
        }
        *(_QWORD *)detail::vector_facade<IDXGIResource *,detail::buffer_impl<IDXGIResource *,7,1,detail::liberal_expansion_policy>>::reserve_region(
                     (__int64)&v21,
                     (v22 - v21) >> 3) = v10;
LABEL_10:
        ++v5;
        --v8;
      }
      while ( v8 );
      v3 = v22;
      v6 = v21;
    }
    if ( (v3 - v6) >> 3 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 584) + 24LL))(*(_QWORD *)(a1 + 584));
      v2 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_1803045A8, 2u, v12, 0xF4Fu, 0LL);
    }
  }
  v15 = CD3DDevice::TranslateDXGIorD3DErrorInContext(a1, v2, 0xEu);
  v16 = v21;
  v17 = (v22 - v21) >> 3;
  if ( v17 )
  {
    detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)&v21,
      v14,
      v17);
    v16 = v21;
  }
  v21 = 0LL;
  if ( v16 == v24 )
    v16 = 0LL;
  operator delete(v16);
  return v15;
}
