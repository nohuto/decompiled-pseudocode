/*
 * XREFs of _LdrpMapResourceFile@24 @ 0x4B2B961A
 * Callers:
 *     _LdrMapAndVerifyResourceFile@36 @ 0x4B2B91A5 (_LdrMapAndVerifyResourceFile@36.c)
 * Callees:
 *     _LdrpNtOpenFileUnredirected@12 @ 0x4B2B925A (_LdrpNtOpenFileUnredirected@12.c)
 *     _RtlImageNtHeader@4 @ 0x4B2BB8E0 (_RtlImageNtHeader@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpDosPathNameToRelativeNtPathName_U@20 @ 0x4B2D1C18 (_RtlpDosPathNameToRelativeNtPathName_U@20.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _NtCreateSection@28 @ 0x4B2F2E20 (_NtCreateSection@28.c)
 */

int __fastcall LdrpMapResourceFile(int a1, int *a2, char a3, HANDLE *a4, PVOID *a5, _DWORD *a6)
{
  void *v7; // edi
  PIMAGE_NT_HEADERS v8; // eax
  signed int v9; // ebx
  NTSTATUS v10; // esi
  void *v11; // eax
  HANDLE *v12; // edi
  SIZE_T v14; // [esp-14h] [ebp-74h]
  ULONG v15; // [esp+0h] [ebp-60h]
  ULONG v16; // [esp+4h] [ebp-5Ch]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+10h] [ebp-50h] BYREF
  _DWORD v18[3]; // [esp+28h] [ebp-38h] BYREF
  PVOID v19; // [esp+34h] [ebp-2Ch]
  SIZE_T CommitSize; // [esp+38h] [ebp-28h] BYREF
  int v21; // [esp+40h] [ebp-20h] BYREF
  void *v22; // [esp+44h] [ebp-1Ch]
  char v23[4]; // [esp+48h] [ebp-18h]
  int v24; // [esp+4Ch] [ebp-14h] BYREF
  PVOID BaseAddress; // [esp+50h] [ebp-10h]
  PVOID BaseOfImage; // [esp+54h] [ebp-Ch] BYREF
  HANDLE SectionHandle; // [esp+58h] [ebp-8h] BYREF
  HANDLE FileHandle; // [esp+5Ch] [ebp-4h] BYREF

  v7 = 0;
  *(_DWORD *)v23 = a1;
  FileHandle = 0;
  SectionHandle = 0;
  BaseOfImage = 0;
  v24 = 0;
  if ( a1 && a2 && a5 )
  {
    v8 = RtlImageNtHeader((PVOID)(a1 & 0xFFFFFFFC));
    if ( !v8 )
    {
      v10 = -1073741701;
      goto LABEL_27;
    }
    v9 = v8->OptionalHeader.MajorSubsystemVersion < 6u ? 8 : 2;
    if ( a3 )
    {
      v21 = *a2;
      v22 = (void *)a2[1];
      BaseAddress = 0;
      ObjectAttributes.Length = 24;
    }
    else
    {
      v10 = RtlpDosPathNameToRelativeNtPathName_U(&v21, 0, v18);
      if ( v10 < 0 )
        goto LABEL_27;
      v7 = v22;
      BaseAddress = v22;
      if ( LOWORD(v18[0]) )
      {
        v21 = v18[0];
        v22 = (void *)v18[1];
        v11 = (void *)v18[2];
      }
      else
      {
        v11 = 0;
      }
      ObjectAttributes.Length = 24;
      if ( v7 )
      {
        ObjectAttributes.RootDirectory = v11;
        goto LABEL_11;
      }
    }
    ObjectAttributes.RootDirectory = 0;
LABEL_11:
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v21;
    v10 = LdrpNtOpenFileUnredirected(&FileHandle, &ObjectAttributes, v23[0]);
    if ( v7 )
    {
      v12 = (HANDLE *)v19;
      if ( v19 && !_InterlockedExchangeAdd((volatile signed __int32 *)v19, 0xFFFFFFFF) )
      {
        NtClose(v12[1]);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    }
    if ( v10 >= 0 )
    {
      v10 = NtCreateSection(&SectionHandle, 0xF0005u, 0, 0, v9, 0x8000000u, FileHandle);
      if ( v10 >= 0 )
      {
        CommitSize = 0LL;
        HIDWORD(v14) = &v24;
        LODWORD(v14) = &CommitSize;
        v10 = ZwMapViewOfSection(
                SectionHandle,
                (HANDLE)0xFFFFFFFF,
                &BaseOfImage,
                0LL,
                v14,
                (PLARGE_INTEGER)1,
                0,
                (SECTION_INHERIT)v9,
                v15,
                v16);
        if ( SectionHandle )
        {
          NtClose(SectionHandle);
          SectionHandle = 0;
        }
        if ( v10 >= 0 )
        {
          if ( !RtlImageNtHeader(BaseOfImage) )
            v10 = -1073741701;
          if ( v10 >= 0 )
          {
            *a5 = BaseOfImage;
            if ( a6 )
              *a6 = v24;
            if ( a4 )
            {
              *a4 = FileHandle;
            }
            else if ( FileHandle )
            {
              NtClose(FileHandle);
            }
            return v10;
          }
        }
      }
    }
LABEL_27:
    if ( FileHandle )
    {
      NtClose(FileHandle);
      FileHandle = 0;
    }
    if ( BaseOfImage )
      NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, BaseOfImage);
    return v10;
  }
  return -1073741811;
}
