/*
 * XREFs of ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x180104C34
 * Callers:
 *     ?ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@@Z @ 0x180068FF4 (-ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@@Z.c)
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x18006B800 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 *     ??1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ @ 0x1800C7E3C (--1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ.c)
 *     ?NotifyInvalidResource@CGlobalCompositionSurfaceInfo@@UEAAXPEBVIDeviceResource@@@Z @ 0x180248E20 (-NotifyInvalidResource@CGlobalCompositionSurfaceInfo@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x180004FE0 (-DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x180005100 (-UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVISwapChainRealization@@@Z @ 0x180066F50 (--0-$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVISwapChainReal.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18007E4F4 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?clear@?$vector@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1800E8B24 (-clear@-$vector@V-$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@V-$alloca.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DisableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x18024852C (-DisableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::Reset(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        char a2)
{
  volatile signed __int32 *v4; // rcx
  __int64 v5; // rcx
  __int64 *v6; // rbp
  __int64 *i; // r14
  _QWORD *v8; // rcx
  struct CComposition *v9; // rdi
  __int64 v10; // r8
  unsigned int v11; // ebx
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 194) )
    CGlobalCompositionSurfaceInfo::CBindInfo::DisableDirectFlip(this, 0);
  if ( *((_BYTE *)this + 195) )
    CGlobalCompositionSurfaceInfo::CBindInfo::DisableOverlay(this);
  *((_WORD *)this + 95) = 0;
  *((_DWORD *)this + 46) = 0;
  if ( (__int64)(*((_QWORD *)this + 16) - *((_QWORD *)this + 15)) >> 3 )
    CGlobalCompositionSurfaceInfo::CBindInfo::UnpinResources(this, 0);
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = 0LL;
  if ( v4 )
    CMILRefCountBaseT<IUnknown>::InternalRelease(v4);
  v5 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  *((_QWORD *)this + 3) = 0LL;
  *((_BYTE *)this + 32) = 1;
  *((_DWORD *)this + 9) = 0;
  *((struct _LUID *)this + 5) = g_luidZero;
  *((_QWORD *)this + 8) = *((_QWORD *)this + 7);
  *((_DWORD *)this + 12) = 0;
  *((_BYTE *)this + 196) = 1;
  *((_DWORD *)this + 55) = 0;
  v6 = (__int64 *)*((_QWORD *)this + 11);
  for ( i = (__int64 *)*((_QWORD *)this + 10); i != v6; ++i )
  {
    wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>(
      &v17,
      *i);
    v8 = (_QWORD *)(*(int *)(*(_QWORD *)(v17 + 8) + 8LL) + v17 + 8);
    (*(void (__fastcall **)(_QWORD *, __int64, _QWORD, _QWORD))(*v8 + 48LL))(
      v8,
      (*(_QWORD *)this + 16LL) & -(__int64)(*(_QWORD *)this != 0LL),
      *v8,
      -*(_QWORD *)this);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v17);
  }
  if ( !a2 )
    std::vector<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>::clear((_QWORD *)this + 10);
  v9 = g_pComposition;
  *((_BYTE *)this + 104) = a2;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 36) = 0;
  *(_OWORD *)((char *)this + 148) = 0LL;
  *(_QWORD *)((char *)this + 164) = 0LL;
  *((_DWORD *)this + 43) = 0;
  v10 = *(_QWORD *)this;
  *((_QWORD *)this + 22) = 0LL;
  *((_BYTE *)this + 192) = 0;
  v11 = 0;
  v12 = *((_DWORD *)v9 + 196);
  if ( v12 )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(*((_QWORD *)v9 + 95) + 8LL * v11);
      if ( v10 == v13 )
        break;
      if ( ++v11 >= v12 )
        return;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v15 = *((_DWORD *)v9 + 196);
    if ( v11 >= v15 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, -2147024809, 0x21Fu);
    }
    else
    {
      v16 = v15 - 1;
      if ( v11 < (unsigned int)v16 )
      {
        *(_QWORD *)(*((_QWORD *)v9 + 95) + 8LL * v11) = *(_QWORD *)(*((_QWORD *)v9 + 95) + 8 * v16);
        v15 = *((_DWORD *)v9 + 196);
      }
      *((_DWORD *)v9 + 196) = v15 - 1;
    }
  }
}
