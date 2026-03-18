/*
 * XREFs of PsGetPermanentSiloContext @ 0x14025E5D0
 * Callers:
 *     VrpHandleIoctlLoadDifferencingHive @ 0x1405C8A5C (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1405C8D0C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1405C901C (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VRegEnabledInJob @ 0x1405CB330 (VRegEnabledInJob.c)
 *     CmGetRootKeyObjectForSilo @ 0x1405CC13C (CmGetRootKeyObjectForSilo.c)
 *     CmpGetRegistryNamespaceRootForSilo @ 0x14061FEA0 (CmpGetRegistryNamespaceRootForSilo.c)
 *     ObpLookupObjectName @ 0x140627610 (ObpLookupObjectName.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x1406EC2B8 (CmpGetOrCreateContextForSiloNoRef.c)
 *     CmLockKeyForWrite @ 0x1407ADB50 (CmLockKeyForWrite.c)
 *     ObInitServerSilo @ 0x1407B3480 (ObInitServerSilo.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14087E4BC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlModifyFlags @ 0x14087EB6C (VrpHandleIoctlModifyFlags.c)
 *     PspDeleteExternalServerSiloState @ 0x140902018 (PspDeleteExternalServerSiloState.c)
 *     ObGetSiloRootDirectoryPath @ 0x14097BF7C (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetPermanentSiloContext(__int64 a1, unsigned int a2, unsigned __int64 *a3)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( a1 )
    v3 = *(_QWORD *)(a1 + 1304);
  else
    v3 = qword_140D24980;
  *a3 = 0LL;
  if ( a2 >= 0x20 )
  {
    a2 -= 32;
    if ( a2 >= 0x100 )
      return 3221225485LL;
    v3 = *(_QWORD *)(v3 + 512);
    if ( !v3 )
      return 3221226021LL;
  }
  v4 = *(_QWORD *)(v3 + 16LL * a2 + 8);
  if ( (v4 & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    return 3221226021LL;
  if ( (v4 & 1) == 0 )
    return 3221225659LL;
  *a3 = v4 & 0xFFFFFFFFFFFFFFFEuLL;
  return 0LL;
}
