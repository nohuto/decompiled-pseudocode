/*
 * XREFs of PsGetPermanentSiloContext @ 0x1402056B0
 * Callers:
 *     VrpHandleIoctlLoadDifferencingHive @ 0x1405C9E2C (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1405CA0DC (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1405CA3EC (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VRegEnabledInJob @ 0x1405CC700 (VRegEnabledInJob.c)
 *     CmGetRootKeyObjectForSilo @ 0x1405CD50C (CmGetRootKeyObjectForSilo.c)
 *     CmpGetRegistryNamespaceRootForSilo @ 0x1405EA880 (CmpGetRegistryNamespaceRootForSilo.c)
 *     ObpLookupObjectName @ 0x1405F1FF0 (ObpLookupObjectName.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x14070FDD8 (CmpGetOrCreateContextForSiloNoRef.c)
 *     CmLockKeyForWrite @ 0x1407B0CB0 (CmLockKeyForWrite.c)
 *     ObInitServerSilo @ 0x1407B65F0 (ObInitServerSilo.c)
 *     CmCleanupServerSiloState @ 0x14086FFD8 (CmCleanupServerSiloState.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14087F7AC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlModifyFlags @ 0x14087FE5C (VrpHandleIoctlModifyFlags.c)
 *     ObGetSiloRootDirectoryPath @ 0x14097D31C (ObGetSiloRootDirectoryPath.c)
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
    v3 = qword_140D24988;
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
