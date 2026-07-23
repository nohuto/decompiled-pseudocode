/*
 * XREFs of _AvrfMiniLoadDll@20 @ 0x4B3397A2
 * Callers:
 *     _AVrfInitializeVerifier@24 @ 0x4B338523 (_AVrfInitializeVerifier@24.c)
 * Callees:
 *     _LdrpGetProcedureAddress@16 @ 0x4B2A6260 (_LdrpGetProcedureAddress@16.c)
 *     _LdrpPrepareImportAddressTableForSnap@4 @ 0x4B2B9C01 (_LdrpPrepareImportAddressTableForSnap@4.c)
 *     _RtlInsertInvertedFunctionTable@8 @ 0x4B2B9D0A (_RtlInsertInvertedFunctionTable@8.c)
 *     _LdrInitSecurityCookie@20 @ 0x4B2B9EDA (_LdrInitSecurityCookie@20.c)
 *     _RtlImageNtHeader@4 @ 0x4B2BB8E0 (_RtlImageNtHeader@4.c)
 *     _RtlImageDirectoryEntryToData@16 @ 0x4B2BDDE0 (_RtlImageDirectoryEntryToData@16.c)
 *     _LdrpCallInitRoutine@16 @ 0x4B2CDCA1 (_LdrpCallInitRoutine@16.c)
 *     _LdrpLogDllState@12 @ 0x4B2CDF06 (_LdrpLogDllState@12.c)
 *     _LdrpCfgProcessLoadConfig@12 @ 0x4B2CFEA0 (_LdrpCfgProcessLoadConfig@12.c)
 *     _LdrControlFlowGuardEnforcedWithExportSuppression@0 @ 0x4B2D00AD (_LdrControlFlowGuardEnforcedWithExportSuppression@0.c)
 *     _RtlpStkMarkDllRange@4 @ 0x4B2D07C5 (_RtlpStkMarkDllRange@4.c)
 *     _LdrpGenRandom@0 @ 0x4B2D085D (_LdrpGenRandom@0.c)
 *     _RtlAppendUnicodeStringToString@8 @ 0x4B2D10A0 (_RtlAppendUnicodeStringToString@8.c)
 *     _RtlCopyUnicodeString@8 @ 0x4B2D5EF0 (_RtlCopyUnicodeString@8.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _NtOpenFile@24 @ 0x4B2F2CB0 (_NtOpenFile@24.c)
 *     _ZwQueryAttributesFile@8 @ 0x4B2F2D50 (_ZwQueryAttributesFile@8.c)
 *     _NtCreateSection@28 @ 0x4B2F2E20 (_NtCreateSection@28.c)
 *     _ZwProtectVirtualMemory@20 @ 0x4B2F2E80 (_ZwProtectVirtualMemory@20.c)
 *     _ZwQuerySection@20 @ 0x4B2F2E90 (_ZwQuerySection@20.c)
 *     _ZwOpenDirectoryObject@12 @ 0x4B2F2F00 (_ZwOpenDirectoryObject@12.c)
 *     _NtOpenSymbolicLinkObject@12 @ 0x4B2F3C50 (_NtOpenSymbolicLinkObject@12.c)
 *     _ZwQuerySymbolicLinkObject@12 @ 0x4B2F3F60 (_ZwQuerySymbolicLinkObject@12.c)
 *     _NtSystemDebugControl@24 @ 0x4B2F4550 (_NtSystemDebugControl@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _LdrpUnsuppressAddressTakenIat@12 @ 0x4B3345D2 (_LdrpUnsuppressAddressTakenIat@12.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 */

