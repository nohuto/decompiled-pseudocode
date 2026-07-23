/*
 * XREFs of AvrfMiniLoadDll @ 0x1800DB920
 * Callers:
 *     AVrfInitializeVerifier @ 0x1800D9B98 (AVrfInitializeVerifier.c)
 * Callees:
 *     LdrpCfgProcessLoadConfig @ 0x18000FDB4 (LdrpCfgProcessLoadConfig.c)
 *     RtlCopyUnicodeString @ 0x1800102F0 (RtlCopyUnicodeString.c)
 *     LdrInitSecurityCookie @ 0x180010628 (LdrInitSecurityCookie.c)
 *     LdrpGenRandom @ 0x18001082C (LdrpGenRandom.c)
 *     RtlInsertInvertedFunctionTable @ 0x1800108F0 (RtlInsertInvertedFunctionTable.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180014F84 (LdrpPrepareImportAddressTableForSnap.c)
 *     RtlAppendUnicodeStringToString @ 0x180017270 (RtlAppendUnicodeStringToString.c)
 *     LdrpCallInitRoutine @ 0x1800199BC (LdrpCallInitRoutine.c)
 *     LdrpLogDllState @ 0x18001A6CC (LdrpLogDllState.c)
 *     LdrpGetProcedureAddress @ 0x1800321C0 (LdrpGetProcedureAddress.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180032920 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x1800334E8 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     RtlImageNtHeader @ 0x180035BD0 (RtlImageNtHeader.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x180047920 (LdrpUnsuppressAddressTakenIat.c)
 *     DbgPrintEx @ 0x180050340 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18009D5B0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009D5F0 (NtUnmapViewOfSection.c)
 *     NtOpenFile @ 0x18009D710 (NtOpenFile.c)
 *     ZwQueryAttributesFile @ 0x18009D850 (ZwQueryAttributesFile.c)
 *     NtCreateSection @ 0x18009D9F0 (NtCreateSection.c)
 *     ZwProtectVirtualMemory @ 0x18009DAB0 (ZwProtectVirtualMemory.c)
 *     NtQuerySection @ 0x18009DAD0 (NtQuerySection.c)
 *     ZwOpenDirectoryObject @ 0x18009DBB0 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x18009F640 (ZwOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x18009FC60 (NtQuerySymbolicLinkObject.c)
 *     ZwSystemDebugControl @ 0x1800A0840 (ZwSystemDebugControl.c)
 *     memset @ 0x1800A4180 (memset.c)
 */

