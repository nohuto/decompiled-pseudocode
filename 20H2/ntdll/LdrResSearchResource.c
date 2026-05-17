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

__int64 __fastcall LdrResSearchResource(
        unsigned __int64 Handle,
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
  unsigned int v18; // ebx
  __int64 result; // rax
  __int64 v20; // r12
  int v21; // r14d
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  HANDLE v25; // rdx
  unsigned int v26; // eax
  int MappingSize; // eax
  int v28; // [rsp+50h] [rbp-128h]
  __int64 v29; // [rsp+58h] [rbp-120h] BYREF
  wchar_t *v30; // [rsp+60h] [rbp-118h]
  int v31; // [rsp+68h] [rbp-110h]
  int v32; // [rsp+6Ch] [rbp-10Ch] BYREF
  __int64 v33; // [rsp+70h] [rbp-108h]
  __int64 v34; // [rsp+78h] [rbp-100h]
  int v35; // [rsp+80h] [rbp-F8h]
  __int64 v36; // [rsp+88h] [rbp-F0h]
  __int64 v37; // [rsp+90h] [rbp-E8h]
  __int64 v38; // [rsp+98h] [rbp-E0h] BYREF
  void *Src; // [rsp+A0h] [rbp-D8h]
  int v40; // [rsp+A8h] [rbp-D0h] BYREF
  const wchar_t *v41; // [rsp+B0h] [rbp-C8h]
  UNICODE_STRING UnicodeString; // [rsp+B8h] [rbp-C0h] BYREF
  int v43; // [rsp+C8h] [rbp-B0h] BYREF
  const wchar_t *v44; // [rsp+D0h] [rbp-A8h]
  UNICODE_STRING DestinationString; // [rsp+D8h] [rbp-A0h] BYREF
  _BYTE v46[48]; // [rsp+E8h] [rbp-90h] BYREF
  _QWORD v47[2]; // [rsp+118h] [rbp-60h] BYREF
  PCWSTR SourceString; // [rsp+128h] [rbp-50h]

  v9 = a3;
  v31 = a3;
  Src = a2;
  v37 = a5;
  v36 = a6;
  v34 = a7;
  v33 = a8;
  v30 = 0LL;
  v40 = 3538996;
  v41 = L"LdrResSearchResource Enter";
  v43 = 3407922;
  v44 = L"LdrResSearchResource Exit";
  v12 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v13 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v13 = 2147353477LL;
  if ( (*(_BYTE *)v13 & 1) != 0 )
  {
    v14 = 2147353476LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v23 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v23 = 2147353476LL;
    LdrpTraceLoadMUIDll(&v40, *(unsigned __int8 *)v23);
  }
  else
  {
    v14 = 2147353476LL;
  }
  if ( !Handle || !a2 || v34 && !v33 )
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
      return 3221225713LL;
  }
  else if ( (_DWORD)v9 != 4 )
  {
    goto LABEL_18;
  }
  if ( (v16 & 0x41) == 0 )
    return 3221225714LL;
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
    v28 = v18;
    goto LABEL_25;
  }
  if ( v22 == 3072 )
    goto LABEL_23;
LABEL_21:
  v35 = v16 & 0x8000;
  if ( (v16 & 0x8000) != 0 && (~(_WORD)v16 & 0x810) != 0 || (v16 & 0x3000) == 0x3000 || (v16 & 0x18) == 0x18 )
    goto LABEL_23;
  v29 = 0LL;
  if ( (v16 & 0x20000) != 0 )
  {
    if ( (v16 & 0x400) == 0 || !v36 || !*(_QWORD *)v36 )
    {
      v18 = -1073741811;
      v28 = -1073741811;
      goto LABEL_25;
    }
    v29 = *(_QWORD *)v36;
  }
  memmove(v47, Src, 8 * v9);
  if ( (_DWORD)v9 != 3 )
  {
    if ( (unsigned int)v9 <= 3 )
      goto LABEL_34;
    v31 = 3;
  }
  if ( (unsigned __int64)SourceString >= 0x10000 )
  {
    if ( *SourceString )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( !RtlCultureNameToLCID(&DestinationString.Length, &v32) )
        return 3221225485LL;
    }
    else
    {
      v32 = 0;
    }
    SourceString = (PCWSTR)(unsigned __int16)v32;
  }
  else if ( SourceString )
  {
    if ( ((unsigned __int16)SourceString & 0x3FF) == 0
      || SourceString == (PCWSTR)127
      || (UnicodeString = 0LL, (int)RtlLcidToLocaleName((unsigned int)SourceString, (__int64)&UnicodeString, 2, 1) < 0) )
    {
LABEL_62:
      v18 = -1073741811;
      goto LABEL_24;
    }
    if ( UnicodeString.Buffer )
      RtlFreeAnsiString(&UnicodeString);
  }
