/*
 * XREFs of ?RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01A4354
 * Callers:
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C005F780 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0169BF8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     ??_GCPTPProcessor@@AEAAPEAXI@Z @ 0x1C01A2358 (--_GCPTPProcessor@@AEAAPEAXI@Z.c)
 */

void __fastcall CPTPProcessorFactory::RemoveProcessor(struct tagHID_POINTER_DEVICE_INFO *a1)
{
  CPTPProcessor *v2; // rcx

  v2 = (CPTPProcessor *)*((_QWORD *)a1 + 125);
  if ( v2 )
  {
    CPTPProcessor::`scalar deleting destructor'(v2);
    *((_QWORD *)a1 + 125) = 0LL;
  }
}
