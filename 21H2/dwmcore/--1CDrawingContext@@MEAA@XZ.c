/*
 * XREFs of ??1CDrawingContext@@MEAA@XZ @ 0x1800499A8
 * Callers:
 *     ??_ECGlobalDrawingContext@@UEAAPEAXI@Z @ 0x1800464D0 (--_ECGlobalDrawingContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CLightStack@@QEAA@XZ @ 0x180049AB0 (--1CLightStack@@QEAA@XZ.c)
 *     ??1CScopedClipStack@@QEAA@XZ @ 0x180049AE8 (--1CScopedClipStack@@QEAA@XZ.c)
 *     ??1ClipPlaneIterator@@QEAA@XZ @ 0x180049B3C (--1ClipPlaneIterator@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18007E4B0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x18008DF84 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AF764 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GCVisualTreePath@@QEAAPEAXI@Z @ 0x1801942BC (--_GCVisualTreePath@@QEAAPEAXI@Z.c)
 */

void __fastcall CDrawingContext::~CDrawingContext(void **this)
{
  unsigned int v2; // edx
  CVisualTreePath *v3; // rcx
  CD3DDevice *v4; // rcx
  _QWORD *v5; // rdx
  __int64 v6; // rcx

  CDrawingContext::PopAllStacks((CDrawingContext *)this);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)(this + 996));
  v3 = (CVisualTreePath *)this[994];
  if ( v3 )
    CVisualTreePath::`scalar deleting destructor'(v3, v2);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)(this + 436));
  ClipPlaneIterator::~ClipPlaneIterator((ClipPlaneIterator *)(this + 420));
  DefaultHeap::Free(this[417]);
  DefaultHeap::Free(this[402]);
  DefaultHeap::Free(this[394]);
  DefaultHeap::Free(this[390]);
  CScopedClipStack::~CScopedClipStack((CScopedClipStack *)(this + 108));
  DefaultHeap::Free(this[106]);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 96);
  CLightStack::~CLightStack((CLightStack *)(this + 66));
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 58);
  DefaultHeap::Free(this[56]);
  DefaultHeap::Free(this[52]);
  DefaultHeap::Free(this[48]);
  DefaultHeap::Free(this[44]);
  v4 = (CD3DDevice *)this[5];
  if ( v4 )
    CD3DDevice::Release(v4);
  v5 = this[4];
  if ( v5 )
  {
    v6 = (__int64)v5 + *(int *)(v5[1] + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
}
