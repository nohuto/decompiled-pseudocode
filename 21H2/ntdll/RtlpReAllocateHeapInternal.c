/*
 * XREFs of RtlpReAllocateHeapInternal @ 0x180023720
 * Callers:
 *     RtlReAllocateHeap @ 0x180023640 (RtlReAllocateHeap.c)
 *     RtlpHpReAllocWithExceptionProtection @ 0x1800236C8 (RtlpHpReAllocWithExceptionProtection.c)
 *     RtlpHpTagReAllocateHeap @ 0x18009D09C (RtlpHpTagReAllocateHeap.c)
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
 *     RtlNtStatusToDosError @ 0x180051950 (RtlNtStatusToDosError.c)
 *     RtlRaiseException @ 0x1800520D0 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     RtlpCallInterceptRoutine @ 0x1800F3654 (RtlpCallInterceptRoutine.c)
 *     RtlpSetupExtendedBlock @ 0x1800F6D48 (RtlpSetupExtendedBlock.c)
 *     RtlDebugReAllocateHeap @ 0x1800F99D0 (RtlDebugReAllocateHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x180107EA4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHpStackTraceAddStack @ 0x1801089C0 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceRemoveStack @ 0x1801095F8 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpValidateLFHBlock @ 0x18010BE28 (RtlpValidateLFHBlock.c)
 *     RtlpLogHeapFailure @ 0x18010E1BC (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpReAllocateHeapInternal(
        __int64 a1,
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
  __int64 v13; // r10
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // r14d
  __int64 v18; // rax
  _QWORD *v19; // r12
  int v21; // r14d
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  int v24; // ecx
  unsigned __int64 v25; // rdi
  __int64 Heap; // rdi
  int v27; // r9d
  int v28; // r15d
  struct _TEB *v29; // rbx
  struct _TEB *v30; // rbx
  bool v31; // zf
  int v32; // r15d
  struct _TEB *v33; // rdi
  _QWORD *v34; // rax
  __int64 v35; // r9
  int v36; // edx
  __int64 v37; // rax
  unsigned __int16 v38; // dx
  int v39; // eax
  int v40; // eax
  unsigned __int16 v41; // ax
  __int64 v42; // rcx
  char v43; // dl
  unsigned __int16 v44; // ax
  __int64 v45; // r12
  unsigned __int64 v46; // rax
  __int64 v47; // rcx
  char v48; // cl
  int v49; // edx
  __int16 v50; // cx
  unsigned __int64 v51; // rdx
  __int64 v52; // rax
  unsigned __int16 v53; // ax
  int v54; // eax
  int v55; // r8d
  __int64 v56; // rax
  unsigned __int16 v57; // ax
  int v58; // eax
  unsigned __int64 v59; // rdx
  int v60; // r9d
  int v61; // eax
  unsigned __int16 v62; // [rsp+30h] [rbp-128h]
  int v63; // [rsp+40h] [rbp-118h]
  int v64; // [rsp+40h] [rbp-118h]
  int v65; // [rsp+40h] [rbp-118h]
  int v66; // [rsp+40h] [rbp-118h]
  __int128 v67; // [rsp+50h] [rbp-108h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+60h] [rbp-F8h] BYREF

  v6 = 0LL;
  v7 = a4;
  v8 = (char *)a3;
  v10 = 0;
  v11 = 0LL;
  if ( !a3 )
  {
    NtCurrentTeb()->LastStatusValue = 0;
    v30 = NtCurrentTeb();
    v30->LastErrorValue = RtlNtStatusToDosError(0);
    return 0LL;
  }
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
  {
    if ( a5 )
      *a5 = 0LL;
    if ( a6 )
      *a6 = 0;
    v21 = *(_DWORD *)(a1 + 116) | a2;
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
      return RtlDebugReAllocateHeap((void *)a1);
    if ( !dword_1801663E8 )
    {
      v22 = *(_QWORD *)(a1 + 392);
      v23 = v22;
      if ( (v22 || (v23 = qword_18016A688) != 0) && a4 > v23 )
      {
        v35 = *(_QWORD *)(a1 + 400);
        if ( v35 )
          RtlpLogHeapFailure(20, a1, 0, v35, v7, v22);
        goto LABEL_41;
      }
    }
    if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
    {
      v25 = (unsigned __int64)RtlpProbeUserBufferSafe(a1, a3);
    }
    else
    {
      if ( (a3 & 0xF) != 0 )
      {
        v24 = 9;
LABEL_27:
        RtlpLogHeapFailure(v24, a1, a3, 0, 0LL, 0LL);
        v25 = 0LL;
        goto LABEL_28;
      }
      v25 = a3 - 16;
      _m_prefetchw((const void *)(a3 - 16));
      if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
        v25 -= 16LL * *(unsigned __int8 *)(v25 + 14);
      if ( (*(_BYTE *)(v25 + 15) & 0x3F) == 0 )
      {
        LODWORD(a3) = v25;
        v24 = 8;
        goto LABEL_27;
      }
    }
LABEL_28:
    if ( !v25 )
    {
      v28 = -1073741819;
      goto LABEL_42;
    }
    if ( *(v8 - 1) != 5 )
      goto LABEL_30;
    if ( *(char *)(v25 + 15) >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v36 = *(_DWORD *)(v25 + 8) ^ *(_DWORD *)(a1 + 136);
        if ( HIBYTE(v36) != ((unsigned __int8)v36 ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)(v25 + 8) ^ *(_WORD *)(a1 + 136)) >> 8) ^ BYTE2(v36))) )
          goto LABEL_89;
      }
    }
    else if ( !(unsigned __int8)RtlpValidateLFHBlock(a1, v25) )
    {
      goto LABEL_89;
    }
    if ( *(char *)(v25 + 15) >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v39 = *(_DWORD *)(v25 + 8);
        LOWORD(v63) = v39;
        if ( (v39 & *(_DWORD *)(a1 + 124)) != 0 )
          v63 = *(_DWORD *)(a1 + 136) ^ v39;
        v38 = v63;
      }
      else
      {
        v38 = *(_WORD *)(v25 + 8);
      }
    }
    else
    {
      if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v25 + 8) ^ a1 ^ (v25 >> 4)) )
        v37 = 0LL;
      else
        v37 = *(_QWORD *)(v25
                        - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v25 + 8) ^ (unsigned int)a1 ^ (unsigned int)(v25 >> 4)) >> 12));
      v38 = *(_WORD *)(v37 + 36);
    }
    if ( *(_BYTE *)(v25 + 15) == 4 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v40 = *(_DWORD *)(v25 + 8);
        LOWORD(v64) = v40;
        if ( (v40 & *(_DWORD *)(a1 + 124)) != 0 )
          v64 = *(_DWORD *)(a1 + 136) ^ v40;
        v41 = v64;
      }
      else
      {
        v41 = *(_WORD *)(v25 + 8);
      }
      v42 = v38 + *(_QWORD *)(v25 - 16) - v41;
    }
    else
    {
      v42 = 16LL * v38;
    }
    if ( v42 + v25 >= (unsigned __int64)v8 )
    {
      LODWORD(v11) = *((_DWORD *)v8 - 2);
      if ( (v21 & 0x3C000102) == 0 )
      {
        v43 = *(v8 - 1);
        if ( v43 == 5 )
        {
          v44 = 16 * (unsigned __int8)*(v8 - 2);
        }
        else if ( (v43 & 0x40) != 0 )
        {
          v44 = 16 * (v43 & 0x3F);
        }
        else
        {
          v44 = 0;
        }
        v45 = v44;
        v62 = v44;
        v46 = v44 + v7;
        if ( v46 < v7 )
        {
LABEL_41:
          v28 = -1073741801;
          goto LABEL_42;
        }
        v7 = v46;
        if ( v43 == 5 )
          v47 = (__int64)&v8[-16 * (unsigned __int8)*(v8 - 2)];
        else
          v47 = 0LL;
        if ( (int)RtlpCallInterceptRoutine(v11, a1, (_DWORD)v8, 5, v47) < 0 )
        {
          v28 = -1073741819;
LABEL_42:
          NtCurrentTeb()->LastStatusValue = v28;
          v29 = NtCurrentTeb();
          v29->LastErrorValue = RtlNtStatusToDosError(v28);
          if ( (v21 & 4) != 0 )
          {
            ExceptionRecord.ExceptionCode = v28;
            ExceptionRecord.ExceptionAddress = RtlRaiseException;
            ExceptionRecord.ExceptionRecord = 0LL;
            ExceptionRecord.NumberParameters = 1;
            ExceptionRecord.ExceptionFlags = 0;
            ExceptionRecord.ExceptionInformation[0] = v7;
            RtlRaiseException(&ExceptionRecord);
          }
          return v6;
        }
        v48 = *(_BYTE *)(v25 + 15);
        if ( v48 == 4 )
        {
          if ( (v21 & 1) == 0 && (*(_BYTE *)(a1 + 116) & 1) == 0 )
            RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
          if ( *(_DWORD *)(a1 + 124) )
          {
            v49 = *(_DWORD *)(v25 + 8) ^ *(_DWORD *)(a1 + 136);
            *(_DWORD *)(v25 + 8) = v49;
            if ( HIBYTE(v49) != ((unsigned __int8)v49 ^ (unsigned __int8)(BYTE1(v49) ^ BYTE2(v49))) )
              RtlpAnalyzeHeapFailure(a1, v25);
          }
          v10 = v62;
          v50 = *(_WORD *)(v25 + 8) - v62;
          *(_WORD *)(v25 + 8) = v50;
          if ( *(_DWORD *)(a1 + 124) )
          {
            *(_BYTE *)(v25 + 11) = v50 ^ *(_BYTE *)(v25 + 10) ^ HIBYTE(v50);
            *(_DWORD *)(v25 + 8) ^= *(_DWORD *)(a1 + 136);
          }
          if ( (v21 & 1) == 0 && (*(_BYTE *)(a1 + 116) & 1) == 0 )
            RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
        }
        else
        {
          if ( v48 == 5 )
          {
            v51 = *(unsigned __int16 *)(v25 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
          }
          else if ( (v48 & 0x40) != 0 )
          {
            v51 = *(unsigned __int16 *)(v25 + 16LL * (v48 & 0x3F) + 12);
          }
          else if ( (v48 & 0x3F) == 0x3F )
          {
            if ( v48 >= 0 )
            {
              if ( *(_DWORD *)(a1 + 124) )
              {
                v54 = *(_DWORD *)(v25 + 8);
                LOWORD(v65) = v54;
                if ( (v54 & *(_DWORD *)(a1 + 124)) != 0 )
                  v65 = *(_DWORD *)(a1 + 136) ^ v54;
                v53 = v65;
              }
              else
              {
                v53 = *(_WORD *)(v25 + 8);
              }
            }
            else
            {
              if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v25 + 8) ^ a1 ^ (v25 >> 4)) )
                v52 = 0LL;
              else
                v52 = *(_QWORD *)(v25
                                - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v25 + 8) ^ (unsigned int)a1 ^ (unsigned int)(v25 >> 4)) >> 12));
              v53 = *(_WORD *)(v52 + 36);
            }
            v51 = *(_QWORD *)(v25 + 16LL * v53);
          }
          else
          {
            v51 = v48 & 0x3F;
          }
          v55 = *(char *)(v25 + 15);
          if ( *(char *)(v25 + 15) >= 0 )
          {
            if ( *(_DWORD *)(a1 + 124) )
            {
              v58 = *(_DWORD *)(v25 + 8);
              LOWORD(v66) = v58;
              if ( (v58 & *(_DWORD *)(a1 + 124)) != 0 )
                v66 = *(_DWORD *)(a1 + 136) ^ v58;
              v57 = v66;
            }
            else
            {
              v57 = *(_WORD *)(v25 + 8);
            }
          }
          else
          {
            if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v25 + 8) ^ a1 ^ (v25 >> 4)) )
              v56 = 0LL;
            else
              v56 = *(_QWORD *)(v25
                              - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v25 + 8) ^ (unsigned int)a1 ^ (unsigned int)(v25 >> 4)) >> 12));
            v57 = *(_WORD *)(v56 + 36);
          }
          v59 = v51 - v45;
          v10 = v62;
          if ( v59 >= 0x3F )
          {
            *(_QWORD *)(v25 + 16LL * v57) = v59;
            *(_BYTE *)(v25 + 15) = ((v55 >> 31) & 0x80) + 63;
          }
          else
          {
            *(_BYTE *)(v25 + 15) = v59 | ((char)v55 >> 7) & 0x80;
          }
        }
        v8 = (char *)(v25 + 16);
      }
LABEL_30:
      Heap = RtlpReAllocateHeap(a1, v21 | 2u, v8, v7);
      if ( (unsigned int)RtlpHpStackLoggingEnabled(a1) )
      {
        if ( !Heap )
        {
LABEL_39:
          v7 -= v10;
          if ( (_DWORD)v11 )
          {
            RtlSizeHeap(a1, 0LL, v8);
            v61 = RtlpSetupExtendedBlock(a1, v21, (_DWORD)v8, v60, v10, v11);
            RtlpCallInterceptRoutine(v11, a1, v61, 6, (__int64)v8);
          }
          goto LABEL_41;
        }
        if ( (v21 & 0x10000000) == 0 )
        {
          RtlpHpStackTraceRemoveStack(a1, v8);
          RtlpHpStackTraceAddStack(a1, Heap);
        }
      }
      if ( Heap )
      {
        v6 = Heap;
        if ( (_DWORD)v11 )
        {
          v6 = RtlpSetupExtendedBlock(a1, v21, Heap, v27, v10, v11);
          RtlpCallInterceptRoutine(v11, a1, v6, 6, Heap);
        }
        return v6;
      }
      goto LABEL_39;
    }
LABEL_89:
    RtlpLogHeapFailure(3, a1, v25, (_DWORD)v8, 0LL, 0LL);
    v28 = -1073741811;
    goto LABEL_42;
  }
  v12 = RtlpHpConvertFlagsToSegmentFlags(a2);
  v14 = *(_DWORD *)(a1 + 220);
  v15 = 0;
  if ( v14 )
    LOBYTE(v15) = v14 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v16 = (int)v8;
  v17 = v12 | 1;
  if ( !v15 )
    v17 = v12;
  if ( (RtlpHpAppCompatFlags & 2) != 0 )
  {
    v11 = *((_QWORD *)v8 - 2);
    v16 = (_DWORD)v8 - v11;
  }
  if ( v11 + v7 < v7 )
  {
    v19 = 0LL;
    goto LABEL_46;
  }
  v18 = RtlpHpReAllocateHeap(a1, v17, v16, (int)v11 + (int)v7, (__int64)a5, v13);
  v19 = (_QWORD *)v18;
  if ( (unsigned __int64)(v18 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
LABEL_46:
    v31 = v19 == 0LL;
    v32 = -1073741801;
    v19 = 0LL;
    if ( !v31 )
      v32 = -1073741819;
    NtCurrentTeb()->LastStatusValue = v32;
    v33 = NtCurrentTeb();
    v33->LastErrorValue = RtlNtStatusToDosError(v32);
    if ( v17 < 0 || *(int *)(a1 + 20) < 0 )
    {
      ExceptionRecord.ExceptionCode = v32;
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
    v34 = (_QWORD *)(v11 + v18);
    *(v34 - 2) = v11;
    if ( v11 > 0x10 )
      *v19 = v11;
    v19 = v34;
  }
  if ( a5 )
    *a5 -= v11;
LABEL_14:
  if ( (dword_18016D578 & 1) != 0 && (dword_18016D578 & 2) != 0 )
  {
    if ( NtCurrentPeb()->ProcessHeap )
    {
      v67 = RtlpHpEnvHandle;
      if ( a1 != *(_QWORD *)RtlpHpMetadataHeapCtxGet(&v67) )
      {
        if ( v19 )
        {
          RtlpHpStackTraceRemoveStack(a1, v8);
          RtlpHpStackTraceAddStack(a1, v19);
        }
      }
    }
  }
  return (__int64)v19;
}
