/*
 * XREFs of IopReferenceFileObject @ 0x1402AC790
 * Callers:
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     NtCopyFileChunk @ 0x1406588A0 (NtCopyFileChunk.c)
 *     IopValidateJunctionTarget @ 0x14066119C (IopValidateJunctionTarget.c)
 *     NtCancelIoFile @ 0x1406A4A70 (NtCancelIoFile.c)
 *     NtQueryEaFile @ 0x1406B6D70 (NtQueryEaFile.c)
 *     NtFlushBuffersFileEx @ 0x1406BF5F0 (NtFlushBuffersFileEx.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406C66B0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtReadFileScatter @ 0x1406C6AF0 (NtReadFileScatter.c)
 *     NtCancelIoFileEx @ 0x1406CF5D0 (NtCancelIoFileEx.c)
 *     NtWriteFileGather @ 0x1406E3F70 (NtWriteFileGather.c)
 *     NtLockFile @ 0x14071D220 (NtLockFile.c)
 *     IopXxxControlFile @ 0x1407308F0 (IopXxxControlFile.c)
 *     BuildQueryDirectoryIrp @ 0x1407563A0 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x1407AF670 (NtQueryVolumeInformationFile.c)
 *     NtQueryInformationFile @ 0x1407AFEF0 (NtQueryInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x1407FB3A0 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140935320 (IopSetEaOrQuotaInformationFile.c)
 *     IopIoRingReferenceFileObject @ 0x140938A3C (IopIoRingReferenceFileObject.c)
 *     NtSetEaFile @ 0x140939360 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140939960 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IopFileObjectRevoked @ 0x1402AC840 (IopFileObjectRevoked.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall IopReferenceFileObject(
        void *a1,
        ACCESS_MASK a2,
        KPROCESSOR_MODE a3,
        PVOID *a4,
        POBJECT_HANDLE_INFORMATION HandleInformation)
{
  NTSTATUS result; // eax
  NTSTATUS v7; // ebx
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, a2, (POBJECT_TYPE)IoFileObjectType, a3, &Object, HandleInformation);
  v7 = result;
  *a4 = Object;
  if ( result >= 0 )
  {
    if ( (unsigned __int8)IopFileObjectRevoked() )
    {
      ObfDereferenceObject(*a4);
      return -1073739504;
    }
    else
    {
      return v7;
    }
  }
  return result;
}
