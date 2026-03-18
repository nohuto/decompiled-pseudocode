/*
 * XREFs of ?UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N@Z @ 0x1801FA2B0
 * Callers:
 *     ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x180037668 (-Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?UnpinResources@CGlobalCompositionSurfaceInfo@@UEAAJ_N@Z @ 0x1801FA3A0 (-UnpinResources@CGlobalCompositionSurfaceInfo@@UEAAJ_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x180155A68 (McTemplateU0x_EventWriteTransfer.c)
 *     ?clear@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x180189888 (-clear@-$vector@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$c.c)
 *     ?UnpinResources@CD3DDevice@@QEAAXV?$span@PEAUIDXGIResource@@$0?0@gsl@@_N@Z @ 0x18023EAF8 (-UnpinResources@CD3DDevice@@QEAAXV-$span@PEAUIDXGIResource@@$0-0@gsl@@_N@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::UnpinResources(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        char a2)
{
  char *v2; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 *v8; // rdx
  __int64 v9; // rcx
  __int64 result; // rax
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (char *)this + 80;
  if ( (__int64)(*((_QWORD *)this + 11) - *((_QWORD *)this + 10)) >> 3 )
  {
    v5 = **((_QWORD **)this + 6) + 8LL + *(int *)(*(_QWORD *)(**((_QWORD **)this + 6) + 8LL) + 8LL);
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    if ( v6 )
    {
      v8 = *(__int64 **)v2;
      v9 = (__int64)(*((_QWORD *)v2 + 1) - *(_QWORD *)v2) >> 3;
      if ( v9 < 0 || !v8 && v9 )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      v11[0] = (__int64)(*((_QWORD *)v2 + 1) - *(_QWORD *)v2) >> 3;
      LOBYTE(v7) = a2;
      v11[1] = v8;
      CD3DDevice::UnpinResources(v6, v11, v7);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0x_EventWriteTransfer(
          *(unsigned int *)(*(_QWORD *)this + 40LL),
          &EVTDESC_ETWGUID_DIRECTFLIP_UNPINEVENT,
          *(unsigned int *)(*(_QWORD *)this + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)this + 40LL)) << 32));
    }
  }
  std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::clear((__int64 **)v2);
  result = 0LL;
  *((_BYTE *)this + 153) = 0;
  return result;
}
