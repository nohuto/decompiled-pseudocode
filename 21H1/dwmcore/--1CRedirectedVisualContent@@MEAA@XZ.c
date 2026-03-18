/*
 * XREFs of ??1CRedirectedVisualContent@@MEAA@XZ @ 0x18008C044
 * Callers:
 *     ??_ECRedirectedVisualContent@@MEAAPEAXI@Z @ 0x18008BC30 (--_ECRedirectedVisualContent@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180028DD0 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008C000 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRedirectedVisualContent::~CRedirectedVisualContent(CRedirectedVisualContent *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &CRedirectedVisualContent::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 4LL) + 56) = &CRedirectedVisualContent::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 8LL) + 56) = &CRedirectedVisualContent::`vftable'{for `IContent'};
  v2 = *(int *)(*((_QWORD *)this + 7) + 4LL);
  *(_DWORD *)((char *)this + v2 + 52) = v2 - 56;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 8LL) + 52) = *(_DWORD *)(*((_QWORD *)this + 7) + 8LL) - 72;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 8));
  v3 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)this + 9);
  v4 = *((_QWORD *)this + 8);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  CResource::~CResource(this);
}
