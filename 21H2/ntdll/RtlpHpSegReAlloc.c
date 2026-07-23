/*
 * XREFs of RtlpHpSegReAlloc @ 0x1800271D0
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x180023990 (RtlpHpReAllocateHeap.c)
 * Callees:
 *     RtlpHpExtrasGet @ 0x1800021A0 (RtlpHpExtrasGet.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180002B78 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeFree @ 0x180003280 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x180003404 (RtlpHpLargeAlloc.c)
 *     RtlpHpSegPageRangeShrink @ 0x1800069A0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpVsContextAllocate @ 0x180007230 (RtlpHpVsContextAllocate.c)
 *     RtlpHpLfhBucketUpdateStats @ 0x180007294 (RtlpHpLfhBucketUpdateStats.c)
 *     RtlpHpSegDescriptorValidate @ 0x180022944 (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpSegPageRangeCommit @ 0x180023180 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSizeHeap @ 0x1800243E0 (RtlpHpSizeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpSegFree @ 0x1800279F0 (RtlpHpSegFree.c)
 *     RtlpHpSegAlloc @ 0x180029B70 (RtlpHpSegAlloc.c)
 *     RtlpHpLfhSlotAllocate @ 0x18002C2B0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpExtrasSetPresent @ 0x18006B2D4 (RtlpHpExtrasSetPresent.c)
 *     RtlpHpVsChunkSetExtraPresent @ 0x18006B3B0 (RtlpHpVsChunkSetExtraPresent.c)
 *     RtlpHpVsContextGrowInPlace @ 0x180071F18 (RtlpHpVsContextGrowInPlace.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x180084FFC (RtlpHpLargeAllocSetExtraPresent.c)
 *     memmove @ 0x1800A4480 (memmove.c)
 *     memset @ 0x1800A4740 (memset.c)
 *     RtlpCallInterceptRoutine @ 0x1800F3614 (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapFreeEvent @ 0x18010A288 (RtlpLogHeapFreeEvent.c)
 *     RtlpLogHeapFailure @ 0x18010E17C (RtlpLogHeapFailure.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x18010ED88 (RtlpHpSegGetDescriptorValidateSafe.c)
 */

