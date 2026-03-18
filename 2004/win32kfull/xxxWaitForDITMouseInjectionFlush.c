/*
 * XREFs of xxxWaitForDITMouseInjectionFlush @ 0x1C003B140
 * Callers:
 *     xxxSendInput @ 0x1C003A9BC (xxxSendInput.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C0219E2C (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 * Callees:
 *     xxxReceiveMessage @ 0x1C0097200 (xxxReceiveMessage.c)
 *     xxxRemoveQueueCompletion @ 0x1C00BE390 (xxxRemoveQueueCompletion.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxWaitForDITMouseInjectionFlush()
{
  BOOL v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rax
  __int16 v4; // si
  __int64 i; // rcx
  NTSTATUS v6; // ebx
  __int64 result; // rax
  PVOID Object[2]; // [rsp+40h] [rbp-28h] BYREF

  while ( gbMouseInjectionBlockedOnDIT == 1 )
  {
    ++gcDITMouseInjectionWaiters;
    LeaveCrit();
    KeWaitForSingleObject(gpsemDITMouseInjectionWaiters, UserRequest, 0, 0, 0LL);
    EnterCrit(0LL, 1LL);
  }
  gbMouseInjectionBlockedOnDIT = 1;
  LeaveCrit();
  v0 = (unsigned __int8)InitiateWaitForInjectionCompletion(WakeInjectedFlushWaiter) != 0;
  EnterCrit(0LL, 1LL);
  if ( v0 )
  {
    v3 = *(_QWORD *)(gptiCurrent + 440LL);
    *(_DWORD *)(gptiCurrent + 1224LL) |= 0x400000u;
    v4 = *(_WORD *)(v3 + 10);
    Object[0] = gpkeDITMouseInjectionResponseEvent;
    Object[1] = *(PVOID *)(gptiCurrent + 1408LL);
    i = *(_QWORD *)(gptiCurrent + 440LL);
    while ( 1 )
    {
      *(_WORD *)(i + 10) = 64;
      UserSessionSwitchLeaveCrit(i, v1, v2);
      v6 = KeWaitForMultipleObjects(2u, Object, WaitAny, WrUserRequest, 1, 0, 0LL, 0LL);
      EnterCrit(0LL, 1LL);
      if ( v6 != 1 )
        break;
      xxxRemoveQueueCompletion();
      for ( i = *(_QWORD *)(gptiCurrent + 440LL); (*(_BYTE *)(i + 6) & 0x40) != 0; i = *(_QWORD *)(gptiCurrent + 440LL) )
        xxxReceiveMessage(gptiCurrent);
    }
    *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 10LL) = v4;
    *(_DWORD *)(gptiCurrent + 1224LL) &= ~0x400000u;
  }
  gbMouseInjectionBlockedOnDIT = 0;
  result = gcDITMouseInjectionWaiters;
  if ( gcDITMouseInjectionWaiters )
  {
    KeReleaseSemaphore(gpsemDITMouseInjectionWaiters, 0, gcDITMouseInjectionWaiters, 0);
    result = gcDITMouseInjectionWaiters;
    gcDITMouseInjectionWaiters = 0;
  }
  return result;
}
