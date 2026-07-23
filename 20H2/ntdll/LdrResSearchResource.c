/*
 * XREFs of LdrResSearchResource @ 0x180048B80
 * Callers:
 *     RtlLoadString @ 0x180046FA0 (RtlLoadString.c)
 *     LdrResFindResourceDirectory @ 0x180048AF0 (LdrResFindResourceDirectory.c)
 *     LdrResFindResource @ 0x1800E42C0 (LdrResFindResource.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x180016760 (RtlFreeAnsiString.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180034EA0 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlLcidToLocaleName @ 0x18003B2F0 (RtlLcidToLocaleName.c)
 *     RtlCultureNameToLCID @ 0x18003B850 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     LdrpResSearchResourceMappedFile @ 0x180048F4C (LdrpResSearchResourceMappedFile.c)
 *     LdrpResGetMappingSize @ 0x18004AC40 (LdrpResGetMappingSize.c)
 *     LdrAddLoadAsDataTable @ 0x180073110 (LdrAddLoadAsDataTable.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x18009D510 (ZwQueryVirtualMemory.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E19DC (LdrpTraceLoadMUIDll.c)
 *     LdrpResMapFile @ 0x1800E44B4 (LdrpResMapFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800E48DC (LdrpResSearchResourceHandle.c)
 *     LdrpResValidateFileHandle @ 0x1800E500C (LdrpResValidateFileHandle.c)
 *     LdrpResValidateFilePath @ 0x1800E5068 (LdrpResValidateFilePath.c)
 */

NTSTATUS __fastcall LdrResSearchResource(
        unsigned __int64 DosFileName,
        void *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // r14
  __int64 v12; // r13
  __int64 v13; // rcx
  __int64 v14; // r15
  int v15; // ecx
  unsigned int v16; // esi
  bool v17; // zf
  int v18; // ebx
  NTSTATUS result; // eax
  __int64 v20; // r12
  int v21; // r14d
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  WCHAR *v25; // r9
  WCHAR *v26; // rdx
  int v27; // eax
  int MappingSize; // eax
  int v29; // [rsp+50h] [rbp-128h]
  SIZE_T Size; // [rsp+58h] [rbp-120h] BYREF
  PVOID DllHandle; // [rsp+60h] [rbp-118h] BYREF
  int v32; // [rsp+68h] [rbp-110h]
  DWORD Lcid; // [rsp+6Ch] [rbp-10Ch] BYREF
  __int64 v34; // [rsp+70h] [rbp-108h]
  __int64 v35; // [rsp+78h] [rbp-100h]
  int v36; // [rsp+80h] [rbp-F8h]
  __int64 v37; // [rsp+88h] [rbp-F0h]
  __int64 v38; // [rsp+90h] [rbp-E8h]
  PVOID ResourceDllBase; // [rsp+98h] [rbp-E0h] BYREF
  void *Src; // [rsp+A0h] [rbp-D8h]
  int v41; // [rsp+A8h] [rbp-D0h] BYREF
  const wchar_t *v42; // [rsp+B0h] [rbp-C8h]
  _UNICODE_STRING LocaleName; // [rsp+B8h] [rbp-C0h] BYREF
  int v44; // [rsp+C8h] [rbp-B0h] BYREF
  const wchar_t *v45; // [rsp+D0h] [rbp-A8h]
  _UNICODE_STRING DestinationString; // [rsp+D8h] [rbp-A0h] BYREF
  _BYTE MemoryInformation[48]; // [rsp+E8h] [rbp-90h] BYREF
  _QWORD v48[2]; // [rsp+118h] [rbp-60h] BYREF
  PCWSTR SourceString; // [rsp+128h] [rbp-50h]

  v9 = a3;
  v32 = a3;
  Src = a2;
  v38 = a5;
  v37 = a6;
  v35 = a7;
  v34 = a8;
  DllHandle = 0LL;
  v41 = 3538996;
  v42 = L"LdrResSearchResource Enter";
  v44 = 3407922;
  v45 = L"LdrResSearchResource Exit";
  v12 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v13 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v13 = 2147353477LL;
  if ( (*(_BYTE *)v13 & 1) != 0 )
  {
    v14 = 2147353476LL;
    if ( RtlGetCurrentServiceSessionId() )
      v23 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v23 = 2147353476LL;
    LdrpTraceLoadMUIDll(&v41, *(unsigned __int8 *)v23);
  }
  else
  {
    v14 = 2147353476LL;
  }
  if ( !DosFileName || !a2 || v35 && !v34 )
    goto LABEL_62;
  v15 = a4 | 0x100;
  if ( (a4 & 0xF00) != 0 )
    v15 = a4;
  v16 = v15 | 0x1000;
  if ( (v15 & 0x2000) != 0 )
    v16 = v15;
  if ( (v16 & 0xFFF80000) != 0 )
    goto LABEL_23;
  if ( (unsigned int)v9 < 3 && (v16 & 2) == 0 || (unsigned int)v9 > 4 )
  {
    v18 = -1073741583;
    goto LABEL_24;
  }
  if ( (v16 & 0x41) != 0 )
  {
    if ( (_DWORD)v9 != 4 )
      return -1073741583;
  }
  else if ( (_DWORD)v9 != 4 )
  {
    goto LABEL_18;
  }
  if ( (v16 & 0x41) == 0 )
    return -1073741582;
LABEL_18:
  if ( (v16 & 0x100) != 0 )
  {
    v17 = (v16 & 0xE00) == 0;
    goto LABEL_20;
  }
  v22 = v16 & 0xC00;
  if ( (v16 & 0x200) != 0 )
  {
    v17 = v22 == 0;
LABEL_20:
    if ( v17 )
      goto LABEL_21;
LABEL_23:
    v18 = -1073741582;
LABEL_24:
    v29 = v18;
    goto LABEL_25;
  }
  if ( v22 == 3072 )
    goto LABEL_23;
LABEL_21:
  v36 = v16 & 0x8000;
  if ( (v16 & 0x8000) != 0 && (~(_WORD)v16 & 0x810) != 0 || (v16 & 0x3000) == 0x3000 || (v16 & 0x18) == 0x18 )
    goto LABEL_23;
  Size = 0LL;
  if ( (v16 & 0x20000) != 0 )
  {
    if ( (v16 & 0x400) == 0 || !v37 || !*(_QWORD *)v37 )
    {
      v18 = -1073741811;
      v29 = -1073741811;
      goto LABEL_25;
    }
    Size = *(_QWORD *)v37;
  }
  memmove(v48, Src, 8 * v9);
  if ( (_DWORD)v9 != 3 )
  {
    if ( (unsigned int)v9 <= 3 )
      goto LABEL_34;
    v32 = 3;
  }
  if ( (unsigned __int64)SourceString >= 0x10000 )
  {
    if ( *SourceString )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
        return -1073741811;
    }
    else
    {
      Lcid = 0;
    }
    SourceString = (PCWSTR)(unsigned __int16)Lcid;
  }
  else if ( SourceString )
  {
    if ( ((unsigned __int16)SourceString & 0x3FF) == 0
      || SourceString == (PCWSTR)127
      || (LocaleName = 0LL, RtlLcidToLocaleName((LCID)SourceString, &LocaleName, 2u, 1u) < 0) )
    {
LABEL_62:
      v18 = -1073741811;
      goto LABEL_24;
    }
    if ( LocaleName.Buffer )
      RtlFreeAnsiString(&LocaleName);
  }
