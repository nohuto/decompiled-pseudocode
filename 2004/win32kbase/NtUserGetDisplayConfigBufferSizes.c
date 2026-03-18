/*
 * XREFs of NtUserGetDisplayConfigBufferSizes @ 0x1C00B4080
 * Callers:
 *     <none>
 * Callees:
 *     EnterSharedCrit @ 0x1C0091220 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C00B3D60 (UserRemoteConnectedSessionUsingXddm.c)
 *     _QdcSdcTranslateStatusDefault @ 0x1C00B48F4 (_QdcSdcTranslateStatusDefault.c)
 *     GreIsDisconnectDeviceAttached @ 0x1C00B5A00 (GreIsDisconnectDeviceAttached.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C00B5AF0 (DrvGetDisplayConfigBufferSizes.c)
 */

__int64 __fastcall NtUserGetDisplayConfigBufferSizes(unsigned int a1, unsigned int *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // rdx
  unsigned int DisplayConfigBufferSizes; // eax
  unsigned int v12; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v12 = 0;
  EnterSharedCrit(0LL, 1);
  if ( gbVideoInitialized )
  {
    v9 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v9 = (_DWORD *)MmUserProbeAddress;
    *v9 = *v9;
    if ( ((unsigned __int16)(gProtocolType - 1) > 0xFFFDu || !(unsigned int)UserRemoteConnectedSessionUsingXddm())
      && !(unsigned int)GreIsDisconnectDeviceAttached() )
    {
      DisplayConfigBufferSizes = DrvGetDisplayConfigBufferSizes(a1, &v12);
      v4 = QdcSdcTranslateStatusDefault(DisplayConfigBufferSizes);
    }
    v6 = v12;
    *a2 = v12;
  }
  else
  {
    v4 = -1073741823;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v4;
}
