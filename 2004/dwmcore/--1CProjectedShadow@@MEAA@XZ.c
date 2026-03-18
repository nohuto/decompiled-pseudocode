/*
 * XREFs of ??1CProjectedShadow@@MEAA@XZ @ 0x18001E634
 * Callers:
 *     ??_ECProjectedShadow@@MEAAPEAXI@Z @ 0x18001E5F0 (--_ECProjectedShadow@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024B8C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?clear@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800A3EA4 (-clear@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDrawListCa.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BC868 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800BDC0C (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProjectedShadow::~CProjectedShadow(CProjectedShadow *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rbx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  CProjectedShadow *v10; // rcx

  *(_QWORD *)this = &CProjectedShadow::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 4LL) + 56) = &CProjectedShadow::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 8LL) + 56) = &CProjectedShadow::`vftable'{for `IContent'};
  v2 = *(int *)(*((_QWORD *)this + 7) + 4LL);
  *(_DWORD *)((char *)this + v2 + 52) = v2 - 344;
  v3 = *(int *)(*((_QWORD *)this + 7) + 8LL);
  *(_DWORD *)((char *)this + v3 + 52) = v3 - 360;
  v4 = *((_QWORD *)this + 46);
  if ( v4 )
  {
    *(_DWORD *)(v4 + 40) = 0;
    DynArrayImpl<0>::ShrinkToSize(v4 + 16, 24LL);
    *(_BYTE *)(v4 + 200) = 1;
  }
  v5 = *((_QWORD *)this + 10);
  if ( v5 )
    CPtrArrayBase::Remove((CProjectedShadow *)((char *)this + 24), v5);
  v6 = *((_QWORD *)this + 9);
  if ( v6 )
    CPtrArrayBase::Remove((CProjectedShadow *)((char *)this + 24), v6);
  v7 = *((_QWORD *)this + 8);
  if ( v7 )
    CPtrArrayBase::Remove((CProjectedShadow *)((char *)this + 24), v7);
  v8 = *((_QWORD *)this + 47);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v9 = *((_QWORD *)this + 46);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((char *)this + 360);
  detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear((char *)this + 248);
  v10 = (CProjectedShadow *)*((_QWORD *)this + 31);
  *((_QWORD *)this + 31) = 0LL;
  if ( v10 == (CProjectedShadow *)((char *)this + 272) )
    v10 = 0LL;
  operator delete(v10);
  CResource::~CResource(this);
}
