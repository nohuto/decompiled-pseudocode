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

int __fastcall AvrfMiniLoadDll(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int SymbolicLinkObject; // ebx
  int AttributesFile; // eax
  NTSTATUS v8; // eax
  struct _TEB *v9; // edi
  void *ArbitraryUserPointer; // esi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // edi
  _WORD *i; // edx
  _WORD *v16; // edx
  __int16 v17; // cx
  unsigned int v18; // edi
  int v19; // eax
  int v20; // eax
  int Section; // eax
  void *v22; // ecx
  void *v23; // ecx
  _DWORD *v24; // eax
  int v25; // edi
  int v26; // eax
  _WORD *v27; // ecx
  int v28; // ecx
  int v29; // eax
  int v30; // edx
  int v31; // ecx
  _DWORD *v32; // edx
  _DWORD *v33; // ecx
  int v34; // ecx
  int v36[28]; // [esp+10h] [ebp-38Ch] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+80h] [ebp-31Ch] BYREF
  UNICODE_STRING v38; // [esp+88h] [ebp-314h] BYREF
  UNICODE_STRING v39; // [esp+90h] [ebp-30Ch] BYREF
  UNICODE_STRING DestinationString; // [esp+98h] [ebp-304h] BYREF
  _BYTE v41[4]; // [esp+A0h] [ebp-2FCh] BYREF
  _BYTE v42[4]; // [esp+A4h] [ebp-2F8h] BYREF
  _DWORD v43[8]; // [esp+A8h] [ebp-2F4h] BYREF
  void *v44; // [esp+C8h] [ebp-2D4h]
  _DWORD *v45; // [esp+CCh] [ebp-2D0h]
  _DWORD *v46; // [esp+D0h] [ebp-2CCh]
  int v47; // [esp+D4h] [ebp-2C8h]
  int v48; // [esp+D8h] [ebp-2C4h]
  int (__stdcall *v49)(unsigned __int16, unsigned __int16); // [esp+DCh] [ebp-2C0h]
  int (__stdcall *v50)(int); // [esp+E0h] [ebp-2BCh]
  int (__stdcall *v51)(int, int, int, int); // [esp+E4h] [ebp-2B8h]
  int (__stdcall *v52)(int); // [esp+E8h] [ebp-2B4h]
  _DWORD (__stdcall *v53)(_DWORD, _DWORD); // [esp+ECh] [ebp-2B0h]
  _DWORD (__stdcall *v54)(_DWORD, _DWORD); // [esp+F0h] [ebp-2ACh]
  _DWORD v55[2]; // [esp+FCh] [ebp-2A0h] BYREF
  int v56; // [esp+104h] [ebp-298h]
  int v57; // [esp+108h] [ebp-294h]
  int v58; // [esp+10Ch] [ebp-290h] BYREF
  int v59; // [esp+110h] [ebp-28Ch] BYREF
  int v60; // [esp+114h] [ebp-288h] BYREF
  int v61; // [esp+118h] [ebp-284h]
  unsigned int v62; // [esp+11Ch] [ebp-280h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [esp+120h] [ebp-27Ch] BYREF
  _DWORD *v64; // [esp+138h] [ebp-264h] BYREF
  HANDLE v65; // [esp+13Ch] [ebp-260h] BYREF
  HANDLE v66; // [esp+140h] [ebp-25Ch] BYREF
  HANDLE FileHandle; // [esp+144h] [ebp-258h] BYREF
  _DWORD *v68; // [esp+148h] [ebp-254h]
  HANDLE Handle; // [esp+14Ch] [ebp-250h] BYREF
  _WORD *j; // [esp+150h] [ebp-24Ch] BYREF
  int v71; // [esp+154h] [ebp-248h] BYREF
  int v72; // [esp+158h] [ebp-244h] BYREF
  _WORD *v73; // [esp+15Ch] [ebp-240h]
  _BYTE v74[40]; // [esp+160h] [ebp-23Ch] BYREF
  _WORD v75[4]; // [esp+188h] [ebp-214h] BYREF
  _BYTE v76[516]; // [esp+190h] [ebp-20Ch] BYREF

  v5 = a5;
  v56 = a3;
  v61 = a4;
  v57 = a2;
  v68 = (_DWORD *)a5;
  v66 = 0;
  v65 = 0;
  Handle = 0;
  FileHandle = 0;
  v71 = 0;
  v60 = 0;
  v64 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\KnownDlls32");
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  SymbolicLinkObject = ZwOpenDirectoryObject((int)&v66, 3, (int)&ObjectAttributes);
  if ( SymbolicLinkObject < 0 )
    goto LABEL_65;
  RtlInitUnicodeString(&v39, L"KnownDllPath");
  ObjectAttributes.RootDirectory = v66;
  ObjectAttributes.ObjectName = &v39;
  ObjectAttributes.Length = 24;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  SymbolicLinkObject = NtOpenSymbolicLinkObject((int)&v65, 1, (int)&ObjectAttributes);
  if ( SymbolicLinkObject < 0 )
    goto LABEL_65;
  v75[1] = 63;
  v75[2] = 63;
  v73 = v76;
  v75[0] = 92;
  v75[3] = 92;
  v72 = 0x2000000;
  SymbolicLinkObject = ZwQuerySymbolicLinkObject((int)v65, (int)&v72, 0);
  if ( SymbolicLinkObject < 0 )
    goto LABEL_65;
  v73 = v75;
  LOWORD(v72) = v72 + 8;
  HIWORD(v72) += 8;
  RtlInitUnicodeString(&v38, L"\\");
  SymbolicLinkObject = RtlAppendUnicodeStringToString((unsigned __int16 *)&v72, (const void **)&v38);
  if ( SymbolicLinkObject < 0 )
    goto LABEL_65;
  SymbolicLinkObject = RtlAppendUnicodeStringToString((unsigned __int16 *)&v72, (const void **)&VerifierDllString);
  if ( SymbolicLinkObject < 0 )
    goto LABEL_65;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x40000) != 0 )
  {
    v55[0] = v72;
    v55[1] = v73;
    NtSystemDebugControl(38, (int)v55, 8, 0, 0, 0);
  }
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v72;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  AttributesFile = ZwQueryAttributesFile((int)&ObjectAttributes, (int)v74);
  if ( AttributesFile < 0 && AttributesFile != -1073741757 && AttributesFile != -1073741790 )
    goto LABEL_11;
  v8 = NtOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
  SymbolicLinkObject = v8;
  if ( v8 < 0 )
  {
    if ( v8 == -1073741772 )
    {
LABEL_11:
      SymbolicLinkObject = -1073741515;
      goto LABEL_65;
    }
    goto LABEL_65;
  }
  SymbolicLinkObject = NtCreateSection((int)&Handle, 13, 0, 0, 16, 0x1000000, (int)FileHandle);
  if ( SymbolicLinkObject < 0 )
    goto LABEL_65;
  *(_WORD *)(a5 + 212) = 0;
  *(_WORD *)(a5 + 214) = 520;
  *(_DWORD *)(a5 + 216) = a5 + 220;
  v73 = v76;
  LOWORD(v72) = v72 - 8;
  HIWORD(v72) -= 8;
  RtlCopyUnicodeString((unsigned __int16 *)(a5 + 212), (unsigned __int16 *)&v72);
  v9 = NtCurrentTeb();
  ArbitraryUserPointer = v9->NtTib.ArbitraryUserPointer;
  v9->NtTib.ArbitraryUserPointer = v73;
  SymbolicLinkObject = ZwMapViewOfSection((int)Handle, -1, (int)&v71, 0, 0, 0, (int)&v60, 1, 0x800000, 2);
  v9->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
  if ( SymbolicLinkObject < 0 )
  {
    v5 = (int)v68;
    goto LABEL_65;
  }
  v11 = RtlImageNtHeader(v71);
  v5 = (int)v68;
  v62 = v11;
  if ( !v11 )
  {
LABEL_18:
    SymbolicLinkObject = -1073741701;
    goto LABEL_65;
  }
  v68[6] = v71;
  *(_DWORD *)(v5 + 32) = *(_DWORD *)(v11 + 80);
  v12 = *(_DWORD *)(v11 + 8);
  *(_DWORD *)(v5 + 76) = 0;
  *(_DWORD *)(v5 + 68) = v12;
  *(_DWORD *)(v5 + 36) = *(_DWORD *)(v5 + 212);
  v13 = *(_DWORD *)(v5 + 216);
  *(_DWORD *)(v5 + 52) = 0;
  *(_DWORD *)(v5 + 40) = v13;
  v14 = *(_DWORD *)(v5 + 40);
  j = (_WORD *)(v5 + 36);
  for ( i = (_WORD *)(v14 + 2 * ((*(unsigned __int16 *)(v5 + 36) >> 1) - 1)); (unsigned int)i > v14; --i )
  {
    if ( *i == 92 )
      goto LABEL_24;
  }
  if ( *i == 92 )
  {
LABEL_24:
    v16 = i + 1;
    *(_DWORD *)(v5 + 48) = v16;
    v17 = ((_WORD)v16 - v14) & 0xFFFE;
    *(_WORD *)(v5 + 44) = *j - v17;
    *(_WORD *)(v5 + 46) = *(_WORD *)(v5 + 38) - v17;
    goto LABEL_26;
  }
  *(_DWORD *)(v5 + 44) = *(_DWORD *)(v5 + 36);
  *(_DWORD *)(v5 + 48) = v14;
