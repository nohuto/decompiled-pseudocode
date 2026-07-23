/*
 * XREFs of _RtlpResolveAssemblyStorageMapEntry@20 @ 0x4B2E28E9
 * Callers:
 *     _RtlGetAssemblyStorageRoot@24 @ 0x4B2E2564 (_RtlGetAssemblyStorageRoot@24.c)
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _RtlDosPathNameToRelativeNtPathName_U@16 @ 0x4B2D1BE0 (_RtlDosPathNameToRelativeNtPathName_U@16.c)
 *     _RtlpAssemblyStorageMapResolutionDefaultCallback@12 @ 0x4B2E2BE0 (_RtlpAssemblyStorageMapResolutionDefaultCallback@12.c)
 *     _RtlpInsertAssemblyStorageMapEntry@16 @ 0x4B2E2D8C (_RtlpInsertAssemblyStorageMapEntry@16.c)
 *     _RtlpProbeAssemblyStorageRootForAssembly@28 @ 0x4B2E2E88 (_RtlpProbeAssemblyStorageRootForAssembly@28.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtOpenFile@24 @ 0x4B2F2CB0 (_NtOpenFile@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _wcsrchr @ 0x4B2FA900 (_wcsrchr.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 */

int __fastcall RtlpResolveAssemblyStorageMapEntry(int a1, int a2, unsigned int a3, int a4, int a5)
{
  int inserted; // esi
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // esi
  unsigned int v10; // eax
  int v11; // eax
  unsigned int v12; // esi
  unsigned int v13; // edi
  int v14; // eax
  int v15; // eax
  bool v16; // zf
  int v17; // eax
  const wchar_t *v19; // edi
  wchar_t *v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // esi
  int *v23; // ecx
  HANDLE ContainingDirectory; // eax
  NTSTATUS v25; // eax
  PRTLP_CURDIR_REF CurDirRef; // edi
  size_t v27; // [esp-4h] [ebp-4D0h]
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+10h] [ebp-4BCh] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+18h] [ebp-4B4h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [esp+30h] [ebp-49Ch] BYREF
  int v31; // [esp+40h] [ebp-48Ch]
  _DWORD v32[2]; // [esp+44h] [ebp-488h] BYREF
  PVOID BaseAddress; // [esp+4Ch] [ebp-480h]
  int v34; // [esp+50h] [ebp-47Ch] BYREF
  int v35; // [esp+54h] [ebp-478h]
  int v36; // [esp+58h] [ebp-474h] BYREF
  unsigned int v37; // [esp+5Ch] [ebp-470h]
  int v38; // [esp+60h] [ebp-46Ch]
  int v39; // [esp+64h] [ebp-468h] BYREF
  _BYTE *v40; // [esp+68h] [ebp-464h]
  char v41; // [esp+6Ch] [ebp-460h]
  unsigned int v42; // [esp+70h] [ebp-45Ch]
  char v43; // [esp+74h] [ebp-458h]
  _UNICODE_STRING NtFileName; // [esp+78h] [ebp-454h] BYREF
  int v45; // [esp+80h] [ebp-44Ch]
  int v46; // [esp+84h] [ebp-448h]
  int v47; // [esp+88h] [ebp-444h] BYREF
  POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor; // [esp+8Ch] [ebp-440h]
  unsigned int v49; // [esp+90h] [ebp-43Ch]
  HANDLE Handle; // [esp+94h] [ebp-438h] BYREF
  int *v51; // [esp+98h] [ebp-434h] BYREF
  char v52; // [esp+9Fh] [ebp-42Dh]
  char v53; // [esp+A0h] [ebp-42Ch] BYREF
  _BYTE v54[540]; // [esp+2A8h] [ebp-224h] BYREF

  v45 = a5;
  v32[1] = &v53;
  v31 = a1;
  v52 = 0;
  Handle = 0;
  inserted = 0;
  BaseAddress = 0;
  v32[0] = 34078720;
  v47 = 0;
  BoundaryDescriptor = 0;
  *(_DWORD *)&NtFileName.Length = 0;
  NtFileName.Buffer = 0;
  v46 = 0;
  if ( a1 && a2 && a3 && a3 <= *(_DWORD *)(a1 + 4) )
  {
    if ( !*(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * a3) )
    {
      _mm_lfence();
      v6 = *(_DWORD *)(a2 + 24);
      v7 = *(_DWORD *)(v6 + a2 + 12) + 24 * a3;
      v8 = a2 + *(_DWORD *)(v6 + a2 + 16);
      v9 = a2 + *(_DWORD *)(v7 + a2 + 16);
      v10 = *(_DWORD *)(v9 + 80);
      if ( v10 > 0xFFFE )
      {
        DbgPrintEx(
          51,
          0,
          (int)"SXS: Assembly directory name stored in assembly information too long (%lu bytes) - ACTIVATION_CONTEXT_DATA at %p\n",
          v10);
        inserted = -1073741562;
        goto LABEL_25;
      }
      if ( (*(_BYTE *)(v9 + 4) & 0x10) == 0 )
      {
        v51 = 0;
        LOWORD(v34) = *(_WORD *)(v9 + 80);
        HIWORD(v34) = v34;
        v11 = v8 + *(_DWORD *)(v9 + 84);
        v36 = a2;
        v35 = v11;
        v37 = a3;
        v40 = v54;
        v38 = 0;
        v39 = 34996224;
        v41 = 0;
        v43 = 0;
        v42 = 0;
        RtlpAssemblyStorageMapResolutionDefaultCallback(1, &v36, v45);
        if ( v43 )
        {
          inserted = -1073741536;
        }
        else
        {
          if ( !v41 )
          {
            v12 = v42;
            v13 = 0;
            v14 = v38;
            v46 = v38;
            v49 = v42;
            v52 = 1;
            if ( v42 )
            {
              while ( 1 )
              {
                v36 = v14;
                v40 = v54;
                v37 = v13;
                v39 = 34996224;
                LOWORD(v38) = 0;
                RtlpAssemblyStorageMapResolutionDefaultCallback(2, &v36, v45);
                if ( (_BYTE)v38 )
                  break;
                if ( BYTE1(v38) )
                {
                  if ( !(_WORD)v39 )
                    goto LABEL_57;
                  v12 = v13 + 1;
                  v49 = v13 + 1;
                }
                if ( (_WORD)v39 )
                {
                  if ( Handle )
                  {
                    NtClose(Handle);
                    Handle = 0;
                  }
                  v15 = RtlpProbeAssemblyStorageRootForAssembly(&v34, v32, &v47, &v51, &Handle);
                  inserted = v15;
                  if ( v15 >= 0 )
                  {
                    v12 = v49;
                    goto LABEL_18;
                  }
                  if ( v15 != -1072365564 )
                  {
                    DbgPrintEx(
                      51,
                      0,
                      (int)"SXS: Attempt to probe assembly storage root %wZ for assembly directory %wZ failed with status = 0x%08lx\n",
                      (int)&v39);
                    goto LABEL_24;
                  }
                  v12 = v49;
                }
                v16 = ++v13 == v12;
                if ( v13 >= v12 )
                  goto LABEL_19;
                v14 = v46;
              }
              inserted = -1073741536;
              goto LABEL_24;
            }
LABEL_18:
            v16 = v13 == v12;
LABEL_19:
            if ( v16 )
            {
LABEL_57:
              DbgPrintEx(
                51,
                0,
                (int)"SXS: Unable to resolve storage root for assembly directory %wZ in %Iu tries\n",
                (int)&v34);
              inserted = -1072365564;
LABEL_24:
              v36 = v46;
              RtlpAssemblyStorageMapResolutionDefaultCallback(4, &v36, v45);
              goto LABEL_25;
            }
            goto LABEL_20;
          }
          inserted = RtlpProbeAssemblyStorageRootForAssembly(&v34, v32, &v47, &v51, &Handle);
          if ( inserted >= 0 )
          {
            inserted = RtlpInsertAssemblyStorageMapEntry(&v39, &Handle);
            if ( inserted < 0 )
              DbgPrintEx(
                51,
                0,
                (int)"SXS: Attempt to insert well known storage root into assembly storage map assembly roster index %lu "
                     "failed; Status = 0x%08lx\n",
                a3);
            else
              inserted = 0;
          }
          else
          {
            DbgPrintEx(
              51,
              0,
              (int)"SXS: Attempt to probe known root of assembly storage (\"%wZ\") failed; Status = 0x%08lx\n",
              (int)&v39);
          }
        }
        goto LABEL_25;
      }
      v51 = v32;
      v19 = (const wchar_t *)(v8 + *(_DWORD *)(v9 + 24));
      if ( v19 )
      {
        v20 = wcsrchr(v19, 0x5Cu);
        if ( v20 )
        {
          v21 = (unsigned __int16)(2 * (v20 - v19) + 4);
          v49 = v21;
          v22 = (unsigned __int16)v21;
          if ( (unsigned __int16)v21 <= 0x208u )
          {
            v23 = v51;
          }
          else
          {
            HIWORD(v47) = v21;
            BoundaryDescriptor = (POBJECT_BOUNDARY_DESCRIPTOR)NtdllpAllocateStringRoutine((unsigned __int16)v21);
            if ( !BoundaryDescriptor )
            {
              inserted = -1073741801;
LABEL_27:
              if ( Handle )
                NtClose(Handle);
              if ( BaseAddress )
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
              return inserted;
            }
            v23 = &v47;
            v51 = &v47;
          }
          LODWORD(v27) = v22 - 2;
          memcpy((void *)v23[1], v19, v27);
          *(_WORD *)(v51[1] + 2 * (v22 >> 1) - 2) = 0;
          *(_WORD *)v51 = v49 - 2;
LABEL_20:
          if ( Handle )
            goto LABEL_21;
          if ( !RtlDosPathNameToRelativeNtPathName_U((PCWSTR)v51[1], &NtFileName, 0, &RelativeName) )
          {
            DbgPrintEx(51, 0, (int)"SXS: Attempt to translate DOS path name \"%S\" to NT format failed\n", v51[1]);
            inserted = -1073741766;
            goto LABEL_23;
          }
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
          ObjectAttributes.SecurityDescriptor = 0;
          ObjectAttributes.SecurityQualityOfService = 0;
          ObjectAttributes.RootDirectory = ContainingDirectory;
          ObjectAttributes.ObjectName = &NtFileName;
          ObjectAttributes.Length = 24;
          ObjectAttributes.Attributes = 64;
          v25 = NtOpenFile(&Handle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
          CurDirRef = RelativeName.CurDirRef;
          inserted = v25;
          if ( RelativeName.CurDirRef && !_InterlockedExchangeAdd(&RelativeName.CurDirRef->ReferenceCount, 0xFFFFFFFF) )
          {
            NtClose(CurDirRef->DirectoryHandle);
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, CurDirRef);
          }
          if ( inserted >= 0 )
          {
LABEL_21:
            v17 = RtlpInsertAssemblyStorageMapEntry(v51, &Handle);
            inserted = v17;
            if ( v17 < 0 )
              DbgPrintEx(
                51,
                0,
                (int)"SXS: Storage resolution failed to insert entry to storage map; Status = 0x%08lx\n",
                v17);
            else
              inserted = 0;
          }
          else
          {
            DbgPrintEx(
              51,
              0,
              (int)"SXS: Unable to open assembly directory under storage root \"%S\"; Status = 0x%08lx\n",
              v51[1]);
          }
LABEL_23:
          if ( !v52 )
            goto LABEL_25;
          goto LABEL_24;
        }
        inserted = -1073741595;
LABEL_25:
        if ( BoundaryDescriptor )
          RtlDeleteBoundaryDescriptor(BoundaryDescriptor);
        goto LABEL_27;
      }
      return -1073741595;
    }
    return inserted;
  }
  return sub_4B322305(0, a3, a4, a5);
}
