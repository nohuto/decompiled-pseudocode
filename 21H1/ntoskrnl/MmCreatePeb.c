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
  __int64 v13; // rbx
  __int16 v14; // r14
  __int64 v15; // rdi
  __int16 v16; // r15
  int v17; // edx
  __int64 v18; // rax
  __int64 v19; // r8
  _DWORD *v20; // r9
  __int64 v21; // rbx
  int v22; // r12d
  int v23; // r13d
  int v24; // edx
  __int64 v25; // rbx
  bool v26; // zf
  _QWORD *v27; // rax
  __int64 v28; // rbx
  int v30; // edi
  char v31; // di
  char v32; // di
  __int64 v33; // rbx
  int v34; // [rsp+30h] [rbp-198h]
  USHORT v35; // [rsp+54h] [rbp-174h]
  __int64 v37; // [rsp+60h] [rbp-168h] BYREF
  __int64 v38; // [rsp+68h] [rbp-160h] BYREF
  __int64 v39; // [rsp+70h] [rbp-158h]
  __int64 v40; // [rsp+78h] [rbp-150h] BYREF
  __int64 v41; // [rsp+80h] [rbp-148h] BYREF
  __int64 v42; // [rsp+88h] [rbp-140h] BYREF
  _OWORD v43[10]; // [rsp+90h] [rbp-138h] BYREF
  char v44; // [rsp+130h] [rbp-98h] BYREF
  __int64 v45; // [rsp+138h] [rbp-90h]
  __int64 v46; // [rsp+140h] [rbp-88h]
  _QWORD *v47; // [rsp+148h] [rbp-80h]
  _BYTE v48[48]; // [rsp+150h] [rbp-78h] BYREF

  v47 = a3;
  v42 = 0LL;
  v39 = 0LL;
  memset(v48, 0, sizeof(v48));
  memset(v43, 0, sizeof(v43));
  v40 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  *(_OWORD *)a4 = 0LL;
  _BitScanForward(&v7, KeQueryGroupMaskProcess((__int64)a1));
  v35 = v7;
  *(_WORD *)(a4 + 8) = v7;
  KiStackAttachProcess(v8, 0LL, (__int64)v48, v9);
  if ( InitNlsSectionPointer
    && (v10 = MmMapViewOfSection(InitNlsSectionPointer, a1, &v40, 0LL, 0LL, &v37, &v38, 1, 5242880, 2), v10 < 0)
    || (v41 = 0LL,
        v37 = 0LL,
        v38 = 0LL,
        v10 = MmMapViewOfSection(ExLeapSecondDataSectionPointer, a1, &v41, 0LL, 0LL, &v37, &v38, 1, 5242880, 2),
        v10 < 0)
    || (v10 = MiCreatePebOrTeb(0, 0LL, &v42), v10 < 0) )
  {
    KiUnstackDetachProcess((__int64)v48, 0LL, v11, v12);
    return (unsigned int)v10;
  }
  else
  {
    v13 = a1[164];
    v46 = v13;
    *(_QWORD *)((char *)v43 + 12) = 10LL;
    WORD4(v43[1]) = NtBuildNumber;
    DWORD1(v43[1]) = 2;
    v14 = CmNtCSDVersion;
    WORD5(v43[1]) = CmNtCSDVersion;
    *(_QWORD *)&v43[2] = qword_140CFB1B8;
    *((_QWORD *)&v43[2] + 1) = qword_140CFB1B0;
    *(_QWORD *)&v43[3] = __PAIR64__(NtGlobalFlag, KeNumberProcessors_0);
    DWORD2(v43[3]) = NtGlobalFlag2;
    *(_QWORD *)&v43[4] = qword_140C4DD60;
    *((_QWORD *)&v43[4] + 1) = (unsigned int)dword_140CFB198;
    *(_QWORD *)&v43[5] = qword_140CFB1A8;
    *((_QWORD *)&v43[5] + 1) = qword_140CFB1A0;
    LOBYTE(v43[6]) = *(_BYTE *)a2;
    BYTE1(v43[6]) = *(_BYTE *)(a2 + 3);
    *((_QWORD *)&v43[6] + 1) = *(_QWORD *)(a2 + 8);
    *(_QWORD *)&v43[7] = v13;
    if ( v40 )
    {
      *((_QWORD *)&v43[8] + 1) = v40 + (unsigned int)InitUnicodeCaseTableDataOffset;
      if ( InitUnicodeCaseTableDataOffset )
      {
        *((_QWORD *)&v43[7] + 1) = v40 + (unsigned int)InitAnsiCodePageDataOffset;
        *(_QWORD *)&v43[8] = v40 + (unsigned int)InitOemCodePageDataOffset;
      }
      else
      {
        *((_QWORD *)&v43[7] + 1) = 0LL;
        *(_QWORD *)&v43[8] = 0LL;
      }
    }
    else
    {
      *((_QWORD *)&v43[7] + 1) = 0LL;
      v43[8] = 0LL;
    }
    if ( a1[171] )
      HIDWORD(v43[3]) = MmGetSessionId((__int64)a1);
    else
      HIDWORD(v43[3]) = 0;
    *(_QWORD *)&v43[9] = v41;
    DWORD2(v43[9]) = 0;
    wil_details_FeatureReporting_ReportUsageToService(
      (int)&Feature_Leap_Seconds_Sixty_Second__private_reporting,
      0xCCD568u,
      0,
      0,
      (__int64)&Feature_PdttSupport_logged_traits,
      0,
      v34);
    v15 = RtlImageNtHeader(v13);
    v39 = v15;
    v16 = *(_WORD *)(v15 + 22);
    LOBYTE(v17) = 1;
    v18 = RtlImageDirectoryEntryToData(v13, v17, 10, (int)&v44);
    v21 = v18;
    v45 = v18;
    if ( v18 )
    {
      if ( (v18 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = v39;
      v21 = v45;
      v14 = WORD5(v43[1]);
    }
    v22 = *(unsigned __int16 *)(v15 + 92);
    LODWORD(v43[0]) = v22;
    v23 = *(unsigned __int16 *)(v15 + 72);
    DWORD1(v43[0]) = v23;
    DWORD2(v43[0]) = *(unsigned __int16 *)(v15 + 74);
    v24 = *(_DWORD *)(v15 + 76);
    if ( v24 )
    {
      if ( v21 )
      {
        if ( *(_WORD *)(v21 + 76) )
          v14 = *(_WORD *)(v21 + 76);
        WORD5(v43[1]) = v14;
      }
      HIDWORD(v43[0]) = (unsigned __int8)v24;
      LODWORD(v43[1]) = BYTE1(v24);
      WORD4(v43[1]) = HIWORD(v24);
      DWORD1(v43[1]) = (v24 ^ 0xBFFFFFFF) >> 30;
    }
    if ( v21 )
    {
      v25 = *(_QWORD *)(v21 + 64);
      *(_QWORD *)a4 = v25;
      v26 = (v25 & KeQueryGroupAffinity(v35)) == v25;
      v27 = (_QWORD *)a4;
      if ( !v26 )
        *(_QWORD *)a4 = 0LL;
    }
    else
    {
      v27 = (_QWORD *)a4;
    }
    if ( (v16 & 0x4000) != 0 )
    {
      v31 = _InterlockedExchangeAdd(&dword_140C4DD5C, 1u) + 1;
      do
      {
        v32 = v31 & 0x3F;
        v33 = 1LL << v32;
        *v27 = 1LL << v32;
        v31 = v32 + 1;
        v26 = (KeQueryGroupAffinity(v35) & v33) == 0;
        v27 = (_QWORD *)a4;
      }
      while ( v26 );
      v15 = v39;
      v14 = WORD5(v43[1]);
      v23 = DWORD1(v43[0]);
      v22 = v43[0];
    }
    v28 = v42;
    *(_QWORD *)(v42 + 280) = *(_QWORD *)((char *)v43 + 12);
    *(_WORD *)(v28 + 288) = WORD4(v43[1]);
    *(_DWORD *)(v28 + 292) = DWORD1(v43[1]);
    *(_WORD *)(v28 + 290) = v14;
    *(_OWORD *)(v28 + 200) = v43[2];
    *(_DWORD *)(v28 + 184) = KeNumberProcessors_0;
    *(_DWORD *)(v28 + 188) = NtGlobalFlag;
    *(_DWORD *)(v28 + 1988) = NtGlobalFlag2;
    *(_QWORD *)(v28 + 192) = qword_140C4DD60;
    *(_QWORD *)(v28 + 792) = (unsigned int)dword_140CFB198;
    *(_QWORD *)(v28 + 216) = qword_140CFB1A8;
    *(_QWORD *)(v28 + 224) = qword_140CFB1A0;
    *(_DWORD *)(v28 + 704) = HIDWORD(v43[3]);
    *(_DWORD *)(v28 + 296) = v22;
    *(_DWORD *)(v28 + 300) = v23;
    *(_DWORD *)(v28 + 304) = DWORD2(v43[0]);
    *(_BYTE *)v28 = v43[6];
    *(_BYTE *)(v28 + 3) = BYTE1(v43[6]);
    *(_QWORD *)(v28 + 8) = *((_QWORD *)&v43[6] + 1);
    *(_QWORD *)(v28 + 16) = v46;
    *(_QWORD *)(v28 + 160) = *((_QWORD *)&v43[7] + 1);
    *(_OWORD *)(v28 + 168) = v43[8];
    *(_QWORD *)(v28 + 1976) = *(_QWORD *)&v43[9];
    *(_DWORD *)(v28 + 1984) = 0;
    if ( a1[176] && (v30 = MiInitializeWowPeb((__int64)v43, v15, (__int64)a1, a4), v30 < 0) )
    {
      KiUnstackDetachProcess((__int64)v48, 0LL, v19, v20);
      return (unsigned int)v30;
    }
    else
    {
      KiUnstackDetachProcess((__int64)v48, 0LL, v19, v20);
      *v47 = v28;
      return 0LL;
    }
  }
}
