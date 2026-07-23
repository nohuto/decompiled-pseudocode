/*
 * XREFs of FsRtlCreateSectionForDataScan @ 0x14029A360
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     CcZeroEndOfLastPage @ 0x140361E4C (CcZeroEndOfLastPage.c)
 *     ObInsertObject @ 0x1406AB4A0 (ObInsertObject.c)
 *     MmGetFileObjectForSection @ 0x1406AB4D0 (MmGetFileObjectForSection.c)
 *     MmCreateSectionEx @ 0x1406AB9E4 (MmCreateSectionEx.c)
 *     FsRtlGetFileSize @ 0x1406ABB40 (FsRtlGetFileSize.c)
 *     FsRtlAcquireToCreateMappedSection @ 0x14071ED54 (FsRtlAcquireToCreateMappedSection.c)
 *     FsRtlReleaseFile @ 0x14071EE50 (FsRtlReleaseFile.c)
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
  NTSTATUS MappedSection; // ebx
  int inserted; // edi
  ULONG LowPart; // ebx
  int v17; // r13d
  int Section; // eax
  struct _FILE_OBJECT *FileObjectForSection; // rax
  struct _FILE_OBJECT *v20; // rbx
  PVOID v21; // rbx
  NTSTATUS result; // eax
  ULONGLONG ullMultiplicand; // [rsp+48h] [rbp-28h]
  int v24; // [rsp+50h] [rbp-20h] BYREF
  int v25; // [rsp+54h] [rbp-1Ch] BYREF
  PVOID Object; // [rsp+58h] [rbp-18h] BYREF
  LARGE_INTEGER FileSize; // [rsp+60h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-8h] BYREF

  v12 = SectionObject;
  FileSize.QuadPart = 0LL;
  Object = 0LL;
  Handle = 0LL;
  v24 = 0;
  v25 = 0;
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
                    (unsigned int)&v24,
                    (__int64)&v25);
  if ( MappedSection < 0 )
  {
    KeLeaveCriticalRegionThread(KeGetCurrentThread());
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
        v17 = v24;
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
                      v17,
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
          v20 = FileObjectForSection;
          if ( FileObjectForSection )
          {
            CcZeroEndOfLastPage(FileObjectForSection);
            ObfDereferenceObjectWithTag(v20, 0x746C6644u);
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
    KeLeaveCriticalRegionThread(KeGetCurrentThread());
    KeGetCurrentThread()[1].TrapFrame = 0LL;
    if ( inserted >= 0 )
    {
      v21 = Object;
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
      inserted = ObInsertObject(v21, 0LL, DesiredAccess, 0, 0LL, &Handle);
      if ( inserted < 0 )
      {
        ObfDereferenceObjectWithTag(v21, 0x746C6644u);
      }
      else
      {
        *SectionHandle = Handle;
        *v12 = v21;
        if ( SectionFileSize )
          *SectionFileSize = FileSize;
      }
    }
    return inserted;
  }
  return result;
}
