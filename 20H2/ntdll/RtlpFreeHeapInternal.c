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
 *     RtlNtStatusToDosError @ 0x180050840 (RtlNtStatusToDosError.c)
 *     ZwProtectVirtualMemory @ 0x18009DAB0 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A0C80 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1800A0CC0 (RtlpInterlockedFlushSList.c)
 *     RtlpCallInterceptRoutine @ 0x1800F37C4 (RtlpCallInterceptRoutine.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180109758 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpLogHeapFreeEvent @ 0x18010A428 (RtlpLogHeapFreeEvent.c)
 *     RtlpGetReservedBlockSize @ 0x18010BB40 (RtlpGetReservedBlockSize.c)
 *     RtlpValidateLFHBlock @ 0x18010BF88 (RtlpValidateLFHBlock.c)
 *     RtlpLogHeapFailure @ 0x18010E31C (RtlpLogHeapFailure.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x18010EF28 (RtlpHpSegGetDescriptorValidateSafe.c)
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
  bool v28; // zf
  __int64 v29; // rdx
  __int64 v30; // r9
  _DWORD *SharedData; // rcx
  __int64 v32; // rcx
  __int64 v34; // r8
  signed __int64 v35; // rax
  signed __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // r9
  __int64 v39; // rcx
  __int64 v40; // r9
  __int64 v41; // rcx
  unsigned __int8 v42; // al
  __int16 v43; // ax
  char v44; // cl
  struct _TEB *v45; // rbx
  struct _TEB *v46; // rbx
  int v47; // edx
  __int64 v48; // rax
  unsigned __int16 v49; // dx
  int v50; // eax
  int v51; // eax
  unsigned __int16 v52; // ax
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 **v55; // rbx
  unsigned int v56; // edx
  __int64 *v57; // rax
  __int64 v58; // r10
  __int64 v59; // rdx
  __int64 v60; // r9
  __int64 v61; // rcx
  unsigned int v62; // r9d
  int v63; // r8d
  signed __int32 v64; // ebx
  _WORD *v65; // r8
  _QWORD *v66; // rax
  int v67; // r8d
  unsigned int v68; // edx
  int v69; // eax
  __int64 v70; // r8
  _QWORD *v71; // r9
  signed __int64 v72; // rdx
  _DWORD *v73; // r14
  __int64 v74; // rcx
  _DWORD *v75; // rdx
  __int64 v76; // r14
  unsigned __int16 ReservedBlockSize; // ax
  __int64 v78; // rcx
  __int64 v79; // r8
  unsigned int HeapProtection; // eax
  unsigned __int16 *v81; // r8
  int v82; // edx
  signed __int64 v83; // rax
  __int64 v84; // rcx
  signed __int32 v85; // eax
  __int64 v86; // rax
  _QWORD *v87; // rcx
  signed __int32 v88; // eax
  unsigned __int16 *v89; // r9
  int v90; // r8d
  __int64 v91; // rax
  volatile signed __int32 *v92; // rdx
  unsigned __int16 *v93; // rcx
  __int64 v94; // rcx
  __int64 v95; // [rsp+30h] [rbp-88h]
  __int64 **v96; // [rsp+30h] [rbp-88h]
  unsigned int v97; // [rsp+38h] [rbp-80h]
  unsigned int v98; // [rsp+40h] [rbp-78h] BYREF
  __int64 *v99; // [rsp+48h] [rbp-70h]
  int v100; // [rsp+50h] [rbp-68h]
  _BYTE v101[8]; // [rsp+58h] [rbp-60h] BYREF
  __int64 v102; // [rsp+60h] [rbp-58h]
  unsigned __int64 v103; // [rsp+68h] [rbp-50h] BYREF
  unsigned __int64 v104; // [rsp+70h] [rbp-48h] BYREF
  __int128 v105; // [rsp+80h] [rbp-38h] BYREF
  signed __int64 v106; // [rsp+C0h] [rbp+8h]
  __int64 v107; // [rsp+C0h] [rbp+8h]
  unsigned __int16 *v108; // [rsp+C0h] [rbp+8h]
  signed __int64 v109; // [rsp+C0h] [rbp+8h]

  v5 = 0;
  v8 = a2;
  v10 = 0LL;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    if ( (RtlpHpAppCompatFlags & 2) != 0 && a2 )
    {
      v95 = *(_QWORD *)(a2 - 16);
      v8 = a2 - v95;
    }
    else
    {
      v95 = 0LL;
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
        v43 = 0;
      else
        v43 = *(_WORD *)v10;
      *a5 = v43;
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
          v44 = *(_BYTE *)(v10 + 2);
          if ( (v44 & 0xF) != 0 && (int)RtlpCallInterceptRoutine(v44 & 0xF, a1, v8, 3, v10 + 16) < 0 )
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
      v37 = RtlCSparseBitmapBitmaskRead((__int64)&unk_18016DC50, 2 * ((v8 - qword_18016DC48) >> 20));
      if ( !v37 || (v17 = v37 - 1, v17 == 2) )
      {
        v23 = RtlpHpLargeFree((__int128 *)a1, v8, v16) != 0;
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v39 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v39 = 2147353472LL;
        if ( *(_BYTE *)v39 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( !v23 )
            goto LABEL_106;
          RtlpLogHeapFreeEvent(a1, v8, 3LL, v38);
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
              if ( (unsigned int)RtlGetCurrentServiceSessionId() )
                v41 = (__int64)NtCurrentPeb()->SharedData + 550;
              else
                v41 = 2147353472LL;
              if ( *(_BYTE *)v41 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
                RtlpLogHeapFreeEvent(*(_QWORD *)(v19 + 56), v8, 3LL, v40);
            }
            else
            {
              v28 = v25 == 8;
              v29 = v27 + ((DescriptorValidateSafe - v27) >> 5 << v26);
              if ( v28 )
              {
                v23 = RtlpHpLfhSubsegmentFreeBlock(*(_QWORD *)(v19 + 24), v29, v8, v16);
              }
              else
              {
                v23 = RtlpHpVsContextFree(*(_QWORD *)(v19 + 32), v29, v8, v16, (__int64)&v98);
                if ( v23 )
                {
                  v34 = *(_QWORD *)(v19 + 24);
                  if ( v98 <= (unsigned int)*(unsigned __int16 *)(v34 + 60) - 16 )
                  {
                    v30 = RtlpLfhBucketIndexMap[(unsigned __int64)(v98 + 15) >> 4];
                    if ( (*(_QWORD *)(v34 + 8 * v30 + 128) & 1) != 0 )
                    {
                      do
                      {
                        v35 = *(_QWORD *)(v34 + 8 * v30 + 128);
                        v36 = v35;
                        v106 = v35;
                        if ( (v35 & 1) == 0 )
                          break;
                        if ( WORD1(v35) > 1u )
                        {
                          WORD1(v106) = WORD1(*(_QWORD *)(v34 + 8 * v30 + 128)) - 1;
                          v36 = v106;
                        }
                      }
                      while ( v35 != _InterlockedCompareExchange64(
                                       (volatile signed __int64 *)(v34 + 8 * v30 + 128),
                                       v36,
                                       v35) );
                    }
                  }
                }
              }
              SharedData = NtCurrentPeb()->SharedData;
              if ( SharedData && *SharedData )
                v32 = (__int64)NtCurrentPeb()->SharedData + 550;
              else
                v32 = 2147353472LL;
              if ( *(_BYTE *)v32 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              {
                if ( !v23 )
                  goto LABEL_106;
                LOBYTE(v5) = (*(_BYTE *)(DescriptorValidateSafe + 24) & 0xC) != 8;
                RtlpLogHeapFreeEvent(*(_QWORD *)(v19 + 56), v8, (unsigned int)(v5 + 2), v30);
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
        *a4 -= v95;
      if ( (dword_18016D588 & 1) != 0 && (dword_18016D588 & 2) != 0 )
      {
        if ( NtCurrentPeb()->ProcessHeap )
        {
          v105 = RtlpHpEnvHandle;
          if ( a1 != *(_QWORD *)RtlpHpMetadataHeapCtxGet(&v105) )
            goto LABEL_228;
        }
      }
      return v23;
    }
LABEL_106:
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v45 = NtCurrentTeb();
    v45->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return v23;
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
  {
LABEL_80:
    v42 = RtlpFreeHeap(a1, a3 | 2u, v10, v8);
    v23 = v42;
    if ( v42 )
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
        v47 = *(_DWORD *)(v10 + 8) ^ *(_DWORD *)(a1 + 136);
        if ( HIBYTE(v47) != ((unsigned __int8)v47 ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)(v10 + 8) ^ *(_WORD *)(a1 + 136)) >> 8) ^ BYTE2(v47))) )
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
        v50 = *(_DWORD *)(v10 + 8);
        v100 = v50;
        if ( (v50 & *(_DWORD *)(a1 + 124)) != 0 )
          v100 = *(_DWORD *)(a1 + 136) ^ v50;
        v49 = v100;
      }
      else
      {
        v49 = *(_WORD *)(v10 + 8);
      }
    }
    else
    {
      if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v10 + 8) ^ a1 ^ (v10 >> 4)) )
        v48 = 0LL;
      else
        v48 = *(_QWORD *)(v10
                        - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v10 + 8) ^ (unsigned int)a1 ^ (unsigned int)(v10 >> 4)) >> 12));
      v49 = *(_WORD *)(v48 + 36);
    }
    if ( *(_BYTE *)(v10 + 15) == 4 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v51 = *(_DWORD *)(v10 + 8);
        v100 = v51;
        if ( (v51 & *(_DWORD *)(a1 + 124)) != 0 )
          v100 = *(_DWORD *)(a1 + 136) ^ v51;
        v52 = v100;
      }
      else
      {
        v52 = *(_WORD *)(v10 + 8);
      }
      v53 = v49 + *(_QWORD *)(v10 - 16) - v52;
    }
    else
    {
      v53 = 16LL * v49;
    }
    if ( v53 + v10 < v8 )
      goto LABEL_151;
    if ( (a3 & 0x3C000102) != 0 )
      goto LABEL_79;
    v54 = *(_BYTE *)(v8 - 1) == 5 ? v8 - 16LL * *(unsigned __int8 *)(v8 - 16 + 14) : 0LL;
    if ( (int)RtlpCallInterceptRoutine(*(_DWORD *)(v8 - 8), a1, v8, 3, v54) >= 0 )
      goto LABEL_79;
