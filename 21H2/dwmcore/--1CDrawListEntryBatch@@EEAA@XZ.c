/*
 * XREFs of ??1CDrawListEntryBatch@@EEAA@XZ @ 0x1800FE4AC
 * Callers:
 *     ??_GCDrawListEntryBatch@@EEAAPEAXI@Z @ 0x1800FE470 (--_GCDrawListEntryBatch@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D193C (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ??1?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@QEAA@XZ @ 0x1800FE50C (--1-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@std@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FreeBatchResources@CDrawListBatchManager@@QEAAXPEAVCDrawListEntryBatch@@@Z @ 0x1801EBEA0 (-FreeBatchResources@CDrawListBatchManager@@QEAAXPEAVCDrawListEntryBatch@@@Z.c)
 */

void __fastcall CDrawListEntryBatch::~CDrawListEntryBatch(CDrawListEntryBatch *this)
{
  bool v1; // zf
  volatile signed __int32 *v3; // rcx
  __int64 v4; // rcx

  v1 = *((_DWORD *)this + 12) == -1;
  *(_QWORD *)this = &CDrawListEntryBatch::`vftable'{for `ID2D1PrivateCompositorRenderer'};
  *((_QWORD *)this + 1) = &CDrawListEntryBatch::`vftable'{for `CMILRefCountBaseT<IMILRefCount>'};
  if ( !v1 )
    CDrawListBatchManager::FreeBatchResources((CDrawListBatchManager *)(*((_QWORD *)this + 3) + 24LL), this);
  std::deque<CMegaRect>::~deque<CMegaRect>((char *)this + 112);
  v3 = (volatile signed __int32 *)*((_QWORD *)this + 13);
  if ( v3 )
  {
    *((_QWORD *)this + 13) = 0LL;
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v3);
  }
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
}
