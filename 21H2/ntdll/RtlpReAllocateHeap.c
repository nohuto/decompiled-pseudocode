/*
 * XREFs of RtlpReAllocateHeap @ 0x1800219E4
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180023720 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlpGetExtraStuffPointer @ 0x1800024B0 (RtlpGetExtraStuffPointer.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180009AF4 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpCreateSplitBlock @ 0x18001DD64 (RtlpCreateSplitBlock.c)
 *     RtlpGrowBlockInPlace @ 0x18001F630 (RtlpGrowBlockInPlace.c)
 *     RtlTryEnterCriticalSection @ 0x1800207E0 (RtlTryEnterCriticalSection.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x180051950 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180051AC0 (DbgPrint.c)
 *     RtlpUpdateHeapRates @ 0x18007CD4C (RtlpUpdateHeapRates.c)
 *     memmove @ 0x1800A4480 (memmove.c)
 *     memset @ 0x1800A4740 (memset.c)
 *     RtlpUpdateTagEntry @ 0x1800F4CF0 (RtlpUpdateTagEntry.c)
 *     RtlDebugReAllocateHeap @ 0x1800F9990 (RtlDebugReAllocateHeap.c)
 *     RtlpBreakPointHeap @ 0x1800FA5AC (RtlpBreakPointHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x180107E64 (RtlpAnalyzeHeapFailure.c)
 *     RtlpLogHeapReallocateEvent @ 0x18010A388 (RtlpLogHeapReallocateEvent.c)
 *     RtlpHeapExceptionFilter @ 0x18010E064 (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapFailure @ 0x18010E17C (RtlpLogHeapFailure.c)
 */

