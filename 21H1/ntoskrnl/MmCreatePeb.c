/*
 * XREFs of MmCreatePeb @ 0x1406F9F18
 * Callers:
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 * Callees:
 *     MmGetSessionId @ 0x1402041B0 (MmGetSessionId.c)
 *     KeQueryGroupMaskProcess @ 0x14020433C (KeQueryGroupMaskProcess.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     RtlImageNtHeader @ 0x14027DAE0 (RtlImageNtHeader.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14033A8A0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     RtlImageDirectoryEntryToData @ 0x14033AA90 (RtlImageDirectoryEntryToData.c)
 *     KeQueryGroupAffinity @ 0x14033B2A0 (KeQueryGroupAffinity.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiCreatePebOrTeb @ 0x1406395AC (MiCreatePebOrTeb.c)
 *     MiInitializeWowPeb @ 0x1406E2204 (MiInitializeWowPeb.c)
 *     MmMapViewOfSection @ 0x1406FA5A0 (MmMapViewOfSection.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MmCreatePeb(_QWORD *a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned int v7; // eax
  _KPROCESS *v8; // rcx
  _DWORD *v9; // r9
  int v10; // ebx
  __int64 v11; // r8
  _DWORD *v12; // r9
  void *v13; // rbx
  __int16 v14; // r14
  PIMAGE_NT_HEADERS v15; // rdi
  unsigned __int16 Characteristics; // r15
  _WORD *v17; // rax
  __int64 v18; // r8
  _DWORD *v19; // r9
  _WORD *v20; // rbx
  int Subsystem; // r12d
  int MajorSubsystemVersion; // r13d
  unsigned int Win32VersionValue; // edx
  __int64 v24; // rbx
  bool v25; // zf
  _QWORD *v26; // rax
  __int64 v27; // rbx
  int v29; // edi
  char v30; // di
  char v31; // di
  __int64 v32; // rbx
  int v33; // [rsp+30h] [rbp-198h]
  USHORT v34; // [rsp+54h] [rbp-174h]
  __int64 v36; // [rsp+60h] [rbp-168h] BYREF
  __int64 v37; // [rsp+68h] [rbp-160h] BYREF
  _IMAGE_NT_HEADERS64 *v38; // [rsp+70h] [rbp-158h]
  __int64 v39; // [rsp+78h] [rbp-150h] BYREF
  __int64 v40; // [rsp+80h] [rbp-148h] BYREF
  __int64 v41; // [rsp+88h] [rbp-140h] BYREF
  _OWORD v42[10]; // [rsp+90h] [rbp-138h] BYREF
  ULONG Size; // [rsp+130h] [rbp-98h] BYREF
  _WORD *v44; // [rsp+138h] [rbp-90h]
  void *v45; // [rsp+140h] [rbp-88h]
  _QWORD *v46; // [rsp+148h] [rbp-80h]
  _BYTE v47[48]; // [rsp+150h] [rbp-78h] BYREF

  v46 = a3;
  v41 = 0LL;
  v38 = 0LL;
  memset(v47, 0, sizeof(v47));
  memset(v42, 0, sizeof(v42));
  v39 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  *(_OWORD *)a4 = 0LL;
  _BitScanForward(&v7, KeQueryGroupMaskProcess((__int64)a1));
  v34 = v7;
  *(_WORD *)(a4 + 8) = v7;
  KiStackAttachProcess(v8, 0LL, (__int64)v47, v9);
  if ( InitNlsSectionPointer
    && (v10 = MmMapViewOfSection(InitNlsSectionPointer, a1, &v39, 0LL, 0LL, &v36, &v37, 1, 5242880, 2), v10 < 0)
    || (v40 = 0LL,
        v36 = 0LL,
        v37 = 0LL,
        v10 = MmMapViewOfSection(ExLeapSecondDataSectionPointer, a1, &v40, 0LL, 0LL, &v36, &v37, 1, 5242880, 2),
        v10 < 0)
    || (v10 = MiCreatePebOrTeb(0, 0LL, &v41), v10 < 0) )
  {
    KiUnstackDetachProcess((__int64)v47, 0LL, v11, v12);
    return (unsigned int)v10;
  }
  else
  {
    v13 = (void *)a1[164];
    v45 = v13;
    *(_QWORD *)((char *)v42 + 12) = 10LL;
    WORD4(v42[1]) = NtBuildNumber;
    DWORD1(v42[1]) = 2;
    v14 = CmNtCSDVersion;
    WORD5(v42[1]) = CmNtCSDVersion;
    *(_QWORD *)&v42[2] = qword_140CFB1B8;
    *((_QWORD *)&v42[2] + 1) = qword_140CFB1B0;
    *(_QWORD *)&v42[3] = __PAIR64__(NtGlobalFlag, KeNumberProcessors_0);
    DWORD2(v42[3]) = NtGlobalFlag2;
    *(_QWORD *)&v42[4] = qword_140C4DD60;
    *((_QWORD *)&v42[4] + 1) = (unsigned int)dword_140CFB198;
    *(_QWORD *)&v42[5] = qword_140CFB1A8;
    *((_QWORD *)&v42[5] + 1) = qword_140CFB1A0;
    LOBYTE(v42[6]) = *(_BYTE *)a2;
    BYTE1(v42[6]) = *(_BYTE *)(a2 + 3);
    *((_QWORD *)&v42[6] + 1) = *(_QWORD *)(a2 + 8);
    *(_QWORD *)&v42[7] = v13;
    if ( v39 )
    {
      *((_QWORD *)&v42[8] + 1) = v39 + (unsigned int)InitUnicodeCaseTableDataOffset;
      if ( InitUnicodeCaseTableDataOffset )
      {
        *((_QWORD *)&v42[7] + 1) = v39 + (unsigned int)InitAnsiCodePageDataOffset;
        *(_QWORD *)&v42[8] = v39 + (unsigned int)InitOemCodePageDataOffset;
      }
      else
      {
        *((_QWORD *)&v42[7] + 1) = 0LL;
        *(_QWORD *)&v42[8] = 0LL;
      }
    }
    else
    {
      *((_QWORD *)&v42[7] + 1) = 0LL;
      v42[8] = 0LL;
    }
    if ( a1[171] )
      HIDWORD(v42[3]) = MmGetSessionId((__int64)a1);
    else
      HIDWORD(v42[3]) = 0;
    *(_QWORD *)&v42[9] = v40;
    DWORD2(v42[9]) = 0;
    wil_details_FeatureReporting_ReportUsageToService(
      (int)&Feature_Leap_Seconds_Sixty_Second__private_reporting,
      0xCCD568u,
      0,
      0,
      (__int64)&Feature_PdttSupport_logged_traits,
      0,
      v33);
    v15 = RtlImageNtHeader(v13);
    v38 = v15;
    Characteristics = v15->FileHeader.Characteristics;
    v17 = RtlImageDirectoryEntryToData(v13, 1u, 0xAu, &Size);
    v20 = v17;
    v44 = v17;
    if ( v17 )
    {
      if ( ((unsigned __int8)v17 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = v38;
      v20 = v44;
      v14 = WORD5(v42[1]);
    }
    Subsystem = v15->OptionalHeader.Subsystem;
    LODWORD(v42[0]) = Subsystem;
    MajorSubsystemVersion = v15->OptionalHeader.MajorSubsystemVersion;
    DWORD1(v42[0]) = MajorSubsystemVersion;
    DWORD2(v42[0]) = v15->OptionalHeader.MinorSubsystemVersion;
    Win32VersionValue = v15->OptionalHeader.Win32VersionValue;
    if ( Win32VersionValue )
    {
      if ( v20 )
      {
        if ( v20[38] )
          v14 = v20[38];
        WORD5(v42[1]) = v14;
      }
      HIDWORD(v42[0]) = (unsigned __int8)Win32VersionValue;
      LODWORD(v42[1]) = BYTE1(Win32VersionValue);
      WORD4(v42[1]) = HIWORD(Win32VersionValue);
      DWORD1(v42[1]) = (Win32VersionValue ^ 0xBFFFFFFF) >> 30;
    }
    if ( v20 )
    {
      v24 = *((_QWORD *)v20 + 8);
      *(_QWORD *)a4 = v24;
      v25 = (v24 & KeQueryGroupAffinity(v34)) == v24;
      v26 = (_QWORD *)a4;
      if ( !v25 )
        *(_QWORD *)a4 = 0LL;
    }
    else
    {
      v26 = (_QWORD *)a4;
    }
    if ( (Characteristics & 0x4000) != 0 )
    {
      v30 = _InterlockedExchangeAdd(&dword_140C4DD5C, 1u) + 1;
      do
      {
        v31 = v30 & 0x3F;
        v32 = 1LL << v31;
        *v26 = 1LL << v31;
        v30 = v31 + 1;
        v25 = (KeQueryGroupAffinity(v34) & v32) == 0;
        v26 = (_QWORD *)a4;
      }
      while ( v25 );
      v15 = v38;
      v14 = WORD5(v42[1]);
      MajorSubsystemVersion = DWORD1(v42[0]);
      Subsystem = v42[0];
    }
    v27 = v41;
    *(_QWORD *)(v41 + 280) = *(_QWORD *)((char *)v42 + 12);
    *(_WORD *)(v27 + 288) = WORD4(v42[1]);
    *(_DWORD *)(v27 + 292) = DWORD1(v42[1]);
    *(_WORD *)(v27 + 290) = v14;
    *(_OWORD *)(v27 + 200) = v42[2];
    *(_DWORD *)(v27 + 184) = KeNumberProcessors_0;
    *(_DWORD *)(v27 + 188) = NtGlobalFlag;
    *(_DWORD *)(v27 + 1988) = NtGlobalFlag2;
    *(_QWORD *)(v27 + 192) = qword_140C4DD60;
    *(_QWORD *)(v27 + 792) = (unsigned int)dword_140CFB198;
    *(_QWORD *)(v27 + 216) = qword_140CFB1A8;
    *(_QWORD *)(v27 + 224) = qword_140CFB1A0;
    *(_DWORD *)(v27 + 704) = HIDWORD(v42[3]);
    *(_DWORD *)(v27 + 296) = Subsystem;
    *(_DWORD *)(v27 + 300) = MajorSubsystemVersion;
    *(_DWORD *)(v27 + 304) = DWORD2(v42[0]);
    *(_BYTE *)v27 = v42[6];
    *(_BYTE *)(v27 + 3) = BYTE1(v42[6]);
    *(_QWORD *)(v27 + 8) = *((_QWORD *)&v42[6] + 1);
    *(_QWORD *)(v27 + 16) = v45;
    *(_QWORD *)(v27 + 160) = *((_QWORD *)&v42[7] + 1);
    *(_OWORD *)(v27 + 168) = v42[8];
    *(_QWORD *)(v27 + 1976) = *(_QWORD *)&v42[9];
    *(_DWORD *)(v27 + 1984) = 0;
    if ( a1[176] && (v29 = MiInitializeWowPeb((__int64)v42, (__int64)v15, (__int64)a1, a4), v29 < 0) )
    {
      KiUnstackDetachProcess((__int64)v47, 0LL, v18, v19);
      return (unsigned int)v29;
    }
    else
    {
      KiUnstackDetachProcess((__int64)v47, 0LL, v18, v19);
      *v46 = v27;
      return 0LL;
    }
  }
}
