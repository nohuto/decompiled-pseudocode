/*
 * XREFs of _RtlpReAllocateHeapInternal@24 @ 0x4B2C2710
 * Callers:
 *     _RtlReAllocateHeap@16 @ 0x4B2C26C0 (_RtlReAllocateHeap@16.c)
 *     _RtlpHpReAllocWithExceptionProtection@16 @ 0x4B34D46A (_RtlpHpReAllocWithExceptionProtection@16.c)
 *     _RtlpHpTagReAllocateHeap@16 @ 0x4B370621 (_RtlpHpTagReAllocateHeap@16.c)
 * Callees:
 *     @RtlpProbeUserBufferSafe@8 @ 0x4B2AA492 (@RtlpProbeUserBufferSafe@8.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     @RtlpReAllocateHeap@16 @ 0x4B2C2870 (@RtlpReAllocateHeap@16.c)
 *     _RtlpHpStackLoggingEnabled@4 @ 0x4B2C3BD0 (_RtlpHpStackLoggingEnabled@4.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _RtlSizeHeap@12 @ 0x4B2DB840 (_RtlSizeHeap@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlRaiseException@4 @ 0x4B308940 (_RtlRaiseException@4.c)
 *     _RtlpCallInterceptRoutine@20 @ 0x4B35773E (_RtlpCallInterceptRoutine@20.c)
 *     @RtlpSetupExtendedBlock@24 @ 0x4B35CF90 (@RtlpSetupExtendedBlock@24.c)
 *     _RtlpHpConvertFlagsToSegmentFlags@4 @ 0x4B35D732 (_RtlpHpConvertFlagsToSegmentFlags@4.c)
 *     _RtlDebugReAllocateHeap@16 @ 0x4B35FC56 (_RtlDebugReAllocateHeap@16.c)
 *     _RtlpAnalyzeHeapFailure@12 @ 0x4B36D496 (_RtlpAnalyzeHeapFailure@12.c)
 *     _RtlpHpStackTraceAddStack@8 @ 0x4B36DDE3 (_RtlpHpStackTraceAddStack@8.c)
 *     _RtlpHpStackTraceRemoveStack@8 @ 0x4B36E701 (_RtlpHpStackTraceRemoveStack@8.c)
 *     _RtlpValidateLFHBlock@8 @ 0x4B371DA9 (_RtlpValidateLFHBlock@8.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 *     _RtlpHpMetadataHeapCtxGet@8 @ 0x4B3794D2 (_RtlpHpMetadataHeapCtxGet@8.c)
 *     _RtlpHpReAllocateHeap@24 @ 0x4B37955B (_RtlpHpReAllocateHeap@24.c)
 */

