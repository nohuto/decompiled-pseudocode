/*
 * XREFs of RIMIDEValidateLogicalDeviceSize @ 0x1C016C23C
 * Callers:
 *     RIMPopulatePointerDevice @ 0x1C0164414 (RIMPopulatePointerDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMIDEValidateLogicalDeviceSize(_DWORD *a1, int a2, int a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( a2 == -1 || a3 == -1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 52, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids);
    }
    v3 = -1073741668;
  }
  if ( a1[33] - a1[31] <= 1 || a1[34] - a1[32] <= 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 53, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids);
    }
    return (unsigned int)-1073741668;
  }
  return v3;
}
