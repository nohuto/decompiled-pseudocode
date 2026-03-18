/*
 * XREFs of WheaGetErrorSource @ 0x1405B5B40
 * Callers:
 *     WheaRemoveErrorSourceDeviceDriver @ 0x140959AD0 (WheaRemoveErrorSourceDeviceDriver.c)
 * Callees:
 *     WheapGetErrorSource @ 0x1405B6524 (WheapGetErrorSource.c)
 */

__int64 __fastcall WheaGetErrorSource(unsigned int a1)
{
  __int64 ErrorSource; // rax

  ErrorSource = WheapGetErrorSource(&WheapErrorSourceTable, a1);
  return (ErrorSource + 96) & -(__int64)(ErrorSource != 0);
}
