/*
 * XREFs of ACPIFanControl @ 0x1C00549C0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceInternalDeviceRequest @ 0x1C00052A4 (ACPIDeviceInternalDeviceRequest.c)
 */

__int64 __fastcall ACPIFanControl(__int64 a1, char a2)
{
  unsigned int v2; // edx
  __int64 result; // rax

  v2 = a2 != 0 ? 1 : 4;
  if ( *(_DWORD *)(a1 + 384) != v2 )
    return ACPIDeviceInternalDeviceRequest((_QWORD *)a1, v2, (__int64)ACPIFanPowerCallback, 0LL, 0);
  return result;
}
