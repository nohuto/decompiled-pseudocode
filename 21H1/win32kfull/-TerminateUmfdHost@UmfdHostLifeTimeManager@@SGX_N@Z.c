/*
 * XREFs of ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SGX_N@Z @ 0xD3DCC
 * Callers:
 *     _UmfdDispatchWinLogonEscape@4 @ 0xEB862 (_UmfdDispatchWinLogonEscape@4.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z @ 0x23BEC (--0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z.c)
 *     ?TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SGPAXXZ @ 0xD3E72 (-TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SGPAXXZ.c)
 */

void __fastcall UmfdHostLifeTimeManager::TerminateUmfdHost(char a1)
{
  void *v2; // eax
  void *v3; // esi
  PVOID v4; // edi
  int v5; // [esp+Ch] [ebp-8h] BYREF
  int v6; // [esp+10h] [ebp-4h] BYREF

  KeWaitForSingleObject(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, Executive, 0, 0, 0);
  v2 = UmfdHostLifeTimeManager::TerminateUmfdHostRetainHandle();
  v3 = v2;
  if ( v2 )
  {
    ZwWaitForSingleObject(v2, 0, 0);
    ZwClose(v3);
  }
  if ( a1 )
  {
    UmfdHostLifeTimeManager::s_SessionRasterizerInitialized = 0;
    KeClearEvent((PRKEVENT)UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent);
  }
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v5, (struct _EX_PUSH_LOCK *)&UmfdLookupPushLock);
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v6, (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_ReadyLock);
  if ( UmfdHostLifeTimeManager::s_UmfdHostProcess )
  {
    ObfDereferenceObject(UmfdHostLifeTimeManager::s_UmfdHostProcess);
    UmfdHostLifeTimeManager::s_UmfdHostProcess = 0;
  }
  v4 = UmfdFileviewLookup;
  if ( UmfdFileviewLookup )
  {
    ExFreePoolWithTag(*((PVOID *)UmfdFileviewLookup + 7), 0);
    ExFreePoolWithTag(v4, 0);
    UmfdFileviewLookup = 0;
  }
  KeSetEvent(UmfdHostLifeTimeManager::s_WinlogonCallbackEvent, 0, 0);
  if ( v6 )
  {
    ExReleasePushLockExclusiveEx(v6, 0);
    KeLeaveCriticalRegion();
  }
  if ( v5 )
  {
    ExReleasePushLockExclusiveEx(v5, 0);
    KeLeaveCriticalRegion();
  }
}
