/*
 * XREFs of RIMPopulateExtendedPointerDeviceProperties @ 0x1C016DE50
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C015E948 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     RIMRegOpenDeviceInstanceKey @ 0x1C000ABD8 (RIMRegOpenDeviceInstanceKey.c)
 *     ?PopulatePTPProperties@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAX1@Z @ 0x1C016DB00 (-PopulatePTPProperties@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAX1@Z.c)
 *     RIMRegOpenLocalMachineKey @ 0x1C0182764 (RIMRegOpenLocalMachineKey.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMPopulateExtendedPointerDeviceProperties(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  void *v6; // rsi
  void *v7; // rbx

  v5 = a1;
  if ( (*(_DWORD *)(a1 + 184) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( *(_DWORD *)(a2 + 24) == 7 )
  {
    v6 = RIMRegOpenDeviceInstanceKey(v5, a2, a3);
    v7 = (void *)RIMRegOpenLocalMachineKey();
    PopulatePTPProperties((struct tagHID_POINTER_DEVICE_INFO *)a2, v6, v7);
    if ( v6 )
      ZwClose(v6);
    if ( v7 )
      ZwClose(v7);
  }
}
