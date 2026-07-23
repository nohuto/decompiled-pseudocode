/*
 * XREFs of RtlpHpReAllocateHeap @ 0x180023990
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180023720 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpExtrasGet @ 0x1800021A0 (RtlpHpExtrasGet.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180002B78 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpVsChunkSize @ 0x180021698 (RtlpHpVsChunkSize.c)
 *     RtlpHpSegDescriptorValidate @ 0x180022944 (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpSegReAlloc @ 0x1800271D0 (RtlpHpSegReAlloc.c)
 *     RtlpHpLargeAllocSize @ 0x180084A9C (RtlpHpLargeAllocSize.c)
 *     memset @ 0x1800A4740 (memset.c)
 *     RtlpCallInterceptRoutine @ 0x1800F3614 (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapReallocateEvent @ 0x18010A388 (RtlpLogHeapReallocateEvent.c)
 *     RtlpLogHeapFailure @ 0x18010E17C (RtlpLogHeapFailure.c)
 *     RtlpHpLargeReAlloc @ 0x18010E93C (RtlpHpLargeReAlloc.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x18010ED88 (RtlpHpSegGetDescriptorValidateSafe.c)
 */

__int64 __fastcall RtlpHpReAllocateHeap(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        _QWORD *a5,
        _WORD *a6)
{
  unsigned __int64 v6; // rdi
  unsigned int v7; // esi
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  int v12; // ebx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdi
  unsigned __int64 v16; // rdx
  __int64 DescriptorValidateSafe; // r8
  char v18; // r9
  char v19; // r9
  unsigned __int8 v20; // r9
  char v21; // cl
  unsigned __int64 v22; // r10
  __int64 v23; // r8
  int v24; // edi
  unsigned int v25; // r9d
  unsigned int v26; // edx
  int v27; // r14d
  __int64 v28; // rcx
  unsigned int v29; // r8d
  unsigned int v30; // eax
  char v31; // cl
  unsigned __int64 v32; // rdx
  int v33; // r8d
  __int64 v34; // r8
  unsigned int v35; // edx
  unsigned __int64 v36; // r8
  unsigned int v37; // ecx
  __int16 v38; // ax
  int v39; // ecx
  unsigned __int64 v40; // r14
  unsigned __int64 v41; // rcx
  int v42; // r15d
  int v43; // eax
  int v44; // r8d
  __int64 v45; // rdx
  unsigned __int64 v46; // rax
  unsigned int v47; // r8d
  unsigned __int64 v48; // rax
  __int64 v49; // rcx
  unsigned __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // r8
  __int64 v53; // r10
  char v54; // cl
  unsigned __int64 v55; // r11
  __int64 v56; // r8
  int v57; // r9d
  unsigned int v58; // edx
  __int64 v59; // rcx
  unsigned int v60; // r8d
  __int64 v61; // rax
  char v62; // cl
  unsigned __int64 v63; // rdx
  int v64; // r8d
  __int64 v65; // r8
  unsigned __int16 v66; // r9
  __int64 v67; // rdx
  unsigned __int64 v68; // rcx
  __int16 v69; // ax
  int v70; // r8d
  BOOL v71; // ecx
  unsigned __int64 v72; // rax
  __int16 v73; // dx
  unsigned int v74; // edi
  __int64 v75; // rax
  unsigned __int64 v76; // rbx
  _DWORD *SharedData; // rcx
  __int64 v78; // rcx
  int v80; // eax
  __int64 v81; // r14
  __int64 v82; // rax
  __int64 v83; // rax
  int v84; // eax
  __int64 v85; // rdx
  __int64 v86; // r9
  bool v87; // zf
  int v88; // ecx
  __int64 v89; // rdi
  unsigned __int64 v90; // rax
  signed __int32 v91[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v92; // [rsp+30h] [rbp-38h]
  unsigned __int64 v93; // [rsp+38h] [rbp-30h] BYREF
  __int64 v94; // [rsp+40h] [rbp-28h]
  __int64 v95; // [rsp+48h] [rbp-20h] BYREF
  unsigned __int64 v96; // [rsp+50h] [rbp-18h]
  unsigned __int64 v97; // [rsp+58h] [rbp-10h]
  int v98; // [rsp+A8h] [rbp+40h] BYREF
  __int64 v99; // [rsp+B8h] [rbp+50h]

  v99 = a4;
  v6 = a4;
  v7 = (a2 | *(_DWORD *)(a1 + 20)) & 0x93000F0B;
  if ( a4 > 0x7FFFFFFFFFFFFFFFLL )
    return 0LL;
  if ( !dword_1801663E8 )
  {
    v10 = *(_QWORD *)(a1 + 48);
    v11 = v10;
    if ( (v10 || (v11 = qword_18016A688) != 0) && a4 > v11 )
    {
      v86 = *(_QWORD *)(a1 + 56);
      if ( v86 )
        RtlpLogHeapFailure(20, a1, 0, v86, v6, v10);
      return 0LL;
    }
  }
  v12 = 0;
  v94 = 0LL;
  v95 = 0LL;
  v97 = 0LL;
  v96 = a4;
  v92 = (unsigned __int16)a3;
  if ( (_WORD)a3 )
  {
    v13 = 0;
  }
  else
  {
    v82 = RtlCSparseBitmapBitmaskRead((__int64)&BaseAddress, 2 * ((a3 - qword_18016DC48) >> 20));
    if ( !v82 || (v13 = v82 - 1, v13 == 2) )
    {
      v40 = RtlpHpLargeAllocSize(a1, a3, v7, &v95);
      goto LABEL_28;
    }
  }
  v14 = 192LL * v13;
  v15 = v14 + a1 + 256;
  if ( (RtlpHpAppCompatFlags & 1) != 0 )
  {
    DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(v14 + a1 + 256, a3);
  }
  else
  {
    v16 = a3 & *(_QWORD *)v15;
    if ( ((unsigned __int64)RtlpHpHeapGlobals ^ v15 ^ v16 ^ *(_QWORD *)(v16 + 0x10)) == 0xA2E64EADA2E64EADuLL )
      DescriptorValidateSafe = v16 + 32 * ((unsigned __int64)(unsigned int)(a3 - v16) >> *(_BYTE *)(v15 + 8));
    else
      DescriptorValidateSafe = 0LL;
  }
  if ( !DescriptorValidateSafe )
    return -1LL;
  v18 = *(_BYTE *)(DescriptorValidateSafe + 24);
  if ( (v18 & 1) == 0 )
    return -1LL;
  if ( (v18 & 2) != 0 )
  {
    v20 = v18 & 0xC;
    if ( v20 >= 8u || (((1 << *(_BYTE *)(v15 + 8)) - 1) & a3) == 0 )
      goto LABEL_15;
    return -1LL;
  }
  DescriptorValidateSafe += -32LL * *(unsigned __int8 *)(DescriptorValidateSafe + 31);
  v19 = *(_BYTE *)(DescriptorValidateSafe + 24);
  if ( (v19 & 3) != 3 )
    return -1LL;
  v20 = v19 & 0xC;
  if ( v20 < 8u )
    return -1LL;
LABEL_15:
  v21 = *(_BYTE *)(v15 + 8);
  v22 = (*(_QWORD *)v15 & DescriptorValidateSafe)
      + ((DescriptorValidateSafe - (*(_QWORD *)v15 & DescriptorValidateSafe)) >> 5 << v21);
  if ( a3 <= v22 )
  {
    v80 = *(_WORD *)(DescriptorValidateSafe + 8) & 1;
    if ( v80 )
    {
      _InterlockedOr(v91, 0);
      v21 = *(_BYTE *)(v15 + 8);
    }
    v81 = *(unsigned __int8 *)(DescriptorValidateSafe + 31);
    LODWORD(v95) = v80;
    v40 = (v81 << v21) - *(unsigned int *)(DescriptorValidateSafe + 4);
  }
  else if ( v20 == 8 )
  {
    v23 = *(_QWORD *)(v15 + 24);
    v24 = *(_DWORD *)(v22 + 40);
    v25 = (unsigned int)v22 >> 12;
    v26 = DWORD2(RtlpHpHeapGlobals) ^ v24 ^ ((unsigned int)v22 >> 12);
    v27 = (unsigned __int16)v26;
    v28 = *(_QWORD *)(v23
                    + 8LL * RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v26 + 15) >> 4]
                    + 128);
    v29 = a3 - HIWORD(v26) - v22;
    v30 = *(_DWORD *)(v28 + 72);
    v31 = *(_BYTE *)(v28 + 76);
    if ( v30 )
    {
      v32 = (v29 * (unsigned __int64)v30) >> v31;
      v33 = v29 - v32 * v27;
    }
    else
    {
      LODWORD(v32) = v29 >> v31;
      v33 = ((1 << v31) - 1) & v29;
    }
    if ( v33 )
    {
      v40 = -1LL;
    }
    else
    {
      v34 = *(_QWORD *)(v22 + 8 * ((unsigned __int64)(unsigned int)(2 * v32) >> 6) + 48) >> ((2 * v32) & 0x3F);
      if ( (v34 & 1) != 0 )
      {
        v35 = WORD4(RtlpHpHeapGlobals) ^ (unsigned __int16)(v24 ^ v25);
        if ( (v34 & 2) != 0 )
        {
          v36 = WORD4(RtlpHpHeapGlobals) ^ (unsigned __int64)(unsigned __int16)(v24 ^ v25);
          v37 = *(unsigned __int16 *)(v36 + a3 - 2);
          v38 = *(_WORD *)(v36 + a3 - 2);
          if ( (v37 & 0x4000) != 0 )
          {
            _InterlockedOr(v91, 0);
            v38 = *(_WORD *)(v36 + a3 - 2);
          }
          v39 = (v37 >> 14) & 1;
          if ( v38 < 0 )
            --v35;
          else
            v35 -= v38 & 0x3FFF;
        }
        else
        {
          v39 = 0;
        }
        LODWORD(v95) = v39;
        v40 = v35;
      }
      else
      {
        v40 = -1LL;
      }
    }
  }
  else
  {
    v40 = RtlpHpVsChunkSize(*(_QWORD *)(v15 + 32), a3, DescriptorValidateSafe, (int *)&v95);
  }
  v6 = v99;
