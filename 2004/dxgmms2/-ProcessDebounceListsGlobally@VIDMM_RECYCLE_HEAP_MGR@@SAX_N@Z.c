/*
 * XREFs of ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1C00C2B88
 * Callers:
 *     ?UnlockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX_K1E@Z @ 0x1C007A890 (-UnlockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX_K1E@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C007B290 (-ProbeAndLockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATI.c)
 *     ?Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C007CA50 (-Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?PurgeAllSegments@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C00B36F8 (-PurgeAllSegments@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C48 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001CC0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002354 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00023C0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0004B84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0004BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C007B370 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(char a1)
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY **p_Blink; // rdi
  __int64 v4; // rdx
  __int64 v5; // rdx
  PRKPROCESS *v6; // rcx
  _BYTE v7[16]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v8[8]; // [rsp+30h] [rbp-50h] BYREF
  DXGPUSHLOCK *v9; // [rsp+38h] [rbp-48h]
  int v10; // [rsp+40h] [rbp-40h]
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-38h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK(
    (DXGAUTOPUSHLOCK *)v8,
    (struct _KTHREAD **)VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock,
    0);
  DXGPUSHLOCK::AcquireExclusive(v9);
  Flink = VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead.Flink;
  v10 = 2;
  while ( Flink != &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead )
  {
    p_Blink = &Flink[-100].Blink;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (struct DXGFASTMUTEX *const)&Flink[-17].Blink);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7, v4);
    if ( p_Blink[192] != (struct _LIST_ENTRY *)(p_Blink + 192) || p_Blink[194] != (struct _LIST_ENTRY *)(p_Blink + 194) )
    {
      v6 = (PRKPROCESS *)p_Blink[1];
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(*v6, &ApcState);
      VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList((VIDMM_RECYCLE_HEAP_MGR *)&Flink[-100].Blink, 0, a1);
      KeUnstackDetachProcess(&ApcState);
    }
    if ( v7[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7, v5);
    Flink = Flink->Flink;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v8);
}
