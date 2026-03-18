/*
 * XREFs of ?UpdatePointerDeviceCount@CHidInput@@AEAAKK@Z @ 0x1C01AD848
 * Callers:
 *     ?OnRIMDeviceOpened@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C004E5B0 (-OnRIMDeviceOpened@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z.c)
 *     ?OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C004E600 (-OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CHidInput::UpdatePointerDeviceCount(CHidInput *this, int a2)
{
  int v4; // edi
  int v5; // eax
  __int64 result; // rax

  if ( (struct _KTHREAD *)qword_1C02563A8 != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  v4 = a2 - 1;
  if ( !v4 )
    return (unsigned int)++*((_DWORD *)this + 320);
  if ( v4 != 1 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
    return *((unsigned int *)this + 320);
  }
  v5 = *((_DWORD *)this + 320);
  if ( !v5 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
    v5 = *((_DWORD *)this + 320);
  }
  result = (unsigned int)(v5 - 1);
  *((_DWORD *)this + 320) = result;
  return result;
}
