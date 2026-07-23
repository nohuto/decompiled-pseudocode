/*
 * XREFs of RtlpFreeHeapInternal @ 0x180025710
 * Callers:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180024880 (RtlpHpFreeWithExceptionProtection.c)
 * Callees:
 *     RtlpProbeUserBufferSafe @ 0x180001E7C (RtlpProbeUserBufferSafe.c)
 *     RtlpHpExtrasGet @ 0x1800021A0 (RtlpHpExtrasGet.c)
 *     RtlpHpSizeHeapInternal @ 0x180002210 (RtlpHpSizeHeapInternal.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180002B78 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeFree @ 0x180003280 (RtlpHpLargeFree.c)
 *     RtlpHpSegPageRangeShrink @ 0x1800069A0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x180008110 (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpGetHeapProtection @ 0x18000EE34 (RtlpGetHeapProtection.c)
 *     RtlpFreeUserBlock @ 0x180020DDC (RtlpFreeUserBlock.c)
 *     RtlpIsSubSegmentReuseable @ 0x180023574 (RtlpIsSubSegmentReuseable.c)
 *     RtlpHpSizeHeap @ 0x1800243E0 (RtlpHpSizeHeap.c)
 *     RtlpHpStackLoggingEnabled @ 0x180024820 (RtlpHpStackLoggingEnabled.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180024FE0 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpFreeHeap @ 0x180025C00 (RtlpFreeHeap.c)
 *     RtlpHpVsContextFree @ 0x180028500 (RtlpHpVsContextFree.c)
 *     RtlNtStatusToDosError @ 0x180051950 (RtlNtStatusToDosError.c)
 *     ZwProtectVirtualMemory @ 0x18009E000 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A1210 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1800A1250 (RtlpInterlockedFlushSList.c)
 *     RtlpCallInterceptRoutine @ 0x1800F3614 (RtlpCallInterceptRoutine.c)
 *     RtlpHpStackTraceRemoveStack @ 0x1801095B8 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpLogHeapFreeEvent @ 0x18010A288 (RtlpLogHeapFreeEvent.c)
 *     RtlpGetReservedBlockSize @ 0x18010B9A0 (RtlpGetReservedBlockSize.c)
 *     RtlpValidateLFHBlock @ 0x18010BDE8 (RtlpValidateLFHBlock.c)
 *     RtlpLogHeapFailure @ 0x18010E17C (RtlpLogHeapFailure.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x18010ED88 (RtlpHpSegGetDescriptorValidateSafe.c)
 */

