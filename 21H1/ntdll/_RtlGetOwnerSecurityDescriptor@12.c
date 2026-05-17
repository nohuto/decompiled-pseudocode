/*
 * XREFs of _RtlGetOwnerSecurityDescriptor@12 @ 0x4B2EAA80
 * Callers:
 *     _RtlAppxIsFileOwnedByTrustedInstaller@8 @ 0x4B32C800 (_RtlAppxIsFileOwnedByTrustedInstaller@8.c)
 *     _RtlReplaceSidInSd@16 @ 0x4B346EC0 (_RtlReplaceSidInSd@16.c)
 *     _RtlpSysVolCheckOwnerAndSecurity@8 @ 0x4B35DAEE (_RtlpSysVolCheckOwnerAndSecurity@8.c)
 * Callees:
 *     <none>
 */

int __stdcall RtlGetOwnerSecurityDescriptor(int a1, int *a2, _BYTE *a3)
{
  int v3; // edx

  if ( *(_BYTE *)a1 != 1 )
    return -1073741736;
  v3 = *(_DWORD *)(a1 + 4);
  if ( *(__int16 *)(a1 + 2) < 0 )
    v3 = v3 != 0 ? v3 + a1 : 0;
  *a2 = v3;
  *a3 = *(_BYTE *)(a1 + 2) & 1;
  return 0;
}
