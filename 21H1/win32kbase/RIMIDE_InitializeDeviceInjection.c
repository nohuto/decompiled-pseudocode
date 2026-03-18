/*
 * XREFs of RIMIDE_InitializeDeviceInjection @ 0x1C017399C
 * Callers:
 *     NtUserInitializeInputDeviceInjection @ 0x1C013AB90 (NtUserInitializeInputDeviceInjection.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C0170644 (RIMIDECreatePseudoHIDDevice.c)
 *     ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1C0173170 (-BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v13; // rcx
  __int64 v14; // rax
  _HIDP_DEVICE_DESC v16; // [rsp+60h] [rbp-91h] BYREF
  _HIDP_DEVICE_DESC v17; // [rsp+A0h] [rbp-51h] BYREF

  v7 = 0;
  v12 = 1;
  memset(&v17, 0, sizeof(v17));
  if ( !a7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
  *a7 = 0LL;
  if ( a1 == 13 )
  {
    v12 = 10;
    if ( a2 != 4 )
      v12 = 1;
    if ( a2 == 5 )
      v12 = 5;
  }
  if ( (unsigned int)BuildReportDescriptor(a1, a2, a3, a4, v12, &v17) )
  {
    v16 = v17;
    v14 = RIMIDECreatePseudoHIDDevice(a1, a2, v12, a6, a5, (__int128 *)&v16, 1, 0, 0, 0LL);
    if ( v14 )
    {
      *a7 = v14;
      return 1;
    }
  }
  return v7;
}