__int64 __fastcall RtlpFreeHeapInternal(__int64 a1, __int64 a2, int a3, __int64 *a4, _WORD *a5)
{
  int v5; // edi
  unsigned __int64 v8; // r13
  unsigned __int64 v10; // r14
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // ecx
  unsigned int v16; // ebp
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r14
  unsigned __int64 v20; // rdx
  __int64 DescriptorValidateSafe; // rbx
  char v22; // dl
  unsigned int v23; // r15d
  char v24; // dl
  unsigned __int8 v25; // dl
  char v26; // cl
  __int64 v27; // rax
  __int64 v28; // r9
  _DWORD *SharedData; // rcx
  __int64 v30; // rcx
  __int64 v32; // r8
  signed __int64 v33; // rax
  signed __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // r9
  __int64 v39; // rcx
  unsigned __int8 v40; // al
  __int16 v41; // ax
  char v42; // cl
  struct _TEB *v43; // rbx
  struct _TEB *v44; // rbx
  int v45; // edx
  __int64 v46; // rax
  unsigned __int16 v47; // dx
  int v48; // eax
  int v49; // eax
  unsigned __int16 v50; // ax
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 **v53; // rbx
  unsigned int v54; // edx
  __int64 *v55; // rax
  __int64 v56; // r10
  __int64 v57; // rdx
  __int64 v58; // r9
  __int64 v59; // rcx
  __int64 v60; // r9
  int v61; // r8d
  signed __int32 v62; // ebx
  _WORD *v63; // r8
  _QWORD *v64; // rax
  int v65; // r8d
  unsigned int v66; // edx
  int v67; // eax
  __int64 v68; // r8
  __int64 v69; // r9
  signed __int64 v70; // rdx
  _DWORD *v71; // r14
  __int64 v72; // rcx
  _DWORD *v73; // rdx
  __int64 v74; // r14
  unsigned __int16 ReservedBlockSize; // ax
  _DWORD *v76; // rcx
  ULONG HeapProtection; // eax
  __int64 v78; // r9
  unsigned __int16 *v79; // r8
  int v80; // edx
  signed __int64 v81; // rax
  __int64 v82; // rcx
  signed __int32 v83; // eax
  __int64 v84; // rax
  __int64 v85; // rcx
  signed __int32 v86; // eax
  unsigned __int16 *v87; // r9
  __int64 v88; // r8
  __int64 v89; // rax
  volatile signed __int32 *v90; // rdx
  unsigned __int16 *v91; // rcx
  __int64 v92; // rcx
  __int64 v93; // [rsp+30h] [rbp-88h]
  __int64 **v94; // [rsp+30h] [rbp-88h]
  unsigned int v95; // [rsp+38h] [rbp-80h]
  __int64 v96; // [rsp+40h] [rbp-78h] BYREF
  __int64 *v97; // [rsp+48h] [rbp-70h]
  int v98; // [rsp+50h] [rbp-68h]
  ULONG OldProtect; // [rsp+58h] [rbp-60h] BYREF
  __int64 v100; // [rsp+60h] [rbp-58h]
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-50h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp-48h] BYREF
  __int128 v103; // [rsp+80h] [rbp-38h] BYREF
  signed __int64 v104; // [rsp+C0h] [rbp+8h]
  __int64 v105; // [rsp+C0h] [rbp+8h]
  unsigned __int16 *v106; // [rsp+C0h] [rbp+8h]
  signed __int64 v107; // [rsp+C0h] [rbp+8h]

  v5 = 0;
  v8 = a2;
  v10 = 0LL;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    if ( (RtlpHpAppCompatFlags & 2) != 0 && a2 )
    {
      v93 = *(_QWORD *)(a2 - 16);
      v8 = a2 - v93;
    }
    else
    {
      v93 = 0LL;
    }
    if ( a3 )
    {
      if ( a3 == 8 )
      {
        v11 = 2;
      }
      else
      {
        v11 = a3 & 1;
        if ( (a3 & 8) != 0 )
          v11 |= 2u;
        if ( (a3 & 4) != 0 )
          v11 |= 0x80000000;
        if ( (a3 & 0x100) != 0 )
          v11 |= 0x100u;
        if ( (a3 & 0xE00) != 0 )
          v11 |= a3 & 0xE00;
        if ( (a3 & 0x10) != 0 )
          v11 |= 0x2000000u;
        if ( (a3 & 2) != 0 )
          v11 |= 0x1000000u;
      }
    }
    else
    {
      v11 = 0;
    }
    v12 = 0;
    v13 = v11 | *(_DWORD *)(a1 + 20);
    v14 = *(_DWORD *)(a1 + 220);
    v15 = v13 & 0x11000001;
    if ( v14 )
      LOBYTE(v12) = v14 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    v16 = v15 | 1;
    if ( !v12 )
      v16 = v15;
    if ( a5 )
    {
      v10 = RtlpHpExtrasGet(a1, v8, v16, a4);
      if ( v10 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
        v41 = 0;
      else
        v41 = *(_WORD *)v10;
      *a5 = v41;
    }
    else if ( a4 )
    {
      *a4 = RtlpHpSizeHeapInternal(a1, v8, v16, 0LL);
    }
    if ( (v16 & 0x1000000) == 0 )
    {
      if ( *(_DWORD *)(a1 + 24) )
      {
        if ( (v10 || (v10 = RtlpHpExtrasGet(a1, v8, v16, a4)) != 0) && v10 != -1LL )
        {
          v42 = *(_BYTE *)(v10 + 2);
          if ( (v42 & 0xF) != 0 && (int)RtlpCallInterceptRoutine(v42 & 0xF, a1, v8, 3, v10 + 16) < 0 )
            goto LABEL_105;
        }
      }
    }
    if ( (*(_DWORD *)(a1 + 20) & 0x10000000) != 0 && RtlpHpSizeHeap(a1, v8, v16) == -1 )
    {
      RtlpLogHeapFailure(9, a1, v8, 0, 0LL, 0LL);
LABEL_105:
      v23 = 0;
      goto LABEL_106;
    }
    if ( (_WORD)v8 )
    {
      v17 = 0;
    }
    else
    {
      v35 = RtlCSparseBitmapBitmaskRead((__int64)&::BaseAddress, 2 * ((v8 - qword_18016DC48) >> 20));
      if ( !v35 || (v17 = v35 - 1, v17 == 2) )
      {
        v23 = RtlpHpLargeFree((__int128 *)a1, (PVOID)v8, v16) != 0;
        if ( RtlGetCurrentServiceSessionId() )
          v37 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v37 = 2147353472LL;
        if ( *(_BYTE *)v37 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( !v23 )
            goto LABEL_106;
          RtlpLogHeapFreeEvent(a1, v8, 3LL, v36);
        }
        goto LABEL_32;
      }
    }
    v18 = 192LL * v17;
    v19 = v18 + a1 + 256;
    if ( (RtlpHpAppCompatFlags & 1) != 0 )
    {
      DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(v18 + a1 + 256, v8);
    }
    else
    {
      v20 = v8 & *(_QWORD *)v19;
      if ( ((unsigned __int64)RtlpHpHeapGlobals ^ v19 ^ v20 ^ *(_QWORD *)(v20 + 0x10)) == 0xA2E64EADA2E64EADuLL )
        DescriptorValidateSafe = v20 + 32 * ((unsigned __int64)(unsigned int)(v8 - v20) >> *(_BYTE *)(v19 + 8));
      else
        DescriptorValidateSafe = 0LL;
    }
    if ( DescriptorValidateSafe )
    {
      v22 = *(_BYTE *)(DescriptorValidateSafe + 24);
      if ( (v22 & 1) != 0 )
      {
        v23 = 1;
        if ( (v22 & 2) != 0 )
        {
          v25 = v22 & 0xC;
          if ( v25 >= 8u || (((1 << *(_BYTE *)(v19 + 8)) - 1) & v8) == 0 )
          {
LABEL_26:
            v26 = *(_BYTE *)(v19 + 8);
            v27 = DescriptorValidateSafe & *(_QWORD *)v19;
            if ( v8 <= v27 + ((DescriptorValidateSafe - v27) >> 5 << v26) )
            {
              RtlpHpSegPageRangeShrink(v19, DescriptorValidateSafe, 0, v16);
              if ( RtlGetCurrentServiceSessionId() )
                v39 = (__int64)NtCurrentPeb()->SharedData + 550;
              else
                v39 = 2147353472LL;
              if ( *(_BYTE *)v39 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
                RtlpLogHeapFreeEvent(*(_QWORD *)(v19 + 56), v8, 3LL, v38);
            }
            else
            {
              if ( v25 == 8 )
              {
                v23 = RtlpHpLfhSubsegmentFreeBlock(
                        *(_QWORD *)(v19 + 24),
                        v27 + ((DescriptorValidateSafe - v27) >> 5 << v26),
                        v8,
                        v16);
              }
              else
              {
                v23 = RtlpHpVsContextFree(*(PRTL_SRWLOCK *)(v19 + 32), (__int64)&v96);
                if ( v23 )
                {
                  v32 = *(_QWORD *)(v19 + 24);
                  if ( (unsigned int)v96 <= (unsigned int)*(unsigned __int16 *)(v32 + 60) - 16 )
                  {
                    v28 = RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v96 + 15) >> 4];
                    if ( (*(_QWORD *)(v32 + 8 * v28 + 128) & 1) != 0 )
                    {
                      do
                      {
                        v33 = *(_QWORD *)(v32 + 8 * v28 + 128);
                        v34 = v33;
                        v104 = v33;
                        if ( (v33 & 1) == 0 )
                          break;
                        if ( WORD1(v33) > 1u )
                        {
                          WORD1(v104) = WORD1(*(_QWORD *)(v32 + 8 * v28 + 128)) - 1;
                          v34 = v104;
                        }
                      }
                      while ( v33 != _InterlockedCompareExchange64(
                                       (volatile signed __int64 *)(v32 + 8 * v28 + 128),
                                       v34,
                                       v33) );
                    }
                  }
                }
              }
              SharedData = NtCurrentPeb()->SharedData;
              if ( SharedData && *SharedData )
                v30 = (__int64)NtCurrentPeb()->SharedData + 550;
              else
                v30 = 2147353472LL;
              if ( *(_BYTE *)v30 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              {
                if ( !v23 )
                  goto LABEL_106;
                LOBYTE(v5) = (*(_BYTE *)(DescriptorValidateSafe + 24) & 0xC) != 8;
                RtlpLogHeapFreeEvent(*(_QWORD *)(v19 + 56), v8, (unsigned int)(v5 + 2), v28);
              }
            }
            goto LABEL_32;
          }
        }
        else
        {
          DescriptorValidateSafe += -32LL * *(unsigned __int8 *)(DescriptorValidateSafe + 31);
          v24 = *(_BYTE *)(DescriptorValidateSafe + 24);
          if ( (v24 & 3) == 3 )
          {
            v25 = v24 & 0xC;
            if ( v25 >= 8u )
              goto LABEL_26;
          }
        }
      }
    }
    RtlpLogHeapFailure(9, *(_QWORD *)(v19 + 56), v8, 0, 0LL, 0LL);
    v23 = 0;
LABEL_32:
    if ( v23 )
    {
      if ( a4 )
        *a4 -= v93;
      if ( (dword_18016D578 & 1) != 0 && (dword_18016D578 & 2) != 0 )
      {
        if ( NtCurrentPeb()->ProcessHeap )
        {
          v103 = RtlpHpEnvHandle;
          if ( a1 != *(_QWORD *)RtlpHpMetadataHeapCtxGet(&v103) )
            goto LABEL_228;
        }
      }
      return v23;
    }
LABEL_106:
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v43 = NtCurrentTeb();
    v43->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return v23;
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
  {
LABEL_80:
    v40 = RtlpFreeHeap(a1);
    v23 = v40;
    if ( v40 )
      goto LABEL_81;
    return v23;
  }
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
  {
    v10 = (unsigned __int64)RtlpProbeUserBufferSafe(a1, a2);
  }
  else if ( (a2 & 0xF) != 0 )
  {
    RtlpLogHeapFailure(9, a1, a2, 0, 0LL, 0LL);
  }
  else
  {
    v10 = a2 - 16;
    _m_prefetchw((const void *)(a2 - 16));
    if ( *(_BYTE *)(a2 - 16 + 15) == 5 )
      v10 -= 16LL * *(unsigned __int8 *)(v10 + 14);
    if ( (*(_BYTE *)(v10 + 15) & 0x3F) == 0 )
    {
      RtlpLogHeapFailure(8, a1, v10, 0, 0LL, 0LL);
      v10 = 0LL;
    }
  }
  if ( !v10 )
    goto LABEL_126;
  if ( *(_BYTE *)(v8 - 1) == 5 )
  {
    if ( *(char *)(v10 + 15) >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v45 = *(_DWORD *)(v10 + 8) ^ *(_DWORD *)(a1 + 136);
        if ( HIBYTE(v45) != ((unsigned __int8)v45 ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)(v10 + 8) ^ *(_WORD *)(a1 + 136)) >> 8) ^ BYTE2(v45))) )
          goto LABEL_151;
      }
    }
    else if ( !(unsigned __int8)RtlpValidateLFHBlock(a1, v10) )
    {
LABEL_151:
      RtlpLogHeapFailure(3, a1, v10, v8, 0LL, 0LL);
      goto LABEL_126;
    }
    if ( *(char *)(v10 + 15) >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v48 = *(_DWORD *)(v10 + 8);
        v98 = v48;
        if ( (v48 & *(_DWORD *)(a1 + 124)) != 0 )
          v98 = *(_DWORD *)(a1 + 136) ^ v48;
        v47 = v98;
      }
      else
      {
        v47 = *(_WORD *)(v10 + 8);
      }
    }
    else
    {
      if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v10 + 8) ^ a1 ^ (v10 >> 4)) )
        v46 = 0LL;
      else
        v46 = *(_QWORD *)(v10
                        - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v10 + 8) ^ (unsigned int)a1 ^ (unsigned int)(v10 >> 4)) >> 12));
      v47 = *(_WORD *)(v46 + 36);
    }
    if ( *(_BYTE *)(v10 + 15) == 4 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v49 = *(_DWORD *)(v10 + 8);
        v98 = v49;
        if ( (v49 & *(_DWORD *)(a1 + 124)) != 0 )
          v98 = *(_DWORD *)(a1 + 136) ^ v49;
        v50 = v98;
      }
      else
      {
        v50 = *(_WORD *)(v10 + 8);
      }
      v51 = v47 + *(_QWORD *)(v10 - 16) - v50;
    }
    else
    {
      v51 = 16LL * v47;
    }
    if ( v51 + v10 < v8 )
      goto LABEL_151;
    if ( (a3 & 0x3C000102) != 0 )
      goto LABEL_79;
    v52 = *(_BYTE *)(v8 - 1) == 5 ? v8 - 16LL * *(unsigned __int8 *)(v8 - 16 + 14) : 0LL;
    if ( (int)RtlpCallInterceptRoutine(*(_DWORD *)(v8 - 8), a1, v8, 3, v52) >= 0 )
      goto LABEL_79;
