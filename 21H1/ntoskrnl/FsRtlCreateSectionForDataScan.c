/*
 * XREFs of FsRtlCreateSectionForDataScan @ 0x1402BFEB0
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     CcZeroEndOfLastPage @ 0x1402818D4 (CcZeroEndOfLastPage.c)
 *     FsRtlAcquireToCreateMappedSection @ 0x140630C80 (FsRtlAcquireToCreateMappedSection.c)
 *     FsRtlReleaseFile @ 0x140630D80 (FsRtlReleaseFile.c)
 *     ObInsertObject @ 0x140642820 (ObInsertObject.c)
 *     MmGetFileObjectForSection @ 0x140642850 (MmGetFileObjectForSection.c)
 *     MmCreateSectionEx @ 0x140642EB4 (MmCreateSectionEx.c)
 *     FsRtlGetFileSize @ 0x140643C90 (FsRtlGetFileSize.c)
 */

NTSTATUS __stdcall FsRtlCreateSectionForDataScan(
        PHANDLE SectionHandle,
        PVOID *SectionObject,
        PLARGE_INTEGER SectionFileSize,
        PFILE_OBJECT FileObject,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PLARGE_INTEGER MaximumSize,
        ULONG SectionPageProtection,
        ULONG AllocationAttributes,
        ULONG Flags)
{
  PVOID *v12; // r13
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rdx
  NTSTATUS MappedSection; // ebx
  __int64 v16; // r8
  __int64 v17; // r9
  int inserted; // edi
  ULONG LowPart; // ebx
  int v20; // r13d
  int Section; // eax
  struct _FILE_OBJECT *FileObjectForSection; // rax
  struct _FILE_OBJECT *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  PVOID v27; // rbx
  NTSTATUS result; // eax
  ULONGLONG ullMultiplicand; // [rsp+48h] [rbp-28h]
  int v30; // [rsp+50h] [rbp-20h] BYREF
  int v31; // [rsp+54h] [rbp-1Ch] BYREF
  PVOID Object; // [rsp+58h] [rbp-18h] BYREF
  LARGE_INTEGER FileSize; // [rsp+60h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-8h] BYREF

  v12 = SectionObject;
  FileSize.QuadPart = 0LL;
  Object = 0LL;
  Handle = 0LL;
  v30 = 0;
  v31 = 0;
  if ( (SectionPageProtection & 0xFFFFFFF9) != 0 || !SectionPageProtection )
    return -1073741578;
  if ( (AllocationAttributes & 0xFF7FFFFF) != 0x8000000 )
    return -1073741577;
  if ( !FileObject->SectionObjectPointer )
    return -1073741792;
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  MappedSection = FsRtlAcquireToCreateMappedSection(
                    (_DWORD)FileObject,
                    SectionPageProtection,
                    1,
                    (unsigned int)&v30,
                    (__int64)&v31);
  if ( MappedSection < 0 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v14, v16, v17);
    result = MappedSection;
    KeGetCurrentThread()[1].TrapFrame = 0LL;
  }
  else
  {
    inserted = FsRtlGetFileSize(FileObject, &FileSize);
    if ( inserted >= 0 )
    {
      LowPart = FileSize.LowPart;
      if ( FileSize.QuadPart )
      {
        v20 = v30;
        while ( 1 )
        {
          LODWORD(ullMultiplicand) = 0;
          Section = MmCreateSectionEx(
                      (int)&Object,
                      (int)ObjectAttributes,
                      LowPart,
                      SectionPageProtection,
                      AllocationAttributes,
                      0LL,
                      (__int64)FileObject,
                      v20,
                      0LL,
                      ullMultiplicand);
          inserted = Section;
          if ( Section != -1073741740 )
            break;
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&FsRtlHalfSecond);
        }
        if ( Section >= 0 )
        {
          FileObjectForSection = (struct _FILE_OBJECT *)MmGetFileObjectForSection(Object);
          v23 = FileObjectForSection;
          if ( FileObjectForSection )
          {
            CcZeroEndOfLastPage(FileObjectForSection);
            ObfDereferenceObjectWithTag(v23, 0x746C6644u);
          }
        }
        v12 = SectionObject;
      }
      else
      {
        inserted = -1073741807;
      }
    }
    FsRtlReleaseFile(FileObject);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v24, v25, v26);
    KeGetCurrentThread()[1].TrapFrame = 0LL;
    if ( inserted >= 0 )
    {
      v27 = Object;
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
      inserted = ObInsertObject(v27, 0LL, DesiredAccess, 0, 0LL, &Handle);
      if ( inserted < 0 )
      {
        ObfDereferenceObjectWithTag(v27, 0x746C6644u);
      }
      else
      {
        *SectionHandle = Handle;
        *v12 = v27;
        if ( SectionFileSize )
          *SectionFileSize = FileSize;
      }
    }
    return inserted;
  }
  return result;
}