int __userpurge RtlpReAllocateHeapInternal@<eax>(
        int HeapHandle@<ecx>,
        int a2@<edx>,
        int a3@<ebp>,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6,
        _WORD *a7)
{
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // edi
  int Heap; // edi
  int v12; // ecx
  int result; // eax
  struct _TEB *v14; // esi
  int v15; // edx
  void *v16; // eax
  int v17; // edi
  int v18; // ecx
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int *v21; // ecx
  struct _TEB *v22; // edi
  bool v23; // zf
  unsigned int *v24; // eax
  int v25; // eax
  NTSTATUS v26; // edi
  char v27; // al
  unsigned int v28; // edx
  int v29; // eax
  int v30; // eax
  int v31; // edx
  char v32; // al
  int v33; // edx
  unsigned int v34; // edx
  char v35; // cl
  unsigned __int8 v36; // cl
  unsigned int v37; // edx
  unsigned int v38; // ecx
  __int16 v39; // ax
  int v40; // ecx
  unsigned int v41; // ecx
  int v42; // eax
  char v43; // dl
  unsigned int v44; // edx
  int v45; // eax
  unsigned int v46; // ecx
  int v47; // ecx
  int v48; // eax
  struct _TEB *v49; // esi
  int v50; // [esp-78h] [ebp-84h]
  NTSTATUS v51; // [esp-74h] [ebp-80h]
  int v52; // [esp-74h] [ebp-80h]
  int v53; // [esp-74h] [ebp-80h]
  unsigned int v54; // [esp-70h] [ebp-7Ch]
  int v55; // [esp-6Ch] [ebp-78h]
  unsigned int v56; // [esp-6Ch] [ebp-78h]
  int v57; // [esp-68h] [ebp-74h]
  int v58; // [esp-68h] [ebp-74h]
  void *v59; // [esp-64h] [ebp-70h]
  int v60; // [esp-60h] [ebp-6Ch]
  int v61; // [esp-60h] [ebp-6Ch]
  char v62; // [esp-59h] [ebp-65h]
  EXCEPTION_RECORD v63; // [esp-58h] [ebp-64h] BYREF
  int v64; // [esp+0h] [ebp-Ch]
  void *v65; // [esp+4h] [ebp-8h]
  void *retaddr; // [esp+Ch] [ebp+0h]

  v64 = a3;
  v65 = retaddr;
  v54 = a5;
  v8 = a4;
  v59 = (void *)a4;
  v55 = 0;
  v57 = 0;
  if ( !a4 )
  {
    v14 = NtCurrentTeb();
    v14->LastStatusValue = 0;
    v14->LastErrorValue = RtlNtStatusToDosError(0);
    return 0;
  }
  if ( *(_DWORD *)(HeapHandle + 8) != -571548178 )
  {
    if ( a6 )
      *a6 = 0;
    if ( a7 )
      *a7 = 0;
    v60 = *(_DWORD *)(HeapHandle + 68) | a2;
    if ( (*(_DWORD *)(HeapHandle + 68) & 0x1000000) != 0 )
      return RtlDebugReAllocateHeap(HeapHandle, a4, a5);
    if ( !dword_4B3A373C )
    {
      v9 = *(_DWORD *)(HeapHandle + 220);
      if ( (v9 || (v9 = dword_4B3A4334) != 0) && a5 > v9 )
      {
        v25 = *(_DWORD *)(HeapHandle + 224);
        if ( v25 )
          RtlpLogHeapFailure(0, v25, a5, *(_DWORD *)(HeapHandle + 220));
        goto LABEL_145;
      }
    }
    if ( (*(_BYTE *)(HeapHandle + 72) & 1) != 0 )
    {
      v10 = RtlpProbeUserBufferSafe(HeapHandle, a4);
    }
    else
    {
      if ( (a4 & 7) != 0 )
      {
        RtlpLogHeapFailure(a4, 0, 0, 0);
      }
      else
      {
        v10 = a4 - 8;
        if ( *(_BYTE *)(a4 - 1) == 5 )
          v10 -= 8 * *(unsigned __int8 *)(v10 + 6);
        if ( (*(_BYTE *)(v10 + 7) & 0x3F) != 0 )
        {
LABEL_16:
          if ( !v10 )
          {
            v26 = -1073741819;
            goto LABEL_146;
          }
          if ( *(_BYTE *)(v8 - 1) != 5 )
            goto LABEL_18;
          if ( *(char *)(v10 + 7) >= 0 )
          {
            if ( *(_DWORD *)(HeapHandle + 76) )
            {
              v8 = a4;
              if ( (unsigned int)(*(_DWORD *)v10 ^ *(_DWORD *)(HeapHandle + 80)) >> 24 != ((unsigned __int8)(*(_BYTE *)v10 ^ *(_BYTE *)(HeapHandle + 80)) ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)v10 ^ *(_WORD *)(HeapHandle + 80)) >> 8) ^ ((unsigned int)(*(_DWORD *)v10 ^ *(_DWORD *)(HeapHandle + 80)) >> 16))) )
                goto LABEL_82;
            }
          }
          else
          {
            v27 = RtlpValidateLFHBlock(HeapHandle, v10);
            v8 = a4;
            if ( !v27 )
              goto LABEL_82;
          }
          if ( *(char *)(v10 + 7) >= 0 )
          {
            if ( *(_DWORD *)(HeapHandle + 76) )
            {
              v29 = *(_DWORD *)v10;
              if ( (*(_DWORD *)v10 & *(_DWORD *)(HeapHandle + 76)) != 0 )
                v29 ^= *(_DWORD *)(HeapHandle + 80);
            }
            else
            {
              LOWORD(v29) = *(_WORD *)v10;
            }
          }
          else
          {
            v28 = RtlpLFHKey ^ HeapHandle ^ *(_DWORD *)v10 ^ (v10 >> 3);
            if ( (_WORD)v28 )
              v29 = 0;
            else
              v29 = *(_DWORD *)(v10 - (v28 >> 13));
            LOWORD(v29) = *(_WORD *)(v29 + 20);
          }
          v52 = (unsigned __int16)v29;
          if ( *(_BYTE *)(v10 + 7) == 4 )
          {
            if ( *(_DWORD *)(HeapHandle + 76) )
            {
              v30 = *(_DWORD *)v10;
              if ( (*(_DWORD *)v10 & *(_DWORD *)(HeapHandle + 76)) != 0 )
                v30 ^= *(_DWORD *)(HeapHandle + 80);
            }
            else
            {
              LOWORD(v30) = *(_WORD *)v10;
            }
            v31 = v52 + *(_DWORD *)(v10 - 8) - (unsigned __int16)v30;
          }
          else
          {
            v31 = 8 * (unsigned __int16)v29;
          }
          if ( v31 + v10 >= v8 )
          {
            v57 = *(_DWORD *)(v8 - 8);
            if ( (v60 & 0x3C000102) == 0 )
            {
              v32 = *(_BYTE *)(v8 - 1);
              if ( v32 == 5 )
              {
                v33 = (unsigned __int16)(8 * *(unsigned __int8 *)(v8 - 2));
                v32 = *(_BYTE *)(v8 - 1);
              }
              else if ( (v32 & 0x40) != 0 )
              {
                v33 = (unsigned __int16)(8 * (v32 & 0x3F));
                v32 = *(_BYTE *)(v8 - 1);
              }
              else
              {
                v33 = 0;
              }
              v55 = v33;
              v50 = (unsigned __int16)v33;
              if ( a5 + (unsigned __int16)v33 < a5 )
              {
LABEL_145:
                v26 = -1073741801;
LABEL_146:
                v49 = NtCurrentTeb();
                v49->LastStatusValue = v26;
                v49->LastErrorValue = RtlNtStatusToDosError(v26);
                if ( (v60 & 4) != 0 )
                {
                  v63.ExceptionInformation[0] = v54;
                  v63.ExceptionCode = v26;
                  v63.ExceptionRecord = 0;
                  v63.NumberParameters = 1;
                  v63.ExceptionFlags = 0;
                  v63.ExceptionAddress = RtlRaiseException;
                  RtlRaiseException(&v63);
                }
                return 0;
              }
              v54 = a5 + (unsigned __int16)v33;
              if ( v32 == 5 )
                v34 = a4 - 8 * *(unsigned __int8 *)(a4 - 8 + 6);
              else
                v34 = 0;
              if ( (int)RtlpCallInterceptRoutine(a4, 5, v34) < 0 )
              {
                v26 = -1073741819;
                goto LABEL_146;
              }
              v35 = *(_BYTE *)(v10 + 7);
              if ( v35 == 4 )
              {
                v36 = v60;
                if ( (((unsigned __int8)v60 | *(_BYTE *)(HeapHandle + 68)) & 1) == 0 )
                {
                  RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(HeapHandle + 200));
                  v36 = v60;
                }
                if ( *(_DWORD *)(HeapHandle + 76) )
                {
                  v37 = *(_DWORD *)v10 ^ *(_DWORD *)(HeapHandle + 80);
                  *(_DWORD *)v10 = v37;
                  v38 = HIWORD(v37);
                  LOBYTE(v38) = v37 ^ BYTE1(v37) ^ BYTE2(v37);
                  if ( HIBYTE(v37) != (_BYTE)v38 )
                    RtlpAnalyzeHeapFailure(v38);
                  v36 = v60;
                }
                v39 = *(_WORD *)v10 - v55;
                *(_WORD *)v10 = v39;
                if ( *(_DWORD *)(HeapHandle + 76) )
                {
                  *(_BYTE *)(v10 + 3) = v39 ^ *(_BYTE *)(v10 + 2) ^ HIBYTE(v39);
                  *(_DWORD *)v10 ^= *(_DWORD *)(HeapHandle + 80);
                }
                if ( ((v36 | *(_BYTE *)(HeapHandle + 68)) & 1) == 0 )
                  RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(HeapHandle + 200));
              }
              else
              {
                if ( v35 == 5 )
                {
                  v40 = *(unsigned __int16 *)(v10 + 4) ^ *(unsigned __int16 *)(HeapHandle + 84);
                }
                else if ( (v35 & 0x40) != 0 )
                {
                  v40 = *(unsigned __int16 *)(v10 + 8 * (v35 & 0x3F) + 4);
                }
                else if ( (v35 & 0x3F) == 0x3F )
                {
                  if ( v35 >= 0 )
                  {
                    if ( *(_DWORD *)(HeapHandle + 76) )
                    {
                      v42 = *(_DWORD *)v10;
                      if ( (*(_DWORD *)v10 & *(_DWORD *)(HeapHandle + 76)) != 0 )
                        v42 ^= *(_DWORD *)(HeapHandle + 80);
                    }
                    else
                    {
                      LOWORD(v42) = *(_WORD *)v10;
                    }
                  }
                  else
                  {
                    v41 = RtlpLFHKey ^ HeapHandle ^ *(_DWORD *)v10 ^ (v10 >> 3);
                    if ( (_WORD)v41 )
                      v42 = 0;
                    else
                      v42 = *(_DWORD *)(v10 - (v41 >> 13));
                    LOWORD(v42) = *(_WORD *)(v42 + 20);
                  }
                  v40 = *(_DWORD *)(v10 + 8 * (unsigned __int16)v42 - 4);
                }
                else
                {
                  v40 = v35 & 0x3F;
                }
                v43 = *(_BYTE *)(v10 + 7);
                v62 = v43;
                if ( v43 >= 0 )
                {
                  if ( *(_DWORD *)(HeapHandle + 76) )
                  {
                    v45 = *(_DWORD *)v10;
                    if ( (*(_DWORD *)v10 & *(_DWORD *)(HeapHandle + 76)) != 0 )
                      v45 ^= *(_DWORD *)(HeapHandle + 80);
                  }
                  else
                  {
                    LOWORD(v45) = *(_WORD *)v10;
                  }
                }
                else
                {
                  v44 = RtlpLFHKey ^ HeapHandle ^ *(_DWORD *)v10 ^ (v10 >> 3);
                  if ( (_WORD)v44 )
                    v45 = 0;
                  else
                    v45 = *(_DWORD *)(v10 - (v44 >> 13));
                  LOWORD(v45) = *(_WORD *)(v45 + 20);
                  v43 = v62;
                }
                v46 = v40 - v50;
                if ( v46 >= 0x3F )
                {
                  *(_DWORD *)(v10 + 8 * (unsigned __int16)v45 - 4) = v46;
                  *(_BYTE *)(v10 + 7) = ((v43 >> 7) & 0x80) + 63;
                }
                else
                {
                  *(_BYTE *)(v10 + 7) = v46 | (v43 >> 7) & 0x80;
                }
              }
              v8 = v10 + 8;
              v59 = (void *)(v10 + 8);
            }
