/*
 * XREFs of ExpQuerySystemPerformanceInformation @ 0x1406358D0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140608060 (ExpQuerySystemInformation.c)
 * Callees:
 *     MiFreePoolPagesLeft @ 0x14023DFEC (MiFreePoolPagesLeft.c)
 *     MiMaximumCommitmentAvailable @ 0x14023E01C (MiMaximumCommitmentAvailable.c)
 *     MmGetProcessPartitionId @ 0x14023EAA4 (MmGetProcessPartitionId.c)
 *     MmGetAvailablePages @ 0x14023EAB4 (MmGetAvailablePages.c)
 *     MmGetTotalCommittedPages @ 0x14023EAD4 (MmGetTotalCommittedPages.c)
 *     MmGetTotalCommitLimit @ 0x14023EAF4 (MmGetTotalCommitLimit.c)
 *     MmGetPeakCommitment @ 0x14023EB14 (MmGetPeakCommitment.c)
 *     MmGetNumberOfFreeSystemPtes @ 0x14023EB34 (MmGetNumberOfFreeSystemPtes.c)
 *     MmGetSystemPageCounts @ 0x14023EB8C (MmGetSystemPageCounts.c)
 *     MmGetWorkingSetLeafSize @ 0x14023EBA0 (MmGetWorkingSetLeafSize.c)
 *     MmGetSharedCommit @ 0x14023EBE4 (MmGetSharedCommit.c)
 *     MmGetResidentAvailablePages @ 0x14023EBF4 (MmGetResidentAvailablePages.c)
 *     ExQueryPoolUsage @ 0x14023EC14 (ExQueryPoolUsage.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     PsQueryRuntimeProcess @ 0x140636AB0 (PsQueryRuntimeProcess.c)
 */