LABEL_26:
  v18 = v62;
  v19 = *(_DWORD *)(v62 + 40);
  if ( v19 )
    v19 += v71;
  *(_DWORD *)(v5 + 28) = v19;
  *(_DWORD *)(v5 + 128) = *(_DWORD *)(v18 + 52);
  *(_DWORD *)(v5 + 80) = v5 + 168;
  memset((void *)(v5 + 168), 0, 0x2Cu);
  *(_DWORD *)(v5 + 84) = v5 + 168;
  *(_DWORD *)(v5 + 88) = v5 + 168;
  *(_DWORD *)(v5 + 168) = v5 + 84;
  *(_DWORD *)(v5 + 172) = v5 + 84;
  *(_DWORD *)(v5 + 156) = 2;
  v20 = *(_DWORD *)(v5 + 168);
  *(_DWORD *)(v5 + 180) = -1;
  *(_WORD *)(v20 - 28) = -1;
  Section = ZwQuerySection((int)Handle, 2, (int)&v59, 4, 0);
  if ( Section < 0 )
  {
    SymbolicLinkObject = Section;
    goto LABEL_65;
  }
  if ( v59 )
    *(_DWORD *)(v5 + 128) -= v59;
  if ( (*(_WORD *)(v18 + 22) & 0x2000) != 0 )
    *(_DWORD *)(v5 + 52) |= 4u;
  if ( (*(_DWORD *)(v5 + 52) & 4) == 0 )
    *(_DWORD *)(v5 + 28) = 0;
  if ( RtlImageDirectoryEntryToData(v22, *(_DWORD *)(v5 + 24), 1, 9, (int)&v58) && v58 )
  {
    DbgPrintEx(93, 0, "AVRF: Verifier .dlls must not have thread locals\n");
    __debugbreak();
LABEL_39:
    SymbolicLinkObject = -1073741701;
    goto LABEL_65;
  }
  v24 = RtlImageDirectoryEntryToData(v23, *(_DWORD *)(v5 + 24), 1, 1, (int)v42);
  if ( !v24 )
    goto LABEL_39;
  v25 = *(_DWORD *)(v5 + 24) + *v24;
  j = (_WORD *)(*(_DWORD *)(v5 + 24) + v24[4]);
  if ( *(_DWORD *)v25 )
  {
    memset(v36, 0, 0x6Cu);
    v36[8] = v5;
    SymbolicLinkObject = LdrpPrepareImportAddressTableForSnap(v36);
    if ( SymbolicLinkObject < 0 )
      goto LABEL_65;
    if ( v36[15] )
    {
      v26 = *(_DWORD *)v25;
      v27 = (_WORD *)((char *)j - v25);
      for ( j = (_WORD *)((char *)j - v25); ; v27 = j )
      {
        SymbolicLinkObject = LdrpGetProcedureAddress(
                               v61,
                               (const char *)(v26 + *(_DWORD *)(v5 + 24) + 2),
                               0,
                               (unsigned int *)((char *)v27 + v25));
        if ( SymbolicLinkObject < 0 )
          break;
        v25 += 4;
        v26 = *(_DWORD *)v25;
        if ( !*(_DWORD *)v25 )
        {
          ZwProtectVirtualMemory(-1, (int)&v36[15], (int)&v36[16], v36[20], (int)v41);
          if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
            SymbolicLinkObject = LdrpUnsuppressAddressTakenIat(*(char **)(v36[8] + 24), 0, 0);
          if ( SymbolicLinkObject < 0 )
            goto LABEL_65;
          goto LABEL_51;
        }
      }
      goto LABEL_65;
    }
    goto LABEL_18;
  }
