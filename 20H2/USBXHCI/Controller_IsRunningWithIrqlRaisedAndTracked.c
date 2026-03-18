/*
 * XREFs of Controller_IsRunningWithIrqlRaisedAndTracked @ 0x1C001A020
 * Callers:
 *     ESM_ShouldQueueWorkItem @ 0x1C001BB68 (ESM_ShouldQueueWorkItem.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     Controller_GetWdmPhysicalDeviceObject @ 0x1C0032968 (Controller_GetWdmPhysicalDeviceObject.c)
 */

char __fastcall Controller_IsRunningWithIrqlRaisedAndTracked(__int64 a1)
{
  ULONG CurrentProcessorNumber; // eax
  int v3; // edx
  ULONG_PTR WdmPhysicalDeviceObject; // rax

  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  if ( CurrentProcessorNumber >= *(_DWORD *)(a1 + 816) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 72),
        v3,
        4,
        311,
        (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids,
        CurrentProcessorNumber);
    }
    WdmPhysicalDeviceObject = Controller_GetWdmPhysicalDeviceObject(a1);
    KeBugCheckEx(0x144u, 4uLL, WdmPhysicalDeviceObject, 2uLL, 4uLL);
  }
  return *(_BYTE *)(*(_QWORD *)(a1 + 808) + 2LL * CurrentProcessorNumber);
}
