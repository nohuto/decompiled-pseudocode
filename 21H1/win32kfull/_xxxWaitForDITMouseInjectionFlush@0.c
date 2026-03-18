/*
 * XREFs of _xxxWaitForDITMouseInjectionFlush@0 @ 0xAFF56
 * Callers:
 *     _xxxSendInput@8 @ 0xAFB7E (_xxxSendInput@8.c)
 *     ?xxxProcessMousePromotionQueue@@YGXXZ @ 0x17D847 (-xxxProcessMousePromotionQueue@@YGXXZ.c)
 * Callees:
 *     _xxxReceiveMessage@4 @ 0x415B8 (_xxxReceiveMessage@4.c)
 *     _xxxRemoveQueueCompletion@0 @ 0x6ECD4 (_xxxRemoveQueueCompletion@0.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall xxxWaitForDITMouseInjectionFlush()
{
  BOOL v0; // ebx
  int v1; // eax
  int v2; // ebx
  void *v3; // eax
  int i; // ecx
  NTSTATUS v5; // esi
  int result; // eax
  PVOID Object[2]; // [esp+Ch] [ebp-Ch] BYREF
  int v8; // [esp+14h] [ebp-4h]

  while ( _gbMouseInjectionBlockedOnDIT == 1 )
  {
    ++_gcDITMouseInjectionWaiters;
    LeaveCrit();
    KeWaitForSingleObject(_gpsemDITMouseInjectionWaiters, UserRequest, 0, 0, 0);
    EnterCrit(0, 1);
  }
  _gbMouseInjectionBlockedOnDIT = 1;
  LeaveCrit();
  v0 = (unsigned __int8)InitiateWaitForInjectionCompletion(WakeInjectedFlushWaiter) != 0;
  EnterCrit(0, 1);
  if ( v0 )
  {
    v1 = *(_DWORD *)(_gptiCurrent + 244);
    *(_DWORD *)(_gptiCurrent + 688) |= 0x400000u;
    v2 = *(unsigned __int16 *)(v1 + 10);
    Object[0] = gpkeDITMouseInjectionResponseEvent;
    v3 = *(void **)(_gptiCurrent + 812);
    v8 = v2;
    Object[1] = v3;
    i = *(_DWORD *)(_gptiCurrent + 244);
    while ( 1 )
    {
      *(_WORD *)(i + 10) = 64;
      UserSessionSwitchLeaveCrit();
      v5 = KeWaitForMultipleObjects(2u, Object, WaitAny, WrUserRequest, 1, 0, 0, 0);
      EnterCrit(0, 1);
      if ( v5 != 1 )
        break;
      xxxRemoveQueueCompletion();
      for ( i = *(_DWORD *)(_gptiCurrent + 244); (*(_BYTE *)(i + 6) & 0x40) != 0; i = *(_DWORD *)(_gptiCurrent + 244) )
        xxxReceiveMessage(_gptiCurrent);
    }
    *(_WORD *)(*(_DWORD *)(_gptiCurrent + 244) + 10) = v8;
    *(_DWORD *)(_gptiCurrent + 688) &= ~0x400000u;
  }
  _gbMouseInjectionBlockedOnDIT = 0;
  result = _gcDITMouseInjectionWaiters;
  if ( _gcDITMouseInjectionWaiters )
  {
    KeReleaseSemaphore(_gpsemDITMouseInjectionWaiters, 0, _gcDITMouseInjectionWaiters, 0);
    result = _gcDITMouseInjectionWaiters;
    _gcDITMouseInjectionWaiters = 0;
  }
  return result;
}
