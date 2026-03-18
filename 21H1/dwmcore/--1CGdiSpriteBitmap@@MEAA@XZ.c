/*
 * XREFs of ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x1800901B0
 * Callers:
 *     ??_ECGdiSpriteBitmap@@MEAAPEAXI@Z @ 0x18008FB90 (--_ECGdiSpriteBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x18003A090 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ @ 0x18008FE84 (-ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAXXZ @ 0x180090174 (-UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x180095D9C (--1CRegionShape@@UEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180096BB0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BBA38 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CGdiSpriteBitmap::~CGdiSpriteBitmap(CGdiSpriteBitmap *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  CDrawListEntry *v4; // rcx
  __int64 *v5; // rdi
  __int64 v6; // rdx
  __int64 *v7; // rbp
  __int64 *v8; // rsi
  __int64 v9; // rcx

  *(_QWORD *)this = &CGdiSpriteBitmap::`vftable'{for `CResource'};
  *((_QWORD *)this + 7) = &CGdiSpriteBitmap::`vftable'{for `ISpriteImage'};
  *((_QWORD *)this + 9) = &CGdiSpriteBitmap::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CGdiSpriteBitmap::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CGdiSpriteBitmap::`vftable'{for `IPixelFormat'};
  v2 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v2 + 60) = v2 - 456;
  v3 = *(int *)(*((_QWORD *)this + 8) + 8LL);
  *(_DWORD *)((char *)this + v3 + 60) = v3 - 472;
  CGdiSpriteBitmap::ReleaseBitmapResources(this);
  CGdiSpriteBitmap::UnRegisterWithSurfaceManager(this);
  v4 = (CDrawListEntry *)*((_QWORD *)this + 11);
  if ( v4 )
    CDrawListEntry::Release(v4);
  v5 = (__int64 *)*((_QWORD *)this + 61);
  if ( v5 )
  {
    v7 = (__int64 *)*((_QWORD *)this + 62);
    v8 = (__int64 *)*((_QWORD *)this + 61);
    if ( v5 != v7 )
    {
      do
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v8++);
      while ( v8 != v7 );
    }
    std::_Deallocate<16,0>(v5, (*((_QWORD *)this + 63) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 61) = 0LL;
    *((_QWORD *)this + 62) = 0LL;
    *((_QWORD *)this + 63) = 0LL;
  }
  v6 = *((_QWORD *)this + 60);
  if ( v6 )
  {
    v9 = v6 + 8 + *(int *)(*(_QWORD *)(v6 + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  CRegionShape::~CRegionShape((CGdiSpriteBitmap *)((char *)this + 296));
  FastRegion::CRegion::FreeMemory((CGdiSpriteBitmap *)((char *)this + 224));
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 184);
  CResource::~CResource(this);
}
