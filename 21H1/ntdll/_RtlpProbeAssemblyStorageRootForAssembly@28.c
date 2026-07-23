/*
 * XREFs of _RtlpProbeAssemblyStorageRootForAssembly@28 @ 0x4B2E2E88
 * Callers:
 *     _RtlpResolveAssemblyStorageMapEntry@20 @ 0x4B2E28E9 (_RtlpResolveAssemblyStorageMapEntry@20.c)
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _RtlDosPathNameToRelativeNtPathName_U@16 @ 0x4B2D1BE0 (_RtlDosPathNameToRelativeNtPathName_U@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtOpenFile@24 @ 0x4B2F2CB0 (_NtOpenFile@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 */

int __fastcall RtlpProbeAssemblyStorageRootForAssembly(
        int a1,
        unsigned __int16 *a2,
        const void **a3,
        int a4,
        int a5,
        _DWORD *a6,
        _DWORD *a7)
{
  int v7; // ecx
  _OBJECT_BOUNDARY_DESCRIPTOR *StringRoutine; // edi
  unsigned int v10; // ecx
  unsigned int v11; // edx
  int v12; // eax
  unsigned int v13; // eax
  unsigned __int16 v14; // ax
  _WORD *v15; // esi
  const void **v16; // ecx
  HANDLE ContainingDirectory; // eax
  NTSTATUS v18; // eax
  PRTLP_CURDIR_REF CurDirRef; // ebx
  int v20; // esi
  int v21; // esi
  __int16 v22; // bx
  _WORD **v23; // edx
  int v24; // eax
  _WORD *v25; // eax
  HANDLE v26; // eax
  int v28; // esi
  PVOID v29; // eax
  size_t v30; // [esp-4h] [ebp-288h]
  size_t v31; // [esp-4h] [ebp-288h]
  size_t v32; // [esp-4h] [ebp-288h]
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+Ch] [ebp-278h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+14h] [ebp-270h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [esp+2Ch] [ebp-258h] BYREF
  unsigned int v36; // [esp+3Ch] [ebp-248h]
  int v37; // [esp+40h] [ebp-244h]
  PVOID BaseAddress; // [esp+48h] [ebp-23Ch]
  _DWORD *v39; // [esp+4Ch] [ebp-238h]
  int v40; // [esp+50h] [ebp-234h]
  const void **v41; // [esp+54h] [ebp-230h]
  _UNICODE_STRING NtFileName; // [esp+58h] [ebp-22Ch] BYREF
  int v43; // [esp+60h] [ebp-224h]
  HANDLE FileHandle; // [esp+64h] [ebp-220h] BYREF
  _DWORD *v45; // [esp+68h] [ebp-21Ch]
  unsigned __int8 v46; // [esp+6Fh] [ebp-215h]
  WCHAR DosFileName[262]; // [esp+70h] [ebp-214h] BYREF

  v7 = a4;
  v40 = a4;
  v39 = a6;
  v45 = a7;
  FileHandle = 0;
  v37 = 0;
  StringRoutine = 0;
  v46 = 0;
  *(_DWORD *)&NtFileName.Length = 0;
  NtFileName.Buffer = 0;
  BaseAddress = 0;
  v41 = a3;
  v43 = a5;
  if ( a6 )
    *a6 = 0;
  if ( v45 )
  {
    *v45 = 0;
    v7 = v40;
  }
  if ( !a2 || !a3 || !v7 || !a5 || !a6 || !v45 )
  {
    DbgPrintEx(
      51,
      0,
      (int)"SXS: %s() bad parameters\n"
           "SXS:  Flags:               0x%lx\n"
           "SXS:  Root:                %p\n"
           "SXS:  AssemblyDirectory:   %p\n"
           "SXS:  PreAllocatedString:  %p\n"
           "SXS:  DynamicString:       %p\n"
           "SXS:  StringUsed:          %p\n"
           "SXS:  OpenDirectoryHandle: %p\n",
      (int)"RtlpProbeAssemblyStorageRootForAssembly");
    v20 = -1073741811;
    goto LABEL_26;
  }
  v10 = *a2;
  v11 = v10;
  if ( (_WORD)v10 )
  {
    v12 = *(unsigned __int16 *)(*((_DWORD *)a2 + 1) + 2 * (v10 >> 1) - 2);
    LOWORD(v10) = *a2;
    if ( (_WORD)v12 != 92 && v12 != 47 )
    {
      v46 = 1;
      v11 += 2;
    }
  }
  v13 = v11 + *(unsigned __int16 *)a3 + 4;
  v36 = v13;
  if ( v13 > 0xFFFE )
  {
    DbgPrintEx(
      51,
      0,
      (int)"SXS: Assembly storage resolution failing probe because combined path length does not fit in an UNICODE_STRING.\n",
      SHIDWORD(v30));
    v20 = -1073741562;
    goto LABEL_31;
  }
  if ( v13 > 0x208 )
  {
    v28 = (unsigned __int16)v13;
    StringRoutine = (_OBJECT_BOUNDARY_DESCRIPTOR *)NtdllpAllocateStringRoutine((unsigned __int16)v13);
    if ( !StringRoutine )
    {
      DbgPrintEx(
        51,
        0,
        (int)"SXS: Assembly storage resolution failing probe because attempt to allocate %u bytes failed.\n",
        v28);
      v20 = -1073741801;
      goto LABEL_31;
    }
    v14 = *a2;
  }
  else
  {
    StringRoutine = (_OBJECT_BOUNDARY_DESCRIPTOR *)DosFileName;
    v14 = v10;
  }
  LODWORD(v30) = v14;
  memcpy(StringRoutine, *((const void **)a2 + 1), v30);
  v15 = (_WORD *)((char *)StringRoutine + *a2);
  if ( v46 )
    *v15++ = 92;
  LODWORD(v31) = *(unsigned __int16 *)v41;
  memcpy(v15, v41[1], v31);
  v16 = v41;
  *(_WORD *)((char *)v15 + *(unsigned __int16 *)v41) = 0;
  LOWORD(v37) = *a2 + *(_WORD *)v16 + 2 * v46;
  if ( RtlDosPathNameToRelativeNtPathName_U((PCWSTR)StringRoutine, &NtFileName, 0, &RelativeName) )
  {
    BaseAddress = NtFileName.Buffer;
    if ( RelativeName.RelativeName.Length )
    {
      NtFileName = RelativeName.RelativeName;
      ContainingDirectory = RelativeName.ContainingDirectory;
    }
    else
    {
      ContainingDirectory = 0;
    }
    ObjectAttributes.RootDirectory = ContainingDirectory;
    ObjectAttributes.ObjectName = &NtFileName;
    ObjectAttributes.Length = 24;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    v18 = NtOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
    CurDirRef = RelativeName.CurDirRef;
    v20 = v18;
    if ( RelativeName.CurDirRef && !_InterlockedExchangeAdd(&RelativeName.CurDirRef->ReferenceCount, 0xFFFFFFFF) )
    {
      NtClose(CurDirRef->DirectoryHandle);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, CurDirRef);
    }
    if ( v20 < 0 )
    {
      if ( v20 == -1073741809 || v20 == -1073741772 || v20 == -1073741766 )
        v20 = -1072365564;
      else
        DbgPrintEx(
          51,
          0,
          (int)"SXS: Unable to open assembly directory under storage root \"%S\"; Status = 0x%08lx\n",
          (int)StringRoutine);
    }
    else
    {
      v21 = v40;
      v22 = v36;
      if ( v36 <= *(unsigned __int16 *)(v40 + 2) )
      {
        LODWORD(v32) = (unsigned __int16)v37;
        memcpy(*(void **)(v40 + 4), StringRoutine, v32);
LABEL_25:
        v23 = (_WORD **)v39;
        v24 = (unsigned __int16)v37;
        *v39 = v21;
        v25 = (_WORD *)(*(_DWORD *)(v21 + 4) + v24);
        *v25 = 92;
        v25[1] = 0;
        **v23 = v37 + 2;
        v26 = FileHandle;
        FileHandle = 0;
        v20 = 0;
        *v45 = v26;
        goto LABEL_26;
      }
      if ( StringRoutine != (_OBJECT_BOUNDARY_DESCRIPTOR *)DosFileName )
      {
        v21 = v43;
        *(_DWORD *)(v43 + 4) = StringRoutine;
        StringRoutine = 0;
LABEL_54:
        *(_WORD *)(v21 + 2) = v22;
        goto LABEL_25;
      }
      v29 = NtdllpAllocateStringRoutine(v36);
      v21 = v43;
      *(_DWORD *)(v43 + 4) = v29;
      if ( v29 )
      {
        LODWORD(v32) = (unsigned __int16)v37;
        memcpy(*(void **)(v21 + 4), StringRoutine, v32);
        goto LABEL_54;
      }
      v20 = -1073741801;
    }
LABEL_26:
    if ( BaseAddress )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    goto LABEL_28;
  }
  DbgPrintEx(51, 0, (int)"SXS: Attempt to translate DOS path name \"%S\" to NT format failed\n", (int)StringRoutine);
  v20 = -1073741766;
LABEL_28:
  if ( StringRoutine && StringRoutine != (_OBJECT_BOUNDARY_DESCRIPTOR *)DosFileName )
    RtlDeleteBoundaryDescriptor(StringRoutine);
LABEL_31:
  if ( FileHandle )
    NtClose(FileHandle);
  return v20;
}
