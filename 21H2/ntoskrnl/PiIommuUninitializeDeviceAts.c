/*
 * XREFs of PiIommuUninitializeDeviceAts @ 0x1403DED30
 * Callers:
 *     PiDmaGuardProcessPostRemove @ 0x1407669D4 (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     ExUninitializeDeviceAts @ 0x14063EC3C (ExUninitializeDeviceAts.c)
 */

__int64 __fastcall PiIommuUninitializeDeviceAts(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 720);
  if ( *(char *)(result + 16) < 0 )
    return ExUninitializeDeviceAts(*(_QWORD *)(a1 + 32));
  return result;
}
