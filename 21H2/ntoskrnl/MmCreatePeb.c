/*
 * XREFs of MmCreatePeb @ 0x1406A1848
 * Callers:
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 * Callees:
 *     KeQueryGroupAffinity @ 0x140247ED0 (KeQueryGroupAffinity.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KeQueryGroupMaskProcess @ 0x14027DD98 (KeQueryGroupMaskProcess.c)
 *     RtlImageDirectoryEntryToData @ 0x140286140 (RtlImageDirectoryEntryToData.c)
 *     MmGetSessionId @ 0x1402863C0 (MmGetSessionId.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     RtlImageNtHeader @ 0x1403276A0 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     Feature_Leap_Seconds_Sixty_Second__private_ReportDeviceUsage @ 0x1403F7DEC (Feature_Leap_Seconds_Sixty_Second__private_ReportDeviceUsage.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiInitializeWowPeb @ 0x1405EBA24 (MiInitializeWowPeb.c)
 *     MiCreatePebOrTeb @ 0x140640F24 (MiCreatePebOrTeb.c)
 *     MmMapViewOfSection @ 0x1406A1F20 (MmMapViewOfSection.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MmCreatePeb(_QWORD *a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned int v7; // eax
  _KPROCESS *v8; // rcx
  int v9; // ebx
  void *v11; // rbx
  __int16 v12; // r14
  PIMAGE_NT_HEADERS v13; // rdi
  unsigned __int16 Characteristics; // r15
  _WORD *v15; // rax
  _WORD *v16; // rbx
  int Subsystem; // r12d
  int MajorSubsystemVersion; // r13d
  unsigned int Win32VersionValue; // edx
  __int64 v20; // rbx
  bool v21; // zf
  _QWORD *v22; // rax
  char v23; // di
  char v24; // di
  __int64 v25; // rbx
  __int64 v26; // rbx
  int v27; // edi
  USHORT v28; // [rsp+54h] [rbp-174h]
  __int64 v30; // [rsp+60h] [rbp-168h] BYREF
  __int64 v31; // [rsp+68h] [rbp-160h] BYREF
  _IMAGE_NT_HEADERS64 *v32; // [rsp+70h] [rbp-158h]
  __int64 v33; // [rsp+78h] [rbp-150h] BYREF
  __int64 v34; // [rsp+80h] [rbp-148h] BYREF
  __int64 v35; // [rsp+88h] [rbp-140h] BYREF
  _OWORD v36[10]; // [rsp+90h] [rbp-138h] BYREF
  ULONG Size; // [rsp+130h] [rbp-98h] BYREF
  _WORD *v38; // [rsp+138h] [rbp-90h]
  void *v39; // [rsp+140h] [rbp-88h]
  _QWORD *v40; // [rsp+148h] [rbp-80h]
  _BYTE v41[48]; // [rsp+150h] [rbp-78h] BYREF

  v40 = a3;
  v35 = 0LL;
  v32 = 0LL;
  memset(v41, 0, sizeof(v41));
  memset(v36, 0, sizeof(v36));
  v33 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  *(_OWORD *)a4 = 0LL;
  _BitScanForward(&v7, KeQueryGroupMaskProcess((__int64)a1));
  v28 = v7;
  *(_WORD *)(a4 + 8) = v7;
  KiStackAttachProcess(v8, 0, (__int64)v41);
  if ( InitNlsSectionPointer
    && (v9 = MmMapViewOfSection(InitNlsSectionPointer, a1, &v33, 0LL, 0LL, &v30, &v31, 1, 5242880, 2), v9 < 0)
    || (v34 = 0LL,
        v30 = 0LL,
        v31 = 0LL,
        v9 = MmMapViewOfSection(ExLeapSecondDataSectionPointer, a1, &v34, 0LL, 0LL, &v30, &v31, 1, 5242880, 2),
        v9 < 0)
    || (v9 = MiCreatePebOrTeb(0, 0LL, &v35), v9 < 0) )
  {
    KiUnstackDetachProcess((__int64)v41, 0LL);
    return (unsigned int)v9;
  }
  else
  {
    v11 = (void *)a1[164];
    v39 = v11;
    *(_QWORD *)((char *)v36 + 12) = 10LL;
    WORD4(v36[1]) = NtBuildNumber;
    DWORD1(v36[1]) = 2;
    v12 = CmNtCSDVersion;
    WORD5(v36[1]) = CmNtCSDVersion;
    *(_QWORD *)&v36[2] = qword_140CFB1B8;
    *((_QWORD *)&v36[2] + 1) = qword_140CFB1B0;
    *(_QWORD *)&v36[3] = __PAIR64__(NtGlobalFlag, KeNumberProcessors_0);
    DWORD2(v36[3]) = NtGlobalFlag2;
    *(_QWORD *)&v36[4] = qword_140C4DE60;
    *((_QWORD *)&v36[4] + 1) = (unsigned int)dword_140CFB198;
    *(_QWORD *)&v36[5] = qword_140CFB1A8;
    *((_QWORD *)&v36[5] + 1) = qword_140CFB1A0;
    LOBYTE(v36[6]) = *(_BYTE *)a2;
    BYTE1(v36[6]) = *(_BYTE *)(a2 + 3);
    *((_QWORD *)&v36[6] + 1) = *(_QWORD *)(a2 + 8);
    *(_QWORD *)&v36[7] = v11;
    if ( v33 )
    {
      *((_QWORD *)&v36[8] + 1) = v33 + (unsigned int)InitUnicodeCaseTableDataOffset;
      if ( InitUnicodeCaseTableDataOffset )
      {
        *((_QWORD *)&v36[7] + 1) = v33 + (unsigned int)InitAnsiCodePageDataOffset;
        *(_QWORD *)&v36[8] = v33 + (unsigned int)InitOemCodePageDataOffset;
      }
      else
      {
        *((_QWORD *)&v36[7] + 1) = 0LL;
        *(_QWORD *)&v36[8] = 0LL;
      }
    }
    else
    {
      *((_QWORD *)&v36[7] + 1) = 0LL;
      v36[8] = 0LL;
    }
    if ( a1[171] )
      HIDWORD(v36[3]) = MmGetSessionId((__int64)a1);
    else
      HIDWORD(v36[3]) = 0;
    *(_QWORD *)&v36[9] = v34;
    DWORD2(v36[9]) = 0;
    Feature_Leap_Seconds_Sixty_Second__private_ReportDeviceUsage();
    v13 = RtlImageNtHeader(v11);
    v32 = v13;
    Characteristics = v13->FileHeader.Characteristics;
    v15 = RtlImageDirectoryEntryToData(v11, 1u, 0xAu, &Size);
    v16 = v15;
    v38 = v15;
    if ( v15 )
    {
      if ( ((unsigned __int8)v15 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = v32;
      v16 = v38;
      v12 = WORD5(v36[1]);
    }
    Subsystem = v13->OptionalHeader.Subsystem;
    LODWORD(v36[0]) = Subsystem;
    MajorSubsystemVersion = v13->OptionalHeader.MajorSubsystemVersion;
    DWORD1(v36[0]) = MajorSubsystemVersion;
    DWORD2(v36[0]) = v13->OptionalHeader.MinorSubsystemVersion;
    Win32VersionValue = v13->OptionalHeader.Win32VersionValue;
    if ( Win32VersionValue )
    {
      if ( v16 )
      {
        if ( v16[38] )
          v12 = v16[38];
        WORD5(v36[1]) = v12;
      }
      HIDWORD(v36[0]) = (unsigned __int8)Win32VersionValue;
      LODWORD(v36[1]) = BYTE1(Win32VersionValue);
      WORD4(v36[1]) = HIWORD(Win32VersionValue);
      DWORD1(v36[1]) = (Win32VersionValue ^ 0xBFFFFFFF) >> 30;
    }
    if ( v16 )
    {
      v20 = *((_QWORD *)v16 + 8);
      *(_QWORD *)a4 = v20;
      v21 = (v20 & KeQueryGroupAffinity(v28)) == v20;
      v22 = (_QWORD *)a4;
      if ( !v21 )
        *(_QWORD *)a4 = 0LL;
    }
    else
    {
      v22 = (_QWORD *)a4;
    }
    if ( (Characteristics & 0x4000) != 0 )
    {
      v23 = _InterlockedExchangeAdd(&dword_140C4DE5C, 1u) + 1;
      do
      {
        v24 = v23 & 0x3F;
        v25 = 1LL << v24;
        *v22 = 1LL << v24;
        v23 = v24 + 1;
        v21 = (KeQueryGroupAffinity(v28) & v25) == 0;
        v22 = (_QWORD *)a4;
      }
      while ( v21 );
      v13 = v32;
      v12 = WORD5(v36[1]);
      MajorSubsystemVersion = DWORD1(v36[0]);
      Subsystem = v36[0];
    }
    v26 = v35;
    *(_QWORD *)(v35 + 280) = *(_QWORD *)((char *)v36 + 12);
    *(_WORD *)(v26 + 288) = WORD4(v36[1]);
    *(_DWORD *)(v26 + 292) = DWORD1(v36[1]);
    *(_WORD *)(v26 + 290) = v12;
    *(_OWORD *)(v26 + 200) = v36[2];
    *(_DWORD *)(v26 + 184) = KeNumberProcessors_0;
    *(_DWORD *)(v26 + 188) = NtGlobalFlag;
    *(_DWORD *)(v26 + 1988) = NtGlobalFlag2;
    *(_QWORD *)(v26 + 192) = qword_140C4DE60;
    *(_QWORD *)(v26 + 792) = (unsigned int)dword_140CFB198;
    *(_QWORD *)(v26 + 216) = qword_140CFB1A8;
    *(_QWORD *)(v26 + 224) = qword_140CFB1A0;
    *(_DWORD *)(v26 + 704) = HIDWORD(v36[3]);
    *(_DWORD *)(v26 + 296) = Subsystem;
    *(_DWORD *)(v26 + 300) = MajorSubsystemVersion;
    *(_DWORD *)(v26 + 304) = DWORD2(v36[0]);
    *(_BYTE *)v26 = v36[6];
    *(_BYTE *)(v26 + 3) = BYTE1(v36[6]);
    *(_QWORD *)(v26 + 8) = *((_QWORD *)&v36[6] + 1);
    *(_QWORD *)(v26 + 16) = v39;
    *(_QWORD *)(v26 + 160) = *((_QWORD *)&v36[7] + 1);
    *(_OWORD *)(v26 + 168) = v36[8];
    *(_QWORD *)(v26 + 1976) = *(_QWORD *)&v36[9];
    *(_DWORD *)(v26 + 1984) = 0;
    if ( a1[176] && (v27 = MiInitializeWowPeb((__int64)v36, (__int64)v13, (__int64)a1, a4), v27 < 0) )
    {
      KiUnstackDetachProcess((__int64)v41, 0LL);
      return (unsigned int)v27;
    }
    else
    {
      KiUnstackDetachProcess((__int64)v41, 0LL);
      *v40 = v26;
      return 0LL;
    }
  }
}