LABEL_34:
  if ( (v16 & 0x300) == 0 )
  {
    if ( (v16 & 0x400) == 0 && ((v16 & 0x800) == 0 || (~v16 & 0x8000) == 0) )
    {
LABEL_37:
      if ( v35 )
      {
        result = LdrpResValidateFileHandle(Handle);
        if ( (int)result < 0 )
          return result;
        v26 = LdrpResSearchResourceHandle((HANDLE)Handle, v37, v36, v34, v33);
      }
      else
      {
        v20 = v36;
        v21 = v31;
        v18 = LdrpResSearchResourceMappedFile((_DWORD)v30, v29, v16, (unsigned int)v47, v31, v37, v36, v34, v33);
        v28 = v18;
        if ( v18 != -1073741686 )
          goto LABEL_25;
        if ( ((v47[0] - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) == 0 )
          goto LABEL_25;
        if ( (int)LdrLoadAlternateResourceModuleEx((__int64)v30, 62190, &v38, 0LL, 0x1000000) < 0 )
          goto LABEL_25;
        v29 = 0LL;
        MappingSize = LdrpResGetMappingSize(v38, &v29, v16, 0LL);
        if ( MappingSize < 0 )
          goto LABEL_25;
        v26 = LdrpResSearchResourceMappedFile(v38, v29, v16 | 0x1000000, (unsigned int)v47, v21, v37, v20, v34, v33);
      }
      v18 = v26;
      v28 = v26;
LABEL_25:
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      {
        v12 = (__int64)NtCurrentPeb()->SharedData + 555;
        v18 = v28;
      }
      if ( (*(_BYTE *)v12 & 1) != 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        {
          v14 = (__int64)NtCurrentPeb()->SharedData + 554;
          v18 = v28;
        }
        LdrpTraceLoadMUIDll(&v43, *(unsigned __int8 *)v14);
      }
      return v18;
    }
    if ( (v16 & 0x1400) == 0x1400 )
    {
      result = LdrpResValidateFilePath(Handle);
    }
    else
    {
      if ( (v16 & 0x1000) == 0 )
        goto LABEL_95;
      result = LdrpResValidateFileHandle(Handle);
    }
    if ( (int)result < 0 )
      return result;
LABEL_95:
    v24 = LdrpResMapFile((wchar_t *)Handle);
    v18 = v24;
    v28 = v24;
    if ( v24 < 0 )
    {
      if ( v24 != -1073741302 )
        goto LABEL_25;
    }
    else
    {
      if ( (v16 & 0x400) != 0 )
        v25 = (HANDLE)Handle;
      else
        v25 = 0LL;
      result = LdrAddLoadAsDataTable(v30, v25, 0LL);
      if ( (int)result < 0 )
        return result;
    }
    goto LABEL_37;
  }
  v30 = (wchar_t *)Handle;
  if ( (v16 & 0x200) == 0 )
    goto LABEL_84;
  if ( (Handle & 1) == 0 )
    v30 = (wchar_t *)(Handle | 1);
  if ( (v16 & 0x1000) == 0
    || (result = ZwQueryVirtualMemory(-1LL, Handle & 0xFFFFFFFFFFFFFFFCuLL, 0LL, v46, 48LL, 0LL), (int)result >= 0) )
  {
LABEL_84:
    result = LdrpResGetMappingSize(v30, &v29, v16, 0LL);
    if ( (int)result >= 0 || (v16 & 0x1000) == 0 )
      goto LABEL_37;
  }
  return result;
}
