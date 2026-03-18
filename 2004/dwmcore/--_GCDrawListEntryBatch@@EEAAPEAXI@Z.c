/*
 * XREFs of ??_GCDrawListEntryBatch@@EEAAPEAXI@Z @ 0x1800B20A0
 * Callers:
 *     ??_ECDrawListEntryBatch@@G7EAAPEAXI@Z @ 0x1800F0A30 (--_ECDrawListEntryBatch@@G7EAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x1800574D0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@AEAAXXZ @ 0x1800B2350 (-_Tidy@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@std@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?FreeBatchResources@CDrawListBatchManager@@QEAAXPEAVCDrawListEntryBatch@@@Z @ 0x1801AC054 (-FreeBatchResources@CDrawListBatchManager@@QEAAXPEAVCDrawListEntryBatch@@@Z.c)
 */

CDrawListEntryBatch *__fastcall CDrawListEntryBatch::`scalar deleting destructor'(CDrawListEntryBatch *this, char a2)
{
  bool v2; // zf
  __int64 v5; // rcx
  CDrawListEntry *v6; // rcx
  __int64 v7; // rcx

  v2 = *((_DWORD *)this + 12) == -1;
  *(_QWORD *)this = &CDrawListEntryBatch::`vftable'{for `ID2D1PrivateCompositorRenderer'};
  *((_QWORD *)this + 1) = &CDrawListEntryBatch::`vftable'{for `CMILRefCountBase'};
  if ( !v2 )
    CDrawListBatchManager::FreeBatchResources((CDrawListBatchManager *)(*((_QWORD *)this + 3) + 24LL), this);
  std::deque<CMegaRect>::_Tidy((char *)this + 88);
  v5 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = 0LL;
  std::_Deallocate<16,0>(v5, 16LL);
  v6 = (CDrawListEntry *)*((_QWORD *)this + 10);
  if ( v6 )
  {
    *((_QWORD *)this + 10) = 0LL;
    CDrawListEntry::Release(v6);
  }
  v7 = *((_QWORD *)this + 4);
  if ( v7 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