char *__fastcall RtlpReAllocateHeap(unsigned __int64 a1, int a2, char *a3, SIZE_T a4)
{
  NTSTATUS v7; // ecx
  struct _TEB *v8; // rdi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  char *v13; // r9
  int *v14; // rdx
  unsigned __int64 v15; // rdi
  unsigned int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int16 v21; // ax
  int v22; // eax
  size_t v23; // rdi
  PVOID v24; // rax
  _DWORD *v25; // rcx
  __int64 v26; // rcx
  int v27; // ecx
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  struct _TEB *v30; // rdi
  __int64 v31; // rdi
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // rdx
  __int64 **v34; // rcx
  char *v35; // rdi
  struct _TEB *v36; // rdi
  int v37; // ecx
  unsigned __int16 v38; // ax
  unsigned __int16 v39; // dx
  unsigned __int64 v40; // rcx
  int v41; // ecx
  __int64 v42; // rcx
  unsigned __int16 v43; // ax
  SIZE_T v44; // rdi
  __int64 v45; // r8
  unsigned __int64 v46; // rdx
  char v47; // r9
  __int64 v48; // rdi
  int v49; // ecx
  __int64 v50; // rdx
  unsigned __int64 v51; // rcx
  char v52; // al
  __int64 ExtraStuffPointer; // rax
  _DWORD *v54; // r12
  char *Heap; // r13
  __int64 v56; // rdi
  _OWORD *v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rdx
  size_t v60; // rcx
  _DWORD *SharedData; // rcx
  __int64 v62; // rcx
  char v63; // [rsp+40h] [rbp-138h]
  char *v64; // [rsp+48h] [rbp-130h]
  unsigned __int64 v65; // [rsp+50h] [rbp-128h]
  __int64 v66; // [rsp+58h] [rbp-120h]
  int v67; // [rsp+60h] [rbp-118h]
  SIZE_T v68; // [rsp+60h] [rbp-118h]
  unsigned __int64 v69; // [rsp+68h] [rbp-110h]
  PVOID v70; // [rsp+78h] [rbp-100h]
  _BYTE *v71; // [rsp+80h] [rbp-F8h]
  _BYTE *v72; // [rsp+98h] [rbp-E0h]
  unsigned __int64 v73; // [rsp+A0h] [rbp-D8h]
  _OWORD *v74; // [rsp+A0h] [rbp-D8h]
  NTSTATUS v75; // [rsp+A8h] [rbp-D0h]
  ULONG_PTR v76; // [rsp+B8h] [rbp-C0h] BYREF
  unsigned __int64 v77; // [rsp+C0h] [rbp-B8h]
  PVOID v78[2]; // [rsp+C8h] [rbp-B0h] BYREF
  char *v79; // [rsp+D8h] [rbp-A0h]
  unsigned int NtGlobalFlag; // [rsp+E0h] [rbp-98h]
  unsigned int v81; // [rsp+E4h] [rbp-94h]
  unsigned int v82; // [rsp+E8h] [rbp-90h]
  SIZE_T v83; // [rsp+F0h] [rbp-88h]
  __int64 v84; // [rsp+F8h] [rbp-80h]
  __int64 v85; // [rsp+100h] [rbp-78h]
  __int64 v86; // [rsp+108h] [rbp-70h]
  int v87; // [rsp+110h] [rbp-68h]
  int v88; // [rsp+120h] [rbp-58h]
  int v89; // [rsp+130h] [rbp-48h]
  _OWORD *v90; // [rsp+138h] [rbp-40h]
  unsigned int Flagsa; // [rsp+188h] [rbp+10h]
  char *Src; // [rsp+190h] [rbp+18h]

  Src = a3;
  v71 = 0LL;
  v63 = 0;
  v79 = 0LL;
  if ( !a3 )
  {
    NtCurrentTeb()->LastStatusValue = 0;
    v7 = 0;
LABEL_3:
    v8 = NtCurrentTeb();
    v8->LastErrorValue = RtlNtStatusToDosError(v7);
    return 0LL;
  }
  v10 = (unsigned __int64)(a3 - 16);
  _m_prefetchw(a3 - 16);
  v11 = v10;
  if ( *(_BYTE *)(v10 + 15) == 5 )
  {
    v11 = v10 - 16LL * *(unsigned __int8 *)(v10 + 14);
    v64 = (char *)v11;
  }
  else
  {
    v64 = Src - 16;
  }
  if ( *(_BYTE *)(a1 + 418) == 2 )
    v12 = *(_QWORD *)(a1 + 408);
  else
    v12 = 0LL;
  if ( !v12 || (v13 = (char *)(v11 + 15), *(char *)(v11 + 15) >= 0) )
  {
    if ( v11 == a1 )
    {
      RtlpLogHeapFailure(9, a1, v11, 0, 0LL, 0LL);
      return 0LL;
    }
    v27 = *(_DWORD *)(a1 + 116) | a2;
    Flagsa = v27;
    if ( (v27 & 0x61000000) != 0 && (v27 & 0x10000000) == 0 )
      return (char *)RtlDebugReAllocateHeap((void *)a1);
    if ( a4 > 0x7FFFFFFFFFFFFFFFLL )
    {
      NtCurrentTeb()->LastStatusValue = -1073741801;
      v7 = -1073741801;
      goto LABEL_3;
    }
    v28 = a4;
    if ( !a4 )
      v28 = 1LL;
    v29 = *(_QWORD *)(a1 + 264) & (*(_QWORD *)(a1 + 256) + v28);
    if ( v29 < 0x20 )
      v29 = 32LL;
    v65 = v29;
    LODWORD(v68) = 0;
    if ( (v27 & 1) == 0 )
    {
      if ( RtlTryEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352)) )
      {
        ++*(_DWORD *)(a1 + 616);
      }
      else
      {
        if ( byte_18016C508 )
        {
          NtCurrentTeb()->LastStatusValue = -1073741420;
          v30 = NtCurrentTeb();
          v30->LastErrorValue = RtlNtStatusToDosError(-1073741420);
          v31 = a4;
          goto LABEL_187;
        }
        RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
        RtlpUpdateHeapRates(a1, 1LL);
      }
      v63 = 1;
      Flagsa ^= 1u;
    }
    _m_prefetchw((const void *)v10);
    if ( *(_BYTE *)(v10 + 15) == 5 )
      v10 -= 16LL * *(unsigned __int8 *)(v10 + 14);
    v32 = v10;
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v10 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v10 + 11) != (*(_BYTE *)(v10 + 8) ^ (unsigned __int8)(*(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10))) )
      {
        RtlpAnalyzeHeapFailure(a1, v10);
        v32 = v10;
      }
    }
    v71 = (_BYTE *)v10;
    v33 = *(unsigned __int16 *)(v10 + 8);
    v34 = *(__int64 ***)(a1 + 312);
    do
    {
      if ( v33 < *((unsigned int *)v34 + 2) )
        break;
      v34 = (__int64 **)*v34;
    }
    while ( v34 );
    if ( (Flagsa & 0x3C000100) != 0 || *(_QWORD *)(a1 + 328) || (*(_BYTE *)(v10 + 10) & 2) != 0 )
      v65 += 16LL;
    v35 = (char *)(v10 + 15);
    v72 = (_BYTE *)(v10 + 15);
    if ( (*(_BYTE *)(v10 + 15) & 0x3F) == 0 )
    {
      NtCurrentTeb()->LastStatusValue = -1073741811;
      v36 = NtCurrentTeb();
      v36->LastErrorValue = RtlNtStatusToDosError(-1073741811);
LABEL_186:
      v31 = a4;
LABEL_187:
      if ( v71 && *(_DWORD *)(a1 + 124) )
      {
        v71[11] = v71[8] ^ v71[9] ^ v71[10];
        *((_DWORD *)v71 + 2) ^= *(_DWORD *)(a1 + 136);
      }
      if ( v63 )
        RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && *SharedData )
        v62 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v62 = 2147353472LL;
      if ( *(_BYTE *)v62 && (NtCurrentPeb()->TracingFlags & 1) != 0 && Src && (Flagsa & 0x800000) == 0 )
        RtlpLogHeapReallocateEvent(a1, (_DWORD)Src, (_DWORD)v79, v68, v31, 3);
      return Src;
    }
    if ( *v35 == 4 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v37 = *(_DWORD *)(v32 + 8);
        v88 = v37;
        if ( (v37 & *(_DWORD *)(a1 + 124)) != 0 )
          v88 = v37 ^ *(_DWORD *)(a1 + 136);
        v38 = v88;
        v39 = *(_WORD *)(v10 + 8);
      }
      else
      {
        v38 = *(_WORD *)(v32 + 8);
        v39 = v38;
      }
      v68 = *(_QWORD *)(v10 - 48 + 32) - v38;
      v69 = (v68 + v39) >> 4;
      v65 = (v65 + 4151) & 0xFFFFFFFFFFFFF000uLL;
      v35 = (char *)(v10 + 15);
    }
    else
    {
      v69 = *(unsigned __int16 *)(v32 + 8);
      if ( *v35 == 5 )
      {
        v40 = *(unsigned __int16 *)(v10 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
      }
      else if ( (*v35 & 0x40) != 0 )
      {
        v40 = *(unsigned __int16 *)(v10 + 16LL * (*v35 & 0x3F) + 12);
      }
      else if ( (*v35 & 0x3F) == 0x3F )
      {
        if ( *v35 >= 0 )
        {
          if ( *(_DWORD *)(a1 + 124) )
          {
            v41 = *(_DWORD *)(v10 + 8);
            v89 = v41;
            if ( (v41 & *(_DWORD *)(a1 + 124)) != 0 )
              v89 = v41 ^ *(_DWORD *)(a1 + 136);
            LOWORD(v33) = v89;
          }
        }
        else
        {
          if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v10 + 8) ^ (v10 >> 4)) )
            v33 = 0LL;
          else
            v33 = *(_QWORD *)(v10
                            - (((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v10 + 8) ^ (unsigned int)(v10 >> 4)) >> 12));
          LOWORD(v33) = *(_WORD *)(v33 + 36);
        }
        v40 = *(_QWORD *)(v10 + 16LL * (unsigned __int16)v33);
      }
      else
      {
        v40 = *v35 & 0x3F;
      }
      v68 = 16 * v69 - v40;
      if ( v69 < *(unsigned __int16 *)(a1 + 432)
        && ((unsigned __int8)(1 << (v69 & 7)) & *(_BYTE *)((v69 >> 3) + a1 + 434)) == 0 )
      {
        v42 = *(_QWORD *)(a1 + 424);
        v43 = *(_WORD *)(v42 + 2 * v69);
        if ( v43 > 1u )
          *(_WORD *)(v42 + 2 * v69) = v43 - 1;
      }
    }
    v66 = v65 >> 4;
    if ( v65 >> 4 > v69 )
    {
      if ( *v35 == 4 || !RtlpGrowBlockInPlace(a1, Flagsa, v10, a4, v66) )
      {
        if ( (Flagsa & 0x10) == 0 )
        {
          Flagsa &= 0xC003FFFF;
          v52 = *(_BYTE *)(v10 + 10);
          if ( (v52 & 2) != 0 )
          {
            Flagsa = (16 * (v52 & 0xE0 | 0x10)) | Flagsa & 0xFFFFF1FF;
            ExtraStuffPointer = RtlpGetExtraStuffPointer(v10);
            if ( *(__int16 *)(ExtraStuffPointer + 2) > 0 )
              Flagsa |= *(unsigned __int16 *)(ExtraStuffPointer + 2) << 18;
          }
          else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 && *(_BYTE *)(v10 + 11) )
          {
            Flagsa |= *(unsigned __int8 *)(v10 + 11) << 18;
          }
          v54 = (_DWORD *)(a1 + 124);
          if ( *(_DWORD *)(a1 + 124) )
          {
            *(_BYTE *)(v10 + 11) = *(_BYTE *)(v10 + 8) ^ *(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10);
            *(_DWORD *)(v10 + 8) ^= *(_DWORD *)(a1 + 136);
          }
          v71 = 0LL;
          v31 = a4;
          Heap = (char *)RtlAllocateHeap((PVOID)a1, Flagsa, a4);
          if ( Heap )
          {
            v56 = (__int64)(Heap - 16);
            _m_prefetchw(Heap - 16);
            if ( *(Heap - 1) == 5 )
              v56 -= 16LL * *(unsigned __int8 *)(v56 + 14);
            v78[1] = (PVOID)v56;
            if ( *v54 )
            {
              *(_DWORD *)(v56 + 8) ^= *(_DWORD *)(a1 + 136);
              if ( *(_BYTE *)(v56 + 11) != (*(_BYTE *)(v56 + 8) ^ (unsigned __int8)(*(_BYTE *)(v56 + 9) ^ *(_BYTE *)(v56 + 10))) )
                RtlpAnalyzeHeapFailure(a1, v56);
            }
            if ( (*(_BYTE *)(v56 + 10) & 2) != 0 )
            {
              v57 = (_OWORD *)RtlpGetExtraStuffPointer(v56);
              v74 = v57;
              if ( *v54 )
              {
                *(_DWORD *)(v10 + 8) ^= *(_DWORD *)(a1 + 136);
                if ( *(_BYTE *)(v10 + 11) != (*(_BYTE *)(v10 + 8) ^ (unsigned __int8)(*(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10))) )
                {
                  RtlpAnalyzeHeapFailure(a1, v10);
                  v57 = v74;
                }
              }
              if ( (*(_BYTE *)(v10 + 10) & 2) != 0 )
              {
                v58 = RtlpGetExtraStuffPointer(v10);
                *(_QWORD *)(v59 + 8) = *(_QWORD *)(v58 + 8);
              }
              else
              {
                *v57 = 0LL;
              }
              if ( *(_DWORD *)(a1 + 124) )
              {
                *(_BYTE *)(v10 + 11) = *(_BYTE *)(v10 + 8) ^ *(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10);
                *(_DWORD *)(v10 + 8) ^= *(_DWORD *)(a1 + 136);
              }
            }
            if ( *v54 )
            {
              *(_BYTE *)(v56 + 11) = *(_BYTE *)(v56 + 8) ^ *(_BYTE *)(v56 + 9) ^ *(_BYTE *)(v56 + 10);
              *(_DWORD *)(v56 + 8) ^= *(_DWORD *)(a1 + 136);
            }
            v71 = 0LL;
            if ( v63 )
            {
              RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
              v63 = 0;
              Flagsa &= ~1u;
            }
            v60 = v68;
            if ( a4 < v68 )
              v60 = a4;
            memmove(Heap, Src, v60);
            RtlFreeHeap((PVOID)a1, Flagsa, Src);
            v31 = a4;
          }
          v79 = Src;
          Src = Heap;
          goto LABEL_187;
        }
        Src = 0LL;
      }
      goto LABEL_186;
    }
    if ( (v65 >> 4) + 1 == v69 )
    {
      v66 = (v65 >> 4) + 1;
      v65 += 16LL;
    }
    if ( *v35 == 4 )
    {
      *(_WORD *)(v10 + 8) = v65 - a4;
    }
    else if ( (*(_BYTE *)(v10 + 10) & 2) != 0 )
    {
      v90 = (_OWORD *)(v10 + 16LL * *(unsigned __int16 *)(v10 + 8) - 16);
      v73 = v10 + 16 * v66 - 16;
      *(_OWORD *)v73 = *v90;
      NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
      if ( (NtGlobalFlag & 0x800) != 0 )
        *(_WORD *)(v73 + 2) = RtlpUpdateTagEntry(a1, *(unsigned __int16 *)(v73 + 2), v69, v66, 4);
    }
    else
    {
      v81 = NtCurrentPeb()->NtGlobalFlag;
      if ( (v81 & 0x800) != 0 )
        *(_BYTE *)(v10 + 11) = RtlpUpdateTagEntry(
                                 a1,
                                 *(unsigned __int8 *)(v10 + 11),
                                 *(unsigned __int16 *)(v10 + 8),
                                 v66,
                                 4);
    }
    if ( a4 > v68 )
    {
      if ( (Flagsa & 8) == 0 )
      {
        if ( (*(_BYTE *)(a1 + 112) & 0x40) == 0 )
          goto LABEL_130;
        v44 = v68 & 3;
        v83 = v44;
        if ( (v68 & 3) != 0 )
        {
          v44 = 4 - v44;
          v83 = v44;
        }
        if ( a4 <= v44 + v68 )
          goto LABEL_130;
        if ( ((a4 - v44 - v68) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
          goto LABEL_130;
        v45 = v44 + v68 + v10 + 16;
        v84 = v45;
        v46 = ((a4 - v44 - v68) & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
        v77 = v46;
        if ( !v46 )
          goto LABEL_130;
        if ( (v45 & 4) != 0 )
        {
          *(_DWORD *)v45 = -1163005939;
          v77 = --v46;
          if ( !v46 )
            goto LABEL_130;
          v45 += 4LL;
          v84 = v45;
        }
        memset64((void *)v45, 0xBAADF00DBAADF00DuLL, v46 >> 1);
        if ( (v46 & 1) != 0 )
          *(_DWORD *)(v45 + 4 * v46 - 4) = -1163005939;
        goto LABEL_130;
      }
      memset(&Src[v68], 0, a4 - v68);
    }
LABEL_130:
    if ( (*(_BYTE *)(a1 + 112) & 0x20) != 0 )
      *(__m128i *)(v10 + a4 + 16) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
    if ( v66 != v69 )
    {
      v47 = *(_BYTE *)(v10 + 10) & 0xFE;
      if ( *v72 == 4 )
      {
        v82 = NtCurrentPeb()->NtGlobalFlag;
        if ( (v82 & 0x800) != 0 )
          *(_WORD *)(v10 - 30) = RtlpUpdateTagEntry(a1, *(unsigned __int16 *)(v10 - 30), v69, v66, 5);
        v78[0] = (PVOID)(v10 + v65 - 48);
        v76 = 16 * v69 - v65;
        v75 = RtlpSecMemFreeVirtualMemory(v65, v78, &v76, 0x4000u);
        if ( v75 >= 0 )
        {
          *(_QWORD *)(v10 - 16) -= v76;
        }
        else
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint("Unable to release memory at %p for %Ix bytes - Status == %x\n", v78[0], v76, v75);
          RtlpBreakPointHeap();
        }
      }
      else
      {
        v48 = *(unsigned __int16 *)(v10 + 8) - (unsigned __int64)(unsigned __int16)v66;
        v86 = v48;
        *(_WORD *)(v10 + 8) = v66;
        v49 = *(_DWORD *)(a1 + 112) & 0x40;
        if ( *(_BYTE *)(v10 + 14) )
          v50 = (v10 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)*(unsigned __int8 *)(v10 + 14) << 16) + 0x10000;
        else
          v50 = a1;
        v85 = v50;
        RtlpCreateSplitBlock(a1, v50, v10 + 16 * v66, v47, v49 != 0, v66, v48);
      }
    }
    if ( *v72 != 4 )
    {
      v51 = v65 - a4;
      if ( v65 - a4 >= 0x3F )
      {
        *(_QWORD *)(v10 + 16 * v66) = v51;
        *(_BYTE *)(v10 + 15) = 63;
      }
      else
      {
        *(_BYTE *)(v10 + 15) = v51;
      }
    }
    goto LABEL_186;
  }
  if ( (a2 & 0x10) != 0 )
    return 0LL;
  v14 = (int *)(v11 + 8);
  v15 = v11 >> 4;
  v16 = RtlpLFHKey ^ (v11 >> 4) ^ a1 ^ *(_DWORD *)(v11 + 8);
  if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)((v11 >> 4) ^ a1 ^ *(_WORD *)(v11 + 8)) )
    v17 = 0LL;
  else
    v17 = *(_QWORD *)(v11 - (v16 >> 12));
  v18 = *(unsigned __int16 *)(v17 + 36);
  if ( *v13 == 5 )
  {
    v19 = *((unsigned __int16 *)v64 + 6) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
  }
  else if ( (*v13 & 0x40) != 0 )
  {
    v19 = *(unsigned __int16 *)&v64[16 * (*v13 & 0x3F) + 12];
  }
  else if ( (*v13 & 0x3F) == 0x3F )
  {
    if ( *v13 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v22 = *v14;
        v87 = v22;
        if ( (v22 & *(_DWORD *)(a1 + 124)) != 0 )
          v87 = *(_DWORD *)(a1 + 136) ^ v22;
        v21 = v87;
      }
      else
      {
        v21 = *(_WORD *)v14;
      }
    }
    else
    {
      if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(v15 ^ a1 ^ *(_WORD *)v14) )
        v20 = 0LL;
      else
        v20 = *(_QWORD *)&v64[-(((unsigned int)RtlpLFHKey ^ (unsigned int)v15 ^ (unsigned int)a1 ^ *v14) >> 12)];
      v21 = *(_WORD *)(v20 + 36);
    }
    v19 = *(_QWORD *)&v64[16 * v21];
  }
  else
  {
    v19 = *v13 & 0x3F;
  }
  v23 = 16 * v18 - v19;
  v67 = 16 * v18 - v19;
  v24 = RtlAllocateHeap((PVOID)a1, a2 & 0xC003FFFF, a4);
  v70 = v24;
  if ( v24 )
  {
    if ( a4 < v23 )
      v23 = a4;
    memmove(v24, Src, v23);
    RtlFreeHeap((PVOID)a1, a2 & 0xC003FFFF, Src);
  }
  v25 = NtCurrentPeb()->SharedData;
  if ( v25 && *v25 )
    v26 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v26 = 2147353472LL;
  if ( *(_BYTE *)v26 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( v70 )
      RtlpLogHeapReallocateEvent(a1, (_DWORD)v70, (_DWORD)Src, v67, a4, 2);
  }
  return (char *)v70;
}
