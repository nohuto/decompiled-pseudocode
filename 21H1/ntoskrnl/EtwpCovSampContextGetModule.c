/*
 * XREFs of EtwpCovSampContextGetModule @ 0x14093EC10
 * Callers:
 *     EtwpCovSampImageNotify @ 0x140940840 (EtwpCovSampImageNotify.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     RtlImageNtHeader @ 0x14027DAE0 (RtlImageNtHeader.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     memset @ 0x140408F80 (memset.c)
 *     EtwCovSampHash @ 0x1405A86C4 (EtwCovSampHash.c)
 *     EtwpCheckDebugInfoEqual @ 0x1405A8780 (EtwpCheckDebugInfoEqual.c)
 *     ProcessForExeModule @ 0x1405AA628 (ProcessForExeModule.c)
 *     EtwpFindDebugId @ 0x1406D74C4 (EtwpFindDebugId.c)
 *     EtwpCovSampCheckForSegments @ 0x14093E414 (EtwpCovSampCheckForSegments.c)
 *     EtwpCovSampContextFastFindModule @ 0x14093EAC4 (EtwpCovSampContextFastFindModule.c)
 *     EtwpCovSampContextPruneModules @ 0x14093FAC4 (EtwpCovSampContextPruneModules.c)
 *     EtwpCovSampModuleCleanup @ 0x140940A68 (EtwpCovSampModuleCleanup.c)
 *     EtwpCovSampModuleGetName @ 0x140940AFC (EtwpCovSampModuleGetName.c)
 *     EtwpCovSampModuleNameInfoCleanup @ 0x140940C08 (EtwpCovSampModuleNameInfoCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpCovSampContextGetModule(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6)
{
  __int64 v8; // r13
  void *v9; // r12
  char *v10; // r14
  PIMAGE_NT_HEADERS v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 Module; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  char *PoolWithTag; // rax
  SIZE_T v26; // rdx
  __int64 v27; // rax
  int v28; // eax
  int v29; // ecx
  unsigned int v30; // r8d
  unsigned int v31; // r8d
  unsigned int v32; // edi
  __int64 v33; // rax
  __m128i v34; // xmm6
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // ecx
  unsigned int v38; // ecx
  struct _KTHREAD *v39; // rcx
  char *v40; // r9
  char *v41; // r10
  __int64 v42; // r8
  unsigned int v43; // eax
  char i; // cl
  unsigned __int64 v45; // rcx
  unsigned int v46; // edi
  __int64 v47; // rax
  _QWORD *v48; // rcx
  __int64 v49; // rcx
  char k; // cl
  unsigned __int64 v51; // rcx
  __int64 v52; // r11
  unsigned int v53; // edi
  __int64 v54; // rdx
  _QWORD *v55; // r10
  __int64 v56; // rcx
  char *v57; // rcx
  int v58; // eax
  __int64 v59; // r13
  __int64 v60; // rax
  _QWORD *n; // rdx
  _QWORD *v62; // r9
  __int64 v63; // r11
  _QWORD *ii; // rdx
  __int64 v65; // rdx
  __int64 v66; // rcx
  _QWORD *v67; // rax
  __int64 v68; // rcx
  int v69; // edi
  __int64 v70; // rdx
  __int64 v71; // r9
  int v72; // r8d
  __int64 v73; // rcx
  unsigned int v74; // edi
  void *v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // r9
  int v85; // [rsp+30h] [rbp-F8h]
  int Name; // [rsp+34h] [rbp-F4h]
  __int64 v87; // [rsp+38h] [rbp-F0h]
  __m128i *v88; // [rsp+40h] [rbp-E8h]
  __int64 j; // [rsp+40h] [rbp-E8h]
  __int64 v90; // [rsp+48h] [rbp-E0h]
  __int64 v91; // [rsp+50h] [rbp-D8h]
  __int64 v92; // [rsp+58h] [rbp-D0h]
  char *v93; // [rsp+60h] [rbp-C8h]
  unsigned int v94; // [rsp+68h] [rbp-C0h]
  int v95; // [rsp+70h] [rbp-B8h]
  _QWORD *v96; // [rsp+70h] [rbp-B8h]
  unsigned int v97; // [rsp+78h] [rbp-B0h]
  __int64 v98; // [rsp+78h] [rbp-B0h]
  __int64 v99; // [rsp+80h] [rbp-A8h] BYREF
  SIZE_T v100; // [rsp+88h] [rbp-A0h]
  __int128 v101; // [rsp+90h] [rbp-98h]
  unsigned __int64 v102[2]; // [rsp+A0h] [rbp-88h] BYREF
  _QWORD v103[3]; // [rsp+B0h] [rbp-78h] BYREF
  __m128i v104; // [rsp+C8h] [rbp-60h]
  int v107; // [rsp+150h] [rbp+28h]
  unsigned __int64 v108; // [rsp+150h] [rbp+28h]
  __int64 v109; // [rsp+150h] [rbp+28h]
  int v110; // [rsp+150h] [rbp+28h]
  __int64 m; // [rsp+150h] [rbp+28h]
  __int64 v112; // [rsp+150h] [rbp+28h]
  __int64 v113; // [rsp+150h] [rbp+28h]

  v8 = 0LL;
  v9 = 0LL;
  v93 = 0LL;
  v10 = 0LL;
  v85 = 0;
  *a6 = 0LL;
  v99 = 0LL;
  v101 = 0LL;
  v100 = *(_QWORD *)(a5 + 32);
  v12 = RtlImageNtHeader(*(PVOID *)(a5 + 16));
  v103[2] = v12;
  if ( !v12 )
  {
    Name = -1073741637;
    goto LABEL_132;
  }
  LODWORD(v101) = v12->OptionalHeader.CheckSum;
  DWORD1(v101) = v12->FileHeader.TimeDateStamp;
  if ( (*(_DWORD *)(a5 + 8) & 0x100) != 0 )
  {
    v13 = *(_QWORD *)(a5 + 16);
  }
  else
  {
    v14 = *(_QWORD *)(a5 + 48);
    if ( !v14 )
    {
      Name = -1073741637;
      goto LABEL_132;
    }
    v13 = *(_QWORD *)(v14 + 24);
  }
  v99 = v13;
  if ( (*(_DWORD *)(a1 + 8) & 0x400) != 0 )
  {
    if ( *(_QWORD *)(a5 + 16) == *(_QWORD *)(a2 + 1312) )
    {
      v85 = 1;
    }
    else
    {
      v85 = 0;
      v15 = *(unsigned int *)(a3 + 40);
      v99 = v15 ^ v13;
      DWORD2(v101) = v15;
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(a1 + 664, 0LL);
  Module = EtwpCovSampContextFastFindModule(a1, (__int64)&v99, a6);
  if ( Module && Module == *a6 )
  {
    ProcessForExeModule(a1, a3, *a6, v85);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 664), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 664));
    KeAbPostRelease(a1 + 664);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v18, v19, v20);
    Name = 0;
    goto LABEL_17;
  }
  v95 = *(_DWORD *)(a1 + 684) >> 5;
  v21 = *(_DWORD *)(a1 + 680);
  if ( v21 <= *(_DWORD *)(a1 + 696) )
    v21 = *(_DWORD *)(a1 + 696);
  v97 = v21;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 664), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 664));
  KeAbPostRelease(a1 + 664);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v22, v23, v24);
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0xB0uLL, 0x56777445u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
  {
    Name = -1073741670;
LABEL_17:
    v9 = 0LL;
    goto LABEL_132;
  }
  memset(PoolWithTag, 0, 0xB0uLL);
  *((_QWORD *)v10 + 10) = v10 + 72;
  *((_QWORD *)v10 + 9) = v10 + 72;
  *((_QWORD *)v10 + 12) = v10 + 88;
  *((_QWORD *)v10 + 11) = v10 + 88;
  *(_QWORD *)v10 = 0LL;
  *((_QWORD *)v10 + 2) = 0LL;
  *((_QWORD *)v10 + 8) = 1LL;
  *((_QWORD *)v10 + 1) = v99;
  v26 = v100;
  *((_QWORD *)v10 + 5) = v100;
  *((_QWORD *)v10 + 4) = v101;
  *((_DWORD *)v10 + 30) ^= (*((_DWORD *)v10 + 30) ^ (*(_DWORD *)(a5 + 8) << 9)) & 0x20000;
  v103[0] = 0LL;
  v103[1] = 0LL;
  v94 = 0;
  v88 = (__m128i *)v103;
  v107 = 1;
  if ( (int)EtwpFindDebugId(*(char **)(a5 + 16), v26, 1, (void **)v10 + 6, (unsigned int *)v10 + 14) >= 0 )
  {
    v27 = *((_QWORD *)v10 + 6);
    if ( *((_DWORD *)v10 + 14) <= 0x400u )
    {
      v94 = *(_DWORD *)(v27 + 20);
      v88 = (__m128i *)(v27 + 4);
      goto LABEL_28;
    }
    ExFreePoolWithTag(*((PVOID *)v10 + 6), 0);
    *((_QWORD *)v10 + 6) = 0LL;
    *((_DWORD *)v10 + 14) = 0;
  }
  v28 = 0;
  v107 = 0;
  v29 = v85;
  if ( !v85 )
  {
LABEL_39:
    if ( !v28 && !v29 )
      goto LABEL_46;
    goto LABEL_41;
  }
LABEL_28:
  Name = EtwpCovSampModuleGetName(v10, a5, a4);
  if ( Name < 0 )
    goto LABEL_17;
  v102[0] = *((_QWORD *)v10 + 14);
  v102[1] = (unsigned __int16)*((_DWORD *)v10 + 30);
  v30 = *(_DWORD *)(a1 + 1112);
  if ( v30 )
    v28 = EtwpCovSampCheckForSegments(v102, (unsigned __int64 *)(a1 + 792), v30);
  else
    v28 = v107;
  if ( !v28 )
    goto LABEL_38;
  v31 = *(_DWORD *)(a1 + 1116);
  if ( !v31 )
    goto LABEL_38;
  if ( (unsigned int)EtwpCovSampCheckForSegments(v102, (unsigned __int64 *)(a1 + 952), v31) )
  {
    v28 = 0;
LABEL_38:
    v29 = v85;
    goto LABEL_39;
  }
  v28 = 1;
LABEL_41:
  *((_DWORD *)v10 + 30) ^= (*((_DWORD *)v10 + 30) ^ (v28 << 16)) & 0x10000;
  v32 = *((_DWORD *)v10 + 10);
  LODWORD(v108) = *((_DWORD *)v10 + 9);
  HIDWORD(v108) = *((_DWORD *)v10 + 8);
  v33 = EtwCovSampHash(v108, *(unsigned int *)(a1 + 12));
  v104 = *v88;
  v34 = v104;
  v35 = EtwCovSampHash(__PAIR64__(v94, v32), v33);
  v36 = EtwCovSampHash(v34.m128i_u64[0], v35);
  v109 = EtwCovSampHash(_mm_srli_si128(v34, 8).m128i_u64[0], v36);
  v37 = v109 ^ HIDWORD(v109);
  if ( (unsigned int)v109 == HIDWORD(v109) )
    v37 = 1;
  if ( !v85 )
    v37 ^= *(_DWORD *)(a3 + 40);
  *((_DWORD *)v10 + 31) = v37;
LABEL_46:
  v38 = 2 * v95;
  if ( v97 + 1 > 2 * v95 )
  {
    v8 = v38;
    if ( !v38 )
      v8 = 128LL;
    v93 = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)(2 * v8), 0x56777445u);
  }
  v39 = KeGetCurrentThread();
  --v39->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 664, 0LL);
  *(_QWORD *)(a1 + 672) = KeGetCurrentThread();
  v40 = v93;
  if ( v93 && (unsigned int)v8 > *(_DWORD *)(a1 + 684) >> 5 )
  {
    v41 = &v93[8 * (unsigned int)v8];
    v42 = (unsigned int)v8;
    v110 = v8 & (v8 - 1);
    if ( v110 )
    {
      v43 = v8;
      for ( i = -1; v43; v43 >>= 1 )
        ++i;
      v42 = (unsigned int)(1 << i);
    }
    if ( (unsigned int)v42 > 0x4000000 )
      v42 = 0x4000000LL;
    v45 = (unsigned __int64)(8 * v42 + 7) >> 3;
    if ( v41 > &v41[8 * v42] )
      v45 = 0LL;
    if ( v45 )
      memset64(v41, (a1 + 696) | 1, v45);
    v98 = -1LL << (*(_BYTE *)(a1 + 700) & 0x1F);
    v46 = 0;
    if ( (*(_DWORD *)(a1 + 700) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v47 = *(_QWORD *)(a1 + 704);
        for ( j = v47; ; v47 = j )
        {
          v48 = *(_QWORD **)(v47 + 8LL * v46);
          v96 = v48;
          if ( ((unsigned __int8)v48 & 1) != 0 )
            break;
          *(_QWORD *)(j + 8LL * v46) = *v48;
          v90 = v98 & v48[1];
          v49 = (37
               * (BYTE6(v90)
                + 37
                * (BYTE5(v90)
                 + 37
                 * (BYTE4(v90)
                  + 37 * (BYTE3(v90) + 37 * (BYTE2(v90) + 37 * (BYTE1(v90) + 37 * ((unsigned __int8)v90 + 11623883)))))))
               + HIBYTE(v90)) & (unsigned int)(v42 - 1);
          *v96 = *(_QWORD *)&v41[8 * v49];
          *(_QWORD *)&v41[8 * v49] = v96;
          v40 = v93;
        }
        ++v46;
      }
      while ( v46 < *(_DWORD *)(a1 + 700) >> 5 );
    }
    *(_QWORD *)(a1 + 704) = v41;
    *(_DWORD *)(a1 + 700) = (32 * v42) | *(_DWORD *)(a1 + 700) & 0x1F;
    if ( v110 )
    {
      for ( k = -1; (_DWORD)v8; LODWORD(v8) = (unsigned int)v8 >> 1 )
        ++k;
      v8 = (unsigned int)(1 << k);
    }
    if ( (unsigned int)v8 > 0x4000000 )
      v8 = 0x4000000LL;
    v51 = (unsigned __int64)(8 * v8 + 7) >> 3;
    if ( v40 > &v40[8 * v8] )
      v51 = 0LL;
    if ( v51 )
      memset64(v40, (a1 + 680) | 1, v51);
    v52 = -1LL << (*(_BYTE *)(a1 + 684) & 0x1F);
    v53 = 0;
    if ( (*(_DWORD *)(a1 + 684) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v54 = *(_QWORD *)(a1 + 688);
        for ( m = v54; ; v54 = m )
        {
          v55 = *(_QWORD **)(v54 + 8LL * v53);
          if ( ((unsigned __int8)v55 & 1) != 0 )
            break;
          *(_QWORD *)(v54 + 8LL * v53) = *v55;
          v91 = v52 & v55[1];
          v56 = (37
               * (BYTE6(v91)
                + 37
                * (BYTE5(v91)
                 + 37
                 * (BYTE4(v91)
                  + 37 * (BYTE3(v91) + 37 * (BYTE2(v91) + 37 * (BYTE1(v91) + 37 * ((unsigned __int8)v91 + 11623883)))))))
               + HIBYTE(v91)) & (unsigned int)(v8 - 1);
          *v55 = *(_QWORD *)&v40[8 * v56];
          *(_QWORD *)&v40[8 * v56] = v55;
        }
        ++v53;
      }
      while ( v53 < *(_DWORD *)(a1 + 684) >> 5 );
    }
    v57 = *(char **)(a1 + 688);
    *(_QWORD *)(a1 + 688) = v40;
    v58 = (32 * v8) | *(_DWORD *)(a1 + 684) & 0x1F;
    v59 = a1 + 680;
    *(_DWORD *)(a1 + 684) = v58;
    v93 = v57;
  }
  else
  {
    v59 = a1 + 680;
  }
  if ( *(_DWORD *)(a1 + 684) >= 0x20u )
  {
    v60 = EtwpCovSampContextFastFindModule(a1, (__int64)&v99, a6);
    if ( v60 )
    {
      if ( v60 == *a6 )
      {
        ProcessForExeModule(a1, a3, *a6, v85);
LABEL_90:
        Name = 0;
        goto LABEL_86;
      }
      *(_DWORD *)(v60 + 120) |= 0x40000u;
      v112 = *(_QWORD *)(v60 + 8) & (-1LL << (*(_DWORD *)(v59 + 4) & 0x1F));
      for ( n = (_QWORD *)(*(_QWORD *)(v59 + 8)
                         + 8LL
                         * ((37
                           * (BYTE6(v112)
                            + 37
                            * (BYTE5(v112)
                             + 37
                             * (BYTE4(v112)
                              + 37
                              * (BYTE3(v112)
                               + 37 * (BYTE2(v112) + 37 * (BYTE1(v112) + 37 * ((unsigned __int8)v112 + 11623883)))))))
                           + HIBYTE(v112)) & (unsigned int)((*(_DWORD *)(v59 + 4) >> 5) - 1)));
            (*n & 1) == 0;
            n = (_QWORD *)*n )
      {
        if ( *n == v60 )
        {
          *n = *(_QWORD *)v60;
          --*(_DWORD *)v59;
          break;
        }
      }
      *(_QWORD *)v60 = 0LL;
      v62 = (_QWORD *)(v60 + 16);
      v63 = a1 + 696;
      if ( *(_QWORD *)(v60 + 16) )
      {
        v113 = *(_QWORD *)(v60 + 24) & (-1LL << (*(_DWORD *)(a1 + 700) & 0x1F));
        for ( ii = (_QWORD *)(*(_QWORD *)(a1 + 704)
                            + 8LL
                            * ((37
                              * (BYTE6(v113)
                               + 37
                               * (BYTE5(v113)
                                + 37
                                * (BYTE4(v113)
                                 + 37
                                 * (BYTE3(v113)
                                  + 37 * (BYTE2(v113) + 37 * (BYTE1(v113) + 37 * ((unsigned __int8)v113 + 11623883)))))))
                              + HIBYTE(v113)) & (unsigned int)((*(_DWORD *)(a1 + 700) >> 5) - 1)));
              (*ii & 1) == 0;
              ii = (_QWORD *)*ii )
        {
          if ( (_QWORD *)*ii == v62 )
          {
            *ii = *v62;
            --*(_DWORD *)v63;
            break;
          }
        }
        *v62 = 0LL;
      }
    }
    else
    {
      v63 = a1 + 696;
    }
    *((_DWORD *)v10 + 30) = *((_DWORD *)v10 + 30) & 0xFFEFFFFF | (v85 << 20);
    *((_DWORD *)v10 + 32) = (*(_DWORD *)(a1 + 1120))++;
    v92 = *((_QWORD *)v10 + 1) & (-1LL << (*(_DWORD *)(v59 + 4) & 0x1F));
    v65 = (37
         * (BYTE6(v92)
          + 37
          * (BYTE5(v92)
           + 37
           * (BYTE4(v92)
            + 37 * (BYTE3(v92) + 37 * (BYTE2(v92) + 37 * (BYTE1(v92) + 37 * ((unsigned __int8)v92 + 11623883)))))))
         + HIBYTE(v92)) & (unsigned int)((*(_DWORD *)(v59 + 4) >> 5) - 1);
    v66 = *(_QWORD *)(v59 + 8);
    *(_QWORD *)v10 = *(_QWORD *)(v66 + 8 * v65);
    *(_QWORD *)(v66 + 8 * v65) = v10;
    ++*(_DWORD *)v59;
    v67 = (_QWORD *)(a1 + 712);
    v68 = *(_QWORD *)(a1 + 712);
    if ( *(_QWORD *)(v68 + 8) != a1 + 712 )
      __fastfail(3u);
    *((_QWORD *)v10 + 9) = v68;
    *((_QWORD *)v10 + 10) = v67;
    *(_QWORD *)(v68 + 8) = v10 + 72;
    *v67 = v10 + 72;
    *((_DWORD *)v10 + 34) = MEMORY[0xFFFFF78000000320];
    ++*(_DWORD *)(a1 + 728);
    ++*(_DWORD *)(a1 + 732);
    v69 = *((_DWORD *)v10 + 30);
    if ( (v69 & 0x10000) != 0 || v85 )
    {
      v70 = *((unsigned int *)v10 + 31);
      *((_QWORD *)v10 + 3) = v70;
      v71 = v70 & (-1LL << (*(_BYTE *)(a1 + 700) & 0x1F));
      v72 = *(_DWORD *)(a1 + 700) >> 5;
      if ( !v72 )
        goto LABEL_124;
      v73 = *(_QWORD *)(a1 + 704)
          + 8LL
          * ((37
            * (BYTE6(v71)
             + 37
             * (BYTE5(v71)
              + 37
              * (BYTE4(v71)
               + 37 * (BYTE3(v71) + 37 * (BYTE2(v71) + 37 * (BYTE1(v71) + 37 * ((unsigned __int8)v71 + 11623883)))))))
            + HIBYTE(v71)) & (unsigned int)(v72 - 1));
      while ( 1 )
      {
        v73 = *(_QWORD *)v73;
        if ( (v73 & 1) != 0 )
          break;
        if ( v71 == ((-1LL << (*(_BYTE *)(a1 + 700) & 0x1F)) & *(_QWORD *)(v73 + 8)) )
          goto LABEL_114;
      }
      v73 = 0LL;
LABEL_114:
      if ( v73 )
      {
        if ( *(_DWORD *)(v73 + 16) == *((_DWORD *)v10 + 8)
          && *(_DWORD *)(v73 + 20) == *((_DWORD *)v10 + 9)
          && *(_QWORD *)(v73 + 24) == *((_QWORD *)v10 + 5)
          && (unsigned int)EtwpCheckDebugInfoEqual(*(_QWORD *)(v73 + 32), *((_QWORD *)v10 + 6)) )
        {
          v74 = *((_DWORD *)v10 + 30);
        }
        else
        {
          *((_DWORD *)v10 + 31) = 0;
          v74 = v69 & 0xFFFEFFFF;
        }
        *((_DWORD *)v10 + 30) = v74 | 0x80000;
        EtwpCovSampModuleNameInfoCleanup(v10 + 104);
        *((_QWORD *)v10 + 14) = 0LL;
        *((_WORD *)v10 + 60) = 0;
        v75 = (void *)*((_QWORD *)v10 + 6);
        if ( v75 )
          ExFreePoolWithTag(v75, 0);
        *((_QWORD *)v10 + 6) = 0LL;
        *((_DWORD *)v10 + 14) = 0;
      }
      else
      {
LABEL_124:
        v87 = *((_QWORD *)v10 + 3) & (-1LL << (*(_DWORD *)(v63 + 4) & 0x1F));
        v76 = (37
             * (BYTE6(v87)
              + 37
              * (BYTE5(v87)
               + 37
               * (BYTE4(v87)
                + 37 * (BYTE3(v87) + 37 * (BYTE2(v87) + 37 * (BYTE1(v87) + 37 * ((unsigned __int8)v87 + 11623883)))))))
             + HIBYTE(v87)) & (unsigned int)((*(_DWORD *)(v63 + 4) >> 5) - 1);
        v77 = *(_QWORD *)(v63 + 8);
        *((_QWORD *)v10 + 2) = *(_QWORD *)(v77 + 8 * v76);
        *(_QWORD *)(v77 + 8 * v76) = v10 + 16;
        ++*(_DWORD *)v63;
      }
      if ( (*(_DWORD *)(a1 + 8) & 0x400) != 0 )
      {
        ProcessForExeModule(a1, a3, (__int64)v10, v85);
        *((_DWORD *)v10 + 40) = *(_DWORD *)(a3 + 40);
        *((_DWORD *)v10 + 41) = *(_DWORD *)(a3 + 44);
      }
    }
    if ( _InterlockedIncrement64((volatile signed __int64 *)v10 + 8) <= 1 )
      __fastfail(0xEu);
    *a6 = (__int64)v10;
    v10 = 0LL;
    *(_QWORD *)(a1 + 672) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 664), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 664);
    KeAbPostRelease(a1 + 664);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v78, v79, v80);
    EtwpCovSampContextPruneModules(a1);
    goto LABEL_90;
  }
  Name = -1073741670;
LABEL_86:
  v9 = v93;
LABEL_132:
  if ( *(struct _KTHREAD **)(a1 + 672) == KeGetCurrentThread() )
  {
    *(_QWORD *)(a1 + 672) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 664), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 664);
    KeAbPostRelease(a1 + 664);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v81, v82, v83);
  }
  if ( v10 )
  {
    *((_QWORD *)v10 + 8) = 0LL;
    EtwpCovSampModuleCleanup(v10);
    ExFreePoolWithTag(v10, 0x56777445u);
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0x56777445u);
  return (unsigned int)Name;
}
