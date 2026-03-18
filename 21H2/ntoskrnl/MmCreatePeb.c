/*
 * XREFs of MmCreatePeb @ 0x140755B70
 * Callers:
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402D6B0C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     KeQueryGroupMaskProcess @ 0x1402D7598 (KeQueryGroupMaskProcess.c)
 *     KeQueryGroupAffinity @ 0x1402D75B0 (KeQueryGroupAffinity.c)
 *     MmGetSessionId @ 0x140300B40 (MmGetSessionId.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiInitializeWowPeb @ 0x1406D8E14 (MiInitializeWowPeb.c)
 *     MiCreatePebOrTeb @ 0x1407099A4 (MiCreatePebOrTeb.c)
 *     MmMapViewOfSection @ 0x140785150 (MmMapViewOfSection.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MmCreatePeb(_QWORD *a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned int v7; // eax
  _KPROCESS *v8; // rcx
  _DWORD *v9; // r9
  __int64 v10; // rdx
  int v11; // ebx
  _WORD *CurrentServerSiloGlobals; // rax
  __int64 v13; // rbx
  __int16 v14; // si
  __int64 v15; // rdi
  __int16 v16; // r15
  int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rbx
  int v20; // r12d
  int v21; // r13d
  int v22; // edx
  __int64 v23; // rbx
  bool v24; // zf
  _QWORD *v25; // rax
  __int64 v26; // rbx
  int v28; // edi
  char v29; // di
  char v30; // di
  __int64 v31; // rbx
  int v32; // [rsp+30h] [rbp-188h]
  USHORT v33; // [rsp+54h] [rbp-164h]
  __int64 v35; // [rsp+60h] [rbp-158h]
  _QWORD v36[18]; // [rsp+70h] [rbp-148h] BYREF
  __int64 v37; // [rsp+100h] [rbp-B8h] BYREF
  __int64 v38; // [rsp+108h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+110h] [rbp-A8h] BYREF
  char v40; // [rsp+118h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+120h] [rbp-98h] BYREF
  __int64 v42; // [rsp+128h] [rbp-90h]
  __int64 v43; // [rsp+130h] [rbp-88h]
  _QWORD *v44; // [rsp+138h] [rbp-80h]
  _BYTE v45[48]; // [rsp+140h] [rbp-78h] BYREF

  v44 = a3;
  v39 = 0LL;
  memset(v45, 0, sizeof(v45));
  memset(v36, 0, sizeof(v36));
  *(_OWORD *)a4 = 0LL;
  _BitScanForward(&v7, KeQueryGroupMaskProcess((__int64)a1));
  v33 = v7;
  *(_WORD *)(a4 + 8) = v7;
  KiStackAttachProcess(v8, 0LL, (__int64)v45, v9);
  v38 = 0LL;
  v37 = 0LL;
  v41 = 0LL;
  v11 = MmMapViewOfSection(ExLeapSecondDataSectionPointer, a1, &v38, 0LL, 0LL, &v37, &v41, 1, 5242880, 2);
  if ( v11 < 0 || (v11 = MiCreatePebOrTeb(0LL, v10, &v39), v11 < 0) )
  {
    KiUnstackDetachProcess((__int64)v45, 0LL);
    return (unsigned int)v11;
  }
  else
  {
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v13 = a1[164];
    v43 = v13;
    *(_QWORD *)((char *)&v36[1] + 4) = 10LL;
    LOWORD(v36[3]) = NtBuildNumber;
    HIDWORD(v36[2]) = 2;
    v14 = CmNtCSDVersion;
    WORD1(v36[3]) = CmNtCSDVersion;
    v36[4] = qword_140D051F8;
    v36[5] = qword_140D051F0;
    v36[6] = __PAIR64__(NtGlobalFlag, KeNumberProcessors_0);
    LODWORD(v36[7]) = NtGlobalFlag2;
    v36[8] = qword_140C50650;
    v36[9] = (unsigned int)dword_140D051D8;
    v36[10] = qword_140D051E8;
    v36[11] = qword_140D051E0;
    LOBYTE(v36[12]) = *(_BYTE *)a2;
    BYTE1(v36[12]) = *(_BYTE *)(a2 + 3);
    v36[13] = *(_QWORD *)(a2 + 8);
    v36[14] = v13;
    LOWORD(v36[15]) = CurrentServerSiloGlobals[532];
    WORD1(v36[15]) = CurrentServerSiloGlobals[564];
    if ( *((_QWORD *)CurrentServerSiloGlobals + 154) )
      WORD2(v36[15]) = 1701;
    else
      WORD2(v36[15]) = 0;
    if ( a1[171] )
      HIDWORD(v36[7]) = MmGetSessionId((__int64)a1);
    else
      HIDWORD(v36[7]) = 0;
    v36[16] = v38;
    LODWORD(v36[17]) = 0;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_Leap_Seconds_Sixty_Second__private_reporting,
      0xCCD568u,
      0,
      0,
      (__int64)&Feature_PdttSupport_logged_traits,
      0,
      v32);
    v15 = RtlImageNtHeader(v13);
    v35 = v15;
    v16 = *(_WORD *)(v15 + 22);
    LOBYTE(v17) = 1;
    v18 = RtlImageDirectoryEntryToData(v13, v17, 10, (int)&v40);
    v19 = v18;
    v42 = v18;
    if ( v18 )
    {
      if ( (v18 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v19 = v42;
      v14 = WORD1(v36[3]);
    }
    v20 = *(unsigned __int16 *)(v15 + 92);
    LODWORD(v36[0]) = v20;
    v21 = *(unsigned __int16 *)(v15 + 72);
    HIDWORD(v36[0]) = v21;
    LODWORD(v36[1]) = *(unsigned __int16 *)(v15 + 74);
    v22 = *(_DWORD *)(v15 + 76);
    if ( v22 )
    {
      if ( v19 )
      {
        if ( *(_WORD *)(v19 + 76) )
          v14 = *(_WORD *)(v19 + 76);
        WORD1(v36[3]) = v14;
      }
      HIDWORD(v36[1]) = (unsigned __int8)v22;
      LODWORD(v36[2]) = BYTE1(v22);
      LOWORD(v36[3]) = HIWORD(v22);
      HIDWORD(v36[2]) = (v22 ^ 0xBFFFFFFF) >> 30;
    }
    if ( v19 )
    {
      v23 = *(_QWORD *)(v19 + 64);
      *(_QWORD *)a4 = v23;
      v24 = (v23 & KeQueryGroupAffinity(v33)) == v23;
      v25 = (_QWORD *)a4;
      if ( !v24 )
        *(_QWORD *)a4 = 0LL;
    }
    else
    {
      v25 = (_QWORD *)a4;
    }
    if ( (v16 & 0x4000) != 0 )
    {
      v29 = _InterlockedExchangeAdd(&dword_140C5064C, 1u) + 1;
      do
      {
        v30 = v29 & 0x3F;
        v31 = 1LL << v30;
        *v25 = 1LL << v30;
        v29 = v30 + 1;
        v24 = (KeQueryGroupAffinity(v33) & v31) == 0;
        v25 = (_QWORD *)a4;
      }
      while ( v24 );
      v15 = v35;
      v14 = WORD1(v36[3]);
      v21 = HIDWORD(v36[0]);
      v20 = v36[0];
    }
    v26 = v39;
    *(_QWORD *)(v39 + 280) = *(_QWORD *)((char *)&v36[1] + 4);
    *(_WORD *)(v26 + 288) = v36[3];
    *(_DWORD *)(v26 + 292) = HIDWORD(v36[2]);
    *(_WORD *)(v26 + 290) = v14;
    *(_QWORD *)(v26 + 200) = v36[4];
    *(_QWORD *)(v26 + 208) = v36[5];
    *(_DWORD *)(v26 + 184) = KeNumberProcessors_0;
    *(_DWORD *)(v26 + 188) = NtGlobalFlag;
    *(_DWORD *)(v26 + 1988) = NtGlobalFlag2;
    *(_QWORD *)(v26 + 192) = qword_140C50650;
    *(_QWORD *)(v26 + 792) = (unsigned int)dword_140D051D8;
    *(_QWORD *)(v26 + 216) = qword_140D051E8;
    *(_QWORD *)(v26 + 224) = qword_140D051E0;
    *(_DWORD *)(v26 + 704) = HIDWORD(v36[7]);
    *(_DWORD *)(v26 + 296) = v20;
    *(_DWORD *)(v26 + 300) = v21;
    *(_DWORD *)(v26 + 304) = v36[1];
    *(_BYTE *)v26 = v36[12];
    *(_BYTE *)(v26 + 3) = BYTE1(v36[12]);
    *(_QWORD *)(v26 + 8) = v36[13];
    *(_QWORD *)(v26 + 16) = v43;
    *(_DWORD *)(v26 + 844) = v36[15];
    *(_WORD *)(v26 + 848) = WORD2(v36[15]);
    *(_QWORD *)(v26 + 1976) = v36[16];
    *(_DWORD *)(v26 + 1984) = 0;
    if ( a1[176] && (v28 = MiInitializeWowPeb((__int64)v36, v15, (__int64)a1, a4), v28 < 0) )
    {
      KiUnstackDetachProcess((__int64)v45, 0LL);
      return (unsigned int)v28;
    }
    else
    {
      KiUnstackDetachProcess((__int64)v45, 0LL);
      *v44 = v26;
      return 0LL;
    }
  }
}
