/*
 * XREFs of ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00027C4
 * Callers:
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C0081C04 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 *     ??1_VIDMM_GLOBAL_ALLOC@@QEAA@XZ @ 0x1C008DB14 (--1_VIDMM_GLOBAL_ALLOC@@QEAA@XZ.c)
 *     ??1VIDMM_PROCESS_HEAP@@UEAA@XZ @ 0x1C00F01BC (--1VIDMM_PROCESS_HEAP@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGFASTMUTEX::~DXGFASTMUTEX(DXGFASTMUTEX *this)
{
  if ( *((_QWORD *)this + 3) )
  {
    WdLogSingleEntry1(1LL, 452LL);
    DxgCoreInterface[85](0LL, 262146LL, 0xFFFFFFFFLL, L"NULL == m_OwningThread", 452LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_DWORD *)this + 8) )
  {
    WdLogSingleEntry1(1LL, 453LL);
    DxgCoreInterface[85](0LL, 262146LL, 0xFFFFFFFFLL, L"0 == m_OwnerAcquireCount", 453LL, 0LL, 0LL, 0LL, 0LL);
  }
}
