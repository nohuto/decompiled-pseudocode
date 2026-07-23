/*
 * XREFs of LdrpMapResourceFile @ 0x14037D69C
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x14033A250 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     RtlImageNtHeader @ 0x14027DAE0 (RtlImageNtHeader.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwCreateSection @ 0x1403F2C70 (ZwCreateSection.c)
 *     ZwCreateFile @ 0x1403F2DD0 (ZwCreateFile.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     MmUnmapViewInSystemSpace @ 0x14063AD00 (MmUnmapViewInSystemSpace.c)
 *     MmMapViewInSystemSpace @ 0x1406E94F0 (MmMapViewInSystemSpace.c)
 */

__int64 __fastcall LdrpMapResourceFile(__int64 a1, UNICODE_STRING *a2, HANDLE *a3, _QWORD *a4, ULONG_PTR *a5)
{
  PVOID v8; // rdi
  PIMAGE_NT_HEADERS v9; // rax
  unsigned __int16 MajorSubsystemVersion; // si
  NTSTATUS v11; // ebx
  PVOID v12; // rsi
  NTSTATUS v13; // eax
  PIMAGE_NT_HEADERS v14; // rax
  int v15; // ecx
  ULONG_PTR *v16; // rcx
  HANDLE SectionHandle; // [rsp+60h] [rbp-41h] BYREF
  PVOID MappedBase; // [rsp+68h] [rbp-39h] BYREF
  PVOID Object; // [rsp+70h] [rbp-31h] BYREF
  ULONG_PTR ViewSize; // [rsp+78h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-21h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+B0h] [rbp+Fh] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp+17h] BYREF
  HANDLE FileHandle; // [rsp+100h] [rbp+5Fh] BYREF

  FileHandle = 0LL;
  SectionHandle = 0LL;
  MappedBase = 0LL;
  MaximumSize.QuadPart = 0LL;
  v8 = 0LL;
  ViewSize = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  IoStatusBlock = 0LL;
  if ( a1 && a2 && a4 )
  {
    v9 = RtlImageNtHeader((PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL));
    if ( v9 )
    {
      MajorSubsystemVersion = v9->OptionalHeader.MajorSubsystemVersion;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = a2;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v11 = ZwCreateFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 5u, 1u, 0, 0LL, 0);
      if ( v11 >= 0 )
      {
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v11 = ZwCreateSection(
                &SectionHandle,
                0xF0005u,
                &ObjectAttributes,
                &MaximumSize,
                MajorSubsystemVersion < 6u ? 8 : 2,
                0x8000000u,
                FileHandle);
        if ( v11 >= 0 )
        {
          Object = 0LL;
          v11 = ObReferenceObjectByHandle(SectionHandle, 0, 0LL, 0, &Object, 0LL);
          ZwClose(SectionHandle);
          v12 = Object;
          if ( v11 >= 0 )
          {
            v13 = MmMapViewInSystemSpace(Object, &MappedBase, &ViewSize);
            v8 = MappedBase;
            v11 = v13;
            if ( v13 >= 0 )
            {
              v14 = RtlImageNtHeader(MappedBase);
              v15 = v11;
              if ( !v14 )
                v15 = -1073741701;
              v11 = v15;
            }
          }
          if ( v12 )
            ObfDereferenceObjectWithTag(v12, 0x746C6644u);
          if ( v11 < 0 )
          {
            if ( v8 )
              MmUnmapViewInSystemSpace(v8);
          }
          else
          {
            v16 = a5;
            *a4 = v8;
            if ( v16 )
              *v16 = ViewSize;
            if ( a3 )
            {
              *a3 = FileHandle;
              return (unsigned int)v11;
            }
          }
        }
      }
    }
    else
    {
      v11 = -1073741701;
    }
    if ( FileHandle )
      ZwClose(FileHandle);
    return (unsigned int)v11;
  }
  return 3221225485LL;
}
