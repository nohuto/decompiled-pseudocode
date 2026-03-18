/*
 * XREFs of ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x1C00077B8
 * Callers:
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C000760C (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C0024C18 (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C002DB04 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::ForwardPnpNotificationToISM(int a1, __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  int v14; // eax
  int v15; // eax
  __int64 v16; // xmm1_8
  __int64 v17; // rax
  _DWORD v18[144]; // [rsp+20h] [rbp-E0h] BYREF

  result = (unsigned int)(a4 - 2);
  if ( (unsigned int)result <= 1 )
  {
    memset(&v18[3], 0, 0x230uLL);
    v18[0] = a1;
    v18[1] = a3;
    v18[2] = a4;
    if ( a4 == 2 )
    {
      v18[3] = -__CFSHR__(*(_DWORD *)(a2 + 184), 14);
      v13 = *(_QWORD *)(a2 + 384);
      if ( v13 )
      {
        v17 = *(_QWORD *)(v13 + 88);
        if ( v17 )
          v18[4] = *(_DWORD *)(v17 + 56);
      }
      v10 = *(unsigned __int16 *)(a2 + 208);
      if ( (_WORD)v10 )
      {
        if ( (unsigned __int16)((unsigned __int16)v10 >> 1) > 0x104u )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11, v12);
          LOWORD(v10) = *(_WORD *)(a2 + 208);
          v18[12] = 260;
        }
        else
        {
          v18[12] = (unsigned __int16)v10 >> 1;
        }
        memmove(&v18[13], *(const void **)(a2 + 216), (unsigned __int16)v10);
      }
      if ( a1 == 1 )
      {
        v14 = *(_DWORD *)(a2 + 472);
        *(_QWORD *)&v18[5] = *(_QWORD *)(a2 + 464);
        v18[7] = v14;
      }
      else if ( a1 == 2 )
      {
        v15 = *(_DWORD *)(a2 + 488);
        v16 = *(_QWORD *)(a2 + 480);
        *(_OWORD *)&v18[5] = *(_OWORD *)(a2 + 464);
        v18[11] = v15;
        *(_QWORD *)&v18[9] = v16;
      }
    }
    return ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64))InputExtensibilityCallout::CoreMsgSendMessage)(
             v10,
             13LL,
             v18,
             572LL);
  }
  return result;
}
