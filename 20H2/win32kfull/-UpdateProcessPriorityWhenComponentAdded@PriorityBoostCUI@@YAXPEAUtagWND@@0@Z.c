/*
 * XREFs of ?UpdateProcessPriorityWhenComponentAdded@PriorityBoostCUI@@YAXPEAUtagWND@@0@Z @ 0x1C0005178
 * Callers:
 *     ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C00050B0 (-AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     _anonymous_namespace_::RequestPriorityUpdate @ 0x1C00C3490 (_anonymous_namespace_--RequestPriorityUpdate.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00C77FC (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 */

void __fastcall PriorityBoostCUI::UpdateProcessPriorityWhenComponentAdded(
        PriorityBoostCUI *this,
        struct tagWND *a2,
        struct tagWND *a3)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v5, (struct _EX_PUSH_LOCK *)&`anonymous namespace'::boostLock);
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 424LL) + 820LL) & 0x60000) != 0 )
    anonymous_namespace_::RequestPriorityUpdate(*((_QWORD *)a2 + 2), 0LL);
  ExReleasePushLockExclusiveEx(v5, 0LL);
  KeLeaveCriticalRegion();
}
