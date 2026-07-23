/*
 * XREFs of EtwpCovSampContextGetModule @ 0x140945C50
 * Callers:
 *     EtwpCovSampImageNotify @ 0x140947880 (EtwpCovSampImageNotify.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     RtlImageNtHeader @ 0x140297240 (RtlImageNtHeader.c)
 *     memset @ 0x140411300 (memset.c)
 *     EtwCovSampHash @ 0x1405AC914 (EtwCovSampHash.c)
 *     EtwpCheckDebugInfoEqual @ 0x1405AC9D0 (EtwpCheckDebugInfoEqual.c)
 *     ProcessForExeModule @ 0x1405AE878 (ProcessForExeModule.c)
 *     EtwpFindDebugId @ 0x1406AFA1C (EtwpFindDebugId.c)
 *     EtwpCovSampCheckForSegments @ 0x140945454 (EtwpCovSampCheckForSegments.c)
 *     EtwpCovSampContextFastFindModule @ 0x140945B04 (EtwpCovSampContextFastFindModule.c)
 *     EtwpCovSampContextPruneModules @ 0x140946B04 (EtwpCovSampContextPruneModules.c)
 *     EtwpCovSampModuleCleanup @ 0x140947AA8 (EtwpCovSampModuleCleanup.c)
 *     EtwpCovSampModuleGetName @ 0x140947B3C (EtwpCovSampModuleGetName.c)
 *     EtwpCovSampModuleNameInfoCleanup @ 0x140947C48 (EtwpCovSampModuleNameInfoCleanup.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  unsigned int v18; // ecx
  char *PoolWithTag; // rax
  SIZE_T v20; // rdx
  __int64 v21; // rax
  int v22; // eax
  int v23; // ecx
  unsigned int v24; // r8d
  unsigned int v25; // r8d
  unsigned int v26; // edi
  __int64 v27; // rax
  __m128i v28; // xmm6
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // ecx
  unsigned int v32; // ecx
  struct _KTHREAD *v33; // rcx
  char *v34; // r9
  char *v35; // r10
  __int64 v36; // r8
  unsigned int v37; // eax
  char i; // cl
  unsigned __int64 v39; // rcx
  unsigned int v40; // edi
  __int64 v41; // rax
  _QWORD *v42; // rcx
  __int64 v43; // rcx
  char k; // cl
  unsigned __int64 v45; // rcx
  __int64 v46; // r11
  unsigned int v47; // edi
  __int64 v48; // rdx
  _QWORD *v49; // r10
  __int64 v50; // rcx
  char *v51; // rcx
  int v52; // eax
  __int64 v53; // r13
  __int64 v54; // rax
  _QWORD *n; // rdx
  _QWORD *v56; // r9
  __int64 v57; // r11
  _QWORD *ii; // rdx
  __int64 v59; // rdx
  __int64 v60; // rcx
  _QWORD *v61; // rax
  __int64 v62; // rcx
  int v63; // edi
  __int64 v64; // rdx
  __int64 v65; // r9
  int v66; // r8d
  __int64 v67; // rcx
  unsigned int v68; // edi
  void *v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  int v73; // [rsp+30h] [rbp-F8h]
  int Name; // [rsp+34h] [rbp-F4h]
  __int64 v75; // [rsp+38h] [rbp-F0h]
  __m128i *v76; // [rsp+40h] [rbp-E8h]
  __int64 j; // [rsp+40h] [rbp-E8h]
  __int64 v78; // [rsp+48h] [rbp-E0h]
  __int64 v79; // [rsp+50h] [rbp-D8h]
  __int64 v80; // [rsp+58h] [rbp-D0h]
  char *v81; // [rsp+60h] [rbp-C8h]
  unsigned int v82; // [rsp+68h] [rbp-C0h]
  int v83; // [rsp+70h] [rbp-B8h]
  _QWORD *v84; // [rsp+70h] [rbp-B8h]
  unsigned int v85; // [rsp+78h] [rbp-B0h]
  __int64 v86; // [rsp+78h] [rbp-B0h]
  __int64 v87; // [rsp+80h] [rbp-A8h] BYREF
  SIZE_T v88; // [rsp+88h] [rbp-A0h]
  __int128 v89; // [rsp+90h] [rbp-98h]
  unsigned __int64 v90[2]; // [rsp+A0h] [rbp-88h] BYREF
  _QWORD v91[3]; // [rsp+B0h] [rbp-78h] BYREF
  __m128i v92; // [rsp+C8h] [rbp-60h]
  int v95; // [rsp+150h] [rbp+28h]
  unsigned __int64 v96; // [rsp+150h] [rbp+28h]
  __int64 v97; // [rsp+150h] [rbp+28h]
  int v98; // [rsp+150h] [rbp+28h]
  __int64 m; // [rsp+150h] [rbp+28h]
  __int64 v100; // [rsp+150h] [rbp+28h]
  __int64 v101; // [rsp+150h] [rbp+28h]

  v8 = 0LL;
  v9 = 0LL;
  v81 = 0LL;
  v10 = 0LL;
  v73 = 0;
  *a6 = 0LL;
  v87 = 0LL;
  v89 = 0LL;
  v88 = *(_QWORD *)(a5 + 32);
  v12 = RtlImageNtHeader(*(PVOID *)(a5 + 16));
  v91[2] = v12;
  if ( !v12 )
  {
    Name = -1073741637;
    goto LABEL_132;
  }
  LODWORD(v89) = v12->OptionalHeader.CheckSum;
  DWORD1(v89) = v12->FileHeader.TimeDateStamp;
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
  v87 = v13;
  if ( (*(_DWORD *)(a1 + 8) & 0x400) != 0 )
  {
    if ( *(_QWORD *)(a5 + 16) == *(_QWORD *)(a2 + 1312) )
    {
      v73 = 1;
    }
    else
    {
      v73 = 0;
      v15 = *(unsigned int *)(a3 + 40);
      v87 = v15 ^ v13;
      DWORD2(v89) = v15;
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(a1 + 664, 0LL);
  Module = EtwpCovSampContextFastFindModule(a1, (__int64)&v87, a6);
  if ( Module && Module == *a6 )
  {
    ProcessForExeModule(a1, a3, *a6, v73);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 664), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 664));
    KeAbPostRelease(a1 + 664);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    Name = 0;
    goto LABEL_17;
  }
  v83 = *(_DWORD *)(a1 + 684) >> 5;
  v18 = *(_DWORD *)(a1 + 680);
  if ( v18 <= *(_DWORD *)(a1 + 696) )
    v18 = *(_DWORD *)(a1 + 696);
  v85 = v18;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 664), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 664));
  KeAbPostRelease(a1 + 664);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
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
  *((_QWORD *)v10 + 1) = v87;
  v20 = v88;
  *((_QWORD *)v10 + 5) = v88;
  *((_QWORD *)v10 + 4) = v89;
  *((_DWORD *)v10 + 30) ^= (*((_DWORD *)v10 + 30) ^ (*(_DWORD *)(a5 + 8) << 9)) & 0x20000;
  v91[0] = 0LL;
  v91[1] = 0LL;
  v82 = 0;
  v76 = (__m128i *)v91;
  v95 = 1;
  if ( (int)EtwpFindDebugId(*(char **)(a5 + 16), v20, 1, (void **)v10 + 6, (_DWORD *)v10 + 14) >= 0 )
  {
    v21 = *((_QWORD *)v10 + 6);
    if ( *((_DWORD *)v10 + 14) <= 0x400u )
    {
      v82 = *(_DWORD *)(v21 + 20);
      v76 = (__m128i *)(v21 + 4);
      goto LABEL_28;
    }
    ExFreePoolWithTag(*((PVOID *)v10 + 6), 0);
    *((_QWORD *)v10 + 6) = 0LL;
    *((_DWORD *)v10 + 14) = 0;
  }
  v22 = 0;
  v95 = 0;
  v23 = v73;
  if ( !v73 )
  {
LABEL_39:
    if ( !v22 && !v23 )
      goto LABEL_46;
    goto LABEL_41;
  }
LABEL_28:
  Name = EtwpCovSampModuleGetName(v10, a5, a4);
  if ( Name < 0 )
    goto LABEL_17;
  v90[0] = *((_QWORD *)v10 + 14);
  v90[1] = (unsigned __int16)*((_DWORD *)v10 + 30);
  v24 = *(_DWORD *)(a1 + 1112);
  if ( v24 )
    v22 = EtwpCovSampCheckForSegments(v90, (unsigned __int64 *)(a1 + 792), v24);
  else
    v22 = v95;
  if ( !v22 )
    goto LABEL_38;
  v25 = *(_DWORD *)(a1 + 1116);
  if ( !v25 )
    goto LABEL_38;
  if ( (unsigned int)EtwpCovSampCheckForSegments(v90, (unsigned __int64 *)(a1 + 952), v25) )
  {
    v22 = 0;
LABEL_38:
    v23 = v73;
    goto LABEL_39;
  }
  v22 = 1;
LABEL_41:
  *((_DWORD *)v10 + 30) ^= (*((_DWORD *)v10 + 30) ^ (v22 << 16)) & 0x10000;
  v26 = *((_DWORD *)v10 + 10);
  LODWORD(v96) = *((_DWORD *)v10 + 9);
  HIDWORD(v96) = *((_DWORD *)v10 + 8);
  v27 = EtwCovSampHash(v96, *(unsigned int *)(a1 + 12));
  v92 = *v76;
  v28 = v92;
  v29 = EtwCovSampHash(__PAIR64__(v82, v26), v27);
  v30 = EtwCovSampHash(v28.m128i_u64[0], v29);
  v97 = EtwCovSampHash(_mm_srli_si128(v28, 8).m128i_u64[0], v30);
  v31 = v97 ^ HIDWORD(v97);
  if ( (unsigned int)v97 == HIDWORD(v97) )
    v31 = 1;
  if ( !v73 )
    v31 ^= *(_DWORD *)(a3 + 40);
  *((_DWORD *)v10 + 31) = v31;
LABEL_46:
  v32 = 2 * v83;
  if ( v85 + 1 > 2 * v83 )
  {
    v8 = v32;
    if ( !v32 )
      v8 = 128LL;
    v81 = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)(2 * v8), 0x56777445u);
  }
  v33 = KeGetCurrentThread();
  --v33->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 664, 0LL);
  *(_QWORD *)(a1 + 672) = KeGetCurrentThread();
  v34 = v81;
  if ( v81 && (unsigned int)v8 > *(_DWORD *)(a1 + 684) >> 5 )
  {
    v35 = &v81[8 * (unsigned int)v8];
    v36 = (unsigned int)v8;
    v98 = v8 & (v8 - 1);
    if ( v98 )
    {
      v37 = v8;
      for ( i = -1; v37; v37 >>= 1 )
        ++i;
      v36 = (unsigned int)(1 << i);
    }
    if ( (unsigned int)v36 > 0x4000000 )
      v36 = 0x4000000LL;
    v39 = (unsigned __int64)(8 * v36 + 7) >> 3;
    if ( v35 > &v35[8 * v36] )
      v39 = 0LL;
    if ( v39 )
      memset64(v35, (a1 + 696) | 1, v39);
    v86 = -1LL << (*(_BYTE *)(a1 + 700) & 0x1F);
    v40 = 0;
    if ( (*(_DWORD *)(a1 + 700) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v41 = *(_QWORD *)(a1 + 704);
        for ( j = v41; ; v41 = j )
        {
          v42 = *(_QWORD **)(v41 + 8LL * v40);
          v84 = v42;
          if ( ((unsigned __int8)v42 & 1) != 0 )
            break;
          *(_QWORD *)(j + 8LL * v40) = *v42;
          v78 = v86 & v42[1];
          v43 = (37
               * (BYTE6(v78)
                + 37
                * (BYTE5(v78)
                 + 37
                 * (BYTE4(v78)
                  + 37 * (BYTE3(v78) + 37 * (BYTE2(v78) + 37 * (BYTE1(v78) + 37 * ((unsigned __int8)v78 + 11623883)))))))
               + HIBYTE(v78)) & (unsigned int)(v36 - 1);
          *v84 = *(_QWORD *)&v35[8 * v43];
          *(_QWORD *)&v35[8 * v43] = v84;
          v34 = v81;
        }
        ++v40;
      }
      while ( v40 < *(_DWORD *)(a1 + 700) >> 5 );
    }
    *(_QWORD *)(a1 + 704) = v35;
    *(_DWORD *)(a1 + 700) = (32 * v36) | *(_DWORD *)(a1 + 700) & 0x1F;
    if ( v98 )
    {
      for ( k = -1; (_DWORD)v8; LODWORD(v8) = (unsigned int)v8 >> 1 )
        ++k;
      v8 = (unsigned int)(1 << k);
    }
    if ( (unsigned int)v8 > 0x4000000 )
      v8 = 0x4000000LL;
    v45 = (unsigned __int64)(8 * v8 + 7) >> 3;
    if ( v34 > &v34[8 * v8] )
      v45 = 0LL;
    if ( v45 )
      memset64(v34, (a1 + 680) | 1, v45);
    v46 = -1LL << (*(_BYTE *)(a1 + 684) & 0x1F);
    v47 = 0;
    if ( (*(_DWORD *)(a1 + 684) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v48 = *(_QWORD *)(a1 + 688);
        for ( m = v48; ; v48 = m )
        {
          v49 = *(_QWORD **)(v48 + 8LL * v47);
          if ( ((unsigned __int8)v49 & 1) != 0 )
            break;
          *(_QWORD *)(v48 + 8LL * v47) = *v49;
          v79 = v46 & v49[1];
          v50 = (37
               * (BYTE6(v79)
                + 37
                * (BYTE5(v79)
                 + 37
                 * (BYTE4(v79)
                  + 37 * (BYTE3(v79) + 37 * (BYTE2(v79) + 37 * (BYTE1(v79) + 37 * ((unsigned __int8)v79 + 11623883)))))))
               + HIBYTE(v79)) & (unsigned int)(v8 - 1);
          *v49 = *(_QWORD *)&v34[8 * v50];
          *(_QWORD *)&v34[8 * v50] = v49;
        }
        ++v47;
      }
      while ( v47 < *(_DWORD *)(a1 + 684) >> 5 );
    }
    v51 = *(char **)(a1 + 688);
    *(_QWORD *)(a1 + 688) = v34;
    v52 = (32 * v8) | *(_DWORD *)(a1 + 684) & 0x1F;
    v53 = a1 + 680;
    *(_DWORD *)(a1 + 684) = v52;
    v81 = v51;
  }
  else
  {
    v53 = a1 + 680;
  }
  if ( *(_DWORD *)(a1 + 684) >= 0x20u )
  {
    v54 = EtwpCovSampContextFastFindModule(a1, (__int64)&v87, a6);
    if ( v54 )
    {
      if ( v54 == *a6 )
      {
        ProcessForExeModule(a1, a3, *a6, v73);
LABEL_90:
        Name = 0;
        goto LABEL_86;
      }
      *(_DWORD *)(v54 + 120) |= 0x40000u;
      v100 = *(_QWORD *)(v54 + 8) & (-1LL << (*(_DWORD *)(v53 + 4) & 0x1F));
      for ( n = (_QWORD *)(*(_QWORD *)(v53 + 8)
                         + 8LL
                         * ((37
                           * (BYTE6(v100)
                            + 37
                            * (BYTE5(v100)
                             + 37
                             * (BYTE4(v100)
                              + 37
                              * (BYTE3(v100)
                               + 37 * (BYTE2(v100) + 37 * (BYTE1(v100) + 37 * ((unsigned __int8)v100 + 11623883)))))))
                           + HIBYTE(v100)) & (unsigned int)((*(_DWORD *)(v53 + 4) >> 5) - 1)));
            (*n & 1) == 0;
            n = (_QWORD *)*n )
      {
        if ( *n == v54 )
        {
          *n = *(_QWORD *)v54;
          --*(_DWORD *)v53;
          break;
        }
      }
      *(_QWORD *)v54 = 0LL;
      v56 = (_QWORD *)(v54 + 16);
      v57 = a1 + 696;
      if ( *(_QWORD *)(v54 + 16) )
      {
        v101 = *(_QWORD *)(v54 + 24) & (-1LL << (*(_DWORD *)(a1 + 700) & 0x1F));
        for ( ii = (_QWORD *)(*(_QWORD *)(a1 + 704)
                            + 8LL
                            * ((37
                              * (BYTE6(v101)
                               + 37
                               * (BYTE5(v101)
                                + 37
                                * (BYTE4(v101)
                                 + 37
                                 * (BYTE3(v101)
                                  + 37 * (BYTE2(v101) + 37 * (BYTE1(v101) + 37 * ((unsigned __int8)v101 + 11623883)))))))
                              + HIBYTE(v101)) & (unsigned int)((*(_DWORD *)(a1 + 700) >> 5) - 1)));
              (*ii & 1) == 0;
              ii = (_QWORD *)*ii )
        {
          if ( (_QWORD *)*ii == v56 )
          {
            *ii = *v56;
            --*(_DWORD *)v57;
            break;
          }
        }
        *v56 = 0LL;
      }
    }
    else
    {
      v57 = a1 + 696;
    }
    *((_DWORD *)v10 + 30) = *((_DWORD *)v10 + 30) & 0xFFEFFFFF | (v73 << 20);
    *((_DWORD *)v10 + 32) = (*(_DWORD *)(a1 + 1120))++;
    v80 = *((_QWORD *)v10 + 1) & (-1LL << (*(_DWORD *)(v53 + 4) & 0x1F));
    v59 = (37
         * (BYTE6(v80)
          + 37
          * (BYTE5(v80)
           + 37
           * (BYTE4(v80)
            + 37 * (BYTE3(v80) + 37 * (BYTE2(v80) + 37 * (BYTE1(v80) + 37 * ((unsigned __int8)v80 + 11623883)))))))
         + HIBYTE(v80)) & (unsigned int)((*(_DWORD *)(v53 + 4) >> 5) - 1);
    v60 = *(_QWORD *)(v53 + 8);
    *(_QWORD *)v10 = *(_QWORD *)(v60 + 8 * v59);
    *(_QWORD *)(v60 + 8 * v59) = v10;
    ++*(_DWORD *)v53;
    v61 = (_QWORD *)(a1 + 712);
    v62 = *(_QWORD *)(a1 + 712);
    if ( *(_QWORD *)(v62 + 8) != a1 + 712 )
      __fastfail(3u);
    *((_QWORD *)v10 + 9) = v62;
    *((_QWORD *)v10 + 10) = v61;
    *(_QWORD *)(v62 + 8) = v10 + 72;
    *v61 = v10 + 72;
    *((_DWORD *)v10 + 34) = MEMORY[0xFFFFF78000000320];
    ++*(_DWORD *)(a1 + 728);
    ++*(_DWORD *)(a1 + 732);
    v63 = *((_DWORD *)v10 + 30);
    if ( (v63 & 0x10000) != 0 || v73 )
    {
      v64 = *((unsigned int *)v10 + 31);
      *((_QWORD *)v10 + 3) = v64;
      v65 = v64 & (-1LL << (*(_BYTE *)(a1 + 700) & 0x1F));
      v66 = *(_DWORD *)(a1 + 700) >> 5;
      if ( !v66 )
        goto LABEL_124;
      v67 = *(_QWORD *)(a1 + 704)
          + 8LL
          * ((37
            * (BYTE6(v65)
             + 37
             * (BYTE5(v65)
              + 37
              * (BYTE4(v65)
               + 37 * (BYTE3(v65) + 37 * (BYTE2(v65) + 37 * (BYTE1(v65) + 37 * ((unsigned __int8)v65 + 11623883)))))))
            + HIBYTE(v65)) & (unsigned int)(v66 - 1));
      while ( 1 )
      {
        v67 = *(_QWORD *)v67;
        if ( (v67 & 1) != 0 )
          break;
        if ( v65 == ((-1LL << (*(_BYTE *)(a1 + 700) & 0x1F)) & *(_QWORD *)(v67 + 8)) )
          goto LABEL_114;
      }
      v67 = 0LL;
LABEL_114:
      if ( v67 )
      {
        if ( *(_DWORD *)(v67 + 16) == *((_DWORD *)v10 + 8)
          && *(_DWORD *)(v67 + 20) == *((_DWORD *)v10 + 9)
          && *(_QWORD *)(v67 + 24) == *((_QWORD *)v10 + 5)
          && (unsigned int)EtwpCheckDebugInfoEqual(*(_QWORD *)(v67 + 32), *((_QWORD *)v10 + 6)) )
        {
          v68 = *((_DWORD *)v10 + 30);
        }
        else
        {
          *((_DWORD *)v10 + 31) = 0;
          v68 = v63 & 0xFFFEFFFF;
        }
        *((_DWORD *)v10 + 30) = v68 | 0x80000;
        EtwpCovSampModuleNameInfoCleanup(v10 + 104);
        *((_QWORD *)v10 + 14) = 0LL;
        *((_WORD *)v10 + 60) = 0;
        v69 = (void *)*((_QWORD *)v10 + 6);
        if ( v69 )
          ExFreePoolWithTag(v69, 0);
        *((_QWORD *)v10 + 6) = 0LL;
        *((_DWORD *)v10 + 14) = 0;
      }
      else
      {
LABEL_124:
        v75 = *((_QWORD *)v10 + 3) & (-1LL << (*(_DWORD *)(v57 + 4) & 0x1F));
        v70 = (37
             * (BYTE6(v75)
              + 37
              * (BYTE5(v75)
               + 37
               * (BYTE4(v75)
                + 37 * (BYTE3(v75) + 37 * (BYTE2(v75) + 37 * (BYTE1(v75) + 37 * ((unsigned __int8)v75 + 11623883)))))))
             + HIBYTE(v75)) & (unsigned int)((*(_DWORD *)(v57 + 4) >> 5) - 1);
        v71 = *(_QWORD *)(v57 + 8);
        *((_QWORD *)v10 + 2) = *(_QWORD *)(v71 + 8 * v70);
        *(_QWORD *)(v71 + 8 * v70) = v10 + 16;
        ++*(_DWORD *)v57;
      }
      if ( (*(_DWORD *)(a1 + 8) & 0x400) != 0 )
      {
        ProcessForExeModule(a1, a3, (__int64)v10, v73);
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
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 664));
    KeAbPostRelease(a1 + 664);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    EtwpCovSampContextPruneModules(a1);
    goto LABEL_90;
  }
  Name = -1073741670;
LABEL_86:
  v9 = v81;
LABEL_132:
  if ( *(struct _KTHREAD **)(a1 + 672) == KeGetCurrentThread() )
  {
    *(_QWORD *)(a1 + 672) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 664), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 664));
    KeAbPostRelease(a1 + 664);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
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
