/*
 * XREFs of PsGetPermanentSiloContext @ 0x1402F1680
 * Callers:
 *     CmGetRootKeyObjectForSilo @ 0x1405CFBAC (CmGetRootKeyObjectForSilo.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x1405CFFEC (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1405D029C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1405D05AC (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VRegEnabledInJob @ 0x1405D2D60 (VRegEnabledInJob.c)
 *     ObpLookupObjectName @ 0x140614C20 (ObpLookupObjectName.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x1406A0A64 (CmpGetOrCreateContextForSiloNoRef.c)
 *     CmpGetRegistryNamespaceRootForSilo @ 0x1406A0B20 (CmpGetRegistryNamespaceRootForSilo.c)
 *     CmLockKeyForWrite @ 0x1407BEBF0 (CmLockKeyForWrite.c)
 *     ObInitServerSilo @ 0x1407C4E20 (ObInitServerSilo.c)
 *     CmCleanupServerSiloState @ 0x140875B28 (CmCleanupServerSiloState.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1408852FC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlModifyFlags @ 0x1408859AC (VrpHandleIoctlModifyFlags.c)
 *     ObGetSiloRootDirectoryPath @ 0x1409830EC (ObGetSiloRootDirectoryPath.c)
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
    v3 = qword_140D24990;
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
