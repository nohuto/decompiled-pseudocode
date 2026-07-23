/*
 * XREFs of RtlpReAllocateHeapInternal @ 0x180023720
 * Callers:
 *     RtlReAllocateHeap @ 0x180023640 (RtlReAllocateHeap.c)
 *     RtlpHpReAllocWithExceptionProtection @ 0x1800236C8 (RtlpHpReAllocWithExceptionProtection.c)
 *     RtlpHpTagReAllocateHeap @ 0x18009CBDC (RtlpHpTagReAllocateHeap.c)
 * Callees:
 *     RtlpProbeUserBufferSafe @ 0x180001E7C (RtlpProbeUserBufferSafe.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x180008110 (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpReAllocateHeap @ 0x1800219E4 (RtlpReAllocateHeap.c)
 *     RtlpHpReAllocateHeap @ 0x180023990 (RtlpHpReAllocateHeap.c)
 *     RtlSizeHeap @ 0x180024160 (RtlSizeHeap.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x1800246E0 (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlpHpStackLoggingEnabled @ 0x180024820 (RtlpHpStackLoggingEnabled.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x180050840 (RtlNtStatusToDosError.c)
 *     RtlRaiseException @ 0x180051070 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     RtlpCallInterceptRoutine @ 0x1800F37C4 (RtlpCallInterceptRoutine.c)
 *     RtlpSetupExtendedBlock @ 0x1800F6EB8 (RtlpSetupExtendedBlock.c)
 *     RtlDebugReAllocateHeap @ 0x1800F9B40 (RtlDebugReAllocateHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x180108004 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHpStackTraceAddStack @ 0x180108B20 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180109758 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpValidateLFHBlock @ 0x18010BF88 (RtlpValidateLFHBlock.c)
 *     RtlpLogHeapFailure @ 0x18010E31C (RtlpLogHeapFailure.c)
 */

