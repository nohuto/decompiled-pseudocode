/*
 * XREFs of PsIsProcessAppContainer @ 0x1406CF334
 * Callers:
 *     IopFileObjectRevoked @ 0x140209E48 (IopFileObjectRevoked.c)
 *     IopReferenceFileObject @ 0x14021EA80 (IopReferenceFileObject.c)
 *     IoRevokeHandlesForProcess @ 0x140505650 (IoRevokeHandlesForProcess.c)
 *     IopSynchronousServiceTail @ 0x1406107D0 (IopSynchronousServiceTail.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1406CF14C (ExpGetSystemFirmwareTableInformation.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x1406E0510 (NtQuerySystemEnvironmentValueEx.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x14076A174 (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 *     NtSetSystemEnvironmentValueEx @ 0x140957E90 (NtSetSystemEnvironmentValueEx.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     SeQueryInformationToken @ 0x14060D9F0 (SeQueryInformationToken.c)
 *     PsReferencePrimaryToken @ 0x14067EEB0 (PsReferencePrimaryToken.c)
 */

bool __fastcall PsIsProcessAppContainer(struct _KPROCESS *a1)
{
  char v1; // si
  struct _DMA_ADAPTER *v2; // rdi
  NTSTATUS v3; // ebx
  PVOID TokenInformation; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  LODWORD(TokenInformation) = 0;
  v2 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(a1);
  v3 = SeQueryInformationToken(v2, TokenIsAppContainer, &TokenInformation);
  HalPutDmaAdapter(v2);
  if ( v3 >= 0 )
    return (_DWORD)TokenInformation != 0;
  return v1;
}
