/*
 * XREFs of RIMIDE_InitializeDeviceInjection @ 0x1C016D64C
 * Callers:
 *     NtUserInitializeInputDeviceInjection @ 0x1C0134EF0 (NtUserInitializeInputDeviceInjection.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C016A2F4 (RIMIDECreatePseudoHIDDevice.c)
 *     ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1C016CE20 (-BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDE_InitializeDeviceInjection(
        unsigned __int16 a1,
        __int16 a2,
        struct tagUSAGE_PROPERTIES *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        __int64 *a7)
{
  unsigned int v7; // ebx
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  _HIDP_DEVICE_DESC v19; // [rsp+60h] [rbp-91h] BYREF
  _HIDP_DEVICE_DESC v20; // [rsp+A0h] [rbp-51h] BYREF

  v7 = 0;
  v12 = 1;
  memset(&v20, 0, sizeof(v20));
  if ( !a7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15, v16);
  *a7 = 0LL;
  if ( a1 == 13 )
  {
    v12 = 10;
    if ( a2 != 4 )
      v12 = 1;
    if ( a2 == 5 )
      v12 = 5;
  }
  if ( (unsigned int)BuildReportDescriptor(a1, a2, a3, a4, v12, &v20) )
  {
    v19 = v20;
    v17 = RIMIDECreatePseudoHIDDevice(a1, a2, v12, a6, a5, (__int128 *)&v19, 1, 0, 0, 0LL);
    if ( v17 )
    {
      *a7 = v17;
      return 1;
    }
  }
  return v7;
}
