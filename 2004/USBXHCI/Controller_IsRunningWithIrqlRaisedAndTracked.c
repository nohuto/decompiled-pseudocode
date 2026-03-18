/*
 * XREFs of Controller_IsRunningWithIrqlRaisedAndTracked @ 0x1C0018EA0
 * Callers:
 *     ESM_ShouldQueueWorkItem @ 0x1C00190DC (ESM_ShouldQueueWorkItem.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000E688 (WPP_RECORDER_SF_d.c)
 *     Controller_GetWdmPhysicalDeviceObject @ 0x1C0031488 (Controller_GetWdmPhysicalDeviceObject.c)
 */

char __fastcall Controller_IsRunningWithIrqlRaisedAndTracked(__int64 a1)
{
  ULONG CurrentProcessorNumber; // eax
  int v3; // edx
  ULONG_PTR WdmPhysicalDeviceObject; // rax

  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  if ( CurrentProcessorNumber >= *(_DWORD *)(a1 + 800) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 72),
        v3,
        4,
        311,
        (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids,
        CurrentProcessorNumber);
    }
    WdmPhysicalDeviceObject = Controller_GetWdmPhysicalDeviceObject(a1);
    KeBugCheckEx(0x144u, 4uLL, WdmPhysicalDeviceObject, 2uLL, 4uLL);
  }
  return *(_BYTE *)(*(_QWORD *)(a1 + 792) + 2LL * CurrentProcessorNumber);
}
