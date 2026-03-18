/*
 * XREFs of Controller_AllocateIrqlTrackingArray @ 0x1C001536C
 * Callers:
 *     Controller_Create @ 0x1C006C504 (Controller_Create.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C006E290 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     memset @ 0x1C001BFC0 (memset.c)
 *     WPP_RECORDER_SF_P @ 0x1C0036414 (WPP_RECORDER_SF_P.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0036B5C (WPP_RECORDER_SF_sds.c)
 */

__int64 __fastcall Controller_AllocateIrqlTrackingArray(__int64 a1, int a2, int a3, int a4)
{
  unsigned int v4; // ebx
  ULONG ActiveProcessorCount; // eax
  POOL_TYPE Flink_high; // ecx
  SIZE_T v8; // rsi
  PVOID PoolWithTag; // rax
  int v10; // edx
  int v11; // r8d

  v4 = 0;
  if ( *(_QWORD *)(a1 + 808) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  Flink_high = HIDWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink);
  *(_DWORD *)(a1 + 816) = ActiveProcessorCount;
  v8 = 2 * ActiveProcessorCount;
  PoolWithTag = ExAllocatePoolWithTag(Flink_high, v8, 0x49434858u);
  *(_QWORD *)(a1 + 808) = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)v8);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_P(*(_QWORD *)(a1 + 72), v10, v11, 312);
    return (unsigned int)-1073741670;
  }
  return v4;
}
