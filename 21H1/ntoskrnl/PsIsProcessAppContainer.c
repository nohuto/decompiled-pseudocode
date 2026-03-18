/*
 * XREFs of PsIsProcessAppContainer @ 0x1406D8FA4
 * Callers:
 *     IopFileObjectRevoked @ 0x140205670 (IopFileObjectRevoked.c)
 *     IopReferenceFileObject @ 0x140263EB0 (IopReferenceFileObject.c)
 *     IoRevokeHandlesForProcess @ 0x140501730 (IoRevokeHandlesForProcess.c)
 *     IopSynchronousServiceTail @ 0x1405FD780 (IopSynchronousServiceTail.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1406D8DBC (ExpGetSystemFirmwareTableInformation.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x1406EA3F0 (NtQuerySystemEnvironmentValueEx.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x140759A84 (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 *     NtSetSystemEnvironmentValueEx @ 0x140950D30 (NtSetSystemEnvironmentValueEx.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     PsReferencePrimaryToken @ 0x1405E13A0 (PsReferencePrimaryToken.c)
 *     SeQueryInformationToken @ 0x1405E9F20 (SeQueryInformationToken.c)
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
