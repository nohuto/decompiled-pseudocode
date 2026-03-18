/*
 * XREFs of _RequestInputSinkInfoFromPoint@4 @ 0x17B95E
 * Callers:
 *     _NtUserCompositionInputSinkLuidFromPoint@20 @ 0x1602D5 (_NtUserCompositionInputSinkLuidFromPoint@20.c)
 *     _NtUserCompositionInputSinkViewInstanceIdFromPoint@8 @ 0x16051F (_NtUserCompositionInputSinkViewInstanceIdFromPoint@8.c)
 * Callees:
 *     _WakeDIT@4 @ 0x9C504 (_WakeDIT@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __thiscall RequestInputSinkInfoFromPoint(void *this)
{
  int v1; // ebx
  bool v2; // zf
  _BYTE *v3; // esi
  _BYTE v5[100]; // [esp+4h] [ebp-68h] BYREF
  void *v6; // [esp+68h] [ebp-4h]

  v1 = 0;
  v6 = this;
  if ( gbDIT )
  {
    while ( gbCompositionInputSinkQueryBlockedOnDIT == 1 )
    {
      ++_gcDITLuidHitTestWaiters;
      LeaveCrit();
      KeWaitForSingleObject(_gpsemDITLuidHitTestWaiters, UserRequest, 0, 0, 0);
      EnterCrit(0, 1);
      if ( !gbDIT )
        return v1;
    }
    v2 = gfMITWaitingForLLHook == 0;
    gbCompositionInputSinkQueryBlockedOnDIT = 1;
    qmemcpy(_gInputSinkInfoRetrieval, v6, 0x64u);
    if ( v2 )
    {
      WakeDIT(2u);
    }
    else
    {
      gfAppWaitingForLLHookSignal = 1;
      KeSetEvent((PRKEVENT)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, 1, 0);
    }
    UserSessionSwitchLeaveCrit();
    KeWaitForSingleObject(gpkeDITCompositionInputSinkQueryResponseEvent, UserRequest, 1, 1u, 0);
    EnterCrit(0, 1);
    v3 = (_BYTE *)_gInputSinkInfoRetrieval;
    gfAppWaitingForLLHookSignal = 0;
    v1 = *((_DWORD *)&_gInputSinkInfoRetrieval + 4);
    if ( !v1 )
    {
      memset(v5, 0, sizeof(v5));
      v3 = v5;
    }
    qmemcpy(v6, v3, 0x64u);
    gbCompositionInputSinkQueryBlockedOnDIT = 0;
    if ( _gcDITLuidHitTestWaiters )
    {
      KeReleaseSemaphore(_gpsemDITLuidHitTestWaiters, 0, _gcDITLuidHitTestWaiters, 0);
      _gcDITLuidHitTestWaiters = 0;
    }
  }
  return v1;
}
