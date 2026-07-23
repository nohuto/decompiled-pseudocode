/*
 * XREFs of NtGetNlsSectionPtr @ 0x1406D1CC0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwOpenFile @ 0x1403F87D0 (ZwOpenFile.c)
 *     ZwOpenSection @ 0x1403F8850 (ZwOpenSection.c)
 *     ZwCreateSection @ 0x1403F8AB0 (ZwCreateSection.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     MmMapViewOfSection @ 0x1406ADAC0 (MmMapViewOfSection.c)
 *     RtlpInitNlsSectionName @ 0x1406D2040 (RtlpInitNlsSectionName.c)
 *     RtlpInitNlsFileName @ 0x1406D20A8 (RtlpInitNlsFileName.c)
 *     MmMapViewInSystemSpace @ 0x1406DF780 (MmMapViewInSystemSpace.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtGetNlsSectionPtr(
        ULONG SectionType,
        ULONG SectionData,
        PVOID ContextData,
        PVOID *SectionPointer,
        PULONG SectionSize)
{
  char PreviousMode; // r14
  __int64 v9; // rcx
  __int64 v10; // rcx
  NTSTATUS result; // eax
  int v12; // ebx
  struct _DMA_ADAPTER *v13; // rdi
  int v14; // eax
  HANDLE SectionHandle; // [rsp+58h] [rbp-200h] BYREF
  HANDLE FileHandle; // [rsp+60h] [rbp-1F8h] BYREF
  PVOID Section; // [rsp+68h] [rbp-1F0h] BYREF
  PVOID MappedBase; // [rsp+70h] [rbp-1E8h] BYREF
  ULONG_PTR ViewSize; // [rsp+78h] [rbp-1E0h] BYREF
  __int64 v20; // [rsp+80h] [rbp-1D8h] BYREF
  __int128 v21; // [rsp+90h] [rbp-1C8h] BYREF
  __int128 v22; // [rsp+A0h] [rbp-1B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-1A8h] BYREF
  OBJECT_ATTRIBUTES v24; // [rsp+E0h] [rbp-178h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+110h] [rbp-148h] BYREF
  _BYTE v26[128]; // [rsp+120h] [rbp-138h] BYREF
  _BYTE v27[128]; // [rsp+1A0h] [rbp-B8h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v21 = 0LL;
  FileHandle = 0LL;
  SectionHandle = 0LL;
  IoStatusBlock = 0LL;
  MappedBase = 0LL;
  ViewSize = 0LL;
  if ( !SectionPointer )
    return -1073741582;
  if ( !SectionSize )
    return -1073741581;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v9 = (__int64)SectionPointer;
    if ( (unsigned __int64)SectionPointer >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v9 = *(_QWORD *)v9;
    v10 = (__int64)SectionSize;
    if ( (unsigned __int64)SectionSize >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v10 = *(_QWORD *)v10;
    if ( ContextData )
    {
      if ( ((unsigned __int8)ContextData & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)ContextData + 4 > 0x7FFFFFFF0000LL || (char *)ContextData + 4 < ContextData )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  result = RtlpInitNlsSectionName(SectionType, SectionData, v26);
  if ( result >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 720;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v21;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( SectionType - 11 > 1 )
    {
      v12 = -1073741823;
    }
    else
    {
      v12 = ZwOpenSection(&SectionHandle, 4u, &ObjectAttributes);
      if ( v12 < 0 )
      {
        *(&v24.Length + 1) = 0;
        *(&v24.Attributes + 1) = 0;
        v22 = 0LL;
        result = RtlpInitNlsFileName(SectionType, SectionData, v27);
        if ( result < 0 )
          return result;
        v24.Length = 48;
        v24.RootDirectory = 0LL;
        v24.Attributes = 576;
        v24.ObjectName = (PUNICODE_STRING)&v22;
        *(_OWORD *)&v24.SecurityDescriptor = 0LL;
        result = ZwOpenFile(&FileHandle, 0x100000u, &v24, &IoStatusBlock, 1u, 0);
        if ( result < 0 )
          return result;
        v12 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
        ZwClose(FileHandle);
      }
    }
    if ( v12 >= 0 )
    {
      Section = 0LL;
      v12 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Section, 0LL);
      ZwClose(SectionHandle);
      if ( v12 >= 0 )
      {
        v20 = 0LL;
        v13 = (struct _DMA_ADAPTER *)Section;
        if ( PreviousMode )
          v14 = MmMapViewOfSection(
                  (__int64)Section,
                  (__int64)KeGetCurrentThread()->ApcState.Process,
                  (__int64 *)&MappedBase,
                  0LL,
                  0LL,
                  &v20,
                  (__int64 *)&ViewSize,
                  1,
                  0x400000,
                  2);
        else
          v14 = MmMapViewInSystemSpace(Section, &MappedBase, &ViewSize);
        v12 = v14;
        HalPutDmaAdapter(v13);
        if ( v12 >= 0 )
        {
          *SectionPointer = MappedBase;
          *(_QWORD *)SectionSize = ViewSize;
        }
      }
    }
    return v12;
  }
  return result;
}