LABEL_126:
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v46 = NtCurrentTeb();
    v46->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return 0;
  }
LABEL_79:
  if ( *(char *)(v10 + 15) >= 0 )
    goto LABEL_80;
  v23 = 1;
  if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v10 + 8) ^ (v10 >> 4))
    || (v55 = *(__int64 ***)(v10
                           - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v10 + 8) ^ (unsigned int)(v10 >> 4)) >> 12)),
        (v96 = v55) == 0LL) )
  {
    LODWORD(v59) = a1;
    goto LABEL_226;
  }
  _m_prefetchw(v55);
  v56 = (unsigned __int16)(*(_DWORD *)(v10 + 12) >> 8);
  v57 = *v55;
  v99 = v55[1];
  v97 = v56;
  v58 = *(_QWORD *)(*v57 + 24);
  LODWORD(v57) = v58 ^ RtlpLFHKey ^ *((_DWORD *)v99 + 6);
  v102 = v58;
  if ( (__int64 *)((char *)v99
                 + v56 * (((unsigned int)v99 ^ (unsigned int)v57) >> 16)
                 + (unsigned __int16)((unsigned __int16)v99 ^ (unsigned __int16)v57)) != (__int64 *)v10 )
  {
    v59 = *(_QWORD *)(v58 + 24);
LABEL_226:
    RtlpLogHeapFailure(3, v59, v10, 0, 0LL, 0LL);
    goto LABEL_81;
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v61 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v61 = 2147353472LL;
  if ( *(_BYTE *)v61 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapFreeEvent(*(_QWORD *)(v102 + 24), v10 + 16, 2LL, v60);
  v62 = 0;
  v63 = 0;
  if ( MEMORY[0x7FFE036A] > 1u )
    v62 = 100;
  while ( 1 )
  {
    v64 = *((_DWORD *)v55 + 8);
    if ( (v64 & 0x80000000) == 0
      && v64 == _InterlockedCompareExchange((volatile signed __int32 *)v96 + 8, v64 | 0x80000000, v64) )
    {
      break;
    }
    if ( ++v63 > v62 )
    {
      v64 = -1;
      break;
    }
    v55 = v96;
  }
  *(_BYTE *)(v10 + 15) = 0x80;
  v65 = v96 + 2;
  if ( v64 == -1 )
  {
    RtlpInterlockedPushEntrySList(v65, v10 + 16);
    goto LABEL_81;
  }
  _bittestandreset64((signed __int64 *)v99[5], v97);
  if ( *v65 )
  {
    v66 = (_QWORD *)RtlpInterlockedFlushSList(v96 + 2, v96);
    v67 = 0;
    if ( v66 )
    {
      do
      {
        v68 = *((_DWORD *)v66 - 1);
        ++v67;
        v66 = (_QWORD *)*v66;
        v68 >>= 8;
        v97 = (unsigned __int16)v68;
        _bittestandreset64((signed __int64 *)v99[5], (unsigned __int16)v68);
      }
      while ( v66 );
      v23 = 1;
    }
  }
  else
  {
    v67 = 0;
  }
  v69 = (v97 << 16) | (v67 + 1 + (unsigned __int16)v64);
  v70 = (__int64)*v96;
  if ( (_WORD)v69 != *((_WORD *)v96 + 20)
    || (v71 = (_QWORD *)*(unsigned int *)(v70 + 168),
        v72 = *(unsigned int *)(*(_QWORD *)v70 + 32LL),
        *(_DWORD *)(v70 + 164) == 1)
    && (unsigned int)v72 >= (unsigned int)v71
    && (v72 = (unsigned int)(v72 - (_DWORD)v71), (unsigned int)v72 < *(_DWORD *)(*(_QWORD *)v70 + 36LL)) )
  {
    *((_DWORD *)v96 + 8) = v69;
    if ( (*((_DWORD *)v96 + 11) & 2) != 0 || !RtlpIsSubSegmentReuseable(v70, (__int64)v96) )
      goto LABEL_81;
    do
    {
      v88 = *((_DWORD *)v96 + 11);
      if ( !v88 || (v88 & 2) != 0 )
        goto LABEL_81;
    }
    while ( v88 != _InterlockedCompareExchange((volatile signed __int32 *)v96 + 11, v88 | 2, v88) );
    v89 = (unsigned __int16 *)*v96;
    v90 = 0;
    while ( 1 )
    {
      v91 = ((_BYTE)v90 + (unsigned __int8)v89[87]) & 0xF;
      v92 = *(volatile signed __int32 **)&v89[4 * v91 + 8];
      v93 = &v89[4 * v91];
      if ( v92 )
      {
        if ( (v92[11] & 1) == 0
          && v92 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)v93 + 2,
                                                 (signed __int64)v96,
                                                 (signed __int64)v92) )
        {
          _m_prefetchw((const void *)(v92 + 11));
          if ( _InterlockedAnd(v92 + 11, 0xFFFFFFFD) == 2 )
          {
            v94 = **(_QWORD **)v92;
            *(_QWORD *)v92 = 0LL;
            RtlpInterlockedPushEntrySList(v94, v92 + 12);
          }
          goto LABEL_81;
        }
      }
      else if ( !_InterlockedCompareExchange64((volatile signed __int64 *)v93 + 2, (signed __int64)v96, 0LL) )
      {
        goto LABEL_81;
      }
      if ( (unsigned int)++v90 >= 0x10 )
      {
        RtlpInterlockedPushEntrySList(
          *(_QWORD *)(*(_QWORD *)(**v96 + 24) + 8LL * *((unsigned __int16 *)*v96 + 86) + 1192) + 144LL,
          v96 + 6);
        goto LABEL_81;
      }
    }
  }
  v107 = (__int64)*v96;
  v73 = (_DWORD *)_InterlockedExchange64(*v96 + 1, 0LL);
  if ( !v73 )
    goto LABEL_192;
  _m_prefetchw(v73 + 11);
  if ( _InterlockedAnd(v73 + 11, 0xFFFFFFF9) == 6 )
  {
    v74 = **(_QWORD **)v73;
    *(_QWORD *)v73 = 0LL;
LABEL_190:
    v75 = v73 + 12;
LABEL_191:
    RtlpInterlockedPushEntrySList(v74, v75);
    goto LABEL_192;
  }
  if ( !RtlpIsSubSegmentReuseable(v107, (__int64)v73) )
    goto LABEL_192;
  do
  {
    v85 = v73[11];
    if ( !v85 || (v85 & 2) != 0 )
      goto LABEL_192;
  }
  while ( v85 != _InterlockedCompareExchange(v73 + 11, v85 | 2, v85) );
  v71 = *(_QWORD **)v73;
  v70 = 0LL;
  while ( 1 )
  {
    v86 = ((_BYTE)v70 + (unsigned __int8)*((_WORD *)v71 + 87)) & 0xF;
    v72 = v71[v86 + 2];
    v87 = &v71[v86];
    if ( !v72 )
    {
      if ( !_InterlockedCompareExchange64(v87 + 2, (signed __int64)v73, 0LL) )
        goto LABEL_192;
      goto LABEL_205;
    }
    if ( (*(_DWORD *)(v72 + 44) & 1) == 0 && v72 == _InterlockedCompareExchange64(v87 + 2, (signed __int64)v73, v72) )
      break;
LABEL_205:
    v70 = (unsigned int)(v70 + 1);
    if ( (unsigned int)v70 >= 0x10 )
    {
      v74 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v73 + 24LL) + 8LL * *(unsigned __int16 *)(*(_QWORD *)v73 + 172LL) + 1192)
          + 144LL;
      goto LABEL_190;
    }
  }
  _m_prefetchw((const void *)(v72 + 44));
  if ( _InterlockedAnd((volatile signed __int32 *)(v72 + 44), 0xFFFFFFFD) == 2 )
  {
    v74 = **(_QWORD **)v72;
    *(_QWORD *)v72 = 0LL;
    v75 = (_DWORD *)(v72 + 48);
    goto LABEL_191;
  }