LABEL_34:
  if ( (v16 & 0x300) == 0 )
  {
    if ( (v16 & 0x400) == 0 && ((v16 & 0x800) == 0 || (~v16 & 0x8000) == 0) )
    {
LABEL_37:
      if ( v36 )
      {
        result = LdrpResValidateFileHandle(DosFileName);
        if ( result < 0 )
          return result;
        v27 = LdrpResSearchResourceHandle((HANDLE)DosFileName, v38, v37, v35, v34);
      }
      else
      {
        v20 = v37;
        v21 = v32;
        v18 = LdrpResSearchResourceMappedFile((_DWORD)DllHandle, Size, v16, (unsigned int)v48, v32, v38, v37, v35, v34);
        v29 = v18;
        if ( v18 != -1073741686 )
          goto LABEL_25;
        if ( ((v48[0] - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) == 0 )
          goto LABEL_25;
        if ( LdrLoadAlternateResourceModuleEx(DllHandle, 0xF2EEu, &ResourceDllBase, 0LL, 0x1000000u) < 0 )
          goto LABEL_25;
        Size = 0LL;
        MappingSize = LdrpResGetMappingSize(ResourceDllBase, &Size, v16, 0LL);
        if ( MappingSize < 0 )
          goto LABEL_25;
        v27 = LdrpResSearchResourceMappedFile(
                (_DWORD)ResourceDllBase,
                Size,
                v16 | 0x1000000,
                (unsigned int)v48,
                v21,
                v38,
                v20,
                v35,
                v34);
      }
      v18 = v27;
      v29 = v27;
LABEL_25:
      if ( RtlGetCurrentServiceSessionId() )
      {
        v12 = (__int64)NtCurrentPeb()->SharedData + 555;
        v18 = v29;
      }
      if ( (*(_BYTE *)v12 & 1) != 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
        {
          v14 = (__int64)NtCurrentPeb()->SharedData + 554;
          v18 = v29;
        }
        LdrpTraceLoadMUIDll(&v44, *(unsigned __int8 *)v14);
      }
      return v18;
    }
    if ( (v16 & 0x1400) == 0x1400 )
    {
      result = LdrpResValidateFilePath((PCWSTR)DosFileName);
    }
    else
    {
      if ( (v16 & 0x1000) == 0 )
        goto LABEL_95;
      result = LdrpResValidateFileHandle(DosFileName);
    }
    if ( result < 0 )
      return result;
LABEL_95:
    v24 = LdrpResMapFile((PCWSTR)DosFileName, &DllHandle, &Size);
    v18 = v24;
    v29 = v24;
    if ( v24 < 0 )
    {
      if ( v24 != -1073741302 )
        goto LABEL_25;
    }
    else
    {
      if ( (v16 & 0x400) != 0 )
      {
        v25 = 0LL;
        v26 = (WCHAR *)DosFileName;
      }
      else
      {
        v25 = (WCHAR *)DosFileName;
        v26 = 0LL;
      }
      result = LdrAddLoadAsDataTable(DllHandle, v26, Size, v25, 0LL);
      if ( result < 0 )
        return result;
    }
    goto LABEL_37;
  }
  DllHandle = (PVOID)DosFileName;
  if ( (v16 & 0x200) == 0 )
    goto LABEL_84;
  if ( (DosFileName & 1) == 0 )
    DllHandle = (PVOID)(DosFileName | 1);
  if ( (v16 & 0x1000) == 0
    || (result = ZwQueryVirtualMemory(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   (PVOID)(DosFileName & 0xFFFFFFFFFFFFFFFCuLL),
                   MemoryBasicInformation,
                   MemoryInformation,
                   0x30uLL,
                   0LL),
        result >= 0) )
  {
LABEL_84:
    result = LdrpResGetMappingSize(DllHandle, &Size, v16, 0LL);
    if ( result >= 0 || (v16 & 0x1000) == 0 )
      goto LABEL_37;
  }
  return result;
}
