/*
 * XREFs of ??1CD2DContext@@UEAA@XZ @ 0x1800AFFB8
 * Callers:
 *     ??1CD3DDevice@@MEAA@XZ @ 0x1800AFA10 (--1CD3DDevice@@MEAA@XZ.c)
 *     ??_GCD2DContext@@UEAAPEAXI@Z @ 0x18023BBA0 (--_GCD2DContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18009B990 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1800B1840 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DContext::~CD2DContext(CD2DContext *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CD2DContext::`vftable';
  CD2DContext::DestroyDeviceResources(this);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 376);
  v2 = *((_QWORD *)this + 46);
  if ( v2 )
  {
    *((_QWORD *)this + 46) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 320);
  CDrawListBatchManager::~CDrawListBatchManager((CD2DContext *)((char *)this + 8));
}
