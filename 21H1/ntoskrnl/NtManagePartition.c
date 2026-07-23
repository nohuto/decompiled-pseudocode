/*
 * XREFs of NtManagePartition @ 0x140662140
 * Callers:
 *     <none>
 * Callees:
 *     PsDereferencePartition @ 0x1402D4730 (PsDereferencePartition.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     PsReferencePartitionByHandle @ 0x1406624C4 (PsReferencePartitionByHandle.c)
 *     MmManagePartitionMemoryInformation @ 0x14066257C (MmManagePartitionMemoryInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     MiCreatePagingFile @ 0x14079E69C (MiCreatePagingFile.c)
 *     MmManagePartitionGetMemoryEvents @ 0x1407BBFEC (MmManagePartitionGetMemoryEvents.c)
 *     MmManagePartitionCombineMemory @ 0x1408D6F18 (MmManagePartitionCombineMemory.c)
 *     MmManagePartitionCreateLargePages @ 0x1408D6F84 (MmManagePartitionCreateLargePages.c)
 *     MmManagePartitionInitialAddMemory @ 0x1408D7074 (MmManagePartitionInitialAddMemory.c)
 *     MmManagePartitionMoveMemory @ 0x1408D7190 (MmManagePartitionMoveMemory.c)
 *     MmManagePartitionNodeInformation @ 0x1408D72D8 (MmManagePartitionNodeInformation.c)
 */

NTSTATUS __cdecl NtManagePartition(
        HANDLE TargetHandle,
        HANDLE SourceHandle,
        PARTITION_INFORMATION_CLASS PartitionInformationClass,
        PVOID PartitionInformation,
        ULONG PartitionInformationLength)
{
  __int64 v6; // rbx
  char PreviousMode; // si
  NTSTATUS v10; // edi
  __int64 v11; // r15
  __int64 *v12; // r8
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int PagingFile; // eax
  char v23; // [rsp+30h] [rbp-158h]
  char v24; // [rsp+31h] [rbp-157h]
  _QWORD *v25; // [rsp+38h] [rbp-150h] BYREF
  _QWORD *v26; // [rsp+40h] [rbp-148h] BYREF
  _QWORD Src[30]; // [rsp+50h] [rbp-138h] BYREF

  v6 = (unsigned int)PartitionInformationClass;
  memset(Src, 0, sizeof(Src));
  v24 = 0;
  v23 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v26 = 0LL;
  v25 = 0LL;
  if ( (unsigned int)v6 >= 9 )
  {
    v10 = -1073741821;
    goto LABEL_47;
  }
  v11 = v6;
  v12 = PspPartitionInfoDetails;
  if ( PartitionInformationLength != WORD2(PspPartitionInfoDetails[v6]) )
  {
    v10 = -1073741820;
    goto LABEL_47;
  }
  if ( (PspPartitionInfoDetails[v6] & 0x100000000000000LL) != 0 )
  {
    if ( PreviousMode && PartitionInformationLength )
    {
      if ( ((BYTE6(PspPartitionInfoDetails[v6]) - 1LL) & (unsigned __int64)PartitionInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)PartitionInformation + PartitionInformationLength > 0x7FFFFFFF0000LL
        || (char *)PartitionInformation + PartitionInformationLength < PartitionInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    memmove(Src, PartitionInformation, PartitionInformationLength);
  }
  LOBYTE(v12) = PreviousMode;
  v10 = PsReferencePartitionByHandle(TargetHandle, LODWORD(PspPartitionInfoDetails[v6]), v12, 1884123984LL, &v25);
  if ( v10 >= 0 )
  {
    v23 = 1;
    if ( (PspPartitionInfoDetails[v6] & 0x400000000000000LL) != 0 )
    {
      LOBYTE(v13) = PreviousMode;
      v10 = PsReferencePartitionByHandle(SourceHandle, LODWORD(PspPartitionInfoDetails[v6]), v13, 1884123984LL, &v26);
      if ( v10 < 0 )
        goto LABEL_47;
      v24 = 1;
      if ( v26 == v25 )
        goto LABEL_17;
    }
    else if ( SourceHandle )
    {
      v10 = -1073741584;
      goto LABEL_47;
    }
    if ( !(_DWORD)v6 )
    {
      PagingFile = MmManagePartitionMemoryInformation(v25, Src);
      goto LABEL_41;
    }
    v15 = v6 - 1;
    if ( !v15 )
    {
      LOBYTE(v14) = PreviousMode;
      PagingFile = MmManagePartitionMoveMemory(v25, v26, Src, v14);
      goto LABEL_41;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      LOBYTE(v14) = PreviousMode;
      PagingFile = MiCreatePagingFile(
                     PartitionInformation,
                     (char *)PartitionInformation + 16,
                     (char *)PartitionInformation + 24,
                     v14,
                     Src[4],
                     *v25);
      goto LABEL_41;
    }
    v17 = v16 - 1;
    if ( !v17 )
    {
      LOBYTE(v14) = PreviousMode;
      PagingFile = MmManagePartitionCombineMemory(v25, Src, PartitionInformation, v14);
      goto LABEL_41;
    }
    v18 = v17 - 1;
    if ( !v18 )
    {
      LOBYTE(v14) = PreviousMode;
      PagingFile = MmManagePartitionInitialAddMemory(v25, Src, PartitionInformation, v14);
      goto LABEL_41;
    }
    v19 = v18 - 1;
    if ( !v19 )
    {
      LOBYTE(v13) = PreviousMode;
      PagingFile = MmManagePartitionGetMemoryEvents(v25, Src, v13);
      goto LABEL_41;
    }
    v20 = v19 - 1;
    if ( v20 )
    {
      LOBYTE(v13) = PreviousMode;
      if ( v20 == 1 )
        PagingFile = MmManagePartitionNodeInformation(v25, Src, v13);
      else
        PagingFile = MmManagePartitionCreateLargePages(v25, Src, v13);
LABEL_41:
      v10 = PagingFile;
      if ( PagingFile < 0 )
        goto LABEL_47;
      goto LABEL_42;
    }
    if ( !Src[0] )
    {
      v10 = 0;
LABEL_42:
      if ( (PspPartitionInfoDetails[v11] & 0x200000000000000LL) != 0 )
      {
        if ( PreviousMode )
          ProbeForWrite(PartitionInformation, PartitionInformationLength, BYTE6(PspPartitionInfoDetails[v11]));
        memmove(PartitionInformation, Src, PartitionInformationLength);
      }
      goto LABEL_47;
    }
    if ( (Src[0] & 0xFFFFFFFFFFFFFFFCuLL) != 0 || (ULONG_PTR *)*v25 == &MiSystemPartition )
    {
LABEL_17:
      v10 = -1073741811;
      goto LABEL_47;
    }
    v10 = PreviousMode != 0 ? -1073741727 : -1073741637;
  }
LABEL_47:
  if ( v23 )
    PsDereferencePartition((__int64)v25);
  if ( v24 )
    PsDereferencePartition((__int64)v26);
  return v10;
}