NTSTATUS __fastcall AvrfMiniLoadDll(int a1, int a2, int a3, void *a4, int a5)
{
  _DWORD *v5; // esi
  NTSTATUS appended; // ebx
  NTSTATUS v7; // eax
  NTSTATUS v8; // eax
  struct _TEB *v9; // edi
  void *ArbitraryUserPointer; // esi
  PIMAGE_NT_HEADERS v11; // eax
  unsigned int TimeDateStamp; // eax
  int v13; // eax
  unsigned int v14; // edi
  _WORD *i; // edx
  _WORD *v16; // edx
  __int16 v17; // cx
  int v18; // edi
  DWORD AddressOfEntryPoint; // eax
  int v20; // eax
  NTSTATUS v21; // eax
  _DWORD *v22; // eax
  int v23; // edi
  int v24; // eax
  _WORD *v25; // ecx
  int v26; // ecx
  int v27; // eax
  int v28; // edx
  int v29; // ecx
  _DWORD *v30; // edx
  _DWORD *v31; // ecx
  int v32; // ecx
  SIZE_T v34; // [esp-14h] [ebp-3B0h]
  size_t v35; // [esp-4h] [ebp-3A0h]
  size_t v36; // [esp-4h] [ebp-3A0h]
  ULONG v37; // [esp+0h] [ebp-39Ch]
  PSIZE_T v38; // [esp+0h] [ebp-39Ch]
  ULONG v39; // [esp+4h] [ebp-398h]
  _DWORD v40[8]; // [esp+10h] [ebp-38Ch] BYREF
  _DWORD *v41; // [esp+30h] [ebp-36Ch]
  PVOID v42; // [esp+4Ch] [ebp-350h] BYREF
  ULONG_PTR RegionSize[2]; // [esp+50h] [ebp-34Ch] BYREF
  ULONG NewProtect; // [esp+60h] [ebp-33Ch]
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+80h] [ebp-31Ch] BYREF
  _UNICODE_STRING Source; // [esp+88h] [ebp-314h] BYREF
  _UNICODE_STRING v47; // [esp+90h] [ebp-30Ch] BYREF
  _UNICODE_STRING DestinationString; // [esp+98h] [ebp-304h] BYREF
  ULONG OldProtect; // [esp+A0h] [ebp-2FCh] BYREF
  ULONG v50; // [esp+A4h] [ebp-2F8h] BYREF
  _DWORD v51[8]; // [esp+A8h] [ebp-2F4h] BYREF
  ULONG *v52; // [esp+C8h] [ebp-2D4h]
  _DWORD *v53; // [esp+CCh] [ebp-2D0h]
  _DWORD *v54; // [esp+D0h] [ebp-2CCh]
  int v55; // [esp+D4h] [ebp-2C8h]
  PVOID v56; // [esp+D8h] [ebp-2C4h]
  int (__stdcall *v57)(unsigned __int16, unsigned __int16); // [esp+DCh] [ebp-2C0h]
  int (__stdcall *v58)(int); // [esp+E0h] [ebp-2BCh]
  void *v59; // [esp+E4h] [ebp-2B8h]
  int (__stdcall *v60)(PVOID); // [esp+E8h] [ebp-2B4h]
  int (__stdcall *v61)(PRTL_SRWLOCK, int); // [esp+ECh] [ebp-2B0h]
  _DWORD (__stdcall *v62)(_DWORD, _DWORD); // [esp+F0h] [ebp-2ACh]
  _UNICODE_STRING InputBuffer; // [esp+FCh] [ebp-2A0h] BYREF
  int v64; // [esp+104h] [ebp-298h]
  int v65; // [esp+108h] [ebp-294h]
  ULONG Size; // [esp+10Ch] [ebp-290h] BYREF
  int SectionInformation; // [esp+110h] [ebp-28Ch] BYREF
  int v68; // [esp+114h] [ebp-288h] BYREF
  PVOID BaseOfImage; // [esp+118h] [ebp-284h]
  PIMAGE_NT_HEADERS v70; // [esp+11Ch] [ebp-280h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+120h] [ebp-27Ch] BYREF
  _DWORD *v72; // [esp+138h] [ebp-264h] BYREF
  HANDLE LinkHandle; // [esp+13Ch] [ebp-260h] BYREF
  HANDLE DirectoryHandle; // [esp+140h] [ebp-25Ch] BYREF
  HANDLE FileHandle; // [esp+144h] [ebp-258h] BYREF
  _DWORD *v76; // [esp+148h] [ebp-254h]
  HANDLE SectionHandle; // [esp+14Ch] [ebp-250h] BYREF
  _WORD *j; // [esp+150h] [ebp-24Ch] BYREF
  PVOID BaseAddress; // [esp+154h] [ebp-248h] BYREF
  _UNICODE_STRING LinkTarget; // [esp+158h] [ebp-244h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [esp+160h] [ebp-23Ch] BYREF
  _WORD v82[4]; // [esp+188h] [ebp-214h] BYREF
  _BYTE v83[516]; // [esp+190h] [ebp-20Ch] BYREF

  v5 = (_DWORD *)a5;
  v64 = a3;
  BaseOfImage = a4;
  v65 = a2;
  v76 = (_DWORD *)a5;
  DirectoryHandle = 0;
  LinkHandle = 0;
  SectionHandle = 0;
  FileHandle = 0;
  BaseAddress = 0;
  v68 = 0;
  v72 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\KnownDlls32");
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  appended = ZwOpenDirectoryObject(&DirectoryHandle, 3u, &ObjectAttributes);
  if ( appended < 0 )
    goto LABEL_65;
  RtlInitUnicodeString(&v47, L"KnownDllPath");
  ObjectAttributes.RootDirectory = DirectoryHandle;
  ObjectAttributes.ObjectName = &v47;
  ObjectAttributes.Length = 24;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  appended = NtOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
  if ( appended < 0 )
    goto LABEL_65;
  v82[1] = 63;
  v82[2] = 63;
  LinkTarget.Buffer = (wchar_t *)v83;
  v82[0] = 92;
  v82[3] = 92;
  *(_DWORD *)&LinkTarget.Length = 0x2000000;
  appended = ZwQuerySymbolicLinkObject(LinkHandle, &LinkTarget, 0);
  if ( appended < 0 )
    goto LABEL_65;
  LinkTarget.Buffer = v82;
  LinkTarget.Length += 8;
  LinkTarget.MaximumLength += 8;
  RtlInitUnicodeString(&Source, L"\\");
  appended = RtlAppendUnicodeStringToString(&LinkTarget, &Source);
  if ( appended < 0 )
    goto LABEL_65;
  appended = RtlAppendUnicodeStringToString(&LinkTarget, &VerifierDllString);
  if ( appended < 0 )
    goto LABEL_65;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x40000) != 0 )
  {
    InputBuffer = LinkTarget;
    NtSystemDebugControl(SysDbgKdPullRemoteFile, &InputBuffer, 8u, 0, 0, 0);
  }
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &LinkTarget;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  v7 = ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
  if ( v7 < 0 && v7 != -1073741757 && v7 != -1073741790 )
    goto LABEL_11;
  v8 = NtOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
  appended = v8;
  if ( v8 < 0 )
  {
    if ( v8 == -1073741772 )
    {
LABEL_11:
      appended = -1073741515;
      goto LABEL_65;
    }
    goto LABEL_65;
  }
  appended = NtCreateSection(&SectionHandle, 0xDu, 0, 0, 0x10u, 0x1000000u, FileHandle);
  if ( appended < 0 )
    goto LABEL_65;
  *(_WORD *)(a5 + 212) = 0;
  *(_WORD *)(a5 + 214) = 520;
  *(_DWORD *)(a5 + 216) = a5 + 220;
  LinkTarget.Buffer = (wchar_t *)v83;
  LinkTarget.Length -= 8;
  LinkTarget.MaximumLength -= 8;
  RtlCopyUnicodeString((PUNICODE_STRING)(a5 + 212), &LinkTarget);
  v9 = NtCurrentTeb();
  ArbitraryUserPointer = v9->NtTib.ArbitraryUserPointer;
  v9->NtTib.ArbitraryUserPointer = LinkTarget.Buffer;
  HIDWORD(v34) = &v68;
  LODWORD(v34) = 0;
  appended = ZwMapViewOfSection(
               SectionHandle,
               (HANDLE)0xFFFFFFFF,
               &BaseAddress,
               0LL,
               v34,
               (PLARGE_INTEGER)1,
               (PSIZE_T)0x800000,
               ViewUnmap,
               v37,
               v39);
  v9->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
  if ( appended < 0 )
  {
    v5 = v76;
    goto LABEL_65;
  }
  v11 = RtlImageNtHeader(BaseAddress);
  v5 = v76;
  v70 = v11;
  if ( !v11 )
  {
LABEL_18:
    appended = -1073741701;
    goto LABEL_65;
  }
  v76[6] = BaseAddress;
  v5[8] = v11->OptionalHeader.SizeOfImage;
  TimeDateStamp = v11->FileHeader.TimeDateStamp;
  v5[19] = 0;
  v5[17] = TimeDateStamp;
  v5[9] = v5[53];
  v13 = v5[54];
  v5[13] = 0;
  v5[10] = v13;
  v14 = v5[10];
  j = v5 + 9;
  for ( i = (_WORD *)(v14 + 2 * ((*((unsigned __int16 *)v5 + 18) >> 1) - 1)); (unsigned int)i > v14; --i )
  {
    if ( *i == 92 )
      goto LABEL_24;
  }
  if ( *i == 92 )
  {
LABEL_24:
    v16 = i + 1;
    v5[12] = v16;
    v17 = ((_WORD)v16 - v14) & 0xFFFE;
    *((_WORD *)v5 + 22) = *j - v17;
    *((_WORD *)v5 + 23) = *((_WORD *)v5 + 19) - v17;
    goto LABEL_26;
  }
  v5[11] = v5[9];
  v5[12] = v14;
