/*
 * XREFs of ?ResetUmfdHostReadiness@UmfdHostLifeTimeManager@@CGXXZ @ 0xCFEFC
 * Callers:
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SGXXZ @ 0xCFB96 (-UninitializeProcess@UmfdHostLifeTimeManager@@SGXXZ.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z @ 0x23BEC (--0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z.c)
 *     ?UmfdCancelServerOutstandingRequests@@YGJPAX@Z @ 0xD0082 (-UmfdCancelServerOutstandingRequests@@YGJPAX@Z.c)
 */

void __usercall UmfdHostLifeTimeManager::ResetUmfdHostReadiness(int a1@<ecx>, void *a2@<esi>)
{
  unsigned int i; // esi
  void *v3; // [esp-4h] [ebp-8h]
  int v4; // [esp+0h] [ebp-4h] BYREF

  v4 = a1;
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v4, (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_ReadyLock);
  UmfdHostLifeTimeManager::s_Ready = 0;
  if ( UmfdHostLifeTimeManager::s_UmfdHostProcess )
  {
    ObfDereferenceObject(UmfdHostLifeTimeManager::s_UmfdHostProcess);
    UmfdHostLifeTimeManager::s_UmfdHostProcess = 0;
  }
  v3 = a2;
  for ( i = 0; i < 4; ++i )
  {
    if ( (&g_pUmfdServerPort)[i] )
      UmfdCancelServerOutstandingRequests(v3);
  }
  if ( v4 )
  {
    ExReleasePushLockExclusiveEx(v4, 0);
    KeLeaveCriticalRegion();
  }
}