LABEL_18:
            Heap = RtlpReAllocateHeap(HeapHandle, v60 | 2, v8, v54);
            if ( (dword_4B3A6834 & 1) != 0
              && (dword_4B3A6834 & 2) != 0
              && NtCurrentPeb()->ProcessHeap
              && HeapHandle != *(_DWORD *)RtlpHpMetadataHeapCtxGet(RtlpHpEnvHandle, dword_4B3A446C) )
            {
              if ( !Heap )
                goto LABEL_143;
              v12 = v60;
              if ( (v60 & 0x10000000) != 0 )
              {
LABEL_20:
                if ( Heap )
                {
                  result = Heap;
                  if ( v57 )
                  {
                    v53 = RtlpSetupExtendedBlock(Heap, v12, v55, v57);
                    RtlpCallInterceptRoutine(v53, 6, Heap);
                    return v53;
                  }
                  return result;
                }
LABEL_143:
                v54 -= (unsigned __int16)v55;
                if ( v57 )
                {
                  RtlSizeHeap((PVOID)HeapHandle, 0, v59);
                  v48 = RtlpSetupExtendedBlock(v59, v47, v55, v57);
                  RtlpCallInterceptRoutine(v48, 6, v59);
                }
                goto LABEL_145;
              }
              RtlpHpStackTraceRemoveStack(HeapHandle, v59);
              RtlpHpStackTraceAddStack(HeapHandle, Heap);
            }
            v12 = v60;
            goto LABEL_20;
          }
