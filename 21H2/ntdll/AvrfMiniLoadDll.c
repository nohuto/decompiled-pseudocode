/*
 * XREFs of AvrfMiniLoadDll @ 0x1800DB6D0
 * Callers:
 *     AVrfInitializeVerifier @ 0x1800D9948 (AVrfInitializeVerifier.c)
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
 *     DbgPrintEx @ 0x180051450 (DbgPrintEx.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x18005424C (LdrpUnsuppressAddressTakenIat.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtClose @ 0x18009D820 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18009DB40 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009DB80 (NtUnmapViewOfSection.c)
 *     NtOpenFile @ 0x18009DCA0 (NtOpenFile.c)
 *     ZwQueryAttributesFile @ 0x18009DDE0 (ZwQueryAttributesFile.c)
 *     NtCreateSection @ 0x18009DF80 (NtCreateSection.c)
 *     ZwProtectVirtualMemory @ 0x18009E040 (ZwProtectVirtualMemory.c)
 *     NtQuerySection @ 0x18009E060 (NtQuerySection.c)
 *     ZwOpenDirectoryObject @ 0x18009E140 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x18009FBF0 (ZwOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x1800A0210 (NtQuerySymbolicLinkObject.c)
 *     ZwSystemDebugControl @ 0x1800A0E10 (ZwSystemDebugControl.c)
 *     memset @ 0x1800A4780 (memset.c)
 */