LABEL_26:
  v18 = (int)v70;
  AddressOfEntryPoint = v70->OptionalHeader.AddressOfEntryPoint;
  if ( AddressOfEntryPoint )
    AddressOfEntryPoint += (DWORD)BaseAddress;
  v5[7] = AddressOfEntryPoint;
  LODWORD(v35) = 44;
  v5[32] = *(_DWORD *)(v18 + 52);
  v5[20] = v5 + 42;
  memset(v5 + 42, 0, v35);
  v5[21] = v5 + 42;
  v5[22] = v5 + 42;
  v5[42] = v5 + 21;
  v5[43] = v5 + 21;
  v5[39] = 2;
  v20 = v5[42];
  v5[45] = -1;
  *(_WORD *)(v20 - 28) = -1;
  v21 = ZwQuerySection(SectionHandle, SectionRelocationInformation, &SectionInformation, 4uLL, v38);
  if ( v21 < 0 )
  {
    appended = v21;
    goto LABEL_65;
  }
  if ( SectionInformation )
    v5[32] -= SectionInformation;
  if ( (*(_WORD *)(v18 + 22) & 0x2000) != 0 )
    v5[13] |= 4u;
  if ( (v5[13] & 4) == 0 )
    v5[7] = 0;
  if ( RtlImageDirectoryEntryToData((PVOID)v5[6], 1u, 9u, &Size) && Size )
  {
    DbgPrintEx(93, 0, (int)"AVRF: Verifier .dlls must not have thread locals\n", SHIDWORD(v36));
    __debugbreak();
LABEL_39:
    appended = -1073741701;
    goto LABEL_65;
  }
  v22 = RtlImageDirectoryEntryToData((PVOID)v5[6], 1u, 1u, &v50);
  if ( !v22 )
    goto LABEL_39;
  v23 = v5[6] + *v22;
  j = (_WORD *)(v5[6] + v22[4]);
  if ( *(_DWORD *)v23 )
  {
    LODWORD(v36) = 108;
    memset(v40, 0, v36);
    v41 = v5;
    appended = LdrpPrepareImportAddressTableForSnap(v40);
    if ( appended < 0 )
      goto LABEL_65;
    if ( v42 )
    {
      v24 = *(_DWORD *)v23;
      v25 = (_WORD *)((char *)j - v23);
      for ( j = (_WORD *)((char *)j - v23); ; v25 = j )
      {
        appended = LdrpGetProcedureAddress(
                     (char *)BaseOfImage,
                     (const char *)(v24 + v5[6] + 2),
                     0,
                     (char **)((char *)v25 + v23));
        if ( appended < 0 )
          break;
        v23 += 4;
        v24 = *(_DWORD *)v23;
        if ( !*(_DWORD *)v23 )
        {
          ZwProtectVirtualMemory((HANDLE)0xFFFFFFFF, &v42, RegionSize, NewProtect, &OldProtect);
          if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
            appended = LdrpUnsuppressAddressTakenIat((PVOID)v41[6], 0, 0);
          if ( appended < 0 )
            goto LABEL_65;
          goto LABEL_51;
        }
      }
      goto LABEL_65;
    }
    goto LABEL_18;
  }
