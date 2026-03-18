/*
 * XREFs of SeQueryUserSidToken @ 0x1406259FC
 * Callers:
 *     ExpGetProcessInformation @ 0x1405F43A0 (ExpGetProcessInformation.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140620A44 (EtwQueryProcessTelemetryInfo.c)
 *     ExpWnfQueryCurrentUserSID @ 0x140624544 (ExpWnfQueryCurrentUserSID.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140625830 (EtwpGetSidExtendedHeaderItem.c)
 *     AlpcpQuerySidToken @ 0x140625B54 (AlpcpQuerySidToken.c)
 *     AlpcpCheckConnectionSecurity @ 0x14062DAA8 (AlpcpCheckConnectionSecurity.c)
 *     CmpLogHiveFileInaccessible @ 0x14063CA24 (CmpLogHiveFileInaccessible.c)
 *     CmpGetVirtualizationID @ 0x1406416D8 (CmpGetVirtualizationID.c)
 *     PspAssignProcessQuotaBlock @ 0x140644EB8 (PspAssignProcessQuotaBlock.c)
 *     PiDqOpenUserObjectRegKey @ 0x140645608 (PiDqOpenUserObjectRegKey.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1406D55F8 (AlpcpPortQueryConnectedSidInfo.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1406E7C1C (PopEtGetProcessSidAndPackageIdentity.c)
 *     PiDqSameUserHive @ 0x1408A1AC8 (PiDqSameUserHive.c)
 *     MiFindProcessImageHotPatchRecord @ 0x1408C66F0 (MiFindProcessImageHotPatchRecord.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
 *     RtlCopySid @ 0x140625AA0 (RtlCopySid.c)
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
