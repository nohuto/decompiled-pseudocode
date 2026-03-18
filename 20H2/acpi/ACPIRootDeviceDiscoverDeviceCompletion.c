/*
 * XREFs of ACPIRootDeviceDiscoverDeviceCompletion @ 0x1C005E9B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0019748 (WPP_RECORDER_SF_qD.c)
 */

LONG __fastcall ACPIRootDeviceDiscoverDeviceCompletion(__int64 a1, int a2, __int64 a3)
{
  if ( a2 >= 0 )
  {
    if ( a3 )
    {
      *(_QWORD *)a1 = a3;
      *(_DWORD *)(a1 + 16) = a2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          6u,
          0x1Fu,
          (__int64)&WPP_a909ee2b802d35766e487243411108b1_Traceguids,
          a3,
          a2);
    }
  }
  return KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
}
