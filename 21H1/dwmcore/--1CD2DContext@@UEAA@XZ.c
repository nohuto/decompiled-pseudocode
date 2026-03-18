/*
 * XREFs of ??1CD2DContext@@UEAA@XZ @ 0x1800A4D6C
 * Callers:
 *     ??1CD3DDevice@@MEAA@XZ @ 0x1800A4E80 (--1CD3DDevice@@MEAA@XZ.c)
 *     ??_GCD2DContext@@UEAAPEAXI@Z @ 0x18023E5D0 (--_GCD2DContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180096BB0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1800A3A10 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DContext::~CD2DContext(CD2DResourceManager **this)
{
  CD2DResourceManager *v2; // rcx

  *this = (CD2DResourceManager *)&CD2DContext::`vftable';
  CD2DContext::DestroyDeviceResources(this);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 47));
  v2 = this[46];
  if ( v2 )
  {
    this[46] = 0LL;
    (*(void (__fastcall **)(CD2DResourceManager *))(*(_QWORD *)v2 + 16LL))(v2);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 40));
  CDrawListBatchManager::~CDrawListBatchManager(this + 1);
}