__int64 __fastcall AvrfMiniLoadDll(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  int SymbolicLinkObject; // esi
  int AttributesFile; // eax
  NTSTATUS v7; // eax
  struct _TEB *v8; // rdi
  void *ArbitraryUserPointer; // rbx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // r13
  unsigned __int64 v13; // r10
  __int128 v14; // xmm0
  unsigned __int16 v15; // r9
  unsigned __int64 v16; // r8
  _WORD *i; // rdx
  __int16 v18; // ax
  _WORD *v19; // rdx
  __int16 v20; // cx
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  int Section; // eax
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  unsigned int *v27; // rcx
  __int64 v28; // r15
  __int64 v29; // rdi
  _QWORD *v30; // rbx
  __int64 v32; // rdi
  unsigned __int64 v33; // r15
  __int64 v34; // rcx
  int v35; // ecx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 (__fastcall *v38)(__int64, _QWORD, __int64); // rcx
  _DWORD *v39; // rdx
  _OWORD *v40; // rcx
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int64 v50; // rcx
  __int128 v51; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v52; // [rsp+60h] [rbp-A0h]
  HANDLE Handle; // [rsp+68h] [rbp-98h]
  int v54; // [rsp+70h] [rbp-90h] BYREF
  int *v55; // [rsp+78h] [rbp-88h] BYREF
  HANDLE FileHandle; // [rsp+80h] [rbp-80h] BYREF
  HANDLE v57; // [rsp+88h] [rbp-78h]
  HANDLE v58; // [rsp+90h] [rbp-70h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v60; // [rsp+C8h] [rbp-38h]
  __int64 v61; // [rsp+D0h] [rbp-30h] BYREF
  int v62; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v63; // [rsp+E0h] [rbp-20h]
  __int64 v64; // [rsp+E8h] [rbp-18h]
  __int64 v65; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int *v66; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v67; // [rsp+100h] [rbp+0h]
  __int64 v68; // [rsp+108h] [rbp+8h]
  int v69; // [rsp+110h] [rbp+10h] BYREF
  __int64 (__fastcall *v70)(); // [rsp+118h] [rbp+18h]
  struct _PEB *(__fastcall *v71)(__int64, __int64); // [rsp+120h] [rbp+20h]
  __int64 (__fastcall *v72)(); // [rsp+128h] [rbp+28h]
  __int64 v73; // [rsp+130h] [rbp+30h]
  __int64 (*v74)(); // [rsp+138h] [rbp+38h]
  __int64 (__fastcall *v75)(void *, int, __int64); // [rsp+140h] [rbp+40h]
  __int64 (__fastcall *v76)(unsigned __int16 *, __int64, unsigned int, __int64, int, __int64); // [rsp+148h] [rbp+48h]
  __int128 v77; // [rsp+150h] [rbp+50h]
  _DWORD *v78; // [rsp+160h] [rbp+60h]
  __int64 v79; // [rsp+168h] [rbp+68h]
  unsigned __int64 v80; // [rsp+170h] [rbp+70h]
  __int64 (__fastcall *v81)(unsigned __int16, unsigned __int16); // [rsp+178h] [rbp+78h]
  __int64 (__fastcall *v82)(); // [rsp+180h] [rbp+80h]
  __int64 (__fastcall *v83)(); // [rsp+188h] [rbp+88h]
  __int64 (__fastcall *v84)(); // [rsp+190h] [rbp+90h]
  __int64 (__fastcall *v85)(_QWORD, _QWORD); // [rsp+198h] [rbp+98h]
  __int64 (__fastcall *v86)(_QWORD, _QWORD); // [rsp+1A0h] [rbp+A0h]
  UNICODE_STRING DestinationString; // [rsp+1B0h] [rbp+B0h] BYREF
  UNICODE_STRING v88; // [rsp+1C0h] [rbp+C0h] BYREF
  UNICODE_STRING v89; // [rsp+1D0h] [rbp+D0h] BYREF
  __int128 v90; // [rsp+1E0h] [rbp+E0h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+1F0h] [rbp+F0h] BYREF
  _QWORD v92[24]; // [rsp+200h] [rbp+100h] BYREF
  _DWORD v93[2]; // [rsp+2F0h] [rbp+1F0h] BYREF
  _BYTE v94[520]; // [rsp+2F8h] [rbp+1F8h] BYREF

  v67 = a2;
  v57 = 0LL;
  v58 = 0LL;
  Handle = 0LL;
  FileHandle = 0LL;
  v52 = 0LL;
  v63 = 0LL;
  v55 = 0LL;
  v60 = a4;
  v68 = a3;
  RtlInitUnicodeString(&DestinationString, L"\\KnownDlls");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  SymbolicLinkObject = ZwOpenDirectoryObject();
  if ( SymbolicLinkObject >= 0 )
  {
    RtlInitUnicodeString(&v88, L"KnownDllPath");
    ObjectAttributes.RootDirectory = v57;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &v88;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    SymbolicLinkObject = ZwOpenSymbolicLinkObject();
    if ( SymbolicLinkObject >= 0 )
    {
      *((_QWORD *)&v51 + 1) = v94;
      v93[0] = 4128860;
      v93[1] = 6029375;
      LODWORD(v51) = 0x2000000;
      SymbolicLinkObject = NtQuerySymbolicLinkObject();
      if ( SymbolicLinkObject >= 0 )
      {
        *((_QWORD *)&v51 + 1) = v93;
        LOWORD(v51) = v51 + 8;
        WORD1(v51) += 8;
        RtlInitUnicodeString(&v89, L"\\");
        SymbolicLinkObject = RtlAppendUnicodeStringToString((unsigned __int16 *)&v51, (const void **)&v89);
        if ( SymbolicLinkObject >= 0 )
        {
          SymbolicLinkObject = RtlAppendUnicodeStringToString((unsigned __int16 *)&v51, &VerifierDllString);
          if ( SymbolicLinkObject >= 0 )
          {
            if ( (NtCurrentPeb()->NtGlobalFlag & 0x40000) != 0 )
            {
              v90 = v51;
              ZwSystemDebugControl();
            }
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v51;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 64;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            AttributesFile = ZwQueryAttributesFile();
            if ( AttributesFile < 0 && AttributesFile != -1073741757 && AttributesFile != -1073741790 )
              goto LABEL_11;
            v7 = NtOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
            SymbolicLinkObject = v7;
            if ( v7 >= 0 )
            {
              SymbolicLinkObject = NtCreateSection();
              if ( SymbolicLinkObject >= 0 )
              {
                *(_WORD *)(a5 + 370) = 520;
                *(_WORD *)(a5 + 368) = 0;
                *(_QWORD *)(a5 + 376) = a5 + 384;
                *((_QWORD *)&v51 + 1) = v94;
                LOWORD(v51) = v51 - 8;
                WORD1(v51) -= 8;
                RtlCopyUnicodeString((unsigned __int16 *)(a5 + 368), (unsigned __int16 *)&v51);
                v8 = NtCurrentTeb();
                ArbitraryUserPointer = v8->NtTib.ArbitraryUserPointer;
                v8->NtTib.ArbitraryUserPointer = (void *)*((_QWORD *)&v51 + 1);
                v10 = ZwMapViewOfSection();
                v8->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
                SymbolicLinkObject = v10;
                if ( v10 >= 0 )
                {
                  v11 = RtlImageNtHeader(v52);
                  v12 = v11;
                  if ( !v11 )
                    goto LABEL_18;
                  v13 = v52;
                  *(_QWORD *)(a5 + 48) = v52;
                  *(_DWORD *)(a5 + 64) = *(_DWORD *)(v11 + 80);
                  *(_DWORD *)(a5 + 128) = *(_DWORD *)(v11 + 8);
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
                  if ( *(_DWORD *)(v12 + 40) )
                    v21 = v13 + *(unsigned int *)(v12 + 40);
                  else
                    v21 = 0LL;
                  *(_QWORD *)(a5 + 56) = v21;
                  *(_QWORD *)(a5 + 248) = *(_QWORD *)(v12 + 48);
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
                  Section = NtQuerySection();
                  if ( Section < 0 )
                  {
                    SymbolicLinkObject = Section;
                    goto LABEL_49;
                  }
                  if ( v64 )
                    *(_QWORD *)(a5 + 248) -= v64;
                  if ( (*(_WORD *)(v12 + 22) & 0x2000) != 0 )
                    *(_DWORD *)(a5 + 104) |= 4u;
                  if ( (*(_DWORD *)(a5 + 104) & 4) == 0 )
                    *(_QWORD *)(a5 + 56) = 0LL;
                  v24 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(a5 + 48), 1, 9u, &v54, &v65);
                  v25 = v65;
                  if ( v24 < 0 )
                    v25 = 0LL;
                  if ( v25 && v54 )
                  {
                    DbgPrintEx(93, 0, "AVRF: Verifier .dlls must not have thread locals\n");
                    __debugbreak();
                  }
                  v26 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(a5 + 48), 1, 1u, &v62, (__int64 *)&v66);
                  v27 = v66;
                  if ( v26 < 0 )
                    v27 = 0LL;
                  if ( !v27 )
                  {
LABEL_18:
                    SymbolicLinkObject = -1073741701;
                    goto LABEL_49;
                  }
                  v28 = *v27;
                  v29 = v27[4];
                  v30 = (_QWORD *)(v28 + *(_QWORD *)(a5 + 48));
                  if ( *v30 )
                  {
                    memset(v92, 0, sizeof(v92));
                    v92[7] = a5;
                    SymbolicLinkObject = LdrpPrepareImportAddressTableForSnap((__int64)v92);
                    if ( SymbolicLinkObject >= 0 )
                    {
                      if ( v92[13] )
                      {
                        v32 = v29 - v28;
                        v33 = v60;
                        while ( 1 )
                        {
                          SymbolicLinkObject = LdrpGetProcedureAddress(
                                                 v33,
                                                 (const char *)(*(_QWORD *)(a5 + 48) + *(unsigned int *)v30 + 2LL),
                                                 0,
                                                 (char **)((char *)v30 + v32));
                          if ( SymbolicLinkObject < 0 )
                            break;
                          if ( !*++v30 )
                          {
                            ZwProtectVirtualMemory();
                            if ( LdrControlFlowGuardEnforcedWithExportSuppression(v34) )
                              SymbolicLinkObject = LdrpUnsuppressAddressTakenIat(*(_QWORD *)(v92[7] + 48LL), 0, 0);
                            if ( SymbolicLinkObject < 0 )
                              break;
                            goto LABEL_68;
                          }
                        }
                      }
                      else
                      {
                        SymbolicLinkObject = -1073741701;
                      }
                    }
                  }
                  else
                  {
                    v33 = v60;
LABEL_68:
                    v35 = *(_DWORD *)(a5 + 104);
                    if ( (v35 & 0x2004) == 4 )
                    {
                      v61 = 0LL;
                      v36 = LdrpGenRandom();
                      LdrInitSecurityCookie(
                        *(_QWORD *)(a5 + 48),
                        *(unsigned int *)(a5 + 64),
                        0LL,
                        v36 ^ (unsigned int)dword_180181388,
                        &v61);
                      SymbolicLinkObject = LdrpCfgProcessLoadConfig(a5, (unsigned __int16 *)v12, v61);
                      if ( SymbolicLinkObject < 0 )
                        goto LABEL_49;
                      *(_DWORD *)(a5 + 104) |= 0x2000u;
                      v35 = *(_DWORD *)(a5 + 104);
                    }
                    if ( (v35 & 0x200) == 0 )
                    {
                      RtlInsertInvertedFunctionTable(v52, *(_DWORD *)(a5 + 64));
                      *(_DWORD *)(a5 + 104) |= 0x200u;
                    }
                    v37 = *(_QWORD *)(a5 + 48);
                    v38 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a5 + 56);
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
                    v55 = &v69;
                    v77 = 0LL;
                    v78 = 0LL;
                    if ( LdrpCallInitRoutine(v38, v37, 5u, (__int64)&v55)
                      && v55 == &v69
                      && (v39 = v78) != 0LL
                      && *v78 == 80
                      && (v40 = (_OWORD *)*((_QWORD *)&v77 + 1)) != 0LL
                      && **((_DWORD **)&v77 + 1) == 176 )
                    {
                      v41 = *(_OWORD *)(*((_QWORD *)&v77 + 1) + 16LL);
                      *(_OWORD *)&dword_1801663F8 = **((_OWORD **)&v77 + 1);
                      v42 = *(_OWORD *)(*((_QWORD *)&v77 + 1) + 32LL);
                      *((_OWORD *)&dword_1801663F8 + 1) = v41;
                      v43 = v40[3];
                      *((_OWORD *)&dword_1801663F8 + 2) = v42;
                      v44 = v40[4];
                      *((_OWORD *)&dword_1801663F8 + 3) = v43;
                      v45 = v40[5];
                      *((_OWORD *)&dword_1801663F8 + 4) = v44;
                      v46 = v40[6];
                      *((_OWORD *)&dword_1801663F8 + 5) = v45;
                      v47 = v40[8];
                      *((_OWORD *)&dword_1801663F8 + 6) = v46;
                      *((_OWORD *)&dword_1801663F8 + 7) = v40[7];
                      v48 = v40[9];
                      *((_OWORD *)&dword_1801663F8 + 8) = v47;
                      v49 = v40[10];
                      *((_OWORD *)&dword_1801663F8 + 9) = v48;
                      *((_OWORD *)&dword_1801663F8 + 10) = v49;
                      RtlpDebugPageHeapTable = (void *)v77;
                      v39[10] = AVrfpVerifierFlags;
                      v39[11] = AVrfpDebug;
                      v50 = *(_QWORD *)(a5 + 48);
                      v52 = 0LL;
                      LdrpLogDllState(v50, a5 + 72, 0x14AEu);
                      *(_DWORD *)(a5 + 344) = 9;
                    }
                    else
                    {
                      SymbolicLinkObject = -1073741502;
                    }
                  }
                }
              }
            }
            else if ( v7 == -1073741772 )
            {
LABEL_11:
              SymbolicLinkObject = -1073741515;
            }
          }
        }
      }
    }
  }
LABEL_49:
  if ( v52 )
  {
    NtUnmapViewOfSection();
    *(_QWORD *)(a5 + 48) = 0LL;
  }
  if ( FileHandle )
    NtClose(FileHandle);
  if ( Handle )
    NtClose(Handle);
  if ( v57 )
    NtClose(v57);
  if ( v58 )
    NtClose(v58);
  return (unsigned int)SymbolicLinkObject;
}
