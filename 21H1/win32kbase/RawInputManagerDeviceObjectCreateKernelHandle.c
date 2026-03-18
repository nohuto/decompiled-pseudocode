/*
 * XREFs of RawInputManagerDeviceObjectCreateKernelHandle @ 0x1C00A3E48
 * Callers:
 *     rimCreateDev @ 0x1C00A3D64 (rimCreateDev.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RawInputManagerDeviceObjectCreateKernelHandle(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        PHANDLE Handle)
{
  __int64 v5; // rcx
  NTSTATUS v6; // ebx

  *Handle = (void *)-1LL;
  if ( a1[1] == 2 )
  {
    v6 = ObOpenObjectByPointer(a1, 0x200u, 0LL, 3u, ExRawInputManagerObjectType, 0, Handle);
    if ( v6 < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
  }
  else
  {
    return (unsigned int)-1073741788;
  }
  return (unsigned int)v6;
}
