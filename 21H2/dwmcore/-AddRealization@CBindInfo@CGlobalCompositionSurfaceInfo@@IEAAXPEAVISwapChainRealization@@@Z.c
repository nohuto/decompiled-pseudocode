/*
 * XREFs of ?AddRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEAVISwapChainRealization@@@Z @ 0x180066F98
 * Callers:
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@I@Z @ 0x180066804 (-CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRI.c)
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x18006B800 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x18006665C (--$_Emplace_reallocate@V-$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@-.c)
 *     ??0?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVISwapChainRealization@@@Z @ 0x180066F50 (--0-$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVISwapChainReal.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::AddRealization(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        struct ISwapChainRealization *a2)
{
  __int64 v3; // r9
  _QWORD *v5; // rcx
  __int64 *v6; // rdx
  char *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)this;
  v5 = (_QWORD *)((char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 8LL) + 8);
  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD, __int64))(*v5 + 40LL))(
    v5,
    (v3 + 16) & -(__int64)(v3 != 0),
    *v5,
    -v3);
  wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>(
    &v9,
    (__int64)a2);
  v6 = (__int64 *)*((_QWORD *)this + 11);
  if ( v6 == *((__int64 **)this + 12) )
  {
    std::vector<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>(
      (__int64 *)this + 10,
      (__int64)v6,
      &v9);
  }
  else
  {
    v8 = v9;
    v9 = 0LL;
    *v6 = v8;
    *((_QWORD *)this + 11) += 8LL;
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v9);
  if ( ((*((_QWORD *)this + 11) - *((_QWORD *)this + 10)) & 0xFFFFFFFFFFFFFFF8uLL) == 8 )
  {
    v7 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 8LL) + 8;
    *((_QWORD *)this + 5) = *(_QWORD *)(*(__int64 (__fastcall **)(char *, __int64 *))(*(_QWORD *)v7 + 32LL))(v7, &v9);
  }
}
