/*
 * XREFs of MmCreatePeb @ 0x1406AD438
 * Callers:
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 * Callees:
 *     MmGetSessionId @ 0x140233F30 (MmGetSessionId.c)
 *     KeQueryGroupMaskProcess @ 0x14023EF60 (KeQueryGroupMaskProcess.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     RtlImageNtHeader @ 0x140297240 (RtlImageNtHeader.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402FD704 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     RtlImageDirectoryEntryToData @ 0x1402FD940 (RtlImageDirectoryEntryToData.c)
 *     KeQueryGroupAffinity @ 0x1402FE150 (KeQueryGroupAffinity.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiCreatePebOrTeb @ 0x140686184 (MiCreatePebOrTeb.c)
 *     MmMapViewOfSection @ 0x1406ADAC0 (MmMapViewOfSection.c)
 *     MiInitializeWowPeb @ 0x1406B006C (MiInitializeWowPeb.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MmCreatePeb(_QWORD *a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned int v7; // eax
  _KPROCESS *v8; // rcx
  int v9; // ebx
  void *v10; // rbx
  __int16 v11; // r14
  PIMAGE_NT_HEADERS v12; // rdi
  unsigned __int16 Characteristics; // r15
  _WORD *v14; // rax
  _WORD *v15; // rbx
  int Subsystem; // r12d
  int MajorSubsystemVersion; // r13d
  unsigned int Win32VersionValue; // edx
  __int64 v19; // rbx
  bool v20; // zf
  _QWORD *v21; // rax
  __int64 v22; // rbx
  int v24; // edi
  char v25; // di
  char v26; // di
  __int64 v27; // rbx
  int v28; // [rsp+30h] [rbp-198h]
  USHORT v29; // [rsp+54h] [rbp-174h]
  __int64 v31; // [rsp+60h] [rbp-168h] BYREF
  __int64 v32; // [rsp+68h] [rbp-160h] BYREF
  _IMAGE_NT_HEADERS64 *v33; // [rsp+70h] [rbp-158h]
  __int64 v34; // [rsp+78h] [rbp-150h] BYREF
  __int64 v35; // [rsp+80h] [rbp-148h] BYREF
  __int64 v36; // [rsp+88h] [rbp-140h] BYREF
  _OWORD v37[10]; // [rsp+90h] [rbp-138h] BYREF
  ULONG Size; // [rsp+130h] [rbp-98h] BYREF
  _WORD *v39; // [rsp+138h] [rbp-90h]
  void *v40; // [rsp+140h] [rbp-88h]
  _QWORD *v41; // [rsp+148h] [rbp-80h]
  _BYTE v42[48]; // [rsp+150h] [rbp-78h] BYREF

  v41 = a3;
  v36 = 0LL;
  v33 = 0LL;
  memset(v42, 0, sizeof(v42));
  memset(v37, 0, sizeof(v37));
  v34 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  *(_OWORD *)a4 = 0LL;
  _BitScanForward(&v7, KeQueryGroupMaskProcess((__int64)a1));
  v29 = v7;
  *(_WORD *)(a4 + 8) = v7;
  KiStackAttachProcess(v8, 0, (__int64)v42);
  if ( InitNlsSectionPointer
    && (v9 = MmMapViewOfSection(InitNlsSectionPointer, a1, &v34, 0LL, 0LL, &v31, &v32, 1, 5242880, 2), v9 < 0)
    || (v35 = 0LL,
        v31 = 0LL,
        v32 = 0LL,
        v9 = MmMapViewOfSection(ExLeapSecondDataSectionPointer, a1, &v35, 0LL, 0LL, &v31, &v32, 1, 5242880, 2),
        v9 < 0)
    || (v9 = MiCreatePebOrTeb(0, 0LL, &v36), v9 < 0) )
  {
    KiUnstackDetachProcess((__int64)v42, 0);
    return (unsigned int)v9;
  }
  else
  {
    v10 = (void *)a1[164];
    v40 = v10;
    *(_QWORD *)((char *)v37 + 12) = 10LL;
    WORD4(v37[1]) = NtBuildNumber;
    DWORD1(v37[1]) = 2;
    v11 = CmNtCSDVersion;
    WORD5(v37[1]) = CmNtCSDVersion;
    *(_QWORD *)&v37[2] = qword_140CFB1B8;
    *((_QWORD *)&v37[2] + 1) = qword_140CFB1B0;
    *(_QWORD *)&v37[3] = __PAIR64__(NtGlobalFlag, KeNumberProcessors_0);
    DWORD2(v37[3]) = NtGlobalFlag2;
    *(_QWORD *)&v37[4] = qword_140C4DCA0;
    *((_QWORD *)&v37[4] + 1) = (unsigned int)dword_140CFB198;
    *(_QWORD *)&v37[5] = qword_140CFB1A8;
    *((_QWORD *)&v37[5] + 1) = qword_140CFB1A0;
    LOBYTE(v37[6]) = *(_BYTE *)a2;
    BYTE1(v37[6]) = *(_BYTE *)(a2 + 3);
    *((_QWORD *)&v37[6] + 1) = *(_QWORD *)(a2 + 8);
    *(_QWORD *)&v37[7] = v10;
    if ( v34 )
    {
      *((_QWORD *)&v37[8] + 1) = v34 + (unsigned int)InitUnicodeCaseTableDataOffset;
      if ( InitUnicodeCaseTableDataOffset )
      {
        *((_QWORD *)&v37[7] + 1) = v34 + (unsigned int)InitAnsiCodePageDataOffset;
        *(_QWORD *)&v37[8] = v34 + (unsigned int)InitOemCodePageDataOffset;
      }
      else
      {
        *((_QWORD *)&v37[7] + 1) = 0LL;
        *(_QWORD *)&v37[8] = 0LL;
      }
    }
    else
    {
      *((_QWORD *)&v37[7] + 1) = 0LL;
      v37[8] = 0LL;
    }
    if ( a1[171] )
      HIDWORD(v37[3]) = MmGetSessionId((__int64)a1);
    else
      HIDWORD(v37[3]) = 0;
    *(_QWORD *)&v37[9] = v35;
    DWORD2(v37[9]) = 0;
    wil_details_FeatureReporting_ReportUsageToService(
      (int)&Feature_Leap_Seconds_Sixty_Second__private_reporting,
      0xCCD568u,
      0,
      0,
      (__int64)&Feature_PdttSupport_logged_traits,
      0,
      v28);
    v12 = RtlImageNtHeader(v10);
    v33 = v12;
    Characteristics = v12->FileHeader.Characteristics;
    v14 = RtlImageDirectoryEntryToData(v10, 1u, 0xAu, &Size);
    v15 = v14;
    v39 = v14;
    if ( v14 )
    {
      if ( ((unsigned __int8)v14 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = v33;
      v15 = v39;
      v11 = WORD5(v37[1]);
    }
    Subsystem = v12->OptionalHeader.Subsystem;
    LODWORD(v37[0]) = Subsystem;
    MajorSubsystemVersion = v12->OptionalHeader.MajorSubsystemVersion;
    DWORD1(v37[0]) = MajorSubsystemVersion;
    DWORD2(v37[0]) = v12->OptionalHeader.MinorSubsystemVersion;
    Win32VersionValue = v12->OptionalHeader.Win32VersionValue;
    if ( Win32VersionValue )
    {
      if ( v15 )
      {
        if ( v15[38] )
          v11 = v15[38];
        WORD5(v37[1]) = v11;
      }
      HIDWORD(v37[0]) = (unsigned __int8)Win32VersionValue;
      LODWORD(v37[1]) = BYTE1(Win32VersionValue);
      WORD4(v37[1]) = HIWORD(Win32VersionValue);
      DWORD1(v37[1]) = (Win32VersionValue ^ 0xBFFFFFFF) >> 30;
    }
    if ( v15 )
    {
      v19 = *((_QWORD *)v15 + 8);
      *(_QWORD *)a4 = v19;
      v20 = (v19 & KeQueryGroupAffinity(v29)) == v19;
      v21 = (_QWORD *)a4;
      if ( !v20 )
        *(_QWORD *)a4 = 0LL;
    }
    else
    {
      v21 = (_QWORD *)a4;
    }
    if ( (Characteristics & 0x4000) != 0 )
    {
      v25 = _InterlockedExchangeAdd(&dword_140C4DC9C, 1u) + 1;
      do
      {
        v26 = v25 & 0x3F;
        v27 = 1LL << v26;
        *v21 = 1LL << v26;
        v25 = v26 + 1;
        v20 = (KeQueryGroupAffinity(v29) & v27) == 0;
        v21 = (_QWORD *)a4;
      }
      while ( v20 );
      v12 = v33;
      v11 = WORD5(v37[1]);
      MajorSubsystemVersion = DWORD1(v37[0]);
      Subsystem = v37[0];
    }
    v22 = v36;
    *(_QWORD *)(v36 + 280) = *(_QWORD *)((char *)v37 + 12);
    *(_WORD *)(v22 + 288) = WORD4(v37[1]);
    *(_DWORD *)(v22 + 292) = DWORD1(v37[1]);
    *(_WORD *)(v22 + 290) = v11;
    *(_OWORD *)(v22 + 200) = v37[2];
    *(_DWORD *)(v22 + 184) = KeNumberProcessors_0;
    *(_DWORD *)(v22 + 188) = NtGlobalFlag;
    *(_DWORD *)(v22 + 1988) = NtGlobalFlag2;
    *(_QWORD *)(v22 + 192) = qword_140C4DCA0;
    *(_QWORD *)(v22 + 792) = (unsigned int)dword_140CFB198;
    *(_QWORD *)(v22 + 216) = qword_140CFB1A8;
    *(_QWORD *)(v22 + 224) = qword_140CFB1A0;
    *(_DWORD *)(v22 + 704) = HIDWORD(v37[3]);
    *(_DWORD *)(v22 + 296) = Subsystem;
    *(_DWORD *)(v22 + 300) = MajorSubsystemVersion;
    *(_DWORD *)(v22 + 304) = DWORD2(v37[0]);
    *(_BYTE *)v22 = v37[6];
    *(_BYTE *)(v22 + 3) = BYTE1(v37[6]);
    *(_QWORD *)(v22 + 8) = *((_QWORD *)&v37[6] + 1);
    *(_QWORD *)(v22 + 16) = v40;
    *(_QWORD *)(v22 + 160) = *((_QWORD *)&v37[7] + 1);
    *(_OWORD *)(v22 + 168) = v37[8];
    *(_QWORD *)(v22 + 1976) = *(_QWORD *)&v37[9];
    *(_DWORD *)(v22 + 1984) = 0;
    if ( a1[176] && (v24 = MiInitializeWowPeb(v37, v12, a1, a4), v24 < 0) )
    {
      KiUnstackDetachProcess((__int64)v42, 0);
      return (unsigned int)v24;
    }
    else
    {
      KiUnstackDetachProcess((__int64)v42, 0);
      *v41 = v22;
      return 0LL;
    }
  }
}
