/*
 * XREFs of KsepSdbMapToMemory @ 0x140755C14
 * Callers:
 *     KseShimDatabaseOpen @ 0x14075B2A0 (KseShimDatabaseOpen.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     KsepLogError @ 0x140371AC4 (KsepLogError.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenFile @ 0x1403FABE0 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x1403FAEC0 (ZwCreateSection.c)
 *     KsepDebugPrint @ 0x140527128 (KsepDebugPrint.c)
 *     MmUnmapViewInSystemSpace @ 0x14060ACA0 (MmUnmapViewInSystemSpace.c)
 *     MmMapViewInSystemSpace @ 0x14061E6F0 (MmMapViewInSystemSpace.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     SdbInitDatabaseInMemory @ 0x1407562D0 (SdbInitDatabaseInMemory.c)
 *     SdbGetDatabaseEdition @ 0x140756670 (SdbGetDatabaseEdition.c)
 */

__int64 __fastcall KsepSdbMapToMemory(PCWSTR SourceString, __int64 a2)
{
  struct _DMA_ADAPTER *v3; // rsi
  __int64 inited; // r14
  NTSTATUS v5; // ebx
  __int64 v6; // rax
  NTSTATUS v8; // eax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  PVOID MappedBase; // [rsp+40h] [rbp-39h] BYREF
  PVOID Object; // [rsp+48h] [rbp-31h] BYREF
  ULONG_PTR ViewSize; // [rsp+50h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-1h] BYREF
  HANDLE FileHandle; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE SectionHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  FileHandle = 0LL;
  SectionHandle = 0LL;
  MappedBase = 0LL;
  DestinationString = 0LL;
  v3 = 0LL;
  inited = 0LL;
  IoStatusBlock = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 5u, 0);
  if ( v5 >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
    if ( v5 < 0 )
    {
      v9 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      KsepHistoryErrors[2 * v9 + 1] = v5;
      KsepHistoryErrors[2 * v9] = 590528;
      if ( (KsepDebugFlag & 2) != 0 )
        KsepDebugPrint(0LL, "KSE: ZwCreateSection Failed!\n");
      KsepLogError(0, "KSE: ZwCreateSection Failed!\n");
    }
    else
    {
      Object = 0LL;
      v8 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
      v3 = (struct _DMA_ADAPTER *)Object;
      v5 = v8;
      if ( v8 < 0 )
      {
        v10 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
        KsepHistoryErrors[2 * v10 + 1] = v5;
        KsepHistoryErrors[2 * v10] = 590542;
        if ( (KsepDebugFlag & 2) != 0 )
          KsepDebugPrint(0LL, "KSE: ObRefByHandle(section) failed!\n");
        KsepLogError(0, "KSE: ObRefByHandle(section) failed!\n");
      }
      else
      {
        ViewSize = 0LL;
        v5 = MmMapViewInSystemSpace(Object, &MappedBase, &ViewSize);
        if ( v5 < 0 )
        {
          v11 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          KsepHistoryErrors[2 * v11 + 1] = v5;
          KsepHistoryErrors[2 * v11] = 590555;
          if ( (KsepDebugFlag & 2) != 0 )
            KsepDebugPrint(0LL, "KSE: Unable to map view of section!\n");
          KsepLogError(0, "KSE: Unable to map view of section!\n");
        }
        else
        {
          inited = SdbInitDatabaseInMemory(MappedBase, (unsigned int)ViewSize);
          if ( !inited )
          {
            v5 = -1073741823;
            v12 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
            KsepHistoryErrors[2 * v12 + 1] = -1073741823;
            KsepHistoryErrors[2 * v12] = 590564;
            if ( (KsepDebugFlag & 2) != 0 )
              KsepDebugPrint(0LL, "KSE: SdbInitDatabaseInMemory Failed!\n");
            KsepLogError(0, "KSE: SdbInitDatabaseInMemory Failed!\n");
            goto LABEL_6;
          }
          v5 = 0;
        }
      }
    }
  }
  else
  {
    v6 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v6 + 1] = v5;
    KsepHistoryErrors[2 * v6] = 590506;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: ZwOpenFile failed opening DB file!\n");
    KsepLogError(0, "KSE: ZwOpenFile failed opening DB file!\n");
  }
  if ( v5 >= 0 )
  {
    *(_QWORD *)(a2 + 16) = FileHandle;
    *(_QWORD *)(a2 + 24) = SectionHandle;
    *(_QWORD *)(a2 + 8) = MappedBase;
    *(_QWORD *)(a2 + 32) = v3;
    *(_QWORD *)a2 = inited;
    *(_DWORD *)(a2 + 48) = SdbGetDatabaseEdition(*(_QWORD *)(inited + 8));
    return (unsigned int)v5;
  }
LABEL_6:
  if ( MappedBase )
    MmUnmapViewInSystemSpace(MappedBase);
  if ( v3 )
    HalPutDmaAdapter(v3);
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v5;
}
