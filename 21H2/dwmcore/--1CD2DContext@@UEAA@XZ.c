/*
 * XREFs of ??1CD2DContext@@UEAA@XZ @ 0x1800217BC
 * Callers:
 *     ??1CD3DDevice@@MEAA@XZ @ 0x1800213C4 (--1CD3DDevice@@MEAA@XZ.c)
 *     ??_GCD2DContext@@UEAAPEAXI@Z @ 0x18027CBE0 (--_GCD2DContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1800225BC (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CD2DContext::~CD2DContext(CD2DContext *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CD2DContext::`vftable';
  CD2DContext::DestroyDeviceResources(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 328);
  v2 = *((_QWORD *)this + 40);
  if ( v2 )
  {
    *((_QWORD *)this + 40) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 280);
  CDrawListBatchManager::~CDrawListBatchManager((CD2DContext *)((char *)this + 8));
}
