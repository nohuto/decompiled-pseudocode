/*
 * XREFs of VslpIumPhase4Initialize @ 0x1403CA9EC
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A3B0DC (IoInitSystemPreDrivers.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14032A7E0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 *     EtwRegisterClassicProvider @ 0x14074B470 (EtwRegisterClassicProvider.c)
 *     PoDisableSleepStates @ 0x1408DF380 (PoDisableSleepStates.c)
 *     VslpIumInitializeTelemetry @ 0x140A6EECC (VslpIumInitializeTelemetry.c)
 */

__int64 VslpIumPhase4Initialize()
{
  __int64 result; // rax
  NTSTATUS v1; // eax
  __int64 v2; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v3[8]; // [rsp+38h] [rbp-90h] BYREF
  _DWORD v4[28]; // [rsp+40h] [rbp-88h] BYREF

  v2 = 0LL;
  memset(v4, 0, 0x68uLL);
  result = VslpIumInitializeTelemetry();
  if ( VslVsmEnabled )
  {
    v1 = VslpEnterIumSecureMode(2u, 1, 0, (__int64)v4);
    if ( v1 < 0 )
      KeBugCheckEx(0x6Fu, v1, 3uLL, 0LL, 0LL);
    if ( v4[4] < 0 )
      PoDisableSleepStates(1LL, 8LL, v3);
    return EtwRegisterClassicProvider(
             (unsigned int)VslpProfilingId,
             0,
             (unsigned int)VslpEtwClassicCallback,
             0,
             (__int64)&v2);
  }
  return result;
}
