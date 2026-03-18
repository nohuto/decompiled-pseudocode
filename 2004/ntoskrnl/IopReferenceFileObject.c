/*
 * XREFs of IopReferenceFileObject @ 0x14020AF90
 * Callers:
 *     NtSetInformationFile @ 0x14028FD10 (NtSetInformationFile.c)
 *     IopXxxControlFile @ 0x140674CF0 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x1406780E0 (NtQueryInformationFile.c)
 *     NtReadFile @ 0x14068C230 (NtReadFile.c)
 *     BuildQueryDirectoryIrp @ 0x14068CF20 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x14068EAF0 (NtQueryVolumeInformationFile.c)
 *     NtLockFile @ 0x14069F3F0 (NtLockFile.c)
 *     NtFlushBuffersFileEx @ 0x1406E7FA0 (NtFlushBuffersFileEx.c)
 *     NtQueryEaFile @ 0x1406EA6D0 (NtQueryEaFile.c)
 *     NtReadFileScatter @ 0x1406EBFB0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406EC5C0 (NtWriteFileGather.c)
 *     NtCancelIoFile @ 0x1406EE850 (NtCancelIoFile.c)
 *     NtCancelIoFileEx @ 0x1406EEA00 (NtCancelIoFileEx.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406FCF10 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetEaFile @ 0x14071EAF0 (NtSetEaFile.c)
 *     NtSetVolumeInformationFile @ 0x14075AA70 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14088F32C (IopSetEaOrQuotaInformationFile.c)
 *     IopValidateJunctionTarget @ 0x14088FE34 (IopValidateJunctionTarget.c)
 *     NtQueryQuotaInformationFile @ 0x1408928F0 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     PsIsProcessAppContainer @ 0x1406FCB54 (PsIsProcessAppContainer.c)
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
