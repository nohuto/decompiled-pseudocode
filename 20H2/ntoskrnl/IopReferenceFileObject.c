/*
 * XREFs of IopReferenceFileObject @ 0x14021EA80
 * Callers:
 *     NtSetInformationFile @ 0x14020FE90 (NtSetInformationFile.c)
 *     NtCopyFileChunk @ 0x1405CBD40 (NtCopyFileChunk.c)
 *     NtReadFile @ 0x1405F9240 (NtReadFile.c)
 *     BuildQueryDirectoryIrp @ 0x1405FA070 (BuildQueryDirectoryIrp.c)
 *     NtQueryInformationFile @ 0x1405FB1C0 (NtQueryInformationFile.c)
 *     NtQueryVolumeInformationFile @ 0x1406077E0 (NtQueryVolumeInformationFile.c)
 *     IopXxxControlFile @ 0x14060FB00 (IopXxxControlFile.c)
 *     NtLockFile @ 0x1406B3730 (NtLockFile.c)
 *     NtFlushBuffersFileEx @ 0x1406BCBF0 (NtFlushBuffersFileEx.c)
 *     NtQueryEaFile @ 0x1406BE550 (NtQueryEaFile.c)
 *     NtReadFileScatter @ 0x1406C05A0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406C0D40 (NtWriteFileGather.c)
 *     NtCancelIoFile @ 0x1406C2770 (NtCancelIoFile.c)
 *     NtCancelIoFileEx @ 0x1406C2920 (NtCancelIoFileEx.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406CFAE0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetEaFile @ 0x14072C980 (NtSetEaFile.c)
 *     NtSetVolumeInformationFile @ 0x140769230 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140894DEC (IopSetEaOrQuotaInformationFile.c)
 *     IopValidateJunctionTarget @ 0x140895924 (IopValidateJunctionTarget.c)
 *     NtQueryQuotaInformationFile @ 0x140898570 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     PsIsProcessAppContainer @ 0x1406CF334 (PsIsProcessAppContainer.c)
 */

__int64 __fastcall IopReferenceFileObject(
        void *a1,
        ACCESS_MASK a2,
        KPROCESSOR_MODE a3,
        PVOID *a4,
        POBJECT_HANDLE_INFORMATION HandleInformation)
{
  NTSTATUS v6; // ebx
  _QWORD *v7; // rax
  _DWORD *v8; // rax
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  Object = 0LL;
  v6 = ObReferenceObjectByHandle(a1, a2, (POBJECT_TYPE)IoFileObjectType, a3, &Object, HandleInformation);
  v7 = Object;
  *a4 = Object;
  if ( v6 < 0 )
    return (unsigned int)v6;
  v8 = (_DWORD *)v7[26];
  if ( !v8 || (*v8 & 4) == 0 || !(unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
    return (unsigned int)v6;
  ObfDereferenceObjectWithTag(*a4, 0x746C6644u);
  return 3221227792LL;
}