LABEL_126:
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v44 = NtCurrentTeb();
    v44->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return 0;
  }
LABEL_79:
  if ( *(char *)(v10 + 15) >= 0 )
    goto LABEL_80;
  v23 = 1;
  if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v10 + 8) ^ (v10 >> 4))
    || (v53 = *(__int64 ***)(v10
                           - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v10 + 8) ^ (unsigned int)(v10 >> 4)) >> 12)),
        (v94 = v53) == 0LL) )
  {
    LODWORD(v57) = a1;
    goto LABEL_226;
  }
  _m_prefetchw(v53);
  v54 = (unsigned __int16)(*(_DWORD *)(v10 + 12) >> 8);
  v55 = *v53;
  v97 = v53[1];
  v95 = v54;
  v56 = *(_QWORD *)(*v55 + 24);
  LODWORD(v55) = v56 ^ RtlpLFHKey ^ *((_DWORD *)v97 + 6);
  v100 = v56;
  if ( (__int64 *)((char *)v97
                 + v54 * (((unsigned int)v97 ^ (unsigned int)v55) >> 16)
                 + (unsigned __int16)((unsigned __int16)v97 ^ (unsigned __int16)v55)) != (__int64 *)v10 )
  {
    v57 = *(_QWORD *)(v56 + 24);
LABEL_226:
    RtlpLogHeapFailure(3, v57, v10, 0, 0LL, 0LL);
    goto LABEL_81;
  }
  if ( RtlGetCurrentServiceSessionId() )
    v59 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v59 = 2147353472LL;
  if ( *(_BYTE *)v59 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapFreeEvent(*(_QWORD *)(v100 + 24), v10 + 16, 2LL, v58);
  v60 = 0LL;
  v61 = 0;
  if ( MEMORY[0x7FFE036A] > 1u )
    v60 = 100LL;
  while ( 1 )
  {
    v62 = *((_DWORD *)v53 + 8);
    if ( (v62 & 0x80000000) == 0
      && v62 == _InterlockedCompareExchange((volatile signed __int32 *)v94 + 8, v62 | 0x80000000, v62) )
    {
      break;
    }
    if ( ++v61 > (unsigned int)v60 )
    {
      v62 = -1;
      break;
    }
    v53 = v94;
  }
  *(_BYTE *)(v10 + 15) = 0x80;
  v63 = v94 + 2;
  if ( v62 == -1 )
  {
    RtlpInterlockedPushEntrySList(v63, v10 + 16, v63, v60);
    goto LABEL_81;
  }
  _bittestandreset64((signed __int64 *)v97[5], v95);
  if ( *v63 )
  {
    v64 = (_QWORD *)RtlpInterlockedFlushSList(v94 + 2, v94);
    v65 = 0;
    if ( v64 )
    {
      do
      {
        v66 = *((_DWORD *)v64 - 1);
        ++v65;
        v64 = (_QWORD *)*v64;
        v66 >>= 8;
        v95 = (unsigned __int16)v66;
        _bittestandreset64((signed __int64 *)v97[5], (unsigned __int16)v66);
      }
      while ( v64 );
      v23 = 1;
    }
  }
  else
  {
    v65 = 0;
  }
  v67 = (v95 << 16) | (v65 + 1 + (unsigned __int16)v62);
  v68 = (__int64)*v94;
  if ( (_WORD)v67 != *((_WORD *)v94 + 20)
    || (v69 = *(unsigned int *)(v68 + 168), v70 = *(unsigned int *)(*(_QWORD *)v68 + 32LL), *(_DWORD *)(v68 + 164) == 1)
    && (unsigned int)v70 >= (unsigned int)v69
    && (v70 = (unsigned int)(v70 - v69), (unsigned int)v70 < *(_DWORD *)(*(_QWORD *)v68 + 36LL)) )
  {
    *((_DWORD *)v94 + 8) = v67;
    if ( (*((_DWORD *)v94 + 11) & 2) != 0 || !RtlpIsSubSegmentReuseable(v68, (__int64)v94) )
      goto LABEL_81;
    do
    {
      v86 = *((_DWORD *)v94 + 11);
      if ( !v86 || (v86 & 2) != 0 )
        goto LABEL_81;
    }
    while ( v86 != _InterlockedCompareExchange((volatile signed __int32 *)v94 + 11, v86 | 2, v86) );
    v87 = (unsigned __int16 *)*v94;
    v88 = 0LL;
    while ( 1 )
    {
      v89 = ((_BYTE)v88 + (unsigned __int8)v87[87]) & 0xF;
      v90 = *(volatile signed __int32 **)&v87[4 * v89 + 8];
      v91 = &v87[4 * v89];
      if ( v90 )
      {
        if ( (v90[11] & 1) == 0
          && v90 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)v91 + 2,
                                                 (signed __int64)v94,
                                                 (signed __int64)v90) )
        {
          _m_prefetchw((const void *)(v90 + 11));
          if ( _InterlockedAnd(v90 + 11, 0xFFFFFFFD) == 2 )
          {
            v92 = **(_QWORD **)v90;
            *(_QWORD *)v90 = 0LL;
            RtlpInterlockedPushEntrySList(v92, v90 + 12, v88, v87);
          }
          goto LABEL_81;
        }
      }
      else if ( !_InterlockedCompareExchange64((volatile signed __int64 *)v91 + 2, (signed __int64)v94, 0LL) )
      {
        goto LABEL_81;
      }
      v88 = (unsigned int)(v88 + 1);
      if ( (unsigned int)v88 >= 0x10 )
      {
        RtlpInterlockedPushEntrySList(
          *(_QWORD *)(*(_QWORD *)(**v94 + 24) + 8LL * *((unsigned __int16 *)*v94 + 86) + 1192) + 144LL,
          v94 + 6,
          v88,
          v87);
        goto LABEL_81;
      }
    }
  }
  v105 = (__int64)*v94;
  v71 = (_DWORD *)_InterlockedExchange64(*v94 + 1, 0LL);
  if ( !v71 )
    goto LABEL_192;
  _m_prefetchw(v71 + 11);
  if ( _InterlockedAnd(v71 + 11, 0xFFFFFFF9) == 6 )
  {
    v72 = **(_QWORD **)v71;
    *(_QWORD *)v71 = 0LL;
LABEL_190:
    v73 = v71 + 12;
LABEL_191:
    RtlpInterlockedPushEntrySList(v72, v73, v68, v69);
    goto LABEL_192;
  }
  if ( !RtlpIsSubSegmentReuseable(v105, (__int64)v71) )
    goto LABEL_192;
  do
  {
    v83 = v71[11];
    if ( !v83 || (v83 & 2) != 0 )
      goto LABEL_192;
  }
  while ( v83 != _InterlockedCompareExchange(v71 + 11, v83 | 2, v83) );
  v69 = *(_QWORD *)v71;
  v68 = 0LL;
  while ( 1 )
  {
    v84 = ((_BYTE)v68 + (unsigned __int8)*(_WORD *)(v69 + 174)) & 0xF;
    v70 = *(_QWORD *)(v69 + 8 * v84 + 16);
    v85 = v69 + 8 * v84;
    if ( !v70 )
    {
      if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v85 + 16), (signed __int64)v71, 0LL) )
        goto LABEL_192;
      goto LABEL_205;
    }
    if ( (*(_DWORD *)(v70 + 44) & 1) == 0
      && v70 == _InterlockedCompareExchange64((volatile signed __int64 *)(v85 + 16), (signed __int64)v71, v70) )
    {
      break;
    }
