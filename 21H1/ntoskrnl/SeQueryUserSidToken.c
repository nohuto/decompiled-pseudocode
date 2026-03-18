/*
 * XREFs of SeQueryUserSidToken @ 0x14066B11C
 * Callers:
 *     ExpGetProcessInformation @ 0x140629910 (ExpGetProcessInformation.c)
 *     AlpcpCheckConnectionSecurity @ 0x14064B658 (AlpcpCheckConnectionSecurity.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140666164 (EtwQueryProcessTelemetryInfo.c)
 *     ExpWnfQueryCurrentUserSID @ 0x140669C64 (ExpWnfQueryCurrentUserSID.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14066AF50 (EtwpGetSidExtendedHeaderItem.c)
 *     AlpcpQuerySidToken @ 0x14066B274 (AlpcpQuerySidToken.c)
 *     PiDqOpenUserObjectRegKey @ 0x140680718 (PiDqOpenUserObjectRegKey.c)
 *     CmpLogHiveFileInaccessible @ 0x14068EBC4 (CmpLogHiveFileInaccessible.c)
 *     CmpGetVirtualizationID @ 0x14068F59C (CmpGetVirtualizationID.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1406B7268 (AlpcpPortQueryConnectedSidInfo.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1406C7324 (PopEtGetProcessSidAndPackageIdentity.c)
 *     PspAssignProcessQuotaBlock @ 0x1406D9004 (PspAssignProcessQuotaBlock.c)
 *     PiDqSameUserHive @ 0x1408A07A8 (PiDqSameUserHive.c)
 *     MiFindProcessImageHotPatchRecord @ 0x1408C53A0 (MiFindProcessImageHotPatchRecord.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     RtlCopySid @ 0x14066B1C0 (RtlCopySid.c)
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
