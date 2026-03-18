/*
 * XREFs of PnpIsBeingRemovedSafely @ 0x1408110C0
 * Callers:
 *     PnpBuildUnsafeRemovalDeviceList @ 0x140810F90 (PnpBuildUnsafeRemovalDeviceList.c)
 * Callees:
 *     <none>
 */

bool __fastcall PnpIsBeingRemovedSafely(_DWORD *a1, int a2)
{
  int v3; // ecx

  if ( (unsigned int)(a2 - 1) > 1 || (a1[140] & 0x200) != 0 )
    return 1;
  v3 = a1[75];
  if ( (unsigned int)(v3 - 784) <= 1 )
    v3 = a1[76];
  return v3 == 779 || v3 <= 776 || v3 >= 782;
}