LABEL_51:
  v26 = v5[13];
  if ( (v26 & 0x2004) == 4 )
  {
    j = 0;
    v27 = LdrpGenRandom();
    LdrInitSecurityCookie((void *)v5[6], 0, dword_4B3A92E0 ^ v27, &j);
    appended = LdrpCfgProcessLoadConfig(v5, (int)v70, (int)j);
    if ( appended < 0 )
      goto LABEL_65;
    v5[13] |= 0x2000u;
    v26 = v5[13];
  }
  if ( (v26 & 0x200) == 0 )
  {
    RtlInsertInvertedFunctionTable(BaseAddress, v5[8]);
    v5[13] |= 0x200u;
  }
  v28 = v5[6];
  v29 = v5[7];
  v51[4] = v65;
  v55 = v64;
  v56 = BaseOfImage;
  v72 = v51;
  v51[0] = 76;
  v51[1] = RtlpGetStackTraceAddress;
  v57 = RtlpGetStackTraceAddressEx;
  v51[2] = AVrfInternalHeapFreeNotification;
  v51[3] = RtlLogStackTrace;
  v58 = RtlReleaseStackTrace;
  v59 = &RtlStdInitializeStackDatabase;
  v60 = RtlStdDeleteStackDatabase;
  v61 = RtlStdLogStackTrace;
  v62 = RtlStdReleaseStackTrace;
  v51[5] = RtlCommitDebugInfo;
  v51[6] = RtlSetProcessDebugInformation;
  v51[7] = RtlQueryImageFileExecutionOptions;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  if ( LdrpCallInitRoutine(v29, v28, 5, (int)&v72) && v72 == v51 && (v30 = v54) != 0 && *v54 == 44 && v53 && *v53 == 88 )
  {
    qmemcpy(&dword_4B3A3744, v53, 0x58u);
    v5 = v76;
    v31 = v76;
    RtlpDebugPageHeapTable = v52;
    v54[5] = AVrfpVerifierFlags;
    v30[6] = AVrfpDebug;
    RtlpStkMarkDllRange(v31);
    v32 = v5[6];
    BaseAddress = 0;
    LdrpLogDllState(v32, (int)(v5 + 9), 5294);
    v5[50] = 9;
  }
  else
  {
    appended = -1073741502;
  }
LABEL_65:
  if ( BaseAddress )
  {
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, BaseAddress);
    v5[6] = 0;
  }
  if ( FileHandle )
    NtClose(FileHandle);
  if ( SectionHandle )
    NtClose(SectionHandle);
  if ( DirectoryHandle )
    NtClose(DirectoryHandle);
  if ( LinkHandle )
    NtClose(LinkHandle);
  return appended;
}
