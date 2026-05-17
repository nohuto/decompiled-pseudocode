/*
 * XREFs of _RtlGetGroupSecurityDescriptor@12 @ 0x4B2ECDD0
 * Callers:
 *     _RtlReplaceSidInSd@16 @ 0x4B346EC0 (_RtlReplaceSidInSd@16.c)
 * Callees:
 *     <none>
 */

int __stdcall RtlGetGroupSecurityDescriptor(int a1, int *a2, bool *a3)
{
  int v3; // edx

  if ( *(_BYTE *)a1 != 1 )
    return -1073741736;
  v3 = *(_DWORD *)(a1 + 8);
  if ( *(__int16 *)(a1 + 2) < 0 )
    v3 = v3 != 0 ? v3 + a1 : 0;
  *a2 = v3;
  *a3 = (*(_BYTE *)(a1 + 2) & 2) != 0;
  return 0;
}
