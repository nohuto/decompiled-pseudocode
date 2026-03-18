/*
 * XREFs of ?PinResources@CD3DDevice@@QEAAJV?$span@PEAUIDXGIResource@@$0?0@gsl@@@Z @ 0x180008AA0
 * Callers:
 *     ?PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x180005234 (-PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 * Callees:
 *     ?erase@?$vector_facade@VCUnpinResource@CD3DDevice@@V?$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VCUnpinResource@CD3DDevice@@@2@V?$basic_iterator@$$CBVCUnpinResource@CD3DDevice@@@2@@Z @ 0x1800059A8 (-erase@-$vector_facade@VCUnpinResource@CD3DDevice@@V-$buffer_impl@VCUnpinResource@CD3DDevice@@$0.c)
 *     ?reserve_region@?$vector_facade@PEAUIDXGIResource@@V?$buffer_impl@PEAUIDXGIResource@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAUIDXGIResource@@_K0@Z @ 0x180008C50 (-reserve_region@-$vector_facade@PEAUIDXGIResource@@V-$buffer_impl@PEAUIDXGIResource@@$06$00Vlibe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x18007F688 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180111C2C (McTemplateU0q_EventWriteTransfer.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CD3DDevice::PinResources(__int64 a1, _QWORD *a2)
{
  int v2; // ebx
  _BYTE *v3; // r9
  _BYTE *v5; // rdx
  unsigned int i; // edi
  __int64 v8; // r15
  _QWORD *j; // rax
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  _BYTE *v13; // rcx
  __int64 v14; // rdx
  _QWORD *v16; // [rsp+30h] [rbp-39h] BYREF
  __int64 v17; // [rsp+38h] [rbp-31h] BYREF
  _BYTE *v18; // [rsp+40h] [rbp-29h] BYREF
  _BYTE *v19; // [rsp+48h] [rbp-21h]
  __int64 *v20; // [rsp+50h] [rbp-19h]
  _BYTE v21[56]; // [rsp+58h] [rbp-11h] BYREF
  __int64 v22; // [rsp+90h] [rbp+27h] BYREF

  v2 = *(_DWORD *)(a1 + 1088);
  v3 = v21;
  v18 = v21;
  v5 = v21;
  v19 = v21;
  v20 = &v22;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(a1, &dword_1803474F8, 2u, v2, 0x352u, 0LL);
  }
  else
  {
    for ( i = 0; i < *(_DWORD *)a2; v3 = v18 )
    {
      if ( (unsigned __int64)i >= *a2 )
      {
        gsl::details::terminate((gsl::details *)i);
        JUMPOUT(0x180008C47LL);
      }
      v8 = *(_QWORD *)(a2[1] + 8LL * i);
      for ( j = *(_QWORD **)(a1 + 1200); ; j += 4 )
      {
        if ( j == *(_QWORD **)(a1 + 1208) )
        {
          *(_QWORD *)detail::vector_facade<IDXGIResource *,detail::buffer_impl<IDXGIResource *,7,1,detail::liberal_expansion_policy>>::reserve_region(
                       &v18,
                       (v5 - v3) >> 3) = v8;
          goto LABEL_7;
        }
        if ( *j == v8 )
          break;
      }
      v16 = j;
      detail::vector_facade<CD3DDevice::CUnpinResource,detail::buffer_impl<CD3DDevice::CUnpinResource,7,1,detail::liberal_expansion_policy>>::erase(
        (_QWORD *)(a1 + 1200),
        &v17,
        &v16);
LABEL_7:
      v5 = v19;
      ++i;
    }
    if ( ((v5 - v3) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000000) != 0 )
      {
        McTemplateU0q_EventWriteTransfer(a1, &Pinning_D3DPinStart, *(unsigned int *)a2);
        v5 = v19;
        v3 = v18;
      }
      v10 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, _QWORD))(**(_QWORD **)(a1 + 544) + 24LL))(
              *(_QWORD *)(a1 + 544),
              v3,
              (unsigned int)((v5 - v3) >> 3));
      v2 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_1803474F8, 2u, v10, 0x375u, 0LL);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000000) != 0 )
        McTemplateU0q_EventWriteTransfer(v11, &Pinning_D3DPinStop, (unsigned int)v2);
    }
  }
  v12 = CD3DDevice::TranslateDXGIorD3DErrorInContext(a1, (unsigned int)v2, 14LL);
  v13 = v18;
  v14 = (v19 - v18) >> 3;
  if ( v14 )
    v19 -= 8 * v14;
  v18 = 0LL;
  if ( v13 == v21 )
    v13 = 0LL;
  DefaultHeap::Free(v13);
  return v12;
}
