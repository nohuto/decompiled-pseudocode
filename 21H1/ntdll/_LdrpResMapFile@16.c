/*
 * XREFs of _LdrpResMapFile@16 @ 0x4B34316E
 * Callers:
 *     _LdrResSearchResource@32 @ 0x4B2BA8B0 (_LdrResSearchResource@32.c)
 * Callees:
 *     _LdrRemoveLoadAsDataTable@16 @ 0x4B2B8980 (_LdrRemoveLoadAsDataTable@16.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlDosPathNameToRelativeNtPathName_U@16 @ 0x4B2D1BE0 (_RtlDosPathNameToRelativeNtPathName_U@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtCreateSection@28 @ 0x4B2F2E20 (_NtCreateSection@28.c)
 *     _NtCreateFile@44 @ 0x4B2F2ED0 (_NtCreateFile@44.c)
 *     _LdrpTraceLoadMUIDll@8 @ 0x4B33FAF1 (_LdrpTraceLoadMUIDll@8.c)
 *     _LdrpResFileSize@8 @ 0x4B34303A (_LdrpResFileSize@8.c)
 */

NTSTATUS __fastcall LdrpResMapFile(WCHAR *DosFileName, PVOID *a2, PSIZE_T Size, int a4)
{
  int v5; // ebx
  int v6; // eax
  int v7; // edi
  int v8; // eax
  PVOID *v9; // edx
  NTSTATUS v10; // esi
  NTSTATUS result; // eax
  wchar_t *Buffer; // edx
  HANDLE ContainingDirectory; // ecx
  PRTLP_CURDIR_REF CurDirRef; // eax
  SIZE_T v15; // [esp-14h] [ebp-94h]
  ULONG v16; // [esp+0h] [ebp-80h]
  ULONG v17; // [esp+4h] [ebp-7Ch]
  HANDLE FileHandle; // [esp+10h] [ebp-70h] BYREF
  PVOID BaseAddress; // [esp+14h] [ebp-6Ch]
  HANDLE SectionHandle; // [esp+18h] [ebp-68h] BYREF
  PVOID v21; // [esp+1Ch] [ebp-64h] BYREF
  PVOID *BaseModule; // [esp+20h] [ebp-60h]
  int v23; // [esp+24h] [ebp-5Ch] BYREF
  _UNICODE_STRING NtFileName; // [esp+28h] [ebp-58h] BYREF
  unsigned __int16 v25[2]; // [esp+30h] [ebp-50h] BYREF
  const wchar_t *v26; // [esp+34h] [ebp-4Ch]
  unsigned __int16 v27[2]; // [esp+38h] [ebp-48h] BYREF
  const wchar_t *v28; // [esp+3Ch] [ebp-44h]
  SIZE_T CommitSize; // [esp+40h] [ebp-40h] BYREF
  int StackCookie; // [esp+48h] [ebp-38h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+50h] [ebp-30h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [esp+58h] [ebp-28h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+68h] [ebp-18h] BYREF

  BaseModule = a2;
  v25[1] = 42;
  v25[0] = 40;
  v26 = L"LdrpResMapFile Enter";
  v27[0] = 38;
  v27[1] = 40;
  v28 = L"LdrpResMapFile Exit";
  v5 = 2147353477;
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (int)NtCurrentPeb()->SharedData + 555;
  else
    v6 = 2147353477;
  v7 = 2147353476;
  if ( (*(_BYTE *)v6 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (int)NtCurrentPeb()->SharedData + 554;
    else
      v8 = 2147353476;
    LdrpTraceLoadMUIDll(v25, (void *)*(unsigned __int8 *)v8);
  }
  if ( !DosFileName || (v9 = BaseModule) == 0 || !Size )
  {
    v10 = -1073741811;
    goto LABEL_15;
  }
  *BaseModule = 0;
  if ( LdrRemoveLoadAsDataTable(DosFileName, v9, Size, a4 | 0x200000) < 0 )
  {
    if ( (a4 & 0x400) != 0 )
    {
      if ( !RtlDosPathNameToRelativeNtPathName_U(DosFileName, &NtFileName, 0, &RelativeName) )
      {
        v10 = -1073020927;
        goto LABEL_14;
      }
      Buffer = NtFileName.Buffer;
      BaseAddress = NtFileName.Buffer;
      if ( RelativeName.RelativeName.Length )
      {
        ContainingDirectory = RelativeName.ContainingDirectory;
        NtFileName = RelativeName.RelativeName;
      }
      else
      {
        ContainingDirectory = 0;
      }
      ObjectAttributes.Length = 24;
      ObjectAttributes.Attributes = 64;
      ObjectAttributes.RootDirectory = Buffer != 0 ? ContainingDirectory : 0;
      ObjectAttributes.ObjectName = &NtFileName;
      ObjectAttributes.SecurityDescriptor = 0;
      ObjectAttributes.SecurityQualityOfService = 0;
      v10 = NtCreateFile(&FileHandle, 0x80100080, &ObjectAttributes, &IoStatusBlock, 0, 0, 5u, 1u, 0, 0, 0);
      if ( BaseAddress )
      {
        CurDirRef = RelativeName.CurDirRef;
        if ( RelativeName.CurDirRef && !_InterlockedExchangeAdd(&RelativeName.CurDirRef->ReferenceCount, 0xFFFFFFFF) )
        {
          NtClose(CurDirRef->DirectoryHandle);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, RelativeName.CurDirRef);
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      }
      if ( v10 < 0 )
        goto LABEL_14;
      DosFileName = (WCHAR *)FileHandle;
    }
    else
    {
      if ( (a4 & 0x800) == 0 )
      {
        v10 = -1073741811;
        goto LABEL_14;
      }
      FileHandle = DosFileName;
    }
    if ( (a4 & 0x20000) != 0 )
    {
      result = LdrpResFileSize(DosFileName, &StackCookie);
      if ( result < 0 )
        return result;
      if ( (unsigned int)StackCookie > *(_DWORD *)Size )
      {
        v10 = -1073741793;
        goto LABEL_14;
      }
      DosFileName = (WCHAR *)FileHandle;
    }
    v10 = NtCreateSection(&SectionHandle, 0xF0005u, 0, 0, 2u, 0x8000000u, DosFileName);
    if ( (~(_WORD)a4 & 0x800) != 0 )
      NtClose(FileHandle);
    if ( v10 >= 0 )
    {
      HIDWORD(v15) = &v23;
      CommitSize = 0LL;
      LODWORD(v15) = &CommitSize;
      v23 = 0;
      v21 = 0;
      v10 = ZwMapViewOfSection(
              SectionHandle,
              (HANDLE)0xFFFFFFFF,
              &v21,
              0LL,
              v15,
              (PLARGE_INTEGER)1,
              0,
              ViewUnmap,
              v16,
              v17);
      NtClose(SectionHandle);
      v5 = 2147353477;
      if ( v10 >= 0 )
      {
        *BaseModule = (PVOID)((unsigned int)v21 | 1);
        *(_DWORD *)Size = v23;
      }
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  v10 = -1073741302;
LABEL_14:
  v5 = 2147353477;
LABEL_15:
  if ( RtlGetCurrentServiceSessionId() )
    v5 = (int)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v5 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (int)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll(v27, (void *)*(unsigned __int8 *)v7);
  }
  return v10;
}