void *__fastcall ExpQuerySystemPerformanceInformation(unsigned int a1, void *a2, unsigned int a3)
{
  __int64 v3; // r15
  ULONG v4; // r11d
  LARGE_INTEGER v5; // rax
  ULONG v6; // ebx
  LARGE_INTEGER v7; // rcx
  ULONG v8; // edi
  LARGE_INTEGER v9; // rdx
  __int64 *v10; // r10
  __int64 v11; // rsi
  __int64 v12; // r9
  int v13; // ebx
  int v14; // edx
  int v15; // r8d
  __int64 *v16; // rax
  __int64 v17; // r9
  __int64 v18; // rcx
  unsigned __int64 AvailablePages; // rax
  unsigned __int16 v20; // cx
  unsigned __int64 TotalCommittedPages; // rax
  unsigned __int16 v22; // cx
  unsigned __int64 v23; // r10
  unsigned __int64 TotalCommitLimit; // rax
  unsigned __int16 v25; // cx
  unsigned __int64 v26; // r10
  unsigned __int64 PeakCommitment; // rax
  int v28; // r8d
  unsigned int v29; // r9d
  unsigned __int64 v30; // r10
  int v31; // r8d
  int v32; // r9d
  int v33; // r10d
  int v34; // r11d
  int v35; // edi
  int v36; // esi
  int v37; // r15d
  int v38; // r12d
  int v39; // r13d
  int v40; // eax
  int v41; // ecx
  int v42; // edx
  __int64 *v43; // rdx
  int v44; // r14d
  _DWORD *v45; // rcx
  char *WorkingSetLeafSize; // rax
  char *v47; // rax
  unsigned __int64 v48; // r8
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // r8
  int v51; // ecx
  ULONG v52; // r10d
  unsigned int v53; // edx
  unsigned int v54; // r8d
  unsigned int v55; // r9d
  unsigned int v56; // r11d
  unsigned int v57; // edi
  unsigned int v58; // esi
  unsigned int v59; // r14d
  unsigned int v60; // r15d
  unsigned int v61; // r12d
  int v62; // r13d
  __int64 *v63; // rax
  _DWORD *v64; // rax
  int v65; // ebx
  bool v66; // zf
  int v68; // [rsp+40h] [rbp-C0h]
  int v69; // [rsp+44h] [rbp-BCh]
  int v70; // [rsp+48h] [rbp-B8h]
  __int64 v71; // [rsp+50h] [rbp-B0h]
  __int64 v72; // [rsp+50h] [rbp-B0h]
  _QWORD Src[4]; // [rsp+60h] [rbp-A0h] BYREF
  ULONG v74; // [rsp+80h] [rbp-80h]
  ULONG v75; // [rsp+84h] [rbp-7Ch]
  ULONG v76; // [rsp+88h] [rbp-78h]
  int v77; // [rsp+8Ch] [rbp-74h]
  int v78; // [rsp+90h] [rbp-70h]
  int v79; // [rsp+94h] [rbp-6Ch]
  int v80; // [rsp+98h] [rbp-68h]
  int v81; // [rsp+9Ch] [rbp-64h]
  int v82; // [rsp+A0h] [rbp-60h]
  int v83; // [rsp+A4h] [rbp-5Ch]
  int v84; // [rsp+A8h] [rbp-58h]
  int v85; // [rsp+ACh] [rbp-54h]
  int v86; // [rsp+B0h] [rbp-50h]
  int v87; // [rsp+B4h] [rbp-4Ch]
  int v88; // [rsp+B8h] [rbp-48h]
  int v89; // [rsp+BCh] [rbp-44h]
  int v90; // [rsp+C0h] [rbp-40h]
  int v91; // [rsp+C4h] [rbp-3Ch]
  int v92; // [rsp+C8h] [rbp-38h]
  int v93; // [rsp+CCh] [rbp-34h]
  __int128 v94; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v95; // [rsp+E0h] [rbp-20h] BYREF
  int NumberOfFreeSystemPtes; // [rsp+E8h] [rbp-18h]
  int v97; // [rsp+ECh] [rbp-14h]
  int v98; // [rsp+F0h] [rbp-10h]
  int v99; // [rsp+F4h] [rbp-Ch]
  __int64 v100; // [rsp+F8h] [rbp-8h] BYREF
  int v101; // [rsp+100h] [rbp+0h]
  int v102; // [rsp+104h] [rbp+4h]
  int v103; // [rsp+108h] [rbp+8h]
  int v104; // [rsp+10Ch] [rbp+Ch]
  _QWORD v105[15]; // [rsp+110h] [rbp+10h] BYREF
  int v106; // [rsp+188h] [rbp+88h]
  __int64 v107; // [rsp+18Ch] [rbp+8Ch]
  int v108; // [rsp+194h] [rbp+94h]
  __int128 v109; // [rsp+198h] [rbp+98h]
  __int128 v110; // [rsp+1A8h] [rbp+A8h]
  __int64 *v111; // [rsp+1C0h] [rbp+C0h]
  __int128 v112; // [rsp+1C8h] [rbp+C8h] BYREF
  _BYTE v113[72]; // [rsp+1D8h] [rbp+D8h] BYREF
  unsigned __int16 ProcessPartitionId; // [rsp+248h] [rbp+148h]

  v3 = a1;
  v80 = 0;
  v95 = 0LL;
  v100 = 0LL;
  v94 = 0LL;
  memset(v105, 0, sizeof(v105));
  v4 = IoOtherOperationCount;
  v5 = IoOtherTransferCount;
  v6 = IoReadOperationCount;
  v7 = IoReadTransferCount;
  v8 = IoWriteOperationCount;
  v9 = IoWriteTransferCount;
  v111 = KiProcessorBlock;
  v109 = 0LL;
  v110 = 0LL;
  v112 = 0LL;
  if ( (_DWORD)v3 )
  {
    v10 = KiProcessorBlock;
    v11 = (unsigned int)v3;
    do
    {
      v12 = *v10++;
      v4 += *(_DWORD *)(v12 + 11620);
      v6 += *(_DWORD *)(v12 + 11612);
      v8 += *(_DWORD *)(v12 + 11616);
      v9.QuadPart += *(_QWORD *)(v12 + 11632);
      v5.QuadPart += *(_QWORD *)(v12 + 11640);
      v7.QuadPart += *(_QWORD *)(v12 + 11624);
      --v11;
    }
    while ( v11 );
  }
  v74 = v6;
  v13 = 0;
  Src[2] = v9.QuadPart;
  v14 = 0;
  Src[1] = v7.QuadPart;
  v15 = 0;
  Src[3] = v5.QuadPart;
  v75 = v8;
  v76 = v4;
  if ( (_DWORD)v3 )
  {
    v16 = KiProcessorBlock;
    v17 = v3;
    do
    {
      v18 = *v16++;
      v15 += *(_DWORD *)(v18 + 11580);
      v14 += *(_DWORD *)(v18 + 11576);
      --v17;
    }
    while ( v17 );
  }
  v106 = v15;
  v107 = 0LL;
  v108 = v14;
  ProcessPartitionId = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
  AvailablePages = MmGetAvailablePages(ProcessPartitionId);
  if ( AvailablePages > 0xFFFFFFFF )
    v77 = -1;
  else
    v77 = AvailablePages;
  TotalCommittedPages = MmGetTotalCommittedPages(v20);
  if ( TotalCommittedPages > v23 )
    v78 = v23;
  else
    v78 = TotalCommittedPages;
  TotalCommitLimit = MmGetTotalCommitLimit(v22);
  if ( TotalCommitLimit > v26 )
    v79 = v26;
  else
    v79 = TotalCommitLimit;
  PeakCommitment = MmGetPeakCommitment(v25);
  if ( PeakCommitment > v30 )
    LODWORD(PeakCommitment) = v30;
  v80 = PeakCommitment;
  if ( (unsigned int)PeakCommitment < v29 )
    v80 = v28;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v68 = 0;
  v42 = 0;
  v69 = 0;
  v70 = 0;
  if ( a1 )
  {
    v43 = KiProcessorBlock;
    v71 = a1;
    v44 = 0;
    do
    {
      v45 = (_DWORD *)*v43++;
      v31 += v45[2884];
      v32 += v45[2885];
      v33 += v45[2886];
      v34 += v45[8186];
      v35 += v45[2887];
      v36 += v45[2888];
      v37 += v45[2889];
      v38 += v45[8187];
      v39 += v45[8188];
      v44 += v45[2890];
      v68 += v45[2891];
      v69 += v45[2892];
      v70 += v45[2893];
      --v71;
    }
    while ( v71 );
    v40 = v68;
    v41 = v69;
    v42 = v70;
  }
  else
  {
    v44 = 0;
  }
  v81 = v31;
  v82 = v32;
  v83 = v33;
  v84 = v34;
  v85 = v35;
  v86 = v36;
  v87 = v37;
  v88 = v38;
  v89 = v39;
  v90 = v44;
  v91 = v40;
  v92 = v41;
  v93 = v42;
  NumberOfFreeSystemPtes = MmGetNumberOfFreeSystemPtes();
  MmGetSystemPageCounts(&v112);
  v97 = v112;
  WorkingSetLeafSize = MmGetWorkingSetLeafSize(2);
  if ( (unsigned __int64)WorkingSetLeafSize > 0xFFFFFFFF )
    LODWORD(WorkingSetLeafSize) = -1;
  v102 = (int)WorkingSetLeafSize;
  v47 = MmGetWorkingSetLeafSize(3);
  if ( (unsigned __int64)v47 > v48 )
    LODWORD(v47) = v48;
  v103 = (int)v47;
  v99 = DWORD2(v112);
  v104 = DWORD1(v112);
  v98 = HIDWORD(v112);
  MiFreePoolPagesLeft(6);
  v49 = MiMaximumCommitmentAvailable((__int64)&MiSystemPartition);
  if ( v50 > v49 )
    LODWORD(v50) = v49;
  v101 = v50;
  Src[0] = KeMaximumIncrement * (unsigned __int64)(unsigned int)PsQueryRuntimeProcess(PsIdleProcess, v113);
  ExQueryPoolUsage(
    (int)&v94,
    (int)&v94 + 4,
    (int)&v94 + 8,
    (int)&v94 + 12,
    (__int64)&v100 + 4,
    (__int64)&v95,
    (__int64)&v95 + 4,
    (__int64)&v100);
  v51 = 0;
  v52 = CcFastMdlReadWait;
  v53 = 0;
  memset(v105, 0, 20);
  v54 = 0;
  v55 = 0;
  v56 = 0;
  HIDWORD(v105[2]) = CcFastMdlReadWait;
  v57 = 0;
  memset(&v105[3], 0, 96);
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v62 = 0;
  if ( a1 )
  {
    v72 = a1;
    v63 = KiProcessorBlock;
    do
    {
      v64 = (_DWORD *)*v63;
      LODWORD(v105[0]) = v64[2897] + v13;
      HIDWORD(v105[6]) += v64[8166];
      v51 += v64[2898];
      v53 += v64[8176];
      v54 += v64[2899];
      v55 += v64[8160];
      v52 += v64[8161];
      v56 += v64[8178];
      v57 += v64[8162];
      v58 += v64[8163];
      v59 += v64[8164];
      v60 += v64[8179];
      v61 += v64[8180];
      v62 += v64[8165];
      LODWORD(v105[7]) += v64[8167];
      HIDWORD(v105[7]) += v64[8181];
      LODWORD(v105[8]) += v64[8182];
      HIDWORD(v105[8]) += v64[2900];
      LODWORD(v105[9]) += v64[2901];
      HIDWORD(v105[9]) += v64[2902];
      LODWORD(v105[10]) += v64[8177];
      HIDWORD(v105[10]) += v64[8168];
      LODWORD(v105[11]) += v64[8169];
      HIDWORD(v105[11]) += v64[8183];
      LODWORD(v105[12]) += v64[8184];
      HIDWORD(v105[12]) += v64[8185];
      LODWORD(v105[13]) += v64[8171];
      HIDWORD(v105[13]) += v64[8172];
      LODWORD(v105[14]) += v64[8173];
      v65 = v64[8174] + HIDWORD(v105[14]);
      v63 = v111 + 1;
      HIDWORD(v105[14]) = v65;
      v66 = v72-- == 1;
      v13 = v105[0];
      ++v111;
    }
    while ( !v66 );
    HIDWORD(v105[0]) = v51;
    v105[1] = __PAIR64__(v54, v53);
    v105[2] = __PAIR64__(v52, v55);
    v105[3] = __PAIR64__(v57, v56);
    v105[4] = __PAIR64__(v59, v58);
    v105[5] = __PAIR64__(v61, v60);
    LODWORD(v105[6]) = v62;
  }
  v109 = *(_OWORD *)CcSystemPartitionDirtyPageStatistics;
  *(_QWORD *)&v110 = MmGetResidentAvailablePages(ProcessPartitionId);
  *((_QWORD *)&v110 + 1) = MmGetSharedCommit();
  return memmove(a2, Src, a3);
}
