/*
 * XREFs of ??1CD2DContext@@UEAA@XZ @ 0x180037628
 * Callers:
 *     ??1CD3DDevice@@MEAA@XZ @ 0x180037080 (--1CD3DDevice@@MEAA@XZ.c)
 *     ??_GCD2DContext@@UEAAPEAXI@Z @ 0x18023AC10 (--_GCD2DContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x180039950 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180070A30 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DContext::~CD2DContext(CD2DContext *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CD2DContext::`vftable';
  CD2DContext::DestroyDeviceResources(this);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 376);
  v2 = *((_QWORD *)this + 46);
  if ( v2 )
  {
    *((_QWORD *)this + 46) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 320);
  CDrawListBatchManager::~CDrawListBatchManager((CD2DContext *)((char *)this + 8));
}
