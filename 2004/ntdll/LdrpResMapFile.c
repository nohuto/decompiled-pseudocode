/*
 * XREFs of LdrpResMapFile @ 0x1800E4064
 * Callers:
 *     LdrResSearchResource @ 0x180048B30 (LdrResSearchResource.c)
 * Callees:
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x180016B80 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlReleaseRelativeName @ 0x18001A320 (RtlReleaseRelativeName.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     LdrRemoveLoadAsDataTable @ 0x1800737D0 (LdrRemoveLoadAsDataTable.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18009D310 (ZwMapViewOfSection.c)
 *     NtCreateSection @ 0x18009D750 (NtCreateSection.c)
 *     ZwCreateFile @ 0x18009D8B0 (ZwCreateFile.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E163C (LdrpTraceLoadMUIDll.c)
 *     LdrpResFileSize @ 0x1800E3EF0 (LdrpResFileSize.c)
 */

__int64 __fastcall LdrpResMapFile(wchar_t *String2, wchar_t **a2, _QWORD *a3, int a4)
{
  __int64 v8; // r14
  __int64 v9; // rcx
  int File; // ebx
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 result; // rax
  HANDLE v14; // [rsp+70h] [rbp-98h]
  __int64 v15; // [rsp+88h] [rbp-80h] BYREF
  int v16; // [rsp+90h] [rbp-78h] BYREF
  const wchar_t *v17; // [rsp+98h] [rbp-70h]
  __int128 v18; // [rsp+A0h] [rbp-68h] BYREF
  int v19; // [rsp+B0h] [rbp-58h] BYREF
  const wchar_t *v20; // [rsp+B8h] [rbp-50h]
  __int128 v21; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v22; // [rsp+D0h] [rbp-38h]
  int v23; // [rsp+E0h] [rbp-28h]
  __int64 v24; // [rsp+E8h] [rbp-20h]
  __int128 *v25; // [rsp+F0h] [rbp-18h]
  int v26; // [rsp+F8h] [rbp-10h]
  __int128 v27; // [rsp+100h] [rbp-8h]
  wchar_t *Handle; // [rsp+158h] [rbp+50h]

  v16 = 2752552;
  v17 = L"LdrpResMapFile Enter";
  v19 = 2621478;
  v20 = L"LdrpResMapFile Exit";
  v8 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v9 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v9 = 2147353477LL;
  if ( (*(_BYTE *)v9 & 1) != 0 )
  {
    RtlGetCurrentServiceSessionId();
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v16);
  }
  if ( !String2 || !a2 || !a3 )
    goto LABEL_32;
  *a2 = 0LL;
  if ( (int)LdrRemoveLoadAsDataTable(String2, a2, a3, a4 | 0x200000u) >= 0 )
  {
    File = -1073741302;
    goto LABEL_33;
  }
  if ( (a4 & 0x400) != 0 )
  {
    if ( !RtlDosPathNameToRelativeNtPathName_U((int)String2, (int)&v18, 0, (__int64)&v21) )
    {
      File = -1073020927;
      goto LABEL_33;
    }
    v11 = *((_QWORD *)&v18 + 1);
    if ( (_WORD)v21 )
    {
      v12 = v22;
      v18 = v21;
    }
    else
    {
      v12 = 0LL;
      v22 = 0LL;
    }
    v24 = v12 & -(__int64)(v11 != 0);
    v23 = 48;
    v26 = 64;
    v25 = &v18;
    v27 = 0LL;
    File = ZwCreateFile();
    if ( v11 )
    {
      RtlReleaseRelativeName((__int64)&v21);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11);
    }
    if ( File < 0 )
      goto LABEL_33;
    String2 = Handle;
    goto LABEL_23;
  }
  if ( (a4 & 0x800) == 0 )
  {
LABEL_32:
    File = -1073741811;
    goto LABEL_33;
  }
  Handle = String2;
LABEL_23:
  if ( (a4 & 0x20000) == 0 )
    goto LABEL_27;
  result = LdrpResFileSize((__int64)String2, &v15);
  if ( (int)result < 0 )
    return result;
  if ( (unsigned __int64)(unsigned int)v15 > *a3 )
  {
    File = -1073741793;
  }
  else
  {
LABEL_27:
    File = NtCreateSection();
    if ( (~(_WORD)a4 & 0x800) != 0 )
      NtClose(Handle);
    if ( File >= 0 )
    {
      File = ZwMapViewOfSection();
      NtClose(v14);
      if ( File >= 0 )
      {
        *a2 = (wchar_t *)1;
        *a3 = 0LL;
      }
    }
  }
LABEL_33:
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v8 & 1) != 0 )
  {
    RtlGetCurrentServiceSessionId();
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v19);
  }
  return (unsigned int)File;
}