_QWORD *__fastcall RtlpReAllocateHeapInternal(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        _QWORD *a5,
        _WORD *a6)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // r13
  char *v8; // rbp
  unsigned __int16 v10; // r12
  unsigned __int64 v11; // r15
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  char *v15; // r8
  int v16; // r14d
  __int64 v17; // rax
  _QWORD *v18; // r12
  int v20; // r14d
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  int v23; // ecx
  unsigned __int64 v24; // rdi
  char *Heap; // rdi
  int v26; // r9d
  int v27; // r15d
  struct _TEB *v28; // rbx
  struct _TEB *v29; // rbx
  bool v30; // zf
  int v31; // r15d
  struct _TEB *v32; // rdi
  _QWORD *v33; // rax
  __int64 v34; // r9
  int v35; // edx
  __int64 v36; // rax
  unsigned __int16 v37; // dx
  int v38; // eax
  int v39; // eax
  unsigned __int16 v40; // ax
  __int64 v41; // rcx
  char v42; // dl
  unsigned __int16 v43; // ax
  __int64 v44; // r12
  unsigned __int64 v45; // rax
  __int64 v46; // rcx
  char v47; // cl
  int v48; // edx
  __int16 v49; // cx
  unsigned __int64 v50; // rdx
  __int64 v51; // rax
  unsigned __int16 v52; // ax
  int v53; // eax
  int v54; // r8d
  __int64 v55; // rax
  unsigned __int16 v56; // ax
  int v57; // eax
  unsigned __int64 v58; // rdx
  int v59; // r9d
  int v60; // eax
  unsigned __int16 v61; // [rsp+30h] [rbp-128h]
  int v62; // [rsp+40h] [rbp-118h]
  int v63; // [rsp+40h] [rbp-118h]
  int v64; // [rsp+40h] [rbp-118h]
  int v65; // [rsp+40h] [rbp-118h]
  __int128 v66; // [rsp+50h] [rbp-108h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+60h] [rbp-F8h] BYREF

  v6 = 0LL;
  v7 = a4;
  v8 = (char *)a3;
  v10 = 0;
  v11 = 0LL;
  if ( !a3 )
  {
    NtCurrentTeb()->LastStatusValue = 0;
    v29 = NtCurrentTeb();
    v29->LastErrorValue = RtlNtStatusToDosError(0);
    return 0LL;
  }
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
  {
    if ( a5 )
      *a5 = 0LL;
    if ( a6 )
      *a6 = 0;
    v20 = *(_DWORD *)(a1 + 116) | a2;
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
      return (_QWORD *)RtlDebugReAllocateHeap((void *)a1);
    if ( !dword_1801663E8 )
    {
      v21 = *(_QWORD *)(a1 + 392);
      v22 = v21;
      if ( (v21 || (v22 = qword_18016A688) != 0) && a4 > v22 )
      {
        v34 = *(_QWORD *)(a1 + 400);
        if ( v34 )
          RtlpLogHeapFailure(20, a1, 0, v34, v7, v21);
        goto LABEL_41;
      }
    }
    if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
    {
      v24 = (unsigned __int64)RtlpProbeUserBufferSafe(a1, a3);
    }
    else
    {
      if ( (a3 & 0xF) != 0 )
      {
        v23 = 9;
LABEL_27:
        RtlpLogHeapFailure(v23, a1, a3, 0, 0LL, 0LL);
        v24 = 0LL;
        goto LABEL_28;
      }
      v24 = a3 - 16;
      _m_prefetchw((const void *)(a3 - 16));
      if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
        v24 -= 16LL * *(unsigned __int8 *)(v24 + 14);
      if ( (*(_BYTE *)(v24 + 15) & 0x3F) == 0 )
      {
        LODWORD(a3) = v24;
        v23 = 8;
        goto LABEL_27;
      }
    }
LABEL_28:
    if ( !v24 )
    {
      v27 = -1073741819;
      goto LABEL_42;
    }
    if ( *(v8 - 1) != 5 )
      goto LABEL_30;
    if ( *(char *)(v24 + 15) >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v35 = *(_DWORD *)(v24 + 8) ^ *(_DWORD *)(a1 + 136);
        if ( HIBYTE(v35) != ((unsigned __int8)v35 ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)(v24 + 8) ^ *(_WORD *)(a1 + 136)) >> 8) ^ BYTE2(v35))) )
          goto LABEL_89;
      }
    }
    else if ( !(unsigned __int8)RtlpValidateLFHBlock(a1, v24) )
    {
      goto LABEL_89;
    }
    if ( *(char *)(v24 + 15) >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v38 = *(_DWORD *)(v24 + 8);
        LOWORD(v62) = v38;
        if ( (v38 & *(_DWORD *)(a1 + 124)) != 0 )
          v62 = *(_DWORD *)(a1 + 136) ^ v38;
        v37 = v62;
      }
      else
      {
        v37 = *(_WORD *)(v24 + 8);
      }
    }
    else
    {
      if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v24 + 8) ^ a1 ^ (v24 >> 4)) )
        v36 = 0LL;
      else
        v36 = *(_QWORD *)(v24
                        - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v24 + 8) ^ (unsigned int)a1 ^ (unsigned int)(v24 >> 4)) >> 12));
      v37 = *(_WORD *)(v36 + 36);
    }
    if ( *(_BYTE *)(v24 + 15) == 4 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v39 = *(_DWORD *)(v24 + 8);
        LOWORD(v63) = v39;
        if ( (v39 & *(_DWORD *)(a1 + 124)) != 0 )
          v63 = *(_DWORD *)(a1 + 136) ^ v39;
        v40 = v63;
      }
      else
      {
        v40 = *(_WORD *)(v24 + 8);
      }
      v41 = v37 + *(_QWORD *)(v24 - 16) - v40;
    }
    else
    {
      v41 = 16LL * v37;
    }
    if ( v41 + v24 >= (unsigned __int64)v8 )
    {
      LODWORD(v11) = *((_DWORD *)v8 - 2);
      if ( (v20 & 0x3C000102) == 0 )
      {
        v42 = *(v8 - 1);
        if ( v42 == 5 )
        {
          v43 = 16 * (unsigned __int8)*(v8 - 2);
        }
        else if ( (v42 & 0x40) != 0 )
        {
          v43 = 16 * (v42 & 0x3F);
        }
        else
        {
          v43 = 0;
        }
        v44 = v43;
        v61 = v43;
        v45 = v43 + v7;
        if ( v45 < v7 )
        {
LABEL_41:
          v27 = -1073741801;
          goto LABEL_42;
        }
        v7 = v45;
        if ( v42 == 5 )
          v46 = (__int64)&v8[-16 * (unsigned __int8)*(v8 - 2)];
        else
          v46 = 0LL;
        if ( (int)RtlpCallInterceptRoutine(v11, a1, (_DWORD)v8, 5, v46) < 0 )
        {
          v27 = -1073741819;
LABEL_42:
          NtCurrentTeb()->LastStatusValue = v27;
          v28 = NtCurrentTeb();
          v28->LastErrorValue = RtlNtStatusToDosError(v27);
          if ( (v20 & 4) != 0 )
          {
            ExceptionRecord.ExceptionCode = v27;
            ExceptionRecord.ExceptionAddress = RtlRaiseException;
            ExceptionRecord.ExceptionRecord = 0LL;
            ExceptionRecord.NumberParameters = 1;
            ExceptionRecord.ExceptionFlags = 0;
            ExceptionRecord.ExceptionInformation[0] = v7;
            RtlRaiseException(&ExceptionRecord);
          }
          return (_QWORD *)v6;
        }
        v47 = *(_BYTE *)(v24 + 15);
        if ( v47 == 4 )
        {
          if ( (v20 & 1) == 0 && (*(_BYTE *)(a1 + 116) & 1) == 0 )
            RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
          if ( *(_DWORD *)(a1 + 124) )
          {
            v48 = *(_DWORD *)(v24 + 8) ^ *(_DWORD *)(a1 + 136);
            *(_DWORD *)(v24 + 8) = v48;
            if ( HIBYTE(v48) != ((unsigned __int8)v48 ^ (unsigned __int8)(BYTE1(v48) ^ BYTE2(v48))) )
              RtlpAnalyzeHeapFailure(a1, v24);
          }
          v10 = v61;
          v49 = *(_WORD *)(v24 + 8) - v61;
          *(_WORD *)(v24 + 8) = v49;
          if ( *(_DWORD *)(a1 + 124) )
          {
            *(_BYTE *)(v24 + 11) = v49 ^ *(_BYTE *)(v24 + 10) ^ HIBYTE(v49);
            *(_DWORD *)(v24 + 8) ^= *(_DWORD *)(a1 + 136);
          }
          if ( (v20 & 1) == 0 && (*(_BYTE *)(a1 + 116) & 1) == 0 )
            RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
        }
        else
        {
          if ( v47 == 5 )
          {
            v50 = *(unsigned __int16 *)(v24 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
          }
          else if ( (v47 & 0x40) != 0 )
          {
            v50 = *(unsigned __int16 *)(v24 + 16LL * (v47 & 0x3F) + 12);
          }
          else if ( (v47 & 0x3F) == 0x3F )
          {
            if ( v47 >= 0 )
            {
              if ( *(_DWORD *)(a1 + 124) )
              {
                v53 = *(_DWORD *)(v24 + 8);
                LOWORD(v64) = v53;
                if ( (v53 & *(_DWORD *)(a1 + 124)) != 0 )
                  v64 = *(_DWORD *)(a1 + 136) ^ v53;
                v52 = v64;
              }
              else
              {
                v52 = *(_WORD *)(v24 + 8);
              }
            }
            else
            {
              if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v24 + 8) ^ a1 ^ (v24 >> 4)) )
                v51 = 0LL;
              else
                v51 = *(_QWORD *)(v24
                                - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v24 + 8) ^ (unsigned int)a1 ^ (unsigned int)(v24 >> 4)) >> 12));
              v52 = *(_WORD *)(v51 + 36);
            }
            v50 = *(_QWORD *)(v24 + 16LL * v52);
          }
          else
          {
            v50 = v47 & 0x3F;
          }
          v54 = *(char *)(v24 + 15);
          if ( *(char *)(v24 + 15) >= 0 )
          {
            if ( *(_DWORD *)(a1 + 124) )
            {
              v57 = *(_DWORD *)(v24 + 8);
              LOWORD(v65) = v57;
              if ( (v57 & *(_DWORD *)(a1 + 124)) != 0 )
                v65 = *(_DWORD *)(a1 + 136) ^ v57;
              v56 = v65;
            }
            else
            {
              v56 = *(_WORD *)(v24 + 8);
            }
          }
          else
          {
            if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v24 + 8) ^ a1 ^ (v24 >> 4)) )
              v55 = 0LL;
            else
              v55 = *(_QWORD *)(v24
                              - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v24 + 8) ^ (unsigned int)a1 ^ (unsigned int)(v24 >> 4)) >> 12));
            v56 = *(_WORD *)(v55 + 36);
          }
          v58 = v50 - v44;
          v10 = v61;
          if ( v58 >= 0x3F )
          {
            *(_QWORD *)(v24 + 16LL * v56) = v58;
            *(_BYTE *)(v24 + 15) = ((v54 >> 31) & 0x80) + 63;
          }
          else
          {
            *(_BYTE *)(v24 + 15) = v58 | ((char)v54 >> 7) & 0x80;
          }
        }
        v8 = (char *)(v24 + 16);
      }