LABEL_51:
  v28 = *(_DWORD *)(v5 + 52);
  if ( (v28 & 0x2004) == 4 )
  {
    j = 0;
    v29 = LdrpGenRandom();
    LdrInitSecurityCookie(0, dword_4B3A92E0 ^ v29, &j);
    SymbolicLinkObject = LdrpCfgProcessLoadConfig((unsigned int *)v5, v62, (int)j);
    if ( SymbolicLinkObject < 0 )
      goto LABEL_65;
    *(_DWORD *)(v5 + 52) |= 0x2000u;
    v28 = *(_DWORD *)(v5 + 52);
  }
  if ( (v28 & 0x200) == 0 )
  {
    RtlInsertInvertedFunctionTable(v71, *(_DWORD *)(v5 + 32));
    *(_DWORD *)(v5 + 52) |= 0x200u;
  }
  v30 = *(_DWORD *)(v5 + 24);
  v31 = *(_DWORD *)(v5 + 28);
  v43[4] = v57;
  v47 = v56;
  v48 = v61;
  v64 = v43;
  v43[0] = 76;
  v43[1] = RtlpGetStackTraceAddress;
  v49 = RtlpGetStackTraceAddressEx;
  v43[2] = AVrfInternalHeapFreeNotification;
  v43[3] = RtlLogStackTrace;
  v50 = RtlReleaseStackTrace;
  v51 = RtlStdInitializeStackDatabase;
  v52 = RtlStdDeleteStackDatabase;
  v53 = RtlStdLogStackTrace;
  v54 = RtlStdReleaseStackTrace;
  v43[5] = RtlCommitDebugInfo;
  v43[6] = RtlSetProcessDebugInformation;
  v43[7] = RtlQueryImageFileExecutionOptions;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  if ( LdrpCallInitRoutine(v31, v30, 5, (int)&v64) && v64 == v43 && (v32 = v46) != 0 && *v46 == 44 && v45 && *v45 == 88 )
  {
    qmemcpy(&dword_4B3A3744, v45, 0x58u);
    v5 = (int)v68;
    v33 = v68;
    RtlpDebugPageHeapTable = v44;
    v46[5] = AVrfpVerifierFlags;
    v32[6] = AVrfpDebug;
    RtlpStkMarkDllRange(v33);
    v34 = *(_DWORD *)(v5 + 24);
    v71 = 0;
    LdrpLogDllState(v34, v5 + 36, 5294);
    *(_DWORD *)(v5 + 200) = 9;
  }
  else
  {
    SymbolicLinkObject = -1073741502;
  }
LABEL_65:
  if ( v71 )
  {
    NtUnmapViewOfSection(-1, v71);
    *(_DWORD *)(v5 + 24) = 0;
  }
  if ( FileHandle )
    NtClose(FileHandle);
  if ( Handle )
    NtClose(Handle);
  if ( v66 )
    NtClose(v66);
  if ( v65 )
    NtClose(v65);
  return SymbolicLinkObject;
}
