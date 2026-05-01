/*
 * XREFs of ?v_LayoutChildren@CGlyphButtonElement@@MEAAXXZ @ 0x180392280
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18036C7C0 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x18036C844 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?_CreateBackground@CGlyphButtonElement@@AEAAJAEBUCSize@Geometry@@@Z @ 0x18039200C (-_CreateBackground@CGlyphButtonElement@@AEAAJAEBUCSize@Geometry@@@Z.c)
 */

void __fastcall CGlyphButtonElement::v_LayoutChildren(CGlyphButtonElement *this)
{
  int v2; // edx
  __int64 v3; // rcx
  int v4; // ecx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7[2]; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+40h] [rbp-30h] BYREF
  int v9; // [rsp+48h] [rbp-28h]
  int v10; // [rsp+4Ch] [rbp-24h]
  _DWORD v11[4]; // [rsp+50h] [rbp-20h] BYREF

  v8 = *((_QWORD *)this + 47);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v7, (__int64 *)&v8, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  v2 = *((_DWORD *)this + 15);
  v3 = *((_QWORD *)this + 11);
  LODWORD(v8) = *((_DWORD *)this + 14);
  v9 = v8 + 1;
  HIDWORD(v8) = v2;
  v10 = v2 + 1;
  (*(void (__fastcall **)(__int64, unsigned __int64 *, _QWORD, _QWORD))(*(_QWORD *)v3 + 24LL))(v3, &v8, 0LL, 0LL);
  v4 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
  v5 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
  v11[0] = 0;
  v11[1] = 0;
  v11[2] = v4;
  v11[3] = v5;
  if ( *((_DWORD *)this + 100) != v4 || *((_DWORD *)this + 101) != v5 )
  {
    v8 = __PAIR64__(v5, v4);
    CGlyphButtonElement::_CreateBackground(this, (const struct Geometry::CSize *)&v8);
  }
  v6 = *((_QWORD *)this + 49);
  if ( v6 )
    (*(void (__fastcall **)(__int64, _DWORD *, _QWORD, _QWORD))(*(_QWORD *)v6 + 24LL))(v6, v11, 0LL, 0LL);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v7);
}
