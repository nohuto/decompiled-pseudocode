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

int __fastcall RtlpResolveAssemblyStorageMapEntry(int a1, _DWORD *a2, unsigned int a3, int a4, int a5)
{
  int v5; // esi
  int v6; // ecx
  int v7; // eax
  char *v8; // ecx
  char *v9; // esi
  unsigned int v10; // eax
  char *v11; // eax
  unsigned int v12; // esi
  unsigned int v13; // edi
  _DWORD *v14; // eax
  int v15; // eax
  bool v16; // zf
  int v17; // eax
  const wchar_t *v19; // edi
  wchar_t *v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // esi
  int *v23; // ecx
  int v24; // eax
  int inserted; // eax
  void *v26; // eax
  NTSTATUS v27; // eax
  volatile signed __int32 *v28; // edi
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+10h] [ebp-4BCh] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [esp+18h] [ebp-4B4h] BYREF
  _DWORD v31[3]; // [esp+30h] [ebp-49Ch] BYREF
  volatile signed __int32 *v32; // [esp+3Ch] [ebp-490h]
  int v33; // [esp+40h] [ebp-48Ch]
  _DWORD v34[2]; // [esp+44h] [ebp-488h] BYREF
  int v35; // [esp+4Ch] [ebp-480h]
  _WORD v36[2]; // [esp+50h] [ebp-47Ch] BYREF
  char *v37; // [esp+54h] [ebp-478h]
  _DWORD *v38; // [esp+58h] [ebp-474h] BYREF
  unsigned int v39; // [esp+5Ch] [ebp-470h]
  _DWORD *v40; // [esp+60h] [ebp-46Ch]
  int v41; // [esp+64h] [ebp-468h] BYREF
  _BYTE *v42; // [esp+68h] [ebp-464h]
  char v43; // [esp+6Ch] [ebp-460h]
  unsigned int v44; // [esp+70h] [ebp-45Ch]
  char v45; // [esp+74h] [ebp-458h]
  int v46; // [esp+78h] [ebp-454h] BYREF
  int v47; // [esp+7Ch] [ebp-450h]
  int v48; // [esp+80h] [ebp-44Ch]
  _DWORD *v49; // [esp+84h] [ebp-448h]
  int v50; // [esp+88h] [ebp-444h] BYREF
  int StringRoutine; // [esp+8Ch] [ebp-440h]
  unsigned int v52; // [esp+90h] [ebp-43Ch]
  HANDLE Handle; // [esp+94h] [ebp-438h] BYREF
  int *v54; // [esp+98h] [ebp-434h] BYREF
  char v55; // [esp+9Fh] [ebp-42Dh]
  char v56; // [esp+A0h] [ebp-42Ch] BYREF
  _BYTE v57[540]; // [esp+2A8h] [ebp-224h] BYREF

  v48 = a5;
  v34[1] = &v56;
  v33 = a1;
  v55 = 0;
  Handle = 0;
  v5 = 0;
  v35 = 0;
  v34[0] = 34078720;
  v50 = 0;
  StringRoutine = 0;
  v46 = 0;
  v47 = 0;
  v49 = 0;
  if ( a1 && a2 && a3 && a3 <= *(_DWORD *)(a1 + 4) )
  {
    if ( !*(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * a3) )
    {
      _mm_lfence();
      v6 = a2[6];
      v7 = *(_DWORD *)((char *)a2 + v6 + 12) + 24 * a3;
      v8 = (char *)a2 + *(_DWORD *)((char *)a2 + v6 + 16);
      v9 = (char *)a2 + *(_DWORD *)((char *)a2 + v7 + 16);
      v10 = *((_DWORD *)v9 + 20);
      if ( v10 > 0xFFFE )
      {
        DbgPrintEx(
          51,
          0,
          "SXS: Assembly directory name stored in assembly information too long (%lu bytes) - ACTIVATION_CONTEXT_DATA at %p\n",
          v10,
          a2);
        v5 = -1073741562;
        goto LABEL_25;
      }
      if ( (v9[4] & 0x10) == 0 )
      {
        v54 = 0;
        v36[0] = *((_WORD *)v9 + 40);
        v36[1] = v36[0];
        v11 = &v8[*((_DWORD *)v9 + 21)];
        v38 = a2;
        v37 = v11;
        v39 = a3;
        v42 = v57;
        v40 = 0;
        v41 = 34996224;
        v43 = 0;
        v45 = 0;
        v44 = 0;
        RtlpAssemblyStorageMapResolutionDefaultCallback(1, (int)&v38, v48);
        if ( v45 )
        {
          v5 = -1073741536;
        }
        else
        {
          if ( !v43 )
          {
            v12 = v44;
            v13 = 0;
            v14 = v40;
            v49 = v40;
            v52 = v44;
            v55 = 1;
            if ( v44 )
            {
              while ( 1 )
              {
                v38 = v14;
                v42 = v57;
                v39 = v13;
                v41 = 34996224;
                LOWORD(v40) = 0;
                RtlpAssemblyStorageMapResolutionDefaultCallback(2, (int)&v38, v48);
                if ( (_BYTE)v40 )
                  break;
                if ( BYTE1(v40) )
                {
                  if ( !(_WORD)v41 )
                    goto LABEL_57;
                  v12 = v13 + 1;
                  v52 = v13 + 1;
                }
                if ( (_WORD)v41 )
                {
                  if ( Handle )
                  {
                    NtClose(Handle);
                    Handle = 0;
                  }
                  v15 = RtlpProbeAssemblyStorageRootForAssembly(v36, v34, &v50, &v54, &Handle);
                  v5 = v15;
                  if ( v15 >= 0 )
                  {
                    v12 = v52;
                    goto LABEL_18;
                  }
                  if ( v15 != -1072365564 )
                  {
                    DbgPrintEx(
                      51,
                      0,
                      "SXS: Attempt to probe assembly storage root %wZ for assembly directory %wZ failed with status = 0x%08lx\n",
                      &v41,
                      v36,
                      v15);
                    goto LABEL_24;
                  }
                  v12 = v52;
                }
                v16 = ++v13 == v12;
                if ( v13 >= v12 )
                  goto LABEL_19;
                v14 = v49;
              }
              v5 = -1073741536;
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
                "SXS: Unable to resolve storage root for assembly directory %wZ in %Iu tries\n",
                v36,
                v13);
              v5 = -1072365564;
LABEL_24:
              v38 = v49;
              RtlpAssemblyStorageMapResolutionDefaultCallback(4, (int)&v38, v48);
              goto LABEL_25;
            }
            goto LABEL_20;
          }
          v24 = RtlpProbeAssemblyStorageRootForAssembly(v36, v34, &v50, &v54, &Handle);
          v5 = v24;
          if ( v24 >= 0 )
          {
            inserted = RtlpInsertAssemblyStorageMapEntry(&v41, &Handle);
            v5 = inserted;
            if ( inserted < 0 )
              DbgPrintEx(
                51,
                0,
                "SXS: Attempt to insert well known storage root into assembly storage map assembly roster index %lu faile"
                "d; Status = 0x%08lx\n",
                a3,
                inserted);
            else
              v5 = 0;
          }
          else
          {
            DbgPrintEx(
              51,
              0,
              "SXS: Attempt to probe known root of assembly storage (\"%wZ\") failed; Status = 0x%08lx\n",
              &v41,
              v24);
          }
        }
        goto LABEL_25;
      }
      v54 = v34;
      v19 = (const wchar_t *)&v8[*((_DWORD *)v9 + 6)];
      if ( v19 )
      {
        v20 = wcsrchr(v19, 0x5Cu);
        if ( v20 )
        {
          v21 = (unsigned __int16)(2 * (v20 - v19) + 4);
          v52 = v21;
          v22 = (unsigned __int16)v21;
          if ( (unsigned __int16)v21 <= 0x208u )
          {
            v23 = v54;
          }
          else
          {
            HIWORD(v50) = v21;
            StringRoutine = NtdllpAllocateStringRoutine((unsigned __int16)v21);
            if ( !StringRoutine )
            {
              v5 = -1073741801;
LABEL_27:
              if ( Handle )
                NtClose(Handle);
              if ( v35 )
                RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v35);
              return v5;
            }
            v23 = &v50;
            v54 = &v50;
          }
          memcpy((void *)v23[1], v19, v22 - 2);
          *(_WORD *)(v54[1] + 2 * (v22 >> 1) - 2) = 0;
          *(_WORD *)v54 = v52 - 2;
LABEL_20:
          if ( Handle )
            goto LABEL_21;
          if ( !RtlDosPathNameToRelativeNtPathName_U(v54[1], (unsigned __int16 *)&v46, 0, v31) )
          {
            DbgPrintEx(
              51,
              0,
              "SXS: Attempt to translate DOS path name \"%S\" to NT format failed\n",
              (const wchar_t *)v54[1]);
            v5 = -1073741766;
            goto LABEL_23;
          }
          v35 = v47;
          if ( LOWORD(v31[0]) )
          {
            v46 = v31[0];
            v47 = v31[1];
            v26 = (void *)v31[2];
          }
          else
          {
            v26 = 0;
          }
          ObjectAttributes.SecurityDescriptor = 0;
          ObjectAttributes.SecurityQualityOfService = 0;
          ObjectAttributes.RootDirectory = v26;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&v46;
          ObjectAttributes.Length = 24;
          ObjectAttributes.Attributes = 64;
          v27 = NtOpenFile(&Handle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
          v28 = v32;
          v5 = v27;
          if ( v32 && !_InterlockedExchangeAdd(v32, 0xFFFFFFFF) )
          {
            NtClose(*((HANDLE *)v28 + 1));
            RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v28);
          }
          if ( v5 >= 0 )
          {
LABEL_21:
            v17 = RtlpInsertAssemblyStorageMapEntry(v54, &Handle);
            v5 = v17;
            if ( v17 < 0 )
              DbgPrintEx(
                51,
                0,
                "SXS: Storage resolution failed to insert entry to storage map; Status = 0x%08lx\n",
                v17);
            else
              v5 = 0;
          }
          else
          {
            DbgPrintEx(
              51,
              0,
              "SXS: Unable to open assembly directory under storage root \"%S\"; Status = 0x%08lx\n",
              (const wchar_t *)v54[1],
              v5);
          }
LABEL_23:
          if ( !v55 )
            goto LABEL_25;
          goto LABEL_24;
        }
        v5 = -1073741595;
LABEL_25:
        if ( StringRoutine )
          RtlDeleteBoundaryDescriptor(StringRoutine);
        goto LABEL_27;
      }
      return -1073741595;
    }
    return v5;
  }
  return sub_4B322305(a3, a4, a5);
}
