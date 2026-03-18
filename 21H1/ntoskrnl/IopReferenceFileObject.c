/*
 * XREFs of IopReferenceFileObject @ 0x140263EB0
 * Callers:
 *     NtSetInformationFile @ 0x140253490 (NtSetInformationFile.c)
 *     BuildQueryDirectoryIrp @ 0x1405E3A50 (BuildQueryDirectoryIrp.c)
 *     NtReadFile @ 0x1405E54D0 (NtReadFile.c)
 *     NtQueryVolumeInformationFile @ 0x1405F5260 (NtQueryVolumeInformationFile.c)
 *     IopXxxControlFile @ 0x1405FCC10 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140600000 (NtQueryInformationFile.c)
 *     NtLockFile @ 0x140699320 (NtLockFile.c)
 *     NtFlushBuffersFileEx @ 0x1406C76A0 (NtFlushBuffersFileEx.c)
 *     NtQueryEaFile @ 0x1406C9520 (NtQueryEaFile.c)
 *     NtReadFileScatter @ 0x1406CACB0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406CB2C0 (NtWriteFileGather.c)
 *     NtCancelIoFile @ 0x1406CD550 (NtCancelIoFile.c)
 *     NtCancelIoFileEx @ 0x1406CD700 (NtCancelIoFileEx.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406D9E90 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetEaFile @ 0x14071CE70 (NtSetEaFile.c)
 *     NtSetVolumeInformationFile @ 0x140758BF0 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14088E00C (IopSetEaOrQuotaInformationFile.c)
 *     IopValidateJunctionTarget @ 0x14088EB14 (IopValidateJunctionTarget.c)
 *     NtQueryQuotaInformationFile @ 0x1408915D0 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     PsIsProcessAppContainer @ 0x1406D8FA4 (PsIsProcessAppContainer.c)
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