LABEL_30:
      Heap = RtlpReAllocateHeap(a1, v20 | 2u, v8, v7);
      if ( (unsigned int)RtlpHpStackLoggingEnabled(a1) )
      {
        if ( !Heap )
        {
LABEL_39:
          v7 -= v10;
          if ( (_DWORD)v11 )
          {
            RtlSizeHeap((PVOID)a1, 0, v8);
            v60 = RtlpSetupExtendedBlock(a1, v20, (_DWORD)v8, v59, v10, v11);
            RtlpCallInterceptRoutine(v11, a1, v60, 6, (__int64)v8);
          }
          goto LABEL_41;
        }
        if ( (v20 & 0x10000000) == 0 )
        {
          RtlpHpStackTraceRemoveStack(a1, v8);
          RtlpHpStackTraceAddStack(a1, Heap);
        }
      }
      if ( Heap )
      {
        v6 = (__int64)Heap;
        if ( (_DWORD)v11 )
        {
          v6 = RtlpSetupExtendedBlock(a1, v20, (_DWORD)Heap, v26, v10, v11);
          RtlpCallInterceptRoutine(v11, a1, v6, 6, (__int64)Heap);
        }
        return (_QWORD *)v6;
      }
      goto LABEL_39;
    }
LABEL_89:
    RtlpLogHeapFailure(3, a1, v24, (_DWORD)v8, 0LL, 0LL);
    v27 = -1073741811;
    goto LABEL_42;
  }
  v12 = RtlpHpConvertFlagsToSegmentFlags(a2);
  v13 = *(_DWORD *)(a1 + 220);
  v14 = 0;
  if ( v13 )
    LOBYTE(v14) = v13 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v15 = v8;
  v16 = v12 | 1;
  if ( !v14 )
    v16 = v12;
  if ( (RtlpHpAppCompatFlags & 2) != 0 )
  {
    v11 = *((_QWORD *)v8 - 2);
    v15 = &v8[-v11];
  }
  if ( v11 + v7 < v7 )
  {
    v18 = 0LL;
    goto LABEL_46;
  }
  v17 = RtlpHpReAllocateHeap(a1, (unsigned int)v16, v15);
  v18 = (_QWORD *)v17;
  if ( (unsigned __int64)(v17 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
LABEL_46:
    v30 = v18 == 0LL;
    v31 = -1073741801;
    v18 = 0LL;
    if ( !v30 )
      v31 = -1073741819;
    NtCurrentTeb()->LastStatusValue = v31;
    v32 = NtCurrentTeb();
    v32->LastErrorValue = RtlNtStatusToDosError(v31);
    if ( v16 < 0 || *(int *)(a1 + 20) < 0 )
    {
      ExceptionRecord.ExceptionCode = v31;
      ExceptionRecord.ExceptionAddress = RtlRaiseException;
      ExceptionRecord.ExceptionRecord = 0LL;
      ExceptionRecord.NumberParameters = 1;
      ExceptionRecord.ExceptionFlags = 0;
      ExceptionRecord.ExceptionInformation[0] = v7;
      RtlRaiseException(&ExceptionRecord);
    }
    goto LABEL_14;
  }
  if ( (RtlpHpAppCompatFlags & 2) != 0 )
  {
    v33 = (_QWORD *)(v11 + v17);
    *(v33 - 2) = v11;
    if ( v11 > 0x10 )
      *v18 = v11;
    v18 = v33;
  }
  if ( a5 )
    *a5 -= v11;
LABEL_14:
  if ( (dword_18016D588 & 1) != 0 && (dword_18016D588 & 2) != 0 )
  {
    if ( NtCurrentPeb()->ProcessHeap )
    {
      v66 = RtlpHpEnvHandle;
      if ( a1 != *(_QWORD *)RtlpHpMetadataHeapCtxGet(&v66) )
      {
        if ( v18 )
        {
          RtlpHpStackTraceRemoveStack(a1, v8);
          RtlpHpStackTraceAddStack(a1, v18);
        }
      }
    }
  }
  return v18;
}