__int64 __fastcall AvrfMiniLoadDll(__int64 a1, __int64 a2, __int64 a3, void *a4, __int64 a5)
{
  int appended; // esi
  NTSTATUS v6; // eax
  NTSTATUS v7; // eax
  struct _TEB *v8; // rdi
  void *ArbitraryUserPointer; // rbx
  NTSTATUS v10; // eax
  PIMAGE_NT_HEADERS v11; // rax
  PIMAGE_NT_HEADERS v12; // r13
  char *v13; // r10
  __int128 v14; // xmm0
  unsigned __int16 v15; // r9
  unsigned __int64 v16; // r8
  _WORD *i; // rdx
  __int16 v18; // ax
  _WORD *v19; // rdx
  __int16 v20; // cx
  char *v21; // rax
  __int64 v22; // rax
  NTSTATUS v23; // eax
  NTSTATUS v24; // eax
  __int64 v25; // rcx
  NTSTATUS v26; // eax
  unsigned int *v27; // rcx
  __int64 v28; // r15
  __int64 v29; // rdi
  _QWORD *v30; // rbx
  __int64 v32; // rdi
  PVOID v33; // r15
  int v34; // ecx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 (__fastcall *v37)(__int64, _QWORD, __int64); // rcx
  _DWORD *v38; // rdx
  _OWORD *v39; // rcx
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int64 v49; // rcx
  _UNICODE_STRING LinkTarget; // [rsp+50h] [rbp-B0h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE SectionHandle; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v53; // [rsp+70h] [rbp-90h] BYREF
  int *v54; // [rsp+78h] [rbp-88h] BYREF
  HANDLE FileHandle; // [rsp+80h] [rbp-80h] BYREF
  HANDLE DirectoryHandle; // [rsp+88h] [rbp-78h] BYREF
  HANDLE LinkHandle; // [rsp+90h] [rbp-70h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  PVOID BaseOfImage; // [rsp+C8h] [rbp-38h]
  __int64 v60; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v61; // [rsp+D8h] [rbp-28h] BYREF
  ULONG OldProtect; // [rsp+DCh] [rbp-24h] BYREF
  ULONG_PTR ViewSize; // [rsp+E0h] [rbp-20h] BYREF
  __int64 SectionInformation; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v65; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v66; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v67; // [rsp+100h] [rbp+0h]
  __int64 v68; // [rsp+108h] [rbp+8h]
  int v69; // [rsp+110h] [rbp+10h] BYREF
  __int64 (__fastcall *v70)(); // [rsp+118h] [rbp+18h]
  int (__fastcall *v71)(__int64, __int64); // [rsp+120h] [rbp+20h]
  __int64 (__fastcall *v72)(); // [rsp+128h] [rbp+28h]
  __int64 v73; // [rsp+130h] [rbp+30h]
  PVOID (__cdecl *v74)(PRTL_DEBUG_INFORMATION, SIZE_T); // [rsp+138h] [rbp+38h]
  NTSTATUS (__cdecl *v75)(HANDLE, ULONG, PRTL_DEBUG_INFORMATION); // [rsp+140h] [rbp+40h]
  __int64 (__fastcall *v76)(unsigned __int16 *, __int64, __int64, __int64, int, __int64); // [rsp+148h] [rbp+48h]
  __int128 v77; // [rsp+150h] [rbp+50h]
  _DWORD *v78; // [rsp+160h] [rbp+60h]
  __int64 v79; // [rsp+168h] [rbp+68h]
  PVOID v80; // [rsp+170h] [rbp+70h]
  __int64 (__fastcall *v81)(unsigned __int16, unsigned __int16); // [rsp+178h] [rbp+78h]
  __int64 (__fastcall *v82)(); // [rsp+180h] [rbp+80h]
  __int64 (__fastcall *v83)(); // [rsp+188h] [rbp+88h]
  __int64 (__fastcall *v84)(); // [rsp+190h] [rbp+90h]
  __int64 (__fastcall *v85)(_QWORD, _QWORD); // [rsp+198h] [rbp+98h]
  __int64 (__fastcall *v86)(_QWORD, _QWORD); // [rsp+1A0h] [rbp+A0h]
  _UNICODE_STRING DestinationString; // [rsp+1B0h] [rbp+B0h] BYREF
  _UNICODE_STRING v88; // [rsp+1C0h] [rbp+C0h] BYREF
  _UNICODE_STRING Source; // [rsp+1D0h] [rbp+D0h] BYREF
  _UNICODE_STRING InputBuffer; // [rsp+1E0h] [rbp+E0h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+1F0h] [rbp+F0h] BYREF
  _QWORD v92[24]; // [rsp+200h] [rbp+100h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+2C0h] [rbp+1C0h] BYREF
  _DWORD v94[2]; // [rsp+2F0h] [rbp+1F0h] BYREF
  _BYTE v95[520]; // [rsp+2F8h] [rbp+1F8h] BYREF

  v67 = a2;
  DirectoryHandle = 0LL;
  LinkHandle = 0LL;
  SectionHandle = 0LL;
  FileHandle = 0LL;
  BaseAddress = 0LL;
  ViewSize = 0LL;
  v54 = 0LL;
  BaseOfImage = a4;
  v68 = a3;
  RtlInitUnicodeString(&DestinationString, L"\\KnownDlls");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  appended = ZwOpenDirectoryObject(&DirectoryHandle, 3u, &ObjectAttributes);
  if ( appended >= 0 )
  {
    RtlInitUnicodeString(&v88, L"KnownDllPath");
    ObjectAttributes.RootDirectory = DirectoryHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &v88;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    appended = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
    if ( appended >= 0 )
    {
      LinkTarget.Buffer = (wchar_t *)v95;
      v94[0] = 4128860;
      v94[1] = 6029375;
      *(_DWORD *)&LinkTarget.Length = 0x2000000;
      appended = NtQuerySymbolicLinkObject(LinkHandle, &LinkTarget, 0LL);
      if ( appended >= 0 )
      {
        LinkTarget.Buffer = (wchar_t *)v94;
        LinkTarget.Length += 8;
        LinkTarget.MaximumLength += 8;
        RtlInitUnicodeString(&Source, L"\\");
        appended = RtlAppendUnicodeStringToString(&LinkTarget, &Source);
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeStringToString(&LinkTarget, &VerifierDllString);
          if ( appended >= 0 )
          {
            if ( (NtCurrentPeb()->NtGlobalFlag & 0x40000) != 0 )
            {
              InputBuffer = LinkTarget;
              ZwSystemDebugControl(SysDbgKdPullRemoteFile, &InputBuffer, 0x10u, 0LL, 0, 0LL);
            }
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &LinkTarget;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 64;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v6 = ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
            if ( v6 < 0 && v6 != -1073741757 && v6 != -1073741790 )
              goto LABEL_11;
            v7 = NtOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
            appended = v7;
            if ( v7 >= 0 )
            {
              appended = NtCreateSection(&SectionHandle, 0xDu, 0LL, 0LL, 0x10u, 0x1000000u, FileHandle);
              if ( appended >= 0 )
              {
                *(_WORD *)(a5 + 370) = 520;
                *(_WORD *)(a5 + 368) = 0;
                *(_QWORD *)(a5 + 376) = a5 + 384;
                LinkTarget.Buffer = (wchar_t *)v95;
                LinkTarget.Length -= 8;
                LinkTarget.MaximumLength -= 8;
                RtlCopyUnicodeString((PUNICODE_STRING)(a5 + 368), &LinkTarget);
                v8 = NtCurrentTeb();
                ArbitraryUserPointer = v8->NtTib.ArbitraryUserPointer;
                v8->NtTib.ArbitraryUserPointer = LinkTarget.Buffer;
                v10 = ZwMapViewOfSection(
                        SectionHandle,
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        &BaseAddress,
                        0LL,
                        0LL,
                        0LL,
                        &ViewSize,
                        ViewShare,
                        0x800000u,
                        2u);
                v8->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
                appended = v10;
                if ( v10 >= 0 )
                {
                  v11 = RtlImageNtHeader(BaseAddress);
                  v12 = v11;
                  if ( !v11 )
                    goto LABEL_18;
                  v13 = (char *)BaseAddress;
                  *(_QWORD *)(a5 + 48) = BaseAddress;
                  *(_DWORD *)(a5 + 64) = v11->OptionalHeader.SizeOfImage;
                  *(_DWORD *)(a5 + 128) = v11->FileHeader.TimeDateStamp;
                  *(_QWORD *)(a5 + 144) = 0LL;
                  v14 = *(_OWORD *)(a5 + 368);
                  *(_DWORD *)(a5 + 104) = 0;
                  *(_OWORD *)(a5 + 72) = v14;
                  v15 = *(_WORD *)(a5 + 72);
                  v16 = *(_QWORD *)(a5 + 80);
                  for ( i = (_WORD *)(v16 + 2 * (((unsigned __int64)v15 >> 1) - 1)); (unsigned __int64)i > v16; --i )
                  {
                    if ( *i == 92 )
                      goto LABEL_24;
                  }
                  if ( *i == 92 )
                  {
LABEL_24:
                    v18 = *(_WORD *)(a5 + 74);
                    v19 = i + 1;
                    *(_QWORD *)(a5 + 96) = v19;
                    v20 = 2 * ((__int64)((__int64)v19 - v16) >> 1);
                    *(_WORD *)(a5 + 88) = v15 - v20;
                    *(_WORD *)(a5 + 90) = v18 - v20;
                    goto LABEL_26;
                  }
                  *(_OWORD *)(a5 + 88) = v14;
LABEL_26:
                  if ( v12->OptionalHeader.AddressOfEntryPoint )
                    v21 = &v13[v12->OptionalHeader.AddressOfEntryPoint];
                  else
                    v21 = 0LL;
                  *(_QWORD *)(a5 + 56) = v21;
                  *(_QWORD *)(a5 + 248) = v12->OptionalHeader.ImageBase;
                  *(_QWORD *)(a5 + 152) = a5 + 288;
                  memset((void *)(a5 + 288), 0, 0x50uLL);
                  *(_QWORD *)(a5 + 160) = a5 + 288;
                  *(_QWORD *)(a5 + 168) = a5 + 288;
                  *(_QWORD *)(a5 + 288) = a5 + 160;
                  *(_QWORD *)(a5 + 296) = a5 + 160;
                  *(_DWORD *)(a5 + 276) = 2;
                  v22 = *(_QWORD *)(a5 + 288);
                  *(_DWORD *)(a5 + 312) = -1;
                  *(_WORD *)(v22 - 52) = -1;
                  v23 = NtQuerySection(SectionHandle, SectionRelocationInformation, &SectionInformation, 8uLL, 0LL);
                  if ( v23 < 0 )
                  {
                    appended = v23;
                    goto LABEL_49;
                  }
                  if ( SectionInformation )
                    *(_QWORD *)(a5 + 248) -= SectionInformation;
                  if ( (v12->FileHeader.Characteristics & 0x2000) != 0 )
                    *(_DWORD *)(a5 + 104) |= 4u;
                  if ( (*(_DWORD *)(a5 + 104) & 4) == 0 )
                    *(_QWORD *)(a5 + 56) = 0LL;
                  v24 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(a5 + 48), 1, 9u, &v53, (char **)&v65);
                  v25 = v65;
                  if ( v24 < 0 )
                    v25 = 0LL;
                  if ( v25 && v53 )
                  {
                    DbgPrintEx(0x5Du, 0, "AVRF: Verifier .dlls must not have thread locals\n");
                    __debugbreak();
                  }
                  v26 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(a5 + 48), 1, 1u, &v61, (char **)&v66);
                  v27 = (unsigned int *)v66;
                  if ( v26 < 0 )
                    v27 = 0LL;
                  if ( !v27 )
                  {
LABEL_18:
                    appended = -1073741701;
                    goto LABEL_49;
                  }
                  v28 = *v27;
                  v29 = v27[4];
                  v30 = (_QWORD *)(v28 + *(_QWORD *)(a5 + 48));
                  if ( *v30 )
                  {
                    memset(v92, 0, sizeof(v92));
                    v92[7] = a5;
                    appended = LdrpPrepareImportAddressTableForSnap((__int64)v92);
                    if ( appended >= 0 )
                    {
                      if ( v92[13] )
                      {
                        v32 = v29 - v28;
                        v33 = BaseOfImage;
                        while ( 1 )
                        {
                          appended = LdrpGetProcedureAddress(
                                       (unsigned __int64)v33,
                                       (const char *)(*(_QWORD *)(a5 + 48) + *(unsigned int *)v30 + 2LL),
                                       0,
                                       (char **)((char *)v30 + v32));
                          if ( appended < 0 )
                            break;
                          if ( !*++v30 )
                          {
                            ZwProtectVirtualMemory(
                              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                              (PVOID *)&v92[13],
                              &v92[14],
                              v92[17],
                              &OldProtect);
                            if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
                              appended = LdrpUnsuppressAddressTakenIat(*(char **)(v92[7] + 48LL), 0, 0);
                            if ( appended < 0 )
                              break;
                            goto LABEL_68;
                          }
                        }
                      }
                      else
                      {
                        appended = -1073741701;
                      }
                    }
                  }
                  else
                  {
                    v33 = BaseOfImage;
LABEL_68:
                    v34 = *(_DWORD *)(a5 + 104);
                    if ( (v34 & 0x2004) == 4 )
                    {
                      v60 = 0LL;
                      v35 = LdrpGenRandom();
                      LdrInitSecurityCookie(
                        *(void **)(a5 + 48),
                        *(unsigned int *)(a5 + 64),
                        0LL,
                        v35 ^ LdrSystemDllInitBlock.RngData,
                        &v60);
                      appended = LdrpCfgProcessLoadConfig(a5, (unsigned __int16 *)v12, v60);
                      if ( appended < 0 )
                        goto LABEL_49;
                      *(_DWORD *)(a5 + 104) |= 0x2000u;
                      v34 = *(_DWORD *)(a5 + 104);
                    }
                    if ( (v34 & 0x200) == 0 )
                    {
                      RtlInsertInvertedFunctionTable((__int64)BaseAddress, *(_DWORD *)(a5 + 64));
                      *(_DWORD *)(a5 + 104) |= 0x200u;
                    }
                    v36 = *(_QWORD *)(a5 + 48);
                    v37 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a5 + 56);
                    v70 = RtlpGetStackTraceAddress;
                    v69 = 152;
                    v81 = RtlpGetStackTraceAddressEx;
                    v80 = v33;
                    v71 = AVrfInternalHeapFreeNotification;
                    v72 = RtlLogStackTrace;
                    v82 = RtlReleaseStackTrace;
                    v83 = RtlStdInitializeStackDatabase;
                    v84 = RtlStdDeleteStackDatabase;
                    v85 = RtlStdLogStackTrace;
                    v86 = RtlStdReleaseStackTrace;
                    v73 = v67;
                    v79 = v68;
                    v74 = RtlCommitDebugInfo;
                    v75 = RtlSetProcessDebugInformation;
                    v76 = RtlQueryImageFileExecutionOptions;
                    v54 = &v69;
                    v77 = 0LL;
                    v78 = 0LL;
                    if ( LdrpCallInitRoutine(v37, v36, 5u, (__int64)&v54)
                      && v54 == &v69
                      && (v38 = v78) != 0LL
                      && *v78 == 80
                      && (v39 = (_OWORD *)*((_QWORD *)&v77 + 1)) != 0LL
                      && **((_DWORD **)&v77 + 1) == 176 )
                    {
                      v40 = *(_OWORD *)(*((_QWORD *)&v77 + 1) + 16LL);
                      *(_OWORD *)&dword_1801663F8 = **((_OWORD **)&v77 + 1);
                      v41 = *(_OWORD *)(*((_QWORD *)&v77 + 1) + 32LL);
                      *((_OWORD *)&dword_1801663F8 + 1) = v40;
                      v42 = v39[3];
                      *((_OWORD *)&dword_1801663F8 + 2) = v41;
                      v43 = v39[4];
                      *((_OWORD *)&dword_1801663F8 + 3) = v42;
                      v44 = v39[5];
                      *((_OWORD *)&dword_1801663F8 + 4) = v43;
                      v45 = v39[6];
                      *((_OWORD *)&dword_1801663F8 + 5) = v44;
                      v46 = v39[8];
                      *((_OWORD *)&dword_1801663F8 + 6) = v45;
                      *((_OWORD *)&dword_1801663F8 + 7) = v39[7];
                      v47 = v39[9];
                      *((_OWORD *)&dword_1801663F8 + 8) = v46;
                      v48 = v39[10];
                      *((_OWORD *)&dword_1801663F8 + 9) = v47;
                      *((_OWORD *)&dword_1801663F8 + 10) = v48;
                      RtlpDebugPageHeapTable = (PULONG)v77;
                      v38[10] = AVrfpVerifierFlags;
                      v38[11] = AVrfpDebug;
                      v49 = *(_QWORD *)(a5 + 48);
                      BaseAddress = 0LL;
                      LdrpLogDllState(v49, a5 + 72, 0x14AEu);
                      *(_DWORD *)(a5 + 344) = 9;
                    }
                    else
                    {
                      appended = -1073741502;
                    }
                  }
                }
              }
            }
            else if ( v7 == -1073741772 )
            {
LABEL_11:
              appended = -1073741515;
            }
          }
        }
      }
    }
  }
LABEL_49:
  if ( BaseAddress )
  {
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    *(_QWORD *)(a5 + 48) = 0LL;
  }
  if ( FileHandle )
    NtClose(FileHandle);
  if ( SectionHandle )
    NtClose(SectionHandle);
  if ( DirectoryHandle )
    NtClose(DirectoryHandle);
  if ( LinkHandle )
    NtClose(LinkHandle);
  return (unsigned int)appended;
}