__int64 __fastcall RtlpHpSegReAlloc(__int64 a1, unsigned int a2, __int64 Src, __int64 a4)
{
  int v4; // r12d
  unsigned __int64 v9; // r8
  __int64 DescriptorValidateSafe; // rbx
  char v11; // al
  char v12; // cl
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rdx
  unsigned int v15; // edi
  unsigned __int8 v16; // cl
  __int64 v17; // rsi
  size_t v18; // rbx
  __int64 v19; // r13
  int v20; // edx
  __int64 v21; // r10
  __int64 v22; // r8
  unsigned __int8 v23; // al
  void *v24; // rax
  unsigned __int64 v25; // rdi
  size_t v26; // r8
  char *v27; // rdx
  unsigned __int64 v28; // rcx
  unsigned __int8 *v29; // rdx
  int v30; // eax
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 v35; // rcx
  int v36; // r8d
  int v37; // edx
  unsigned int v38; // ebx
  int v39; // eax
  __int64 result; // rax
  __int64 v41; // rbx
  char *v42; // rdx
  char *v43; // rcx
  unsigned __int8 *v44; // rdx
  __int64 v45; // rax
  int v46; // ecx
  unsigned int v47; // r8d
  char *v48; // rdx
  char *v49; // rcx
  unsigned __int8 *v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rax
  unsigned __int64 v53; // rax
  char v54; // cl
  __int64 v55; // r9
  __int64 v56; // rcx
  __int64 v57; // [rsp+30h] [rbp-48h]
  __int64 v58; // [rsp+38h] [rbp-40h]

  v4 = 0;
  if ( (RtlpHpAppCompatFlags & 1) != 0 )
  {
    DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(a1, Src);
  }
  else
  {
    v9 = Src & *(_QWORD *)a1;
    if ( (a1 ^ v9 ^ (unsigned __int64)RtlpHpHeapGlobals ^ *(_QWORD *)((Src & *(_QWORD *)a1) + 0x10)) == 0xA2E64EADA2E64EADuLL )
      DescriptorValidateSafe = v9 + 32 * ((unsigned __int64)(unsigned int)(Src - v9) >> *(_BYTE *)(a1 + 8));
    else
      DescriptorValidateSafe = 0LL;
  }
  if ( !DescriptorValidateSafe )
    return -1LL;
  v11 = *(_BYTE *)(DescriptorValidateSafe + 24);
  if ( (v11 & 1) == 0 )
    return -1LL;
  if ( (v11 & 2) == 0 )
  {
    DescriptorValidateSafe += -32LL * *(unsigned __int8 *)(DescriptorValidateSafe + 31);
    v12 = *(_BYTE *)(DescriptorValidateSafe + 24);
    if ( (v12 & 3) == 3 && (v12 & 0xCu) >= 8 )
      goto LABEL_9;
    return -1LL;
  }
  if ( (v11 & 0xCu) < 8 && (((1 << *(_BYTE *)(a1 + 8)) - 1) & (unsigned __int64)Src) != 0 )
    return -1LL;
LABEL_9:
  v13 = *(_QWORD *)(a4 + 32);
  v14 = (v13 + 4095) >> 12;
  if ( (unsigned int)((_DWORD)v14 << 12) < v13 )
    return 0LL;
  v15 = (unsigned int)(v14 + (1 << *(_BYTE *)(a1 + 9)) - 1) >> *(_BYTE *)(a1 + 9);
  v16 = *(_BYTE *)(DescriptorValidateSafe + 24) & 0xC;
  if ( v16 < 8u && v15 <= *(unsigned __int8 *)(DescriptorValidateSafe + 31) )
  {
    v47 = (unsigned __int16)~*(_WORD *)(DescriptorValidateSafe + 28);
    if ( (unsigned int)v14 <= v47
      || (int)RtlpHpSegPageRangeCommit(a1, DescriptorValidateSafe, v47, (unsigned int)v14 - v47, 0, 0LL) >= 0 )
    {
      if ( *(_DWORD *)(a4 + 16) )
      {
        v48 = (char *)(Src + *(_QWORD *)a4);
        if ( (a2 & 0x10000000) != 0 )
          v48 += 16;
        v49 = (char *)(Src + *(_QWORD *)(a4 + 24));
        v50 = (unsigned __int8 *)((unsigned __int64)(v48 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
        if ( (a2 & 0x10000000) != 0 )
          v49 += 16;
        memmove((void *)((unsigned __int64)(v49 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v50, 16 * (v50[3] + 1LL));
      }
      if ( v15 < *(unsigned __int8 *)(DescriptorValidateSafe + 31) )
        RtlpHpSegPageRangeShrink(a1, DescriptorValidateSafe, v15, a2);
      result = Src;
      *(_DWORD *)(DescriptorValidateSafe + 4) = (v15 << *(_BYTE *)(a1 + 8)) - *(_DWORD *)(a4 + 24);
      return result;
    }
    return 0LL;
  }
  if ( v16 != 12
    || *(_QWORD *)(a4 + 24) <= *(_QWORD *)a4
    || v13 > 0x20000
    || (result = RtlpHpVsContextGrowInPlace(*(PRTL_SRWLOCK *)(a1 + 32), a2), (v41 = result) == 0) )
  {
    if ( (a2 & 0x2000000) != 0 )
      return 0LL;
    v17 = *(_QWORD *)(a1 + 56);
    v18 = *(_QWORD *)(a4 + 32);
    v19 = *(_QWORD *)(a4 + 24);
    if ( v18 <= (unsigned int)*(unsigned __int16 *)(v17 + 892) - 16 )
    {
      v20 = v18 + 2;
      if ( (_DWORD)v19 == (_DWORD)v18 )
        v20 = *(_QWORD *)(a4 + 32);
      v57 = RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v20 + 15) >> 4];
      if ( (*(_QWORD *)(v17 + 8 * v57 + 960) & 1) == 0 || RtlpHpLfhBucketUpdateStats(v17 + 832, v20, 1) )
      {
        v21 = *(_QWORD *)(v17 + 8 * v57 + 960);
        v58 = ((((unsigned int)RtlpHpLfhPerfFlags >> 10) & 1) + 2LL) << 6;
        v22 = v58 - ((*(_BYTE *)(v17 + 888) - 1) & 7) + *(unsigned __int8 *)(v17 + 888) + 7LL;
        if ( *(_BYTE *)(v21 + 2) == 1 )
        {
          v23 = 0;
        }
        else
        {
          v23 = *(_BYTE *)(v58 + BYTE1(NtCurrentTeb()->HeapData) + v21);
          v22 = v58 - ((*(_BYTE *)(v17 + 888) - 1) & 7) + *(unsigned __int8 *)(v17 + 888) + 7LL;
        }
        v24 = (void *)RtlpHpLfhSlotAllocate((int)v17 + 832, v21, *(_QWORD *)(v22 + 8LL * v23 + v21), v19, a2);
        v25 = (unsigned __int64)v24;
        if ( v24 && (a2 & 2) != 0 )
          memset(v24, 0, (unsigned int)v19);
      }
      else
      {
        v25 = -1LL;
      }
      if ( v25 != -1LL )
      {
LABEL_23:
        if ( !v25 )
          return v25;
        v26 = *(_QWORD *)a4;
        if ( *(_QWORD *)a4 >= *(_QWORD *)(a4 + 24) )
          v26 = *(_QWORD *)(a4 + 24);
        memmove((void *)v25, (const void *)Src, v26);
        if ( *(_DWORD *)(a4 + 16) )
        {
          v27 = (char *)(Src + *(_QWORD *)a4);
          if ( (a2 & 0x10000000) != 0 )
            v27 += 16;
          v28 = v25 + *(_QWORD *)(a4 + 24);
          v29 = (unsigned __int8 *)((unsigned __int64)(v27 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
          if ( (a2 & 0x10000000) != 0 )
            v28 += 16LL;
          memmove((void *)((v28 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v29, 16 * (v29[3] + 1LL));
          if ( (_WORD)v25 )
          {
            v30 = 0;
          }
          else
          {
            v52 = RtlCSparseBitmapBitmaskRead((__int64)&BaseAddress, 2 * ((v25 - qword_18016DC48) >> 20));
            if ( !v52 || (v30 = v52 - 1, v30 == 2) )
            {
              RtlpHpLargeAllocSetExtraPresent(v17, v25, a2);
              goto LABEL_36;
            }
          }
          v31 = v17 + 192LL * v30;
          v32 = RtlpHpSegDescriptorValidate(v31 + 256, v25);
          v33 = *(unsigned __int8 *)(v32 + 24);
          LOBYTE(v33) = v33 & 0xC;
          if ( (unsigned __int8)v33 < 8u )
          {
            *(_WORD *)(v32 + 8) |= 1u;
          }
          else
          {
            v34 = ((v32 - (v32 & *(_QWORD *)(v31 + 256))) >> 5 << *(_BYTE *)(v31 + 264))
                + (v32 & *(_QWORD *)(v31 + 256));
            if ( (_BYTE)v33 == 8 )
            {
              v35 = WORD4(RtlpHpHeapGlobals) ^ *(unsigned __int16 *)(v34 + 40) ^ (unsigned __int64)(unsigned __int16)((unsigned int)v34 >> 12);
              *(_WORD *)(v35 + v25 - 2) |= 0x4000u;
            }
            else
            {
              RtlpHpVsChunkSetExtraPresent(*(_QWORD *)(v31 + 288), v25, v33, v34);
            }
          }
        }
LABEL_36:
        v36 = 0;
        v37 = *(_DWORD *)(v17 + 220);
        if ( v37 )
          LOBYTE(v36) = v37 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
        v38 = (a2 | *(_DWORD *)(v17 + 20)) & 0x11000000 | 1;
        if ( !v36 )
          v38 = (a2 | *(_DWORD *)(v17 + 20)) & 0x11000001;
        if ( (v38 & 0x1000000) == 0 )
        {
          if ( *(_DWORD *)(v17 + 24) )
          {
            v53 = RtlpHpExtrasGet(v17, Src, v38, 0LL);
            if ( v53 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
            {
              v54 = *(_BYTE *)(v53 + 2);
              if ( (v54 & 0xF) != 0 && (int)RtlpCallInterceptRoutine(v54 & 0xF, v17, Src, 3, v53 + 16) < 0 )
                return v25;
            }
          }
        }
        if ( (*(_DWORD *)(v17 + 20) & 0x10000000) != 0 && RtlpHpSizeHeap(v17, Src, v38) == -1 )
        {
          RtlpLogHeapFailure(9, v17, Src, 0, 0LL, 0LL);
        }
        else
        {
          if ( (_WORD)Src )
          {
            v39 = 0;
          }
          else
          {
            v51 = RtlCSparseBitmapBitmaskRead(
                    (__int64)&BaseAddress,
                    2 * ((unsigned __int64)(Src - qword_18016DC48) >> 20));
            if ( !v51 || (v39 = v51 - 1, v39 == 2) )
            {
              LOBYTE(v4) = RtlpHpLargeFree((__int128 *)v17, (PVOID)Src, v38) != 0;
              if ( RtlGetCurrentServiceSessionId() )
                v56 = (__int64)NtCurrentPeb()->SharedData + 550;
              else
                v56 = 2147353472LL;
              if ( *(_BYTE *)v56 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              {
                if ( v4 )
                  RtlpLogHeapFreeEvent(v17, Src, 3LL, v55);
              }
              return v25;
            }
          }
          RtlpHpSegFree(v17 + 192 * v39 + 256);
        }
        return v25;
      }
    }
    if ( v18 > 0x20000 )
    {
      if ( v18 <= *(unsigned int *)(v17 + 464) )
      {
        v46 = 448;
        if ( v18 <= *(unsigned int *)(v17 + 272) )
          v46 = 256;
        v25 = RtlpHpSegAlloc((int)v17 + v46, a2);
        goto LABEL_23;
      }
      v45 = (__int64)RtlpHpLargeAlloc((char *)v17, v19, v18, a2);
    }
    else
    {
      v45 = RtlpHpVsContextAllocate((_RTL_SRWLOCK *)(v17 + 640), (unsigned int)v19, (unsigned int)v18, a2);
    }
    v25 = v45;
    goto LABEL_23;
  }
  if ( *(_DWORD *)(a4 + 16) )
  {
    v42 = (char *)(Src + *(_QWORD *)a4);
    if ( (a2 & 0x10000000) != 0 )
      v42 += 16;
    v43 = (char *)(*(_QWORD *)(a4 + 24) + Src);
    v44 = (unsigned __int8 *)((unsigned __int64)(v42 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (a2 & 0x10000000) != 0 )
      v43 += 16;
    memmove((void *)((unsigned __int64)(v43 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v44, 16 * (v44[3] + 1LL));
    RtlpHpExtrasSetPresent(*(_QWORD *)(a1 + 56), v41, a2);
    return v41;
  }
  return result;
}
