/*
 * XREFs of ?UpdatePointerDeviceCount@CHidInput@@AEAAKK@Z @ 0x1C01A7AE8
 * Callers:
 *     ?OnRIMDeviceOpened@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C005BFA0 (-OnRIMDeviceOpened@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z.c)
 *     ?OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C005BFF0 (-OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CHidInput::UpdatePointerDeviceCount(CHidInput *this, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  int v6; // edi
  int v7; // eax
  __int64 result; // rax

  v4 = a2;
  if ( (struct _KTHREAD *)qword_1C0250418 != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  v6 = v4 - 1;
  if ( !v6 )
    return (unsigned int)++*((_DWORD *)this + 320);
  if ( v6 != 1 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
    return *((unsigned int *)this + 320);
  }
  v7 = *((_DWORD *)this + 320);
  if ( !v7 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
    v7 = *((_DWORD *)this + 320);
  }
  result = (unsigned int)(v7 - 1);
  *((_DWORD *)this + 320) = result;
  return result;
}
