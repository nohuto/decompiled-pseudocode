/*
 * XREFs of SeQueryUserSidToken @ 0x140656B0C
 * Callers:
 *     AlpcpCheckConnectionSecurity @ 0x1405E5AF4 (AlpcpCheckConnectionSecurity.c)
 *     ExpGetProcessInformation @ 0x140611F60 (ExpGetProcessInformation.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x140630098 (PopEtGetProcessSidAndPackageIdentity.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140651684 (EtwQueryProcessTelemetryInfo.c)
 *     ExpWnfQueryCurrentUserSID @ 0x140655650 (ExpWnfQueryCurrentUserSID.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140656940 (EtwpGetSidExtendedHeaderItem.c)
 *     AlpcpQuerySidToken @ 0x140656C64 (AlpcpQuerySidToken.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1406A6FD8 (AlpcpPortQueryConnectedSidInfo.c)
 *     PspAssignProcessQuotaBlock @ 0x1406CF394 (PspAssignProcessQuotaBlock.c)
 *     PiDqOpenUserObjectRegKey @ 0x1406D39C0 (PiDqOpenUserObjectRegKey.c)
 *     CmpLogHiveFileInaccessible @ 0x1406FB038 (CmpLogHiveFileInaccessible.c)
 *     CmpGetVirtualizationID @ 0x1406FC260 (CmpGetVirtualizationID.c)
 *     PiDqSameUserHive @ 0x1408A75F8 (PiDqSameUserHive.c)
 *     MiFindProcessImageHotPatchRecord @ 0x1408CC530 (MiFindProcessImageHotPatchRecord.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140222030 (ExAcquireResourceSharedLite.c)
 *     RtlCopySid @ 0x140656BB0 (RtlCopySid.c)
 */

__int64 __fastcall SeQueryUserSidToken(__int64 a1, void *a2, ULONG a3, ULONG *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // ebp
  unsigned __int8 *v10; // r8
  ULONG v11; // edi

  CurrentThread = KeGetCurrentThread();
  v9 = -1073741789;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v10 = **(unsigned __int8 ***)(a1 + 152);
  v11 = 4 * v10[1] + 8;
  if ( a3 >= v11 )
  {
    RtlCopySid(v11, a2, v10);
    v9 = 0;
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  if ( a4 )
    *a4 = v11;
  return v9;
}
