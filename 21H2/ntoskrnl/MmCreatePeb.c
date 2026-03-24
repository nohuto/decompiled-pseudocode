/*
 * XREFs of MmCreatePeb @ 0x140611D98
 * Callers:
 *     PspAllocateProcess @ 0x1406D6638 (PspAllocateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     RtlImageDirectoryEntryToData @ 0x1402532D0 (RtlImageDirectoryEntryToData.c)
 *     MmGetSessionId @ 0x140253550 (MmGetSessionId.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     KeQueryGroupMaskProcess @ 0x14025C828 (KeQueryGroupMaskProcess.c)
 *     KeQueryGroupAffinity @ 0x1402C95F0 (KeQueryGroupAffinity.c)
 *     RtlImageNtHeader @ 0x14031C950 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     Feature_Leap_Seconds_Sixty_Second__private_ReportDeviceUsage @ 0x1403F7DEC (Feature_Leap_Seconds_Sixty_Second__private_ReportDeviceUsage.c)
 *     memset @ 0x140414200 (memset.c)
 *     MmMapViewOfSection @ 0x140612470 (MmMapViewOfSection.c)
 *     MiCreatePebOrTeb @ 0x14064C104 (MiCreatePebOrTeb.c)
 *     MiInitializeWowPeb @ 0x14068BBB4 (MiInitializeWowPeb.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BDF0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MmCreatePeb(_QWORD *a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned int v7; // eax
  _KPROCESS *v8; // rcx
  _DWORD *v9; // r9
  int v10; // ebx
  __int64 v12; // rbx
  __int16 v13; // r14
  __int64 v14; // rdi
  __int16 v15; // r15
  int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rbx
  int v19; // r12d
  int v20; // r13d
  int v21; // edx
  __int64 v22; // rbx
  bool v23; // zf
  _QWORD *v24; // rax
  char v25; // di
  char v26; // di
  __int64 v27; // rbx
  __int64 v28; // rbx
  int v29; // edi
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
  KiStackAttachProcess(v8, 0LL, (__int64)v43, v9);
  if ( InitNlsSectionPointer
    && (v10 = MmMapViewOfSection(InitNlsSectionPointer, a1, &v35, 0LL, 0LL, &v32, &v33, 1, 5242880, 2), v10 < 0)
    || (v36 = 0LL,
        v32 = 0LL,
        v33 = 0LL,
        v10 = MmMapViewOfSection(ExLeapSecondDataSectionPointer, a1, &v36, 0LL, 0LL, &v32, &v33, 1, 5242880, 2),
        v10 < 0)
    || (v10 = MiCreatePebOrTeb(0LL, 0LL, &v37), v10 < 0) )
  {
    KiUnstackDetachProcess((__int64)v43, 0);
    return (unsigned int)v10;
  }
  else
  {
    v12 = a1[164];
    v41 = v12;
    *(_QWORD *)((char *)v38 + 12) = 10LL;
    WORD4(v38[1]) = NtBuildNumber;
    DWORD1(v38[1]) = 2;
    v13 = CmNtCSDVersion;
    WORD5(v38[1]) = CmNtCSDVersion;
    *(_QWORD *)&v38[2] = qword_140CFB1B8;
    *((_QWORD *)&v38[2] + 1) = qword_140CFB1B0;
    *(_QWORD *)&v38[3] = __PAIR64__(NtGlobalFlag, KeNumberProcessors_0);
    DWORD2(v38[3]) = NtGlobalFlag2;
    *(_QWORD *)&v38[4] = qword_140C4DE20;
    *((_QWORD *)&v38[4] + 1) = (unsigned int)dword_140CFB198;
    *(_QWORD *)&v38[5] = qword_140CFB1A8;
    *((_QWORD *)&v38[5] + 1) = qword_140CFB1A0;
    LOBYTE(v38[6]) = *(_BYTE *)a2;
    BYTE1(v38[6]) = *(_BYTE *)(a2 + 3);
    *((_QWORD *)&v38[6] + 1) = *(_QWORD *)(a2 + 8);
    *(_QWORD *)&v38[7] = v12;
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
    Feature_Leap_Seconds_Sixty_Second__private_ReportDeviceUsage();
    v14 = RtlImageNtHeader(v12);
    v34 = v14;
    v15 = *(_WORD *)(v14 + 22);
    LOBYTE(v16) = 1;
    v17 = RtlImageDirectoryEntryToData(v12, v16, 10, (int)&v39);
    v18 = v17;
    v40 = v17;
    if ( v17 )
    {
      if ( (v17 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v14 = v34;
      v18 = v40;
      v13 = WORD5(v38[1]);
    }
    v19 = *(unsigned __int16 *)(v14 + 92);
    LODWORD(v38[0]) = v19;
    v20 = *(unsigned __int16 *)(v14 + 72);
    DWORD1(v38[0]) = v20;
    DWORD2(v38[0]) = *(unsigned __int16 *)(v14 + 74);
    v21 = *(_DWORD *)(v14 + 76);
    if ( v21 )
    {
      if ( v18 )
      {
        if ( *(_WORD *)(v18 + 76) )
          v13 = *(_WORD *)(v18 + 76);
        WORD5(v38[1]) = v13;
      }
      HIDWORD(v38[0]) = (unsigned __int8)v21;
      LODWORD(v38[1]) = BYTE1(v21);
      WORD4(v38[1]) = HIWORD(v21);
      DWORD1(v38[1]) = (v21 ^ 0xBFFFFFFF) >> 30;
    }
    if ( v18 )
    {
      v22 = *(_QWORD *)(v18 + 64);
      *(_QWORD *)a4 = v22;
      v23 = (v22 & KeQueryGroupAffinity(v30)) == v22;
      v24 = (_QWORD *)a4;
      if ( !v23 )
        *(_QWORD *)a4 = 0LL;
    }
    else
    {
      v24 = (_QWORD *)a4;
    }
    if ( (v15 & 0x4000) != 0 )
    {
      v25 = _InterlockedExchangeAdd(&dword_140C4DE1C, 1u) + 1;
      do
      {
        v26 = v25 & 0x3F;
        v27 = 1LL << v26;
        *v24 = 1LL << v26;
        v25 = v26 + 1;
        v23 = (KeQueryGroupAffinity(v30) & v27) == 0;
        v24 = (_QWORD *)a4;
      }
      while ( v23 );
      v14 = v34;
      v13 = WORD5(v38[1]);
      v20 = DWORD1(v38[0]);
      v19 = v38[0];
    }
    v28 = v37;
    *(_QWORD *)(v37 + 280) = *(_QWORD *)((char *)v38 + 12);
    *(_WORD *)(v28 + 288) = WORD4(v38[1]);
    *(_DWORD *)(v28 + 292) = DWORD1(v38[1]);
    *(_WORD *)(v28 + 290) = v13;
    *(_OWORD *)(v28 + 200) = v38[2];
    *(_DWORD *)(v28 + 184) = KeNumberProcessors_0;
    *(_DWORD *)(v28 + 188) = NtGlobalFlag;
    *(_DWORD *)(v28 + 1988) = NtGlobalFlag2;
    *(_QWORD *)(v28 + 192) = qword_140C4DE20;
    *(_QWORD *)(v28 + 792) = (unsigned int)dword_140CFB198;
    *(_QWORD *)(v28 + 216) = qword_140CFB1A8;
    *(_QWORD *)(v28 + 224) = qword_140CFB1A0;
    *(_DWORD *)(v28 + 704) = HIDWORD(v38[3]);
    *(_DWORD *)(v28 + 296) = v19;
    *(_DWORD *)(v28 + 300) = v20;
    *(_DWORD *)(v28 + 304) = DWORD2(v38[0]);
    *(_BYTE *)v28 = v38[6];
    *(_BYTE *)(v28 + 3) = BYTE1(v38[6]);
    *(_QWORD *)(v28 + 8) = *((_QWORD *)&v38[6] + 1);
    *(_QWORD *)(v28 + 16) = v41;
    *(_QWORD *)(v28 + 160) = *((_QWORD *)&v38[7] + 1);
    *(_OWORD *)(v28 + 168) = v38[8];
    *(_QWORD *)(v28 + 1976) = *(_QWORD *)&v38[9];
    *(_DWORD *)(v28 + 1984) = 0;
    if ( a1[176] && (v29 = MiInitializeWowPeb(v38, v14, a1, a4), v29 < 0) )
    {
      KiUnstackDetachProcess((__int64)v43, 0);
      return (unsigned int)v29;
    }
    else
    {
      KiUnstackDetachProcess((__int64)v43, 0);
      *v42 = v28;
      return 0LL;
    }
  }
}
