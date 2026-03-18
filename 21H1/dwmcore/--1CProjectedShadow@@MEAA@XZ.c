/*
 * XREFs of ??1CProjectedShadow@@MEAA@XZ @ 0x180006A04
 * Callers:
 *     ??_ECProjectedShadow@@MEAAPEAXI@Z @ 0x1800069C0 (--_ECProjectedShadow@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x180037EF0 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?clear@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18007E664 (-clear@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDrawListCa.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B5618 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProjectedShadow::~CProjectedShadow(CProjectedShadow *this)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  CProjectedShadow *v9; // rcx

  *(_QWORD *)this = &CProjectedShadow::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 4LL) + 56) = &CProjectedShadow::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 8LL) + 56) = &CProjectedShadow::`vftable'{for `IContent'};
  v2 = *(int *)(*((_QWORD *)this + 7) + 4LL);
  *(_DWORD *)((char *)this + v2 + 52) = v2 - 344;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 8LL) + 52) = *(_DWORD *)(*((_QWORD *)this + 7) + 8LL)
                                                                         - 360;
  v3 = *((_QWORD *)this + 46);
  if ( v3 )
  {
    *(_DWORD *)(v3 + 40) = 0;
    DynArrayImpl<0>::ShrinkToSize(v3 + 16, 24LL);
    *(_BYTE *)(v3 + 200) = 1;
  }
  v4 = *((_QWORD *)this + 10);
  if ( v4 )
    CPtrArrayBase::Remove((CProjectedShadow *)((char *)this + 24), v4);
  v5 = *((_QWORD *)this + 9);
  if ( v5 )
    CPtrArrayBase::Remove((CProjectedShadow *)((char *)this + 24), v5);
  v6 = *((_QWORD *)this + 8);
  if ( v6 )
    CPtrArrayBase::Remove((CProjectedShadow *)((char *)this + 24), v6);
  v7 = *((_QWORD *)this + 47);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v8 = *((_QWORD *)this + 46);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((char *)this + 360);
  detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear((char *)this + 248);
  v9 = (CProjectedShadow *)*((_QWORD *)this + 31);
  *((_QWORD *)this + 31) = 0LL;
  if ( v9 == (CProjectedShadow *)((char *)this + 272) )
    v9 = 0LL;
  operator delete(v9);
  CResource::~CResource(this);
}
