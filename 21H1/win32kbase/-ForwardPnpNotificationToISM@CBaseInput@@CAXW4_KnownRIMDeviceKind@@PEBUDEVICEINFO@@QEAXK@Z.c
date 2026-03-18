/*
 * XREFs of ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x1C0038818
 * Callers:
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C003860C (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C009D838 (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0061864 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::ForwardPnpNotificationToISM(int a1, __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  __int64 v13; // xmm1_8
  __int64 v14; // rax
  _DWORD v15[144]; // [rsp+20h] [rbp-E0h] BYREF

  result = (unsigned int)(a4 - 2);
  if ( (unsigned int)result <= 1 )
  {
    memset(&v15[3], 0, 0x230uLL);
    v15[0] = a1;
    v15[1] = a3;
    v15[2] = a4;
    if ( a4 == 2 )
    {
      v15[3] = -__CFSHR__(*(_DWORD *)(a2 + 184), 14);
      v10 = *(_QWORD *)(a2 + 384);
      if ( v10 )
      {
        v14 = *(_QWORD *)(v10 + 88);
        if ( v14 )
          v15[4] = *(_DWORD *)(v14 + 56);
      }
      v9 = *(unsigned __int16 *)(a2 + 208);
      if ( (_WORD)v9 )
      {
        if ( (unsigned __int16)((unsigned __int16)v9 >> 1) > 0x104u )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
          LOWORD(v9) = *(_WORD *)(a2 + 208);
          v15[12] = 260;
        }
        else
        {
          v15[12] = (unsigned __int16)v9 >> 1;
        }
        memmove(&v15[13], *(const void **)(a2 + 216), (unsigned __int16)v9);
      }
      if ( a1 == 1 )
      {
        v11 = *(_DWORD *)(a2 + 472);
        *(_QWORD *)&v15[5] = *(_QWORD *)(a2 + 464);
        v15[7] = v11;
      }
      else if ( a1 == 2 )
      {
        v12 = *(_DWORD *)(a2 + 488);
        v13 = *(_QWORD *)(a2 + 480);
        *(_OWORD *)&v15[5] = *(_OWORD *)(a2 + 464);
        v15[11] = v12;
        *(_QWORD *)&v15[9] = v13;
      }
    }
    return ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64))InputExtensibilityCallout::CoreMsgSendMessage)(
             v9,
             13LL,
             v15,
             572LL);
  }
  return result;
}
