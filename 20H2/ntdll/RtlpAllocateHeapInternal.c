/*
 * XREFs of RtlpAllocateHeapInternal @ 0x18002AA20
 * Callers:
 *     RtlpHpTagAllocateHeap @ 0x180007AB4 (RtlpHpTagAllocateHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlpHpAllocWithExceptionProtection @ 0x18002C270 (RtlpHpAllocWithExceptionProtection.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x180002B78 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeAlloc @ 0x180003404 (RtlpHpLargeAlloc.c)
 *     RtlpHpLfhBucketActivate @ 0x180007328 (RtlpHpLfhBucketActivate.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x180008110 (RtlpHpMetadataHeapCtxGet.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlpHpFreeHeap @ 0x180024920 (RtlpHpFreeHeap.c)
 *     RtlpHpVsContextAllocateInternal @ 0x180028CD0 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpSegAlloc @ 0x180029B70 (RtlpHpSegAlloc.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18002B650 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpHpLfhSlotAllocate @ 0x18002C2B0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpAllocateHeap @ 0x18002D160 (RtlpAllocateHeap.c)
 *     RtlNtStatusToDosError @ 0x180050840 (RtlNtStatusToDosError.c)
 *     RtlpHpVsChunkSetExtraPresent @ 0x180069EC0 (RtlpHpVsChunkSetExtraPresent.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x180084CBC (RtlpHpLargeAllocSetExtraPresent.c)
 *     memset @ 0x1800A4180 (memset.c)
 *     RtlpCallInterceptRoutine @ 0x1800F37C4 (RtlpCallInterceptRoutine.c)
 *     RtlpAllocateHeapRaiseException @ 0x1800F6B88 (RtlpAllocateHeapRaiseException.c)
 *     RtlpSetupExtendedBlock @ 0x1800F6EB8 (RtlpSetupExtendedBlock.c)
 *     RtlpHpStackTraceAddStack @ 0x180108B20 (RtlpHpStackTraceAddStack.c)
 *     RtlpLogHeapAllocateEvent @ 0x18010A060 (RtlpLogHeapAllocateEvent.c)
 *     RtlpLogHeapFailure @ 0x18010E31C (RtlpLogHeapFailure.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x18010EF28 (RtlpHpSegGetDescriptorValidateSafe.c)
 */

