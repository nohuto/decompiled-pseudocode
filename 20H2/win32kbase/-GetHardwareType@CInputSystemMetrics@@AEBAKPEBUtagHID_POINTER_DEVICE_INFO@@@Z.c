/*
 * XREFs of ?GetHardwareType@CInputSystemMetrics@@AEBAKPEBUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01B8334
 * Callers:
 *     ?UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z @ 0x1C01B838C (-UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CInputSystemMetrics::GetHardwareType(
        CInputSystemMetrics *this,
        const struct tagHID_POINTER_DEVICE_INFO *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // eax
  unsigned int v6; // edx
  __int64 result; // rax

  v4 = *((_DWORD *)a2 + 6);
  if ( v4 <= 0 )
    goto LABEL_11;
  if ( v4 <= 4 )
  {
    v6 = 129;
  }
  else
  {
    if ( v4 != 5 )
    {
      if ( v4 == 6 )
      {
        v6 = 136;
        goto LABEL_8;
      }
LABEL_11:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a2, a4);
      return 0LL;
    }
    v6 = 132;
  }
LABEL_8:
  result = v6 | 0x40;
  if ( *((_DWORD *)a2 + 180) <= 1u )
    return v6;
  return result;
}