LABEL_192:
  v76 = *(_QWORD *)(*(_QWORD *)v107 + 24LL);
  v108 = (unsigned __int16 *)*v96;
  if ( (*((_BYTE *)v96 + 38) & 3) != 0 )
  {
    v104 = ((unsigned __int64)v96[1] + 4151) & 0xFFFFFFFFFFFFF000uLL;
    ReservedBlockSize = RtlpGetReservedBlockSize(v96, v72, v70, v71);
    v78 = *(_QWORD *)(v76 + 24);
    v103 = 16 * ReservedBlockSize * (unsigned __int64)*((unsigned __int16 *)v96 + 20);
    HeapProtection = RtlpGetHeapProtection(v78, 1, v79);
    ZwProtectVirtualMemory(-1LL, &v104, &v103, HeapProtection, v101);
  }
  *((_DWORD *)v96[1] + 5) = 0;
  RtlpFreeUserBlock(v76, (__int64)v96[1], v70);
  v81 = v108;
  v82 = -*((unsigned __int16 *)v96 + 20);
  do
  {
    v83 = *((_QWORD *)v81 + 20);
    LODWORD(v109) = v83 + v82;
    HIDWORD(v109) = HIDWORD(v83) - 1;
  }
  while ( v83 != _InterlockedCompareExchange64((volatile signed __int64 *)v81 + 20, v109, v83) );
  v96[1] = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)(v76 + 60));
  *((_DWORD *)v96 + 8) = 0;
  _m_prefetchw((char *)v96 + 44);
  if ( _InterlockedAnd((volatile signed __int32 *)v96 + 11, 0xFFFFFFFE) == 1 )
  {
    v84 = **v96;
    *v96 = 0LL;
    RtlpInterlockedPushEntrySList(v84, v96 + 6);
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