unsigned __int64 __fastcall RtlpAllocateHeapInternal(
        unsigned __int16 *BaseAddress,
        unsigned __int64 a2,
        int a3,
        __int16 a4)
{
  int v7; // ecx
  int v8; // edx
  unsigned int v9; // ecx
  int v10; // edx
  int v11; // ecx
  int v12; // edx
  int v13; // r8d
  int v14; // edx
  int v15; // eax
  unsigned __int64 v16; // r15
  size_t v17; // rdi
  unsigned __int64 Heap; // rdi
  unsigned int v19; // ebx
  unsigned __int64 v20; // rax
  __int64 v21; // r9
  unsigned __int64 v22; // r13
  unsigned int v23; // edx
  unsigned __int64 v24; // rax
  int v25; // r10d
  int v26; // edx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rcx
  int v29; // ebx
  unsigned __int64 v30; // rax
  int v31; // eax
  char *v32; // r11
  unsigned __int8 *v33; // rcx
  __int64 v34; // r10
  __int64 v35; // r9
  volatile signed __int64 *v36; // rbx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // r8
  unsigned __int64 v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // rcx
  __int64 v44; // r10
  __int64 v45; // r8
  unsigned __int8 v46; // al
  void *v47; // rax
  bool v48; // zf
  __int64 v49; // rcx
  PVOID v50; // rax
  int v51; // r8d
  __m128i *v52; // rax
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rbx
  __m128i *v55; // rbx
  __int64 v56; // rax
  int v57; // eax
  int v58; // r15d
  __int64 v59; // rcx
  unsigned __int64 v60; // r15
  unsigned __int64 v61; // r8
  __int64 DescriptorValidateSafe; // rdx
  char v63; // al
  char v64; // cl
  __int64 v65; // r8
  __int64 v66; // r9
  unsigned __int64 v67; // rcx
  int v68; // ecx
  _DWORD *v69; // rcx
  __int64 v70; // rcx
  struct _TEB *v71; // rbx
  int v72; // edx
  unsigned int v73; // r15d
  unsigned __int64 v74; // r13
  int v75; // edx
  __int64 v76; // rcx
  unsigned __int64 v77; // rax
  __int64 v78; // r9
  int v79; // ecx
  unsigned __int64 v80; // rcx
  __int64 v81; // r13
  unsigned __int64 v82; // rbx
  __int64 v83; // rax
  __int64 v84; // rcx
  int v85; // r9d
  __int64 *v86; // rdx
  __int64 *v87; // rax
  unsigned __int64 v88; // rcx
  __int64 v89; // rbx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // rax
  struct _TEB *v93; // rbx
  unsigned __int64 v94; // rcx
  _DWORD *SharedData; // rcx
  __int64 v96; // rcx
  _BYTE *v97; // rdx
  char v98; // r8
  unsigned __int64 v99; // rcx
  __int64 v101; // [rsp+20h] [rbp-89h]
  int v102; // [rsp+30h] [rbp-79h]
  _DWORD v103[3]; // [rsp+34h] [rbp-75h] BYREF
  unsigned __int64 v104; // [rsp+40h] [rbp-69h]
  int v105; // [rsp+48h] [rbp-61h]
  int v106; // [rsp+4Ch] [rbp-5Dh] BYREF
  int v107; // [rsp+50h] [rbp-59h]
  int v108; // [rsp+54h] [rbp-55h]
  unsigned __int64 v109; // [rsp+58h] [rbp-51h] BYREF
  int v110; // [rsp+60h] [rbp-49h]
  int v111; // [rsp+64h] [rbp-45h]
  unsigned __int64 v112; // [rsp+68h] [rbp-41h]
  unsigned __int64 v113; // [rsp+70h] [rbp-39h] BYREF
  __int64 v114; // [rsp+78h] [rbp-31h]
  __int64 v115; // [rsp+80h] [rbp-29h]
  __int64 v116; // [rsp+88h] [rbp-21h]
  PRTL_SRWLOCK SRWLock[2]; // [rsp+90h] [rbp-19h] BYREF
  __int64 v118; // [rsp+A0h] [rbp-9h]
  __int128 v119; // [rsp+B0h] [rbp+7h] BYREF
  __int128 v120[4]; // [rsp+C0h] [rbp+17h] BYREF
  unsigned int v121; // [rsp+110h] [rbp+67h]
  int v122; // [rsp+110h] [rbp+67h]

  if ( *((_DWORD *)BaseAddress + 4) != -571548178 )
  {
    v72 = *((_DWORD *)BaseAddress + 29);
    v73 = v72 | a3;
    v103[0] = 0;
    v109 = 0LL;
    v74 = 0LL;
    if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    {
      v103[0] = 5;
LABEL_184:
      Heap = 0LL;
LABEL_185:
      NtCurrentTeb()->LastStatusValue = -1073741801;
      v93 = NtCurrentTeb();
      v93->LastErrorValue = RtlNtStatusToDosError(-1073741801);
      if ( (v73 & 4) != 0 )
      {
        v94 = a2;
        if ( v74 )
          v94 = v74;
        RtlpAllocateHeapRaiseException(v94);
      }
LABEL_189:
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && *SharedData )
        v96 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v96 = 2147353472LL;
      if ( *(_BYTE *)v96
        && (NtCurrentPeb()->TracingFlags & 1) != 0
        && (*((_DWORD *)BaseAddress + 29) & 0x1000000) == 0
        && ((v73 & 0x61000000) == 0 || (v73 & 0x10000000) != 0)
        && v103[0] != 5 )
      {
        if ( !Heap )
          goto LABEL_206;
        v97 = (_BYTE *)(Heap - 16);
        _m_prefetchw((const void *)(Heap - 16));
        v98 = *(_BYTE *)(Heap - 16 + 15);
        v99 = Heap - 16;
        if ( v98 == 5 )
          v99 -= 16LL * (unsigned __int8)v97[14];
        if ( *(char *)(v99 + 15) < 0 )
          goto LABEL_206;
        _m_prefetchw(v97);
        if ( v98 == 5 )
          v97 -= 16 * (unsigned __int8)v97[14];
        if ( ((v97[10] ^ (unsigned __int8)(BaseAddress[69] & (*((_DWORD *)BaseAddress + 31) >> 17))) & 8) == 0 )
LABEL_206:
          RtlpLogHeapAllocateEvent(BaseAddress, Heap, a2, v103[0]);
      }
      if ( (dword_18016D588 & 1) != 0 && (dword_18016D588 & 2) != 0 )
      {
        if ( NtCurrentPeb()->ProcessHeap )
        {
          v120[0] = RtlpHpEnvHandle;
          if ( BaseAddress != *(unsigned __int16 **)RtlpHpMetadataHeapCtxGet(v120) && Heap && (v73 & 0x10000000) == 0 )
            goto LABEL_213;
        }
      }
      return Heap;
    }
    v75 = v72 & 0x1000000;
    if ( !v75 && !dword_1801663E8 )
    {
      v76 = *((_QWORD *)BaseAddress + 49);
      v77 = v76;
      if ( (v76 || (v77 = qword_18016A688) != 0) && a2 > v77 )
      {
        v78 = *((_QWORD *)BaseAddress + 50);
        if ( v78 )
          RtlpLogHeapFailure(20, (_DWORD)BaseAddress, 0, v78, a2, v76);
        v103[0] = 5;
        goto LABEL_184;
      }
    }
    v79 = *((_DWORD *)BaseAddress + 36);
    v122 = v79;
    if ( v79 )
    {
      if ( (v73 & 0x3C000102) != 0 || v75 )
      {
        v122 = 0;
      }
      else
      {
        if ( (int)RtlpCallInterceptRoutine(v79, (_DWORD)BaseAddress, 0, 1, (__int64)&v109) < 0 )
          goto LABEL_184;
        v80 = (v109 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
        a2 += v80 + 16;
        v109 = v80 + 16;
      }
    }
    v81 = 1LL;
    if ( a2 )
      v81 = a2;
    v74 = (v81 + 23) & 0xFFFFFFFFFFFFFFF0uLL;
    v82 = v74 >> 4;
    if ( (v73 & 0x7D810F61) != 0 )
      goto LABEL_179;
    if ( a2 <= RtlpLargestLfhBlock
      && ((unsigned __int8)(1 << ((v74 >> 4) & 7)) & *((_BYTE *)BaseAddress + (v74 >> 7) + 434)) != 0 )
    {
      v83 = *((_QWORD *)BaseAddress + 53);
      v84 = *((_QWORD *)BaseAddress + 51);
      v103[0] = 2;
      Heap = RtlpLowFragHeapAllocFromContext(v84, *(unsigned __int16 *)(v83 + 2 * v82), a2, v73);
      if ( Heap )
      {
LABEL_181:
        if ( !v122 )
          goto LABEL_189;
        a2 -= v109;
        v92 = RtlpSetupExtendedBlock((_DWORD)BaseAddress, v73, Heap, v85, v109, v122);
        v101 = Heap;
        Heap = v92;
        if ( (int)RtlpCallInterceptRoutine(v122, (_DWORD)BaseAddress, v92, 2, v101) >= 0 )
          goto LABEL_189;
        RtlFreeHeap(BaseAddress, 0, (PVOID)Heap);
        goto LABEL_184;
      }
    }
    v86 = (__int64 *)*((_QWORD *)BaseAddress + 39);
    if ( v82 < *((unsigned int *)v86 + 2) )
    {
LABEL_172:
      v88 = v74 >> 4;
    }
    else
    {
      while ( 1 )
      {
        v87 = (__int64 *)*v86;
        if ( !*v86 )
          break;
        v86 = (__int64 *)*v86;
        if ( v82 < *((unsigned int *)v87 + 2) )
          goto LABEL_172;
      }
      v88 = (unsigned int)(*((_DWORD *)v86 + 2) - 1);
    }
    if ( v88 >= *((unsigned int *)v86 + 2) || v82 != v88 )
    {
LABEL_179:
      v91 = 0LL;
    }
    else
    {
      v89 = v82 - *((unsigned int *)v86 + 6);
      v90 = 2 * v89;
      if ( !*((_DWORD *)v86 + 3) )
        v90 = v89;
      v91 = v86[6] + 8 * v90;
    }
    Heap = RtlpAllocateHeap((int)BaseAddress, v91, (__int64)v103);
    if ( !Heap )
      goto LABEL_185;
    goto LABEL_181;
  }
  if ( a3 )
  {
    if ( a3 == 8 )
    {
      v7 = 2;
    }
    else
    {
      v8 = a3 & 1 | 2;
      if ( (a3 & 8) == 0 )
        v8 = a3 & 1;
      v9 = v8 | 0x80000000;
      if ( (a3 & 4) == 0 )
        v9 = v8;
      v10 = v9 | 0x100;
      if ( (a3 & 0x100) == 0 )
        v10 = v9;
      v11 = a3 & 0xE00 | v10;
      if ( (a3 & 0xE00) == 0 )
        v11 = v10;
      v12 = v11 | 0x2000000;
      if ( (a3 & 0x10) == 0 )
        v12 = v11;
      v7 = v12 | 0x1000000;
      if ( (a3 & 2) == 0 )
        v7 = v12;
    }
  }
  else
  {
    v7 = 0;
  }
  v13 = *((_DWORD *)BaseAddress + 55);
  v14 = 0;
  if ( v13 )
    LOBYTE(v14) = v13 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v15 = v7 | 1;
  if ( !v14 )
    v15 = v7;
  v111 = v15;
  if ( (RtlpHpAppCompatFlags & 2) != 0 )
  {
    v16 = 64LL;
    if ( a2 <= 0xFEFF8 )
      v16 = 16LL;
  }
  else
  {
    v16 = 0LL;
  }
  v17 = v16 + a2;
  v104 = v16;
  *(_QWORD *)&v103[1] = v16 + a2;
  if ( v16 + a2 < a2 )
  {
    Heap = 0LL;
LABEL_135:
    NtCurrentTeb()->LastStatusValue = -1073741801;
    v71 = NtCurrentTeb();
    v71->LastErrorValue = RtlNtStatusToDosError(-1073741801);
    if ( v111 < 0 || *((int *)BaseAddress + 5) < 0 )
      RtlpAllocateHeapRaiseException(a2);
    return Heap;
  }
  v19 = (v15 | *((_DWORD *)BaseAddress + 5)) & 0x93000F0B;
  if ( dword_1801663E8 || (v20 = *((_QWORD *)BaseAddress + 6)) == 0 && (v20 = qword_18016A688) == 0 || v17 <= v20 )
  {
    v107 = 0;
    v24 = 0LL;
    v113 = 0LL;
    if ( (v19 & 0x1000000) == 0 )
    {
      v25 = *((_DWORD *)BaseAddress + 6);
      v107 = v25;
      if ( v25 )
      {
        v19 |= 8u;
        if ( (int)RtlpCallInterceptRoutine(v25, (_DWORD)BaseAddress, 0, 1, (__int64)&v113) < 0 )
        {
          Heap = 0LL;
          v22 = 0LL;
          v23 = 0;
LABEL_125:
          v16 = v104;
          goto LABEL_126;
        }
        v24 = v113;
      }
    }
    v26 = v19 | 8;
    if ( !a4 )
      v26 = v19;
    v27 = v17 + v24;
    v121 = v26;
    v110 = v26 & 0x10000000;
    v28 = v27 + 16;
    if ( (v26 & 0x10000000) == 0 )
      v28 = v27;
    v108 = v26 & 0x20000F08;
    if ( (v26 & 0x20000F08) != 0 )
      v28 = ((v28 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
    v22 = 1LL;
    if ( v28 )
      v22 = v28;
    if ( v22 < v17 || v17 > 0x7FFFFFFFFFFFFFFFLL )
    {
      Heap = 0LL;
      v23 = 0;
      goto LABEL_125;
    }
    v29 = v26 & 0x13000003;
    v102 = 3;
    v30 = (unsigned int)BaseAddress[446] - 16;
    v105 = v26 & 0x13000003;
    if ( v22 > v30 )
      goto LABEL_78;
    v31 = v22 + 2;
    if ( (_DWORD)v17 == (_DWORD)v22 )
      v31 = v22;
    v32 = (char *)(BaseAddress + 416);
    v33 = &RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v31 + 15) >> 4];
    v34 = *v33;
    v114 = v34;
    if ( (*(_QWORD *)&BaseAddress[4 * v34 + 480] & 1) != 0 )
    {
      v35 = *v33;
      v36 = (volatile signed __int64 *)&BaseAddress[4 * v35 + 480];
      if ( (*v36 & 1) != 0 )
      {
        v37 = *v36;
        v112 = v37;
        v38 = v37;
        if ( (v37 & 1) != 0 )
        {
          v39 = v37 >> 16;
          LOWORD(v40) = WORD1(v37);
          do
          {
            if ( (v39 & 0x1F) > 0x10 )
              break;
            if ( (unsigned __int16)v40 > 0xFF00u )
              break;
            WORD1(v112) = WORD1(v37) + 33;
            v38 = v112;
            if ( v37 == _InterlockedCompareExchange64(v36, v112, v37) )
              break;
            v112 = *v36;
            v37 = v112;
            v40 = v112 >> 16;
            v38 = v112;
            LOBYTE(v39) = BYTE2(v112);
          }
          while ( (v112 & 1) != 0 );
          LODWORD(v17) = v103[1];
        }
        v41 = v38 >> 16;
        if ( (v41 & 0x1F) > 0x10 || (unsigned __int16)v41 > 0xFF00u )
        {
          RtlpHpLfhBucketActivate((__int64)(BaseAddress + 416), v35);
          v34 = v114;
          v32 = (char *)(BaseAddress + 416);
        }
      }
      if ( (*v36 & 1) != 0 )
      {
        Heap = -1LL;
        goto LABEL_67;
      }
      v29 = v105;
    }
    v43 = (unsigned __int8)v32[56];
    v44 = *(_QWORD *)&v32[8 * v34 + 128];
    v115 = ((((unsigned int)RtlpHpLfhPerfFlags >> 10) & 1) + 2LL) << 6;
    v45 = v115 - (((_BYTE)v43 - 1) & 7) + v43 + 7;
    v116 = v45;
    if ( *(_BYTE *)(v44 + 2) == 1 )
    {
      v46 = 0;
    }
    else
    {
      v46 = *(_BYTE *)(v115 + BYTE1(NtCurrentTeb()->HeapData) + v44);
      v45 = v116;
    }
    v47 = (void *)RtlpHpLfhSlotAllocate((_DWORD)v32, v44, *(_QWORD *)(v45 + 8LL * v46 + v44), v17, v29);
    Heap = (unsigned __int64)v47;
    if ( v47 )
    {
      v48 = (v29 & 2) == 0;
      v42 = *(_QWORD *)&v103[1];
      if ( !v48 )
        memset(v47, 0, v103[1]);
      goto LABEL_68;
    }
LABEL_67:
    v42 = *(_QWORD *)&v103[1];
LABEL_68:
    if ( Heap != -1LL )
    {
      v23 = 2;
      v102 = 2;
      goto LABEL_89;
    }
    v17 = *(_QWORD *)&v103[1];
    v29 = v105;
LABEL_78:
    if ( v22 > 0x20000 )
    {
      if ( v22 > *((unsigned int *)BaseAddress + 116) )
      {
        v50 = RtlpHpLargeAlloc((char *)BaseAddress, v17, v22, v29);
      }
      else
      {
        v49 = 224LL;
        if ( v22 <= *((unsigned int *)BaseAddress + 68) )
          v49 = 128LL;
        v50 = RtlpHpSegAlloc((__int64)&BaseAddress[v49], v17, v22, v22, v29);
      }
      Heap = (unsigned __int64)v50;
    }
    else
    {
      v106 = 0;
      v118 = 0LL;
      *(_OWORD *)SRWLock = 0LL;
      Heap = (unsigned __int64)RtlpHpVsContextAllocateInternal(
                                 (PRTL_SRWLOCK)BaseAddress + 80,
                                 v17,
                                 v22,
                                 v29,
                                 (__int64)SRWLock,
                                 &v106);
      if ( v106 && (v29 & 1) == 0 )
      {
        RtlReleaseSRWLockExclusive(SRWLock[1]);
        SRWLock[1] = 0LL;
      }
    }
    v42 = *(_QWORD *)&v103[1];
    v23 = 3;
LABEL_89:
    if ( !Heap )
      goto LABEL_125;
    if ( (v121 & 0x30000F08) == 0 )
    {
LABEL_124:
      v23 = v102;
      goto LABEL_125;
    }
    v51 = v110;
    v52 = (__m128i *)(v42 + Heap);
    v53 = v113;
    if ( v110 )
      *v52 = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
    v54 = 0LL;
    if ( !v108 )
    {
      v58 = v121;
      goto LABEL_121;
    }
    v55 = v52 + 1;
    if ( !v51 )
      v55 = v52;
    v54 = ((unsigned __int64)&v55->m128i_u64[1] + 7) & 0xFFFFFFFFFFFFFFF0uLL;
    *(_OWORD *)v54 = 0LL;
    *(_BYTE *)(v54 + 2) &= 0xFu;
    *(_BYTE *)(v54 + 2) |= 16 * (BYTE1(v121) & 0xFE);
    *(_WORD *)v54 = a4;
    *(_BYTE *)(v54 + 3) = v53 >> 4;
    v108 = 1;
    if ( (_WORD)Heap )
    {
      v57 = 0;
    }
    else
    {
      v56 = RtlCSparseBitmapBitmaskRead((__int64)&::BaseAddress, 2 * ((Heap - qword_18016DC48) >> 20));
      if ( !v56 || (v57 = v56 - 1, v57 == 2) )
      {
        v58 = v121;
        RtlpHpLargeAllocSetExtraPresent(BaseAddress, Heap, v121);
        goto LABEL_121;
      }
    }
    v59 = 96LL * v57;
    v60 = (unsigned __int64)&BaseAddress[v59 + 128];
    if ( (RtlpHpAppCompatFlags & 1) != 0 )
    {
      DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(&BaseAddress[v59 + 128], Heap);
    }
    else
    {
      v61 = *(_QWORD *)v60 & Heap;
      if ( ((unsigned __int64)RtlpHpHeapGlobals ^ v60 ^ v61 ^ *(_QWORD *)(v61 + 0x10)) == 0xA2E64EADA2E64EADuLL )
        DescriptorValidateSafe = v61 + 32 * ((unsigned __int64)(unsigned int)(Heap - v61) >> *(_BYTE *)(v60 + 8));
      else
        DescriptorValidateSafe = 0LL;
    }
    if ( DescriptorValidateSafe )
    {
      v63 = *(_BYTE *)(DescriptorValidateSafe + 24);
      if ( (v63 & 1) != 0 )
      {
        if ( (v63 & 2) != 0 )
        {
          if ( (v63 & 0xCu) >= 8 || (((1 << *(_BYTE *)(v60 + 8)) - 1) & Heap) == 0 )
            goto LABEL_115;
        }
        else
        {
          DescriptorValidateSafe += -32LL * *(unsigned __int8 *)(DescriptorValidateSafe + 31);
          v64 = *(_BYTE *)(DescriptorValidateSafe + 24);
          if ( (v64 & 3) == 3 && (v64 & 0xCu) >= 8 )
            goto LABEL_115;
        }
      }
    }
    DescriptorValidateSafe = 0LL;
LABEL_115:
    v65 = *(unsigned __int8 *)(DescriptorValidateSafe + 24);
    LOBYTE(v65) = v65 & 0xC;
    if ( (unsigned __int8)v65 < 8u )
    {
      *(_WORD *)(DescriptorValidateSafe + 8) |= 1u;
      v58 = v121;
    }
    else
    {
      v66 = ((DescriptorValidateSafe - (*(_QWORD *)v60 & DescriptorValidateSafe)) >> 5 << *(_BYTE *)(v60 + 8))
          + (*(_QWORD *)v60 & DescriptorValidateSafe);
      if ( (_BYTE)v65 == 8 )
      {
        v58 = v121;
        v67 = WORD4(RtlpHpHeapGlobals) ^ *(unsigned __int16 *)(v66 + 40) ^ (unsigned __int64)(unsigned __int16)((unsigned int)v66 >> 12);
        *(_WORD *)(v67 + Heap - 2) |= 0x4000u;
      }
      else
      {
        RtlpHpVsChunkSetExtraPresent(*(_QWORD *)(v60 + 32), Heap, v65, v66);
        v58 = v121;
      }
    }
LABEL_121:
    v68 = v107;
    if ( v107 )
    {
      *(_BYTE *)(v54 + 2) &= 0xF0u;
      *(_BYTE *)(v54 + 2) |= v68 & 0xF;
      if ( (int)RtlpCallInterceptRoutine(v68, (_DWORD)BaseAddress, Heap, 2, v54 + 16) < 0 )
      {
        RtlpHpFreeHeap((__int64)BaseAddress, Heap, v58, 0LL, 0LL);
        Heap = 0LL;
      }
    }
    goto LABEL_124;
  }
  v21 = *((_QWORD *)BaseAddress + 7);
  if ( v21 )
    RtlpLogHeapFailure(20, (_DWORD)BaseAddress, 0, v21, v16 + a2, *((_QWORD *)BaseAddress + 6));
  Heap = 0LL;
  v22 = 0LL;
  v23 = 0;
LABEL_126:
  v69 = NtCurrentPeb()->SharedData;
  if ( v69 && *v69 )
    v70 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v70 = 2147353472LL;
  if ( *(_BYTE *)v70 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapAllocateEvent(BaseAddress, Heap, v22, v23);
  if ( !Heap )
    goto LABEL_135;
  if ( (RtlpHpAppCompatFlags & 2) != 0 )
  {
    *(_QWORD *)(Heap + v16 - 16) = v16;
    if ( v16 > 0x10 )
      *(_QWORD *)Heap = v16;
    Heap += v16;
  }
  if ( (dword_18016D588 & 1) != 0 && (dword_18016D588 & 2) != 0 )
  {
    if ( NtCurrentPeb()->ProcessHeap )
    {
      v119 = RtlpHpEnvHandle;
      if ( BaseAddress != *(unsigned __int16 **)RtlpHpMetadataHeapCtxGet(&v119) )
LABEL_213:
        RtlpHpStackTraceAddStack(BaseAddress, Heap);
    }
  }
  return Heap;
}