LABEL_28:
  v93 = v40;
  if ( v40 == -1LL )
    return -1LL;
  v41 = v40;
  v42 = v7 & 0x10000000;
  v43 = v7 & 0x10000000 | 8;
  if ( !(_DWORD)v95 )
    v43 = v7 & 0x10000000;
  v44 = v43 & 0x10000000;
  if ( (v43 & 0x10000000) != 0 )
    v41 = v40 + 16;
  if ( (v43 & 0x20000F08) != 0 )
    v41 = ((v41 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
  v45 = 1LL;
  if ( v41 )
    v45 = v41;
  if ( (_DWORD)v95 )
  {
    v46 = v40 + a3;
    if ( v44 )
      v46 += 16LL;
    v47 = 16 * *(unsigned __int8 *)(((v46 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 3);
    v45 += v47;
  }
  else
  {
    v47 = 0;
  }
  v94 = v45;
  v48 = v96;
  if ( (v7 & 0x10000000) != 0 )
    v48 = v96 + 16;
  if ( ((_DWORD)v95 != 0 ? 8 : 0) != 0 )
    v48 = ((v48 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
  v49 = 1LL;
  if ( v48 )
    v49 = v48;
  v97 = v47 + v49;
  if ( v97 < v6 )
    return -1LL;
  v50 = 0LL;
  if ( a6 )
  {
    if ( v92
      || (v50 = RtlCSparseBitmapBitmaskRead((__int64)&BaseAddress, 2 * ((a3 - qword_18016DC48) >> 20))) != 0
      && (LODWORD(v50) = v50 - 1, (_DWORD)v50 != 2) )
    {
      v99 = a1 + 192LL * (int)v50 + 256;
      v51 = RtlpHpSegDescriptorValidate(v99, a3);
      v52 = v51;
      if ( !v51 )
        goto LABEL_133;
      v53 = v99;
      v54 = *(_BYTE *)(v99 + 8);
      v55 = (*(_QWORD *)v99 & v51) + ((v51 - (*(_QWORD *)v99 & v51)) >> 5 << v54);
      if ( a3 <= v55 )
      {
        if ( (*(_WORD *)(v51 + 8) & 1) != 0 )
        {
          _InterlockedOr(v91, 0);
          v54 = *(_BYTE *)(v53 + 8);
          v84 = 1;
          v40 = v93;
        }
        else
        {
          v84 = 0;
        }
        v85 = *(unsigned __int8 *)(v52 + 31);
        v98 = v84;
        v67 = (v85 << v54) - *(unsigned int *)(v52 + 4);
      }
      else if ( (*(_BYTE *)(v51 + 24) & 0xC) == 8 )
      {
        v56 = *(_QWORD *)(v99 + 24);
        v57 = *(_DWORD *)((*(_QWORD *)v99 & v51) + ((v51 - (*(_QWORD *)v99 & v51)) >> 5 << v54) + 0x28);
        v58 = DWORD2(RtlpHpHeapGlobals) ^ v57 ^ ((unsigned int)v55 >> 12);
        LODWORD(v99) = (unsigned __int16)v58;
        v59 = *(_QWORD *)(v56
                        + 8LL * RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v58 + 15) >> 4]
                        + 128);
        v60 = a3 - HIWORD(v58) - v55;
        v61 = *(unsigned int *)(v59 + 72);
        v62 = *(_BYTE *)(v59 + 76);
        if ( (_DWORD)v61 )
        {
          v63 = (v61 * (unsigned __int64)v60) >> v62;
          v64 = v60 - v99 * v63;
        }
        else
        {
          LODWORD(v63) = v60 >> v62;
          v64 = ((1 << v62) - 1) & v60;
        }
        if ( v64 )
        {
          v67 = -1LL;
        }
        else
        {
          v65 = *(_QWORD *)(v55 + 8 * ((unsigned __int64)(unsigned int)(2 * v63) >> 6) + 48) >> ((2 * v63) & 0x3F);
          if ( (v65 & 1) != 0 )
          {
            v66 = ((unsigned int)v55 >> 12) ^ v57;
            v67 = WORD4(RtlpHpHeapGlobals) ^ (unsigned int)v66;
            if ( (v65 & 2) != 0 )
            {
              v68 = WORD4(RtlpHpHeapGlobals) ^ (unsigned __int64)v66;
              v69 = *(_WORD *)(v68 + a3 - 2);
              v70 = v69 & 0x4000;
              if ( (v69 & 0x4000) != 0 )
              {
                _InterlockedOr(v91, 0);
                v69 = *(_WORD *)(v68 + a3 - 2);
                v40 = v93;
              }
              v71 = v70 != 0;
              if ( v69 < 0 )
                v67 = (unsigned int)(v67 - 1);
              else
                v67 = (unsigned int)v67 - (v69 & 0x3FFF);
            }
            else
            {
              v71 = 0;
            }
            v98 = v71;
          }
          else
          {
            v67 = -1LL;
          }
        }
      }
      else
      {
        v67 = RtlpHpVsChunkSize(*(_QWORD *)(v99 + 32), a3, v51, &v98);
      }
    }
    else
    {
      v67 = RtlpHpLargeAllocSize(a1, a3, v7, &v98);
    }
    if ( v67 != -1 )
    {
      if ( a5 )
        *a5 = v67;
      if ( v98 )
      {
        v72 = v67 + a3;
        if ( v42 )
          v72 += 16LL;
        v50 = (v72 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v50 )
        {
          v73 = *(_WORD *)v50;
LABEL_71:
          *a6 = v73;
          goto LABEL_72;
        }
      }
      else
      {
        v50 = 0LL;
      }
LABEL_117:
      v73 = 0;
      goto LABEL_71;
    }
LABEL_133:
    v50 = -1LL;
    goto LABEL_117;
  }
  if ( a5 )
    *a5 = v40;
LABEL_72:
  if ( v40 == v6 )
  {
    v76 = a3;
LABEL_82:
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v78 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v78 = 2147353472LL;
    if ( *(_BYTE *)v78 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v76 )
      RtlpLogHeapReallocateEvent(a1, v76, a3, v93, v96, 3);
    return v76;
  }
  v98 = 0;
  if ( (v7 & 0x1000000) == 0 )
  {
    if ( *(_DWORD *)(a1 + 24) )
    {
      if ( (v50 || (v50 = RtlpHpExtrasGet(a1, a3, v7, 0LL)) != 0) && v50 != -1LL )
      {
        v87 = (*(_BYTE *)(v50 + 2) & 0xF) == 0;
        v88 = *(_BYTE *)(v50 + 2) & 0xF;
        v98 = v88;
        if ( !v87 && (int)RtlpCallInterceptRoutine(v88, a1, a3, 5, v50 + 16) < 0 )
          return -1LL;
      }
    }
  }
  v74 = v7 & 0x12000001 | 0x1000000;
  if ( v92
    || (v83 = RtlCSparseBitmapBitmaskRead((__int64)&BaseAddress, 2 * ((a3 - qword_18016DC48) >> 20))) != 0
    && (v12 = v83 - 1, (_DWORD)v83 != 3) )
  {
    v75 = RtlpHpSegReAlloc((int)a1 + 192 * v12 + 256, v74, (void *)a3);
  }
  else
  {
    v75 = RtlpHpLargeReAlloc(a1, v74, a3, &v93);
  }
  v76 = v75;
  if ( v98 )
  {
    v89 = a3;
    if ( (unsigned __int64)(v75 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      v89 = v75;
    v90 = RtlpHpExtrasGet(a1, v89, v7, 0LL);
    RtlpCallInterceptRoutine(v98, a1, v89, 6, v90 + 16);
  }
  if ( v76 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( (v7 & 2) != 0 && v96 > v40 )
      memset((void *)(v40 + v76), 0, v96 - v40);
    if ( v42 )
      *(__m128i *)(v96 + v76) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
    goto LABEL_82;
  }
  return v76;
}