LABEL_205:
    v68 = (unsigned int)(v68 + 1);
    if ( (unsigned int)v68 >= 0x10 )
    {
      v72 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v71 + 24LL) + 8LL * *(unsigned __int16 *)(*(_QWORD *)v71 + 172LL) + 1192)
          + 144LL;
      goto LABEL_190;
    }
  }
  _m_prefetchw((const void *)(v70 + 44));
  if ( _InterlockedAnd((volatile signed __int32 *)(v70 + 44), 0xFFFFFFFD) == 2 )
  {
    v72 = **(_QWORD **)v70;
    *(_QWORD *)v70 = 0LL;
    v73 = (_DWORD *)(v70 + 48);
    goto LABEL_191;
  }
LABEL_192:
  v74 = *(_QWORD *)(*(_QWORD *)v105 + 24LL);
  v106 = (unsigned __int16 *)*v94;
  if ( (*((_BYTE *)v94 + 38) & 3) != 0 )
  {
    BaseAddress = (PVOID)(((unsigned __int64)v94[1] + 4151) & 0xFFFFFFFFFFFFF000uLL);
    ReservedBlockSize = RtlpGetReservedBlockSize(v94, v70, v68, v69);
    v76 = *(_DWORD **)(v74 + 24);
    RegionSize = 16 * ReservedBlockSize * (unsigned __int64)*((unsigned __int16 *)v94 + 20);
    HeapProtection = RtlpGetHeapProtection(v76, 1);
    ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, HeapProtection, &OldProtect);
  }
  *((_DWORD *)v94[1] + 5) = 0;
  RtlpFreeUserBlock(v74, v94[1], v68, v69);
  v79 = v106;
  v80 = -*((unsigned __int16 *)v94 + 20);
  do
  {
    v81 = *((_QWORD *)v79 + 20);
    LODWORD(v107) = v81 + v80;
    HIDWORD(v107) = HIDWORD(v81) - 1;
  }
  while ( v81 != _InterlockedCompareExchange64((volatile signed __int64 *)v79 + 20, v107, v81) );
  v94[1] = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)(v74 + 60));
  *((_DWORD *)v94 + 8) = 0;
  _m_prefetchw((char *)v94 + 44);
  if ( _InterlockedAnd((volatile signed __int32 *)v94 + 11, 0xFFFFFFFE) == 1 )
  {
    v82 = **v94;
    *v94 = 0LL;
    RtlpInterlockedPushEntrySList(v82, v94 + 6, v79, v78);
  }
LABEL_81:
  if ( a5 )
    *a5 = 0;
  if ( a4 )
    *a4 = 0LL;
  if ( RtlpHpStackLoggingEnabled() && (a3 & 0x10000000) == 0 )
LABEL_228:
    RtlpHpStackTraceRemoveStack(a1, v8);
  return v23;
}