LABEL_82:
          RtlpLogHeapFailure(v10, v8, 0, 0);
          v26 = -1073741811;
          goto LABEL_146;
        }
        RtlpLogHeapFailure(v10, 0, 0, 0);
      }
      v10 = 0;
    }
    v8 = a4;
    goto LABEL_16;
  }
  v15 = RtlpHpConvertFlagsToSegmentFlags(a2);
  v16 = *(void **)(HeapHandle + 176);
  v61 = v15;
  if ( v16 && v16 == NtCurrentTeb()->ClientId.UniqueThread )
    v61 = v15 | 1;
  v17 = a4;
  v18 = a4;
  if ( (RtlpHpAppCompatFlags & 2) != 0 )
  {
    v19 = *(_DWORD *)(a4 - 8);
    v18 = a4 - v19;
  }
  else
  {
    v19 = 0;
  }
  v56 = v19;
  v20 = a5 + v19;
  if ( v20 >= a5 )
  {
    v24 = (unsigned int *)RtlpHpReAllocateHeap(v18, v20, a6, a7);
    v21 = v24;
    v58 = (int)v24;
    if ( v24 && v24 != (unsigned int *)-1 )
    {
      if ( (RtlpHpAppCompatFlags & 2) != 0 )
      {
        *(unsigned int *)((char *)v24 + v56 - 8) = v56;
        if ( v56 > 8 )
          *v24 = v56;
        v58 = (int)v24 + v56;
      }
      if ( a6 )
        *a6 -= v56;
      goto LABEL_41;
    }
  }
  else
  {
    v21 = 0;
  }
  v22 = NtCurrentTeb();
  v51 = v21 != 0 ? -1073741819 : -1073741801;
  v58 = 0;
  v22->LastStatusValue = v51;
  v22->LastErrorValue = RtlNtStatusToDosError(v51);
  if ( v61 < 0 || *(int *)(HeapHandle + 12) < 0 )
  {
    v63.ExceptionCode = v51;
    v63.ExceptionInformation[0] = a5;
    v63.ExceptionRecord = 0;
    v63.NumberParameters = 1;
    v63.ExceptionFlags = 0;
    v63.ExceptionAddress = RtlRaiseException;
    RtlRaiseException(&v63);
  }
  v17 = a4;
LABEL_41:
  v23 = RtlpHpStackLoggingEnabled(HeapHandle) == 0;
  result = v58;
  if ( !v23 && v58 )
  {
    RtlpHpStackTraceRemoveStack(HeapHandle, v17);
    RtlpHpStackTraceAddStack(HeapHandle, v58);
    return v58;
  }
  return result;
}
