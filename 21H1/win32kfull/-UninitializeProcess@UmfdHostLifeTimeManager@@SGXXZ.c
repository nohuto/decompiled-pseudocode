/*
 * XREFs of ?UninitializeProcess@UmfdHostLifeTimeManager@@SGXXZ @ 0xCFB96
 * Callers:
 *     _UmfdUninitializeProcess@0 @ 0xCFB90 (_UmfdUninitializeProcess@0.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z @ 0x23BEC (--0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z.c)
 *     ?UmfdZombifyAllUmfdFonts@@YGXXZ @ 0xCFC12 (-UmfdZombifyAllUmfdFonts@@YGXXZ.c)
 *     ?RemoveAllAllocationsFromLookup@UmfdAllocation@@SGXXZ @ 0xCFD7E (-RemoveAllAllocationsFromLookup@UmfdAllocation@@SGXXZ.c)
 *     ?ResetUmfdHostReadiness@UmfdHostLifeTimeManager@@CGXXZ @ 0xCFEFC (-ResetUmfdHostReadiness@UmfdHostLifeTimeManager@@CGXXZ.c)
 */

void __stdcall UmfdHostLifeTimeManager::UninitializeProcess()
{
  PVOID v0; // edi
  int v1; // [esp+4h] [ebp-4h] BYREF

  if ( !KeReadStateEvent((PRKEVENT)UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent) )
  {
    KeSetEvent((PRKEVENT)UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent, 0, 0);
    if ( _gpidLogon )
      PostWinlogonMessage(3, 4);
  }
  UmfdHostLifeTimeManager::ResetUmfdHostReadiness();
  UmfdAllocation::RemoveAllAllocationsFromLookup();
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v1, (struct _EX_PUSH_LOCK *)&UmfdLookupPushLock);
  v0 = UmfdFileviewLookup;
  if ( UmfdFileviewLookup )
  {
    ExFreePoolWithTag(*((PVOID *)UmfdFileviewLookup + 7), 0);
    ExFreePoolWithTag(v0, 0);
    UmfdFileviewLookup = 0;
  }
  if ( v1 )
  {
    ExReleasePushLockExclusiveEx(v1, 0);
    KeLeaveCriticalRegion();
  }
  UmfdZombifyAllUmfdFonts();
  UmfdHostLifeTimeManager::s_Launched = 0;
}
