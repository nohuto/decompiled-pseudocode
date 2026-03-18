/*
 * XREFs of ?UpdateProcessPriorityWhenComponentAdded@PriorityBoostCUI@@YGXPAUtagWND@@0@Z @ 0xC437E
 * Callers:
 *     ?AddComponent@CoreWindowProp@@SGJPAUtagWND@@0@Z @ 0xC42E8 (-AddComponent@CoreWindowProp@@SGJPAUtagWND@@0@Z.c)
 * Callees:
 *     _anonymous_namespace_::RequestPriorityUpdate @ 0x18D26 (_anonymous_namespace_--RequestPriorityUpdate.c)
 */

void __fastcall PriorityBoostCUI::UpdateProcessPriorityWhenComponentAdded(
        int a1,
        int a2,
        PriorityBoostCUI *this,
        struct tagWND *a4,
        struct tagWND *a5)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&`anonymous namespace'::boostLock, 0);
  if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 232) + 464) & 0x60000) != 0 )
    anonymous_namespace_::RequestPriorityUpdate(*(_DWORD *)(a2 + 8), 0);
  ExReleasePushLockExclusiveEx(&`anonymous namespace'::boostLock, 0);
  JUMPOUT(0x24DFCC);
}
