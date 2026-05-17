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

NTSTATUS __fastcall LdrpResMapFile(wchar_t *String2, int a2, unsigned int *a3, int a4)
{
  int v5; // ebx
  int v6; // eax
  int v7; // edi
  int v8; // eax
  wchar_t **v9; // edx
  NTSTATUS Section; // esi
  NTSTATUS result; // eax
  int v12; // edx
  int v13; // ecx
  volatile signed __int32 *v14; // eax
  HANDLE FileHandle; // [esp+10h] [ebp-70h] BYREF
  int v16; // [esp+14h] [ebp-6Ch]
  HANDLE Handle; // [esp+18h] [ebp-68h] BYREF
  int v18; // [esp+1Ch] [ebp-64h] BYREF
  int v19; // [esp+20h] [ebp-60h]
  unsigned int v20; // [esp+24h] [ebp-5Ch] BYREF
  int v21; // [esp+28h] [ebp-58h] BYREF
  int v22; // [esp+2Ch] [ebp-54h]
  unsigned __int16 v23[2]; // [esp+30h] [ebp-50h] BYREF
  const wchar_t *v24; // [esp+34h] [ebp-4Ch]
  unsigned __int16 v25[2]; // [esp+38h] [ebp-48h] BYREF
  const wchar_t *v26; // [esp+3Ch] [ebp-44h]
  _DWORD v27[2]; // [esp+40h] [ebp-40h] BYREF
  unsigned int v28; // [esp+48h] [ebp-38h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+50h] [ebp-30h] BYREF
  _DWORD v30[3]; // [esp+58h] [ebp-28h] BYREF
  volatile signed __int32 *v31; // [esp+64h] [ebp-1Ch]
  OBJECT_ATTRIBUTES ObjectAttributes; // [esp+68h] [ebp-18h] BYREF

  v19 = a2;
  v23[1] = 42;
  v23[0] = 40;
  v24 = L"LdrpResMapFile Enter";
  v25[0] = 38;
  v25[1] = 40;
  v26 = L"LdrpResMapFile Exit";
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
    LdrpTraceLoadMUIDll(v23, *(unsigned __int8 *)v8);
  }
  if ( !String2 || (v9 = (wchar_t **)v19) == 0 || !a3 )
  {
    Section = -1073741811;
    goto LABEL_15;
  }
  *(_DWORD *)v19 = 0;
  if ( LdrRemoveLoadAsDataTable(String2, v9, a3, a4 | 0x200000) < 0 )
  {
    if ( (a4 & 0x400) != 0 )
    {
      if ( !RtlDosPathNameToRelativeNtPathName_U((int)String2, (unsigned __int16 *)&v21, 0, v30) )
      {
        Section = -1073020927;
        goto LABEL_14;
      }
      v12 = v22;
      v16 = v22;
      if ( LOWORD(v30[0]) )
      {
        v13 = v30[2];
        v21 = v30[0];
        v22 = v30[1];
      }
      else
      {
        v13 = 0;
      }
      ObjectAttributes.Length = 24;
      ObjectAttributes.Attributes = 64;
      ObjectAttributes.RootDirectory = v12 != 0 ? (HANDLE)v13 : 0;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v21;
      ObjectAttributes.SecurityDescriptor = 0;
      ObjectAttributes.SecurityQualityOfService = 0;
      Section = NtCreateFile(&FileHandle, 0x80100080, &ObjectAttributes, &IoStatusBlock, 0, 0, 5u, 1u, 0, 0, 0);
      if ( v16 )
      {
        v14 = v31;
        if ( v31 && !_InterlockedExchangeAdd(v31, 0xFFFFFFFF) )
        {
          NtClose(*((HANDLE *)v14 + 1));
          RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v31);
        }
        RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v16);
      }
      if ( Section < 0 )
        goto LABEL_14;
      String2 = (wchar_t *)FileHandle;
    }
    else
    {
      if ( (a4 & 0x800) == 0 )
      {
        Section = -1073741811;
        goto LABEL_14;
      }
      FileHandle = String2;
    }
    if ( (a4 & 0x20000) != 0 )
    {
      result = LdrpResFileSize((int)String2, &v28);
      if ( result < 0 )
        return result;
      if ( v28 > *a3 )
      {
        Section = -1073741793;
        goto LABEL_14;
      }
      String2 = (wchar_t *)FileHandle;
    }
    Section = NtCreateSection((int)&Handle, 983045, 0, 0, 2, 0x8000000, (int)String2);
    if ( (~(_WORD)a4 & 0x800) != 0 )
      NtClose(FileHandle);
    if ( Section >= 0 )
    {
      v27[0] = 0;
      v27[1] = 0;
      v20 = 0;
      v18 = 0;
      Section = ZwMapViewOfSection((int)Handle, -1, (int)&v18, 0, 0, (int)v27, (int)&v20, 1, 0, 2);
      NtClose(Handle);
      v5 = 2147353477;
      if ( Section >= 0 )
      {
        *(_DWORD *)v19 = v18 | 1;
        *a3 = v20;
      }
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  Section = -1073741302;
LABEL_14:
  v5 = 2147353477;
LABEL_15:
  if ( RtlGetCurrentServiceSessionId() )
    v5 = (int)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v5 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (int)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll(v25, *(unsigned __int8 *)v7);
  }
  return Section;
}
