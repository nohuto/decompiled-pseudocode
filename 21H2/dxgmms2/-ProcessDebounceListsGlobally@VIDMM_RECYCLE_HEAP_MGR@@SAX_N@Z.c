/*
 * XREFs of ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1C00AA464
 * Callers:
 *     ?ProbeAndLockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C007DDF0 (-ProbeAndLockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATI.c)
 *     ?UnlockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX_K1E@Z @ 0x1C007DEB0 (-UnlockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX_K1E@Z.c)
 *     ?Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C007EE40 (-Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?PurgeAllSegments@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C00AA370 (-PurgeAllSegments@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0001344 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0001400 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00014D4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000209C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000242C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00024A4 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C007EECC (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(char a1)
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v3; // rdi
  PRKPROCESS *Blink; // rcx
  _BYTE v5[16]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v6[8]; // [rsp+30h] [rbp-50h] BYREF
  DXGPUSHLOCK *v7; // [rsp+38h] [rbp-48h]
  int v8; // [rsp+40h] [rbp-40h]
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-38h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK(
    (DXGAUTOPUSHLOCK *)v6,
    (struct _KTHREAD **)VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock,
    0);
  DXGPUSHLOCK::AcquireExclusive(v7);
  Flink = VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead.Flink;
  v8 = 2;
  while ( Flink != &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead )
  {
    v3 = Flink - 100;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v5, (struct DXGFASTMUTEX *const)&Flink[-17]);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v5);
    if ( v3[96].Blink != (struct _LIST_ENTRY *)&v3[96].Blink || v3[97].Blink != (struct _LIST_ENTRY *)&v3[97].Blink )
    {
      Blink = (PRKPROCESS *)v3->Blink;
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(*Blink, &ApcState);
      VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList((VIDMM_RECYCLE_HEAP_MGR *)&Flink[-100], 0, a1);
      KeUnstackDetachProcess(&ApcState);
    }
    if ( v5[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v5);
    Flink = Flink->Flink;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v6);
}
