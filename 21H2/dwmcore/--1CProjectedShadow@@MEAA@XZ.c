/*
 * XREFs of ??1CProjectedShadow@@MEAA@XZ @ 0x180232820
 * Callers:
 *     ??_ECProjectedShadow@@MEAAPEAXI@Z @ 0x180232A90 (--_ECProjectedShadow@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180014EBC (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x180062408 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?clear@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800C8020 (-clear@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDrawListCa.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D0F68 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall CProjectedShadow::~CProjectedShadow(CProjectedShadow *this)
{
  __int64 *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rbx
  CProjectedShadow *v6; // rcx

  *(_QWORD *)this = &CProjectedShadow::`vftable';
  v2 = (__int64 *)((char *)this + 376);
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CProjectedShadow::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CProjectedShadow::`vftable'{for `IContent'};
  v3 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v3 + 60) = v3 - 344;
  v4 = *(int *)(*((_QWORD *)this + 8) + 8LL);
  *(_DWORD *)((char *)this + v4 + 60) = v4 - 360;
  v5 = *v2;
  if ( *v2 )
  {
    *(_DWORD *)(v5 + 40) = 0;
    DynArrayImpl<0>::ShrinkToSize(v5 + 16, 0x18u);
    *(_BYTE *)(v5 + 200) = 1;
  }
  if ( *((_QWORD *)this + 11) )
    CPtrArrayBase::Remove((CProjectedShadow *)((char *)this + 24));
  if ( *((_QWORD *)this + 10) )
    CPtrArrayBase::Remove((CProjectedShadow *)((char *)this + 24));
  if ( *((_QWORD *)this + 9) )
    CPtrArrayBase::Remove((CProjectedShadow *)((char *)this + 24));
  wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)this + 48);
  wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>(v2);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 368);
  detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear((_QWORD *)this + 32);
  v6 = (CProjectedShadow *)*((_QWORD *)this + 32);
  *((_QWORD *)this + 32) = 0LL;
  if ( v6 == (CProjectedShadow *)((char *)this + 280) )
    v6 = 0LL;
  DefaultHeap::Free(v6);
  CResource::~CResource(this);
}
