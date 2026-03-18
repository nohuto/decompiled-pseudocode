/*
 * XREFs of ACPIInternalDeviceClockIrpStartDevice @ 0x1C00AEE70
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInitStartDevice @ 0x1C00050B0 (ACPIInitStartDevice.c)
 */

__int64 __fastcall ACPIInternalDeviceClockIrpStartDevice(ULONG_PTR a1, __int64 a2)
{
  __int64 result; // rax

  result = ACPIInitStartDevice(
             a1,
             0LL,
             (void (__fastcall *)(_QWORD *, __int64, _QWORD))ACPIInternalDeviceClockIrpStartDeviceCompletion,
             a2,
             a2);
  if ( (int)result >= 0 )
    return 259LL;
  return result;
}
