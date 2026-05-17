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
        const void **a2,
        unsigned __int16 *a3,
        void **a4,
        void **a5,
        void ***a6,
        _DWORD *a7)
{
  void **v7; // ecx
  _BYTE *StringRoutine; // edi
  unsigned int v10; // ecx
  unsigned int v11; // edx
  int v12; // eax
  unsigned int v13; // eax
  unsigned __int16 v14; // ax
  _WORD *v15; // esi
  const void **v16; // ecx
  void *v17; // eax
  NTSTATUS v18; // eax
  volatile signed __int32 *v19; // ebx
  int v20; // esi
  void **v21; // esi
  __int16 v22; // bx
  void ***v23; // edx
  int v24; // eax
  _WORD *v25; // eax
  HANDLE v26; // eax
  int v28; // esi
  int v29; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+Ch] [ebp-278h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [esp+14h] [ebp-270h] BYREF
  _DWORD v32[3]; // [esp+2Ch] [ebp-258h] BYREF
  volatile signed __int32 *v33; // [esp+38h] [ebp-24Ch]
  unsigned int v34; // [esp+3Ch] [ebp-248h]
  int v35; // [esp+40h] [ebp-244h]
  int v36; // [esp+48h] [ebp-23Ch]
  void ***v37; // [esp+4Ch] [ebp-238h]
  void **v38; // [esp+50h] [ebp-234h]
  const void **v39; // [esp+54h] [ebp-230h]
  int v40; // [esp+58h] [ebp-22Ch] BYREF
  int v41; // [esp+5Ch] [ebp-228h]
  void **v42; // [esp+60h] [ebp-224h]
  HANDLE FileHandle; // [esp+64h] [ebp-220h] BYREF
  _DWORD *v44; // [esp+68h] [ebp-21Ch]
  unsigned __int8 v45; // [esp+6Fh] [ebp-215h]
  _BYTE Src[524]; // [esp+70h] [ebp-214h] BYREF

  v7 = a4;
  v38 = a4;
  v37 = a6;
  v44 = a7;
  FileHandle = 0;
  v35 = 0;
  StringRoutine = 0;
  v45 = 0;
  v40 = 0;
  v41 = 0;
  v36 = 0;
  v39 = (const void **)a3;
  v42 = a5;
  if ( a6 )
    *a6 = 0;
  if ( v44 )
  {
    *v44 = 0;
    v7 = v38;
  }
  if ( !a2 || !a3 || !v7 || !a5 || !a6 || !v44 )
  {
    DbgPrintEx(
      51,
      0,
      "SXS: %s() bad parameters\n"
      "SXS:  Flags:               0x%lx\n"
      "SXS:  Root:                %p\n"
      "SXS:  AssemblyDirectory:   %p\n"
      "SXS:  PreAllocatedString:  %p\n"
      "SXS:  DynamicString:       %p\n"
      "SXS:  StringUsed:          %p\n"
      "SXS:  OpenDirectoryHandle: %p\n",
      "RtlpProbeAssemblyStorageRootForAssembly",
      0,
      a2,
      a3,
      v7,
      a5,
      a6,
      v44);
    v20 = -1073741811;
    goto LABEL_26;
  }
  v10 = *(unsigned __int16 *)a2;
  v11 = v10;
  if ( (_WORD)v10 )
  {
    v12 = *((unsigned __int16 *)a2[1] + (v10 >> 1) - 1);
    LOWORD(v10) = *(_WORD *)a2;
    if ( (_WORD)v12 != 92 && v12 != 47 )
    {
      v45 = 1;
      v11 += 2;
    }
  }
  v13 = v11 + *a3 + 4;
  v34 = v13;
  if ( v13 > 0xFFFE )
  {
    DbgPrintEx(
      51,
      0,
      "SXS: Assembly storage resolution failing probe because combined path length does not fit in an UNICODE_STRING.\n");
    v20 = -1073741562;
    goto LABEL_31;
  }
  if ( v13 > 0x208 )
  {
    v28 = (unsigned __int16)v13;
    StringRoutine = (_BYTE *)NtdllpAllocateStringRoutine((unsigned __int16)v13);
    if ( !StringRoutine )
    {
      DbgPrintEx(
        51,
        0,
        "SXS: Assembly storage resolution failing probe because attempt to allocate %u bytes failed.\n",
        v28);
      v20 = -1073741801;
      goto LABEL_31;
    }
    v14 = *(_WORD *)a2;
  }
  else
  {
    StringRoutine = Src;
    v14 = v10;
  }
  memcpy(StringRoutine, a2[1], v14);
  v15 = &StringRoutine[*(unsigned __int16 *)a2];
  if ( v45 )
    *v15++ = 92;
  memcpy(v15, v39[1], *(unsigned __int16 *)v39);
  v16 = v39;
  *(_WORD *)((char *)v15 + *(unsigned __int16 *)v39) = 0;
  LOWORD(v35) = *(_WORD *)a2 + *(_WORD *)v16 + 2 * v45;
  if ( RtlDosPathNameToRelativeNtPathName_U((int)StringRoutine, (unsigned __int16 *)&v40, 0, v32) )
  {
    v36 = v41;
    if ( LOWORD(v32[0]) )
    {
      v40 = v32[0];
      v41 = v32[1];
      v17 = (void *)v32[2];
    }
    else
    {
      v17 = 0;
    }
    ObjectAttributes.RootDirectory = v17;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v40;
    ObjectAttributes.Length = 24;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    v18 = NtOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
    v19 = v33;
    v20 = v18;
    if ( v33 && !_InterlockedExchangeAdd(v33, 0xFFFFFFFF) )
    {
      NtClose(*((HANDLE *)v19 + 1));
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v19);
    }
    if ( v20 < 0 )
    {
      if ( v20 == -1073741809 || v20 == -1073741772 || v20 == -1073741766 )
        v20 = -1072365564;
      else
        DbgPrintEx(
          51,
          0,
          "SXS: Unable to open assembly directory under storage root \"%S\"; Status = 0x%08lx\n",
          (const wchar_t *)StringRoutine,
          v20);
    }
    else
    {
      v21 = v38;
      v22 = v34;
      if ( v34 <= *((unsigned __int16 *)v38 + 1) )
      {
        memcpy(v38[1], StringRoutine, (unsigned __int16)v35);
LABEL_25:
        v23 = v37;
        v24 = (unsigned __int16)v35;
        *v37 = v21;
        v25 = (char *)v21[1] + v24;
        *v25 = 92;
        v25[1] = 0;
        *(_WORD *)*v23 = v35 + 2;
        v26 = FileHandle;
        FileHandle = 0;
        v20 = 0;
        *v44 = v26;
        goto LABEL_26;
      }
      if ( StringRoutine != Src )
      {
        v21 = v42;
        v42[1] = StringRoutine;
        StringRoutine = 0;
LABEL_54:
        *((_WORD *)v21 + 1) = v22;
        goto LABEL_25;
      }
      v29 = NtdllpAllocateStringRoutine(v34);
      v21 = v42;
      v42[1] = (void *)v29;
      if ( v29 )
      {
        memcpy(v21[1], StringRoutine, (unsigned __int16)v35);
        goto LABEL_54;
      }
      v20 = -1073741801;
    }
LABEL_26:
    if ( v36 )
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v36);
    goto LABEL_28;
  }
  DbgPrintEx(
    51,
    0,
    "SXS: Attempt to translate DOS path name \"%S\" to NT format failed\n",
    (const wchar_t *)StringRoutine);
  v20 = -1073741766;
LABEL_28:
  if ( StringRoutine && StringRoutine != Src )
    RtlDeleteBoundaryDescriptor((int)StringRoutine);
LABEL_31:
  if ( FileHandle )
    NtClose(FileHandle);
  return v20;
}
