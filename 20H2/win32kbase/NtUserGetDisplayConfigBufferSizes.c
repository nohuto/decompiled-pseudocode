/*
 * XREFs of NtUserGetDisplayConfigBufferSizes @ 0x1C000D0C0
 * Callers:
 *     <none>
 * Callees:
 *     GreIsDisconnectDeviceAttached @ 0x1C000D18C (GreIsDisconnectDeviceAttached.c)
 *     _QdcSdcTranslateStatusDefault @ 0x1C000DD14 (_QdcSdcTranslateStatusDefault.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C000DD50 (DrvGetDisplayConfigBufferSizes.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C0013B40 (UserRemoteConnectedSessionUsingXddm.c)
 *     EnterSharedCrit @ 0x1C004B1D0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetDisplayConfigBufferSizes(unsigned int a1, unsigned int *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  _DWORD *v6; // rdx
  unsigned int DisplayConfigBufferSizes; // eax
  unsigned int v9; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v9 = 0;
  EnterSharedCrit(0LL, 1LL);
  if ( gbVideoInitialized )
  {
    v6 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v6 = (_DWORD *)MmUserProbeAddress;
    *v6 = *v6;
    if ( ((unsigned __int16)(gProtocolType - 1) > 0xFFFDu || !(unsigned int)UserRemoteConnectedSessionUsingXddm())
      && !(unsigned int)GreIsDisconnectDeviceAttached() )
    {
      DisplayConfigBufferSizes = DrvGetDisplayConfigBufferSizes(a1, &v9);
      v4 = QdcSdcTranslateStatusDefault(DisplayConfigBufferSizes);
    }
    v5 = v9;
    *a2 = v9;
  }
  else
  {
    v4 = -1073741823;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
