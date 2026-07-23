/*
 * XREFs of _RtlpCreateUserProcess@24 @ 0x4B342119
 * Callers:
 *     _RtlCloneUserProcess@20 @ 0x4B335760 (_RtlCloneUserProcess@20.c)
 *     _RtlCreateUserProcessEx@20 @ 0x4B33FC60 (_RtlCreateUserProcessEx@20.c)
 * Callees:
 *     _NtCreateUserProcess@44 @ 0x4B2F3600 (_NtCreateUserProcess@44.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

NTSTATUS __fastcall RtlpCreateUserProcess(
        unsigned __int16 *a1,
        void *a2,
        ULONG ProcessFlags,
        ULONG ThreadFlags,
        int a5,
        HANDLE *a6)
{
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // eax
  __int16 v17; // ax
  int v18; // eax
  ULONG v19; // edx
  int v20; // eax
  PVOID v21; // esi
  int v22; // eax
  int v23; // eax
  size_t v24; // [esp-4h] [ebp-164h]
  size_t v25; // [esp-4h] [ebp-164h]
  __int16 v26; // [esp+10h] [ebp-150h] BYREF
  PVOID ProcessParameters; // [esp+14h] [ebp-14Ch]
  unsigned int v28; // [esp+18h] [ebp-148h] BYREF
  _DWORD v29[2]; // [esp+20h] [ebp-140h] BYREF
  _OBJECT_ATTRIBUTES ThreadObjectAttributes; // [esp+28h] [ebp-138h] BYREF
  _OBJECT_ATTRIBUTES ProcessObjectAttributes; // [esp+40h] [ebp-120h] BYREF
  _PS_CREATE_INFO CreateInfo; // [esp+58h] [ebp-108h] BYREF
  int v33; // [esp+A8h] [ebp-B8h]
  char *v34; // [esp+ACh] [ebp-B4h]
  _DWORD v35[43]; // [esp+B0h] [ebp-B0h]

  LODWORD(v24) = 68;
  ProcessParameters = a2;
  memset(a6, 0, v24);
  *a6 = (HANDLE)68;
  if ( a5 && *(_WORD *)a5 != 1 )
    return -1073741811;
  ProcessObjectAttributes.Attributes = 512;
  ProcessObjectAttributes.RootDirectory = 0;
  ProcessObjectAttributes.ObjectName = 0;
  ProcessObjectAttributes.Length = 24;
  if ( a5 )
    ProcessObjectAttributes.SecurityDescriptor = *(PVOID *)(a5 + 4);
  else
    ProcessObjectAttributes.SecurityDescriptor = 0;
  ProcessObjectAttributes.SecurityQualityOfService = 0;
  ThreadObjectAttributes.Length = 24;
  ThreadObjectAttributes.RootDirectory = 0;
  ThreadObjectAttributes.Attributes = 512;
  ThreadObjectAttributes.ObjectName = 0;
  if ( a5 )
    ThreadObjectAttributes.SecurityDescriptor = *(PVOID *)(a5 + 8);
  else
    ThreadObjectAttributes.SecurityDescriptor = 0;
  LODWORD(v25) = 72;
  ThreadObjectAttributes.SecurityQualityOfService = 0;
  v29[0] = 0;
  v29[1] = 0;
  memset(&CreateInfo, 0, v25);
  LOBYTE(CreateInfo.State) |= 4u;
  v35[0] = 0;
  v35[4] = 0;
  v34 = (char *)(a6 + 3);
  LODWORD(CreateInfo.Size) = 72;
  *(&CreateInfo.SuccessState.ManifestSize + 1) = 65539;
  v35[1] = 6;
  v35[2] = 48;
  v35[3] = a6 + 5;
  v33 = 8;
  v8 = 2;
  if ( a1 )
  {
    v9 = *a1;
    v35[8] = 0;
    v35[6] = v9;
    v35[7] = *((_DWORD *)a1 + 1);
    v35[5] = 131077;
    v35[9] = 131082;
    v28 = v28 & 0xFFFFFFE0 | 2;
    v35[10] = 8;
    v35[12] = 0;
    v35[11] = &v28;
    v8 = 4;
  }
  if ( a5 )
  {
    v10 = *(_DWORD *)(a5 + 12);
    if ( v10 )
    {
      v11 = 2 * v8++;
      *(&CreateInfo.SuccessState.ManifestSize + 2 * v11 + 1) = 393216;
      *(&v33 + 2 * v11) = 4;
      v35[2 * v11] = 0;
      v35[2 * v11 - 1] = v10;
    }
    v12 = *(_DWORD *)(a5 + 16);
    if ( v12 )
    {
      v13 = 2 * v8++;
      *(&CreateInfo.SuccessState.ManifestSize + 2 * v13 + 1) = 393217;
      *(&v33 + 2 * v13) = 4;
      v35[2 * v13] = 0;
      v35[2 * v13 - 1] = v12;
    }
    v14 = *(_DWORD *)(a5 + 20);
    if ( v14 )
    {
      v15 = 2 * v8++;
      *(&CreateInfo.SuccessState.ManifestSize + 2 * v15 + 1) = 393218;
      *(&v33 + 2 * v15) = 4;
      v35[2 * v15] = 0;
      v35[2 * v15 - 1] = v14;
    }
    if ( *(_DWORD *)(a5 + 24) )
    {
      v16 = 2 * v8++;
      *(&CreateInfo.SuccessState.ManifestSize + 2 * v16 + 1) = 131091;
      *(&v33 + 2 * v16) = 4;
      v35[2 * v16] = 0;
      v35[2 * v16 - 1] = a5 + 24;
    }
    v17 = *(_WORD *)(a5 + 2);
    if ( !v17 )
    {
      v19 = ProcessFlags | 0x100;
      goto LABEL_24;
    }
    v26 = v17 - 1;
    v18 = 2 * v8++;
    *(&CreateInfo.SuccessState.ManifestSize + 2 * v18 + 1) = 131085;
    *(&v33 + 2 * v18) = 2;
    v35[2 * v18] = 0;
    v35[2 * v18 - 1] = &v26;
  }
  v19 = ProcessFlags;
LABEL_24:
  if ( (v19 & 0x40) != 0 )
  {
    v20 = 2 * v8++;
    *(&CreateInfo.SuccessState.ManifestSize + 2 * v20 + 1) = 393233;
    *(&v33 + 2 * v20) = 1;
    v35[2 * v20] = 0;
    v35[2 * v20 - 1] = 97;
  }
  v21 = ProcessParameters;
  if ( ProcessParameters )
  {
    v22 = *((_DWORD *)ProcessParameters + 2);
    if ( v22 < 0 )
    {
      *((_DWORD *)ProcessParameters + 2) = v22 & 0x7FFFFFFF;
      v23 = 2 * v8++;
      v35[2 * v23] = 0;
      *(&CreateInfo.SuccessState.ManifestSize + 2 * v23 + 1) = 131090;
      *(&v33 + 2 * v23) = 8;
      v35[2 * v23 - 1] = v29;
    }
  }
  CreateInfo.SuccessState.ManifestSize = 16 * v8 + 4;
  return NtCreateUserProcess(
           a6 + 1,
           a6 + 2,
           0x2000000u,
           0x2000000u,
           &ProcessObjectAttributes,
           &ThreadObjectAttributes,
           v19,
           ThreadFlags,
           v21,
           &CreateInfo,
           (PPS_ATTRIBUTE_LIST)&CreateInfo.SuccessState.ManifestSize);
}
