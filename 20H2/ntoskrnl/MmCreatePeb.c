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
  __int64 v10; // rbx
  __int16 v11; // r14
  __int64 v12; // rdi
  __int16 v13; // r15
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rbx
  int v17; // r12d
  int v18; // r13d
  int v19; // edx
  __int64 v20; // rbx
  bool v21; // zf
  _QWORD *v22; // rax
  __int64 v23; // rbx
  int v25; // edi
  char v26; // di
  char v27; // di
  __int64 v28; // rbx
  int v29; // [rsp+30h] [rbp-198h]
  USHORT v30; // [rsp+54h] [rbp-174h]
  __int64 v32; // [rsp+60h] [rbp-168h] BYREF
  __int64 v33; // [rsp+68h] [rbp-160h] BYREF
  __int64 v34; // [rsp+70h] [rbp-158h]
  __int64 v35; // [rsp+78h] [rbp-150h] BYREF
  __int64 v36; // [rsp+80h] [rbp-148h] BYREF
  __int64 v37; // [rsp+88h] [rbp-140h] BYREF
  _OWORD v38[10]; // [rsp+90h] [rbp-138h] BYREF
  char v39; // [rsp+130h] [rbp-98h] BYREF
  __int64 v40; // [rsp+138h] [rbp-90h]
  __int64 v41; // [rsp+140h] [rbp-88h]
  _QWORD *v42; // [rsp+148h] [rbp-80h]
  _BYTE v43[48]; // [rsp+150h] [rbp-78h] BYREF

  v42 = a3;
  v37 = 0LL;
  v34 = 0LL;
  memset(v43, 0, sizeof(v43));
  memset(v38, 0, sizeof(v38));
  v35 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  *(_OWORD *)a4 = 0LL;
  _BitScanForward(&v7, KeQueryGroupMaskProcess((__int64)a1));
  v30 = v7;
  *(_WORD *)(a4 + 8) = v7;
  KiStackAttachProcess(v8, 0, (__int64)v43);
  if ( InitNlsSectionPointer
    && (v9 = MmMapViewOfSection(InitNlsSectionPointer, a1, &v35, 0LL, 0LL, &v32, &v33, 1, 5242880, 2), v9 < 0)
    || (v36 = 0LL,
        v32 = 0LL,
        v33 = 0LL,
        v9 = MmMapViewOfSection(ExLeapSecondDataSectionPointer, a1, &v36, 0LL, 0LL, &v32, &v33, 1, 5242880, 2),
        v9 < 0)
    || (v9 = MiCreatePebOrTeb(0, 0LL, &v37), v9 < 0) )
  {
    KiUnstackDetachProcess((__int64)v43, 0);
    return (unsigned int)v9;
  }
  else
  {
    v10 = a1[164];
    v41 = v10;
    *(_QWORD *)((char *)v38 + 12) = 10LL;
    WORD4(v38[1]) = NtBuildNumber;
    DWORD1(v38[1]) = 2;
    v11 = CmNtCSDVersion;
    WORD5(v38[1]) = CmNtCSDVersion;
    *(_QWORD *)&v38[2] = qword_140CFB1B8;
    *((_QWORD *)&v38[2] + 1) = qword_140CFB1B0;
    *(_QWORD *)&v38[3] = __PAIR64__(NtGlobalFlag, KeNumberProcessors_0);
    DWORD2(v38[3]) = NtGlobalFlag2;
    *(_QWORD *)&v38[4] = qword_140C4DCA0;
    *((_QWORD *)&v38[4] + 1) = (unsigned int)dword_140CFB198;
    *(_QWORD *)&v38[5] = qword_140CFB1A8;
    *((_QWORD *)&v38[5] + 1) = qword_140CFB1A0;
    LOBYTE(v38[6]) = *(_BYTE *)a2;
    BYTE1(v38[6]) = *(_BYTE *)(a2 + 3);
    *((_QWORD *)&v38[6] + 1) = *(_QWORD *)(a2 + 8);
    *(_QWORD *)&v38[7] = v10;
    if ( v35 )
    {
      *((_QWORD *)&v38[8] + 1) = v35 + (unsigned int)InitUnicodeCaseTableDataOffset;
      if ( InitUnicodeCaseTableDataOffset )
      {
        *((_QWORD *)&v38[7] + 1) = v35 + (unsigned int)InitAnsiCodePageDataOffset;
        *(_QWORD *)&v38[8] = v35 + (unsigned int)InitOemCodePageDataOffset;
      }
      else
      {
        *((_QWORD *)&v38[7] + 1) = 0LL;
        *(_QWORD *)&v38[8] = 0LL;
      }
    }
    else
    {
      *((_QWORD *)&v38[7] + 1) = 0LL;
      v38[8] = 0LL;
    }
    if ( a1[171] )
      HIDWORD(v38[3]) = MmGetSessionId((__int64)a1);
    else
      HIDWORD(v38[3]) = 0;
    *(_QWORD *)&v38[9] = v36;
    DWORD2(v38[9]) = 0;
    wil_details_FeatureReporting_ReportUsageToService(
      (int)&Feature_Leap_Seconds_Sixty_Second__private_reporting,
      0xCCD568u,
      0,
      0,
      (__int64)&Feature_PdttSupport_logged_traits,
      0,
      v29);
    v12 = RtlImageNtHeader(v10);
    v34 = v12;
    v13 = *(_WORD *)(v12 + 22);
    LOBYTE(v14) = 1;
    v15 = RtlImageDirectoryEntryToData(v10, v14, 10, (int)&v39);
    v16 = v15;
    v40 = v15;
    if ( v15 )
    {
      if ( (v15 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = v34;
      v16 = v40;
      v11 = WORD5(v38[1]);
    }
    v17 = *(unsigned __int16 *)(v12 + 92);
    LODWORD(v38[0]) = v17;
    v18 = *(unsigned __int16 *)(v12 + 72);
    DWORD1(v38[0]) = v18;
    DWORD2(v38[0]) = *(unsigned __int16 *)(v12 + 74);
    v19 = *(_DWORD *)(v12 + 76);
    if ( v19 )
    {
      if ( v16 )
      {
        if ( *(_WORD *)(v16 + 76) )
          v11 = *(_WORD *)(v16 + 76);
        WORD5(v38[1]) = v11;
      }
      HIDWORD(v38[0]) = (unsigned __int8)v19;
      LODWORD(v38[1]) = BYTE1(v19);
      WORD4(v38[1]) = HIWORD(v19);
      DWORD1(v38[1]) = (v19 ^ 0xBFFFFFFF) >> 30;
    }
    if ( v16 )
    {
      v20 = *(_QWORD *)(v16 + 64);
      *(_QWORD *)a4 = v20;
      v21 = (v20 & KeQueryGroupAffinity(v30)) == v20;
      v22 = (_QWORD *)a4;
      if ( !v21 )
        *(_QWORD *)a4 = 0LL;
    }
    else
    {
      v22 = (_QWORD *)a4;
    }
    if ( (v13 & 0x4000) != 0 )
    {
      v26 = _InterlockedExchangeAdd(&dword_140C4DC9C, 1u) + 1;
      do
      {
        v27 = v26 & 0x3F;
        v28 = 1LL << v27;
        *v22 = 1LL << v27;
        v26 = v27 + 1;
        v21 = (KeQueryGroupAffinity(v30) & v28) == 0;
        v22 = (_QWORD *)a4;
      }
      while ( v21 );
      v12 = v34;
      v11 = WORD5(v38[1]);
      v18 = DWORD1(v38[0]);
      v17 = v38[0];
    }
    v23 = v37;
    *(_QWORD *)(v37 + 280) = *(_QWORD *)((char *)v38 + 12);
    *(_WORD *)(v23 + 288) = WORD4(v38[1]);
    *(_DWORD *)(v23 + 292) = DWORD1(v38[1]);
    *(_WORD *)(v23 + 290) = v11;
    *(_OWORD *)(v23 + 200) = v38[2];
    *(_DWORD *)(v23 + 184) = KeNumberProcessors_0;
    *(_DWORD *)(v23 + 188) = NtGlobalFlag;
    *(_DWORD *)(v23 + 1988) = NtGlobalFlag2;
    *(_QWORD *)(v23 + 192) = qword_140C4DCA0;
    *(_QWORD *)(v23 + 792) = (unsigned int)dword_140CFB198;
    *(_QWORD *)(v23 + 216) = qword_140CFB1A8;
    *(_QWORD *)(v23 + 224) = qword_140CFB1A0;
    *(_DWORD *)(v23 + 704) = HIDWORD(v38[3]);
    *(_DWORD *)(v23 + 296) = v17;
    *(_DWORD *)(v23 + 300) = v18;
    *(_DWORD *)(v23 + 304) = DWORD2(v38[0]);
    *(_BYTE *)v23 = v38[6];
    *(_BYTE *)(v23 + 3) = BYTE1(v38[6]);
    *(_QWORD *)(v23 + 8) = *((_QWORD *)&v38[6] + 1);
    *(_QWORD *)(v23 + 16) = v41;
    *(_QWORD *)(v23 + 160) = *((_QWORD *)&v38[7] + 1);
    *(_OWORD *)(v23 + 168) = v38[8];
    *(_QWORD *)(v23 + 1976) = *(_QWORD *)&v38[9];
    *(_DWORD *)(v23 + 1984) = 0;
    if ( a1[176] && (v25 = MiInitializeWowPeb(v38, v12, a1, a4), v25 < 0) )
    {
      KiUnstackDetachProcess((__int64)v43, 0);
      return (unsigned int)v25;
    }
    else
    {
      KiUnstackDetachProcess((__int64)v43, 0);
      *v42 = v23;
      return 0LL;
    }
  }
}
