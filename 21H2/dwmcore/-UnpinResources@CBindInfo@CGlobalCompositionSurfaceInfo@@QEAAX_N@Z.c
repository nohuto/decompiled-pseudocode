/*
 * XREFs of ?UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x180005100
 * Callers:
 *     ?DisableOverlay@CGlobalCompositionSurfaceInfo@@UEAAJ_K@Z @ 0x180004F70 (-DisableOverlay@CGlobalCompositionSurfaceInfo@@UEAAJ_K@Z.c)
 *     ?DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x180004FE0 (-DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x180104C34 (-Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 *     ?DisableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x18024852C (-DisableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 * Callees:
 *     ?DelayUnpinResources@CD3DDevice@@QEAAXPEAVCCompositionSurfaceInfo@@U_LUID@@IV?$span@PEAUIDXGIResource@@$0?0@gsl@@@Z @ 0x180005AD0 (-DelayUnpinResources@CD3DDevice@@QEAAXPEAVCCompositionSurfaceInfo@@U_LUID@@IV-$span@PEAUIDXGIRes.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18003C050 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180111C2C (McTemplateU0q_EventWriteTransfer.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x180111D6E (McTemplateU0xx_EventWriteTransfer.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::UnpinResources(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        char a2)
{
  __int64 ***v2; // rbx
  __int64 v5; // rcx
  CD3DDevice *v6; // rbp
  __int64 **v7; // rsi
  gsl::details *v8; // rcx
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 v14[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v2 = (__int64 ***)((char *)this + 120);
  if ( (__int64)(*((_QWORD *)this + 16) - *((_QWORD *)this + 15)) >> 3 )
  {
    v5 = **((_QWORD **)this + 10) + 8LL + *(int *)(*(_QWORD *)(**((_QWORD **)this + 10) + 8LL) + 8LL);
    v6 = (CD3DDevice *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
      McTemplateU0xx_EventWriteTransfer(
        *(_QWORD *)this,
        &Pinning_CompSurfInfoUnpin,
        *(unsigned int *)(*(_QWORD *)this + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)this + 40LL)) << 32),
        v2[1] - *v2);
    if ( !v6 || a2 )
    {
      v9 = **v2;
      v10 = *v9;
      v15 = 0LL;
      if ( (*(int (__fastcall **)(__int64 *, GUID *, __int64 *))(v10 + 56))(
             v9,
             &GUID_fef19e0a_40c0_472b_ae40_59ef97af3529,
             &v15) >= 0 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000000) != 0 )
          McTemplateU0q_EventWriteTransfer(v11, &Pinning_D3DUnpinStart, v2[1] - *v2);
        v12 = (*(__int64 (__fastcall **)(__int64, __int64 **, signed __int64))(*(_QWORD *)v15 + 32LL))(
                v15,
                *v2,
                v2[1] - *v2);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000000) != 0 )
          McTemplateU0q_EventWriteTransfer(v13, &Pinning_D3DUnpinStop, v12);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v15);
    }
    else
    {
      v7 = *v2;
      gsl::details::extent_type<-1>::extent_type<-1>(v14, (__int64)(*((_QWORD *)this + 16) - (_QWORD)*v2) >> 3);
      if ( v14[0] == -1 || !v7 && v14[0] )
      {
        gsl::details::terminate(v8);
        JUMPOUT(0x1800051FELL);
      }
      v14[1] = (__int64)v7;
      CD3DDevice::DelayUnpinResources(v6, (__int64)v14);
    }
  }
  std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::clear(v2);
}
