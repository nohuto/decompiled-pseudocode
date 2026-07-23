/*
 * XREFs of @RtlpReAllocateHeap@16 @ 0x4B2C2870
 * Callers:
 *     _RtlpReAllocateHeapInternal@24 @ 0x4B2C2710 (_RtlpReAllocateHeapInternal@24.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _RtlpSecMemFreeVirtualMemory@16 @ 0x4B2AFA7A (_RtlpSecMemFreeVirtualMemory@16.c)
 *     _RtlpGrowBlockInPlace@20 @ 0x4B2B1340 (_RtlpGrowBlockInPlace@20.c)
 *     @RtlpCreateSplitBlock@28 @ 0x4B2B16CC (@RtlpCreateSplitBlock@28.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     @RtlpReAllocateHeap@16 @ 0x4B2C2870 (@RtlpReAllocateHeap@16.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _RtlpGetExtraStuffPointer@4 @ 0x4B2E3AB9 (_RtlpGetExtraStuffPointer@4.c)
 *     @RtlpUpdateHeapRates@8 @ 0x4B2E9CBB (@RtlpUpdateHeapRates@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlFillMemoryUlong@12 @ 0x4B308020 (_RtlFillMemoryUlong@12.c)
 *     _RtlpUpdateTagEntry@20 @ 0x4B35995E (_RtlpUpdateTagEntry@20.c)
 *     _RtlDebugReAllocateHeap@16 @ 0x4B35FC56 (_RtlDebugReAllocateHeap@16.c)
 *     _RtlpAnalyzeHeapFailure@12 @ 0x4B36D496 (_RtlpAnalyzeHeapFailure@12.c)
 *     _RtlpLogHeapReallocateEvent@24 @ 0x4B36F15A (_RtlpLogHeapReallocateEvent@24.c)
 *     _RtlpHeapExceptionFilter@8 @ 0x4B375DFF (_RtlpHeapExceptionFilter@8.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 */

char *__fastcall RtlpReAllocateHeap(void *a1, ULONG a2, char *Src, unsigned int Size)
{
  unsigned int v4; // edi
  int v5; // ebx
  struct _TEB *v6; // esi
  unsigned int v8; // esi
  char *v9; // ecx
  unsigned int v10; // edx
  int v11; // eax
  int v12; // ebx
  char v13; // dl
  int v14; // ecx
  unsigned int v15; // edx
  int v16; // eax
  unsigned int v17; // esi
  PVOID Heap; // eax
  _DWORD *SharedData; // eax
  int v20; // eax
  void *v21; // esi
  ULONG v22; // edx
  struct _TEB *v23; // esi
  int v24; // ecx
  unsigned int v25; // eax
  int v26; // ecx
  struct _TEB *v27; // edx
  _DWORD *i; // eax
  char v29; // ah
  unsigned int v30; // edx
  int v31; // ecx
  unsigned int v32; // edx
  __int16 v33; // di
  int v34; // ecx
  unsigned int v35; // ecx
  int v36; // eax
  int v37; // ecx
  unsigned int v38; // eax
  bool v39; // zf
  int v40; // eax
  _WORD *v41; // ecx
  unsigned int v42; // eax
  unsigned int v43; // ecx
  unsigned int v44; // edi
  _DWORD *v45; // ecx
  unsigned int v46; // eax
  int v47; // ecx
  unsigned int v48; // eax
  unsigned int v49; // esi
  int v50; // ecx
  int v51; // edx
  unsigned __int8 v52; // al
  unsigned int v53; // eax
  ULONG v54; // ecx
  _BYTE *v55; // edi
  char v56; // al
  int v57; // eax
  int v58; // edx
  unsigned __int8 v59; // al
  char *v60; // eax
  char *v61; // edi
  __int64 ExtraStuffPointer; // rax
  int v63; // ecx
  unsigned int v64; // eax
  char *v65; // edi
  _DWORD *v66; // eax
  int v67; // eax
  _DWORD *v68; // ecx
  SIZE_T v69; // [esp-4h] [ebp-ECh]
  size_t v70; // [esp-4h] [ebp-ECh]
  size_t v71; // [esp-4h] [ebp-ECh]
  struct _TEB *v72; // [esp+3Ch] [ebp-ACh]
  struct _TEB *v73; // [esp+40h] [ebp-A8h]
  char v74; // [esp+48h] [ebp-A0h]
  NTSTATUS v75; // [esp+50h] [ebp-98h]
  char *v76; // [esp+64h] [ebp-84h]
  _DWORD *v77; // [esp+70h] [ebp-78h]
  PVOID v78; // [esp+74h] [ebp-74h] BYREF
  int v79; // [esp+78h] [ebp-70h]
  ULONG_PTR v80; // [esp+7Ch] [ebp-6Ch] BYREF
  __int16 v81; // [esp+84h] [ebp-64h]
  __int16 v82; // [esp+86h] [ebp-62h]
  unsigned __int8 v83; // [esp+89h] [ebp-5Fh]
  unsigned __int8 v84; // [esp+8Ah] [ebp-5Eh]
  char v85; // [esp+8Bh] [ebp-5Dh]
  _BYTE *v86; // [esp+8Ch] [ebp-5Ch]
  _DWORD *v87; // [esp+90h] [ebp-58h]
  int v88; // [esp+94h] [ebp-54h]
  int v89; // [esp+98h] [ebp-50h]
  unsigned int v90; // [esp+9Ch] [ebp-4Ch]
  PVOID HeapHandle; // [esp+A0h] [ebp-48h]
  void *v92; // [esp+A4h] [ebp-44h]
  char v93; // [esp+ABh] [ebp-3Dh]
  _DWORD *v94; // [esp+ACh] [ebp-3Ch]
  unsigned int v95; // [esp+B0h] [ebp-38h]
  unsigned int v96; // [esp+B4h] [ebp-34h]
  unsigned int v97; // [esp+B8h] [ebp-30h]
  unsigned int v98; // [esp+BCh] [ebp-2Ch]
  unsigned int v99; // [esp+C0h] [ebp-28h]
  char *v100; // [esp+C4h] [ebp-24h]
  char v101; // [esp+CBh] [ebp-1Dh]
  ULONG Flags; // [esp+CCh] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+D0h] [ebp-18h]

  Flags = a2;
  v4 = (unsigned int)a1;
  HeapHandle = a1;
  v5 = (int)a1;
  v88 = (int)a1;
  v86 = 0;
  v101 = 0;
  v76 = 0;
  if ( !Src )
  {
    NtCurrentTeb()->LastStatusValue = 0;
    v6 = NtCurrentTeb();
    v6->LastErrorValue = RtlNtStatusToDosError(0);
    return 0;
  }
  v8 = (unsigned int)(Src - 8);
  v9 = Src - 8;
  if ( *(Src - 1) == 5 )
    v9 -= 8 * *(unsigned __int8 *)(v8 + 6);
  v100 = v9;
  if ( *(_BYTE *)(v4 + 234) == 2 && *(_DWORD *)(v4 + 228) && v9[7] < 0 )
  {
    if ( (a2 & 0x10) != 0 )
      return 0;
    v10 = v4 ^ RtlpLFHKey ^ ((unsigned int)v9 >> 3) ^ *(_DWORD *)v9;
    if ( (_WORD)v10 )
      v11 = 0;
    else
      v11 = *(_DWORD *)&v9[-(v10 >> 13)];
    v12 = *(unsigned __int16 *)(v11 + 20);
    v13 = v9[7];
    if ( v13 == 5 )
    {
      v14 = *(unsigned __int16 *)(v4 + 84) ^ *((unsigned __int16 *)v9 + 2);
    }
    else if ( (v13 & 0x40) != 0 )
    {
      v14 = *(unsigned __int16 *)&v9[8 * (v13 & 0x3F) + 4];
    }
    else if ( (v13 & 0x3F) == 0x3F )
    {
      if ( v13 >= 0 )
      {
        if ( *(_DWORD *)(v4 + 76) )
        {
          v16 = *(_DWORD *)v9;
          if ( (*(_DWORD *)v9 & *(_DWORD *)(v4 + 76)) != 0 )
            v16 ^= *(_DWORD *)(v4 + 80);
        }
        else
        {
          LOWORD(v16) = *(_WORD *)v9;
        }
      }
      else
      {
        v15 = v4 ^ RtlpLFHKey ^ ((unsigned int)v9 >> 3) ^ *(_DWORD *)v9;
        if ( (_WORD)v15 )
          LOWORD(v16) = MEMORY[0x14];
        else
          LOWORD(v16) = *(_WORD *)(*(_DWORD *)&v9[-(v15 >> 13)] + 20);
      }
      v14 = *(_DWORD *)&v9[8 * (unsigned __int16)v16 - 4];
    }
    else
    {
      v14 = v13 & 0x3F;
    }
    v17 = 8 * v12 - v14;
    v97 = v17;
    Flags &= 0xC003FFFF;
    LODWORD(v69) = Size;
    Heap = RtlAllocateHeap(HeapHandle, Flags, v69);
    v92 = Heap;
    ms_exc.registration.TryLevel = -2;
    if ( Heap )
    {
      if ( Size < v17 )
        v17 = Size;
      LODWORD(v70) = v17;
      memmove(Heap, Src, v70);
      RtlFreeHeap(HeapHandle, Flags, Src);
    }
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v20 = (int)NtCurrentPeb()->SharedData + 550;
    else
      v20 = 2147353472;
    if ( !*(_BYTE *)v20 || (NtCurrentPeb()->TracingFlags & 1) == 0 )
      return (char *)v92;
    v21 = v92;
    if ( v92 )
    {
      if ( (Flags & 0x800000) == 0 )
        RtlpLogHeapReallocateEvent(Src, v97, Size, 2);
    }
    return (char *)v21;
  }
  if ( v9 == (char *)v4 )
  {
    RtlpLogHeapFailure(v9, 0, 0, 0);
    return 0;
  }
  v22 = Flags | *(_DWORD *)(v4 + 68);
  Flags = v22;
  if ( (v22 & 0x61000000) != 0 && (v22 & 0x10000000) == 0 )
    return (char *)RtlDebugReAllocateHeap(v4, Src, Size);
  if ( Size > 0x7FFFFFFF )
  {
    NtCurrentTeb()->LastStatusValue = -1073741801;
    v23 = NtCurrentTeb();
    v23->LastErrorValue = RtlNtStatusToDosError(-1073741801);
    return 0;
  }
  v24 = Size;
  if ( !Size )
    v24 = 1;
  v25 = *(_DWORD *)(v4 + 152) & (v24 + *(_DWORD *)(v4 + 148));
  if ( v25 < 0x10 )
    v25 = 16;
  v98 = v25;
  v97 = 0;
  ms_exc.registration.TryLevel = 1;
  if ( (Flags & 1) != 0 )
  {
    v99 = 1;
  }
  else
  {
    v26 = *(_DWORD *)(v4 + 200);
    v27 = NtCurrentTeb();
    if ( _interlockedbittestandreset((volatile signed __int32 *)(v26 + 4), 0) )
    {
      *(_DWORD *)(v26 + 12) = v27->ClientId.UniqueThread;
      *(_DWORD *)(v26 + 8) = 1;
LABEL_59:
      v79 = 1;
      ++*(_DWORD *)(v4 + 532);
      v99 = 1;
      v93 = 1;
      v101 = 1;
      Flags ^= 1u;
      goto LABEL_64;
    }
    if ( *(void **)(v26 + 12) == v27->ClientId.UniqueThread )
    {
      ++*(_DWORD *)(v26 + 8);
      goto LABEL_59;
    }
    v79 = 0;
    if ( byte_4B3A5DA8 )
    {
      v93 = 0;
      NtCurrentTeb()->LastStatusValue = -1073741420;
      v73 = NtCurrentTeb();
      v73->LastErrorValue = RtlNtStatusToDosError(-1073741420);
      goto LABEL_193;
    }
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(v4 + 200));
    v99 = 1;
    v4 = (unsigned int)HeapHandle;
    RtlpUpdateHeapRates(HeapHandle, 1);
    v93 = 1;
    v101 = 1;
    Flags ^= 1u;
  }
LABEL_64:
  ms_exc.registration.TryLevel = 2;
  if ( *(_BYTE *)(v8 + 7) == 5 )
    v8 -= 8 * *(unsigned __int8 *)(v8 + 6);
  v100 = (char *)v8;
  if ( *(_DWORD *)(v4 + 76) )
  {
    *(_DWORD *)v8 ^= *(_DWORD *)(v4 + 80);
    if ( *(_BYTE *)(v8 + 3) != (*(_BYTE *)v8 ^ (unsigned __int8)(*(_BYTE *)(v8 + 1) ^ *(_BYTE *)(v8 + 2))) )
      RtlpAnalyzeHeapFailure(v8);
  }
  v86 = (_BYTE *)v8;
  for ( i = *(_DWORD **)(v4 + 180); (unsigned int)*(unsigned __int16 *)v8 >= i[1] && *i; i = (_DWORD *)*i )
    ;
  if ( (Flags & 0x3C000100) != 0 || *(_DWORD *)(v5 + 188) || (*(_BYTE *)(v8 + 2) & 2) != 0 )
    v98 += 8;
  v94 = (_DWORD *)(v8 + 7);
  v29 = *(_BYTE *)(v8 + 7);
  if ( (v29 & 0x3F) != 0 )
  {
    if ( v29 == 4 )
    {
      v30 = v8 - 24;
      if ( *(_DWORD *)(v5 + 76) )
      {
        v31 = *(_DWORD *)v8;
        v89 = v31;
        if ( (v31 & *(_DWORD *)(v5 + 76)) != 0 )
        {
          v31 ^= *(_DWORD *)(v5 + 80);
          v89 = v31;
        }
        v82 = v31;
        v8 = (unsigned int)v100;
      }
      else
      {
        LOWORD(v31) = *(_WORD *)v8;
        v82 = *(_WORD *)v8;
      }
      v97 = *(_DWORD *)(v30 + 16) - (unsigned __int16)v31;
      v32 = (v97 + *(unsigned __int16 *)v8) >> 3;
      v96 = v32;
      v98 = (v98 + 4119) & 0xFFFFF000;
      goto LABEL_109;
    }
    v33 = *(_WORD *)v8;
    v32 = *(unsigned __int16 *)v8;
    v90 = v32;
    v96 = v32;
    if ( v29 == 5 )
    {
      v34 = *(unsigned __int16 *)(v5 + 84) ^ *(unsigned __int16 *)(v8 + 4);
    }
    else if ( (v29 & 0x40) != 0 )
    {
      v34 = *(unsigned __int16 *)(v8 + 8 * (v29 & 0x3F) + 4);
    }
    else if ( (v29 & 0x3F) == 0x3F )
    {
      if ( v29 >= 0 )
      {
        if ( *(_DWORD *)(v5 + 76) )
        {
          v37 = *(_DWORD *)v8;
          if ( (*(_DWORD *)v8 & *(_DWORD *)(v5 + 76)) != 0 )
            v37 ^= *(_DWORD *)(v5 + 80);
          v81 = v37;
          v8 = (unsigned int)v100;
          v32 = v96;
          v90 = v96;
        }
        else
        {
          LOWORD(v37) = v33;
          v81 = v33;
        }
        v37 = (unsigned __int16)v37;
      }
      else
      {
        v35 = v5 ^ RtlpLFHKey ^ *(_DWORD *)v8 ^ (v8 >> 3);
        if ( (_WORD)v35 )
          v36 = 0;
        else
          v36 = *(_DWORD *)(v8 - (v35 >> 13));
        v37 = *(unsigned __int16 *)(v36 + 20);
        v8 = (unsigned int)v100;
        v32 = v96;
        v90 = v96;
      }
      v34 = *(_DWORD *)(v8 + 8 * v37 - 4);
    }
    else
    {
      v34 = v29 & 0x3F;
    }
    HIDWORD(v80) = v34;
    v97 = 8 * v32 - v34;
    if ( v32 < *(unsigned __int16 *)(v5 + 240) )
    {
      v38 = v32 >> 3;
      LOBYTE(v32) = v32 & 7;
      v90 = v32;
      v39 = ((unsigned __int8)(v99 << v32) & *(_BYTE *)(v38 + v5 + 242)) == 0;
      v32 = v96;
      if ( !v39 )
      {
        v8 = (unsigned int)v100;
LABEL_109:
        v90 = v32;
        goto LABEL_110;
      }
      v40 = *(_DWORD *)(v5 + 236);
      v90 = v96;
      v41 = (_WORD *)(v40 + 2 * v96);
      v42 = (unsigned __int16)*v41;
      if ( v42 > 1 )
        *v41 = v42 - 1;
      v8 = (unsigned int)v100;
    }
LABEL_110:
    v43 = v98 >> 3;
    v44 = v98 >> 3;
    v95 = v98 >> 3;
    if ( v98 >> 3 > v32 )
    {
      if ( *(_BYTE *)v94 == 4 || !RtlpGrowBlockInPlace(v5, Flags, v8, Size, v98 >> 3) )
      {
        if ( (Flags & 0x10) != 0 )
        {
          Src = 0;
        }
        else
        {
          v54 = Flags & 0xC003FFFF;
          Flags &= 0xC003FFFF;
          v55 = (_BYTE *)(v8 + 2);
          v56 = *(_BYTE *)(v8 + 2);
          if ( (v56 & 2) != 0 )
          {
            Flags = v54 & 0xFFFFF1FF | (16 * (v56 & 0xE0 | 0x10));
            ms_exc.registration.TryLevel = 3;
            v57 = *(unsigned __int16 *)(RtlpGetExtraStuffPointer(v8) + 2);
            if ( (__int16)v57 > 0 )
              Flags = v58 | (v57 << 18);
            ms_exc.registration.TryLevel = 2;
          }
          else
          {
            v8 = (unsigned int)v100;
            if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
            {
              v59 = v100[3];
              v84 = v59;
              if ( v59 )
              {
                v83 = v59;
                Flags = v54 | (v59 << 18);
              }
            }
          }
          v94 = (_DWORD *)(v5 + 76);
          if ( *(_DWORD *)(v5 + 76) )
          {
            *(_BYTE *)(v8 + 3) = *v55 ^ *(_BYTE *)v8 ^ *(_BYTE *)(v8 + 1);
            *(_DWORD *)v8 ^= *(_DWORD *)(v5 + 80);
          }
          v86 = 0;
          LODWORD(v69) = Size;
          v60 = (char *)RtlAllocateHeap(HeapHandle, Flags, v69);
          v92 = v60;
          ms_exc.registration.TryLevel = 2;
          if ( v60 )
          {
            v61 = v60 - 8;
            if ( *(v60 - 1) == 5 )
              v61 -= 8 * (unsigned __int8)v61[6];
            if ( *v94 )
            {
              *(_DWORD *)v61 ^= *(_DWORD *)(v5 + 80);
              if ( v61[3] != ((unsigned __int8)*v61 ^ (unsigned __int8)(v61[1] ^ v61[2])) )
                RtlpAnalyzeHeapFailure(v61);
            }
            v86 = v61;
            if ( (v61[2] & 2) != 0 )
            {
              ExtraStuffPointer = RtlpGetExtraStuffPointer(v61);
              v87 = (_DWORD *)ExtraStuffPointer;
              if ( *(_DWORD *)HIDWORD(ExtraStuffPointer) )
              {
                v63 = *(_DWORD *)(v5 + 80);
                *(_DWORD *)v8 ^= v63;
                LOBYTE(v63) = *(_BYTE *)v8 ^ *(_BYTE *)(v8 + 1) ^ *(_BYTE *)(v8 + 2);
                if ( *(_BYTE *)(v8 + 3) != (_BYTE)v63 )
                {
                  RtlpAnalyzeHeapFailure(v63);
                  LODWORD(ExtraStuffPointer) = v87;
                }
              }
              ms_exc.registration.TryLevel = 5;
              if ( (*(_BYTE *)(v8 + 2) & 2) != 0 )
              {
                v87[1] = *(_DWORD *)(RtlpGetExtraStuffPointer(v8) + 4);
              }
              else
              {
                *(_DWORD *)ExtraStuffPointer = 0;
                *(_DWORD *)(ExtraStuffPointer + 4) = 0;
              }
              ms_exc.registration.TryLevel = 2;
              if ( *(_DWORD *)(v5 + 76) )
              {
                *(_BYTE *)(v8 + 3) = *(_BYTE *)v8 ^ *(_BYTE *)(v8 + 1) ^ *(_BYTE *)(v8 + 2);
                *(_DWORD *)v8 ^= *(_DWORD *)(v5 + 80);
              }
            }
            if ( *v94 )
            {
              v61[3] = *v61 ^ v61[1] ^ v61[2];
              *(_DWORD *)v61 ^= *(_DWORD *)(v5 + 80);
            }
            v86 = 0;
            if ( v101 )
            {
              RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(v5 + 200));
              v101 = 0;
              Flags &= ~1u;
            }
            v64 = Size;
            if ( Size >= v97 )
              v64 = v97;
            LODWORD(v71) = v64;
            v65 = (char *)v92;
            memcpy(v92, Src, v71);
            RtlFreeHeap(HeapHandle, Flags, Src);
          }
          else
          {
            v65 = 0;
          }
          v76 = Src;
          Src = v65;
        }
      }
      goto LABEL_191;
    }
    if ( v43 + 1 == v32 )
    {
      v44 = v43 + 1;
      v95 = v43 + 1;
      v98 += 8;
      ++v43;
    }
    if ( *(_BYTE *)v94 == 4 )
    {
      *(_WORD *)v8 = v98 - Size;
      goto LABEL_122;
    }
    if ( (*(_BYTE *)(v8 + 2) & 2) != 0 )
    {
      v77 = (_DWORD *)(v8 + 8 * (*(unsigned __int16 *)v8 - 1));
      v45 = (_DWORD *)(v8 + 8 * (v43 - 1));
      v87 = v45;
      *v45 = *v77;
      v45[1] = v77[1];
      if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
      {
        v44 = v95;
        v90 = v96;
        *((_WORD *)v87 + 1) = RtlpUpdateTagEntry(v96, v95, 4);
LABEL_121:
        v8 = (unsigned int)v100;
LABEL_122:
        v46 = Size;
        if ( Size > v97 )
        {
          if ( (Flags & 8) != 0 )
          {
            LODWORD(v69) = Size - v97;
            memset(&Src[v97], 0, v69);
          }
          else
          {
            if ( (*(_BYTE *)(v5 + 64) & 0x40) == 0 )
              goto LABEL_132;
            v47 = v97 & 3;
            if ( (v97 & 3) != 0 )
            {
              v47 = 4 - v47;
              v46 = Size;
            }
            v5 = v88;
            if ( v46 <= v47 + v97 )
              goto LABEL_132;
            v48 = (v46 - v47 - v97) & 0xFFFFFFFC;
            if ( v48 )
              RtlFillMemoryUlong((PVOID)(v8 + v47 + v97 + 8), v48 | 0xBAADF00D00000000uLL, HIDWORD(v69));
          }
          v46 = Size;
        }
LABEL_132:
        if ( (*(_BYTE *)(v5 + 64) & 0x20) != 0 )
        {
          *(_DWORD *)(v8 + v46 + 8) = -1414812757;
          *(_DWORD *)(v8 + v46 + 12) = -1414812757;
        }
        if ( v44 != v90 )
        {
          v74 = *(_BYTE *)(v8 + 2) & 0xFE;
          if ( *(_BYTE *)v94 == 4 )
          {
            v49 = v8 - 24;
            v44 = v95;
            if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
              *(_WORD *)(v49 + 10) = RtlpUpdateTagEntry(v96, v95, 5);
            v78 = (PVOID)(v49 + v98);
            LODWORD(v80) = 8 * v96 - v98;
            v75 = RtlpSecMemFreeVirtualMemory(v98, &v78, &v80, 0x4000u);
            if ( v75 >= 0 )
            {
              *(_DWORD *)(v49 + 16) -= v80;
              v8 = (unsigned int)v100;
            }
            else
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint("Unable to release memory at %p for %Ix bytes - Status == %x\n", v78, (_DWORD)v80, v75);
              if ( NtCurrentPeb()->BeingDebugged )
              {
                RtlpHeapInvalidBadAddress = 0;
                __debugbreak();
                RtlpHeapInvalidBreakPoint = 0;
              }
              v8 = (unsigned int)v100;
              v44 = v95;
            }
          }
          else
          {
            v50 = *(unsigned __int16 *)v8 - (unsigned __int16)v44;
            *(_WORD *)v8 = v44;
            v51 = *(_DWORD *)(v5 + 64) & 0x40;
            v52 = *(_BYTE *)(v8 + 6);
            if ( v52 )
              v99 = (v8 & 0xFFFF0000) + ((v99 - v52) << 16);
            else
              v99 = v5;
            RtlpCreateSplitBlock((_DWORD *)v5, v99, (unsigned __int16 *)(v8 + 8 * v44), v74, v51 != 0, v44, v50);
          }
        }
        if ( *(_BYTE *)(v8 + 7) != 4 )
        {
          v53 = v98 - Size;
          v94 = (_DWORD *)(v98 - Size);
          if ( v98 - Size >= 0x3F )
          {
            *(_DWORD *)(v8 + 8 * v44 - 4) = v53;
            *(_BYTE *)(v8 + 7) = 63;
          }
          else
          {
            *(_BYTE *)(v8 + 7) = v53;
          }
        }
        goto LABEL_191;
      }
    }
    else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
    {
      v8 = (unsigned int)v100;
      v85 = v100[3];
      v44 = v95;
      v100[3] = RtlpUpdateTagEntry(*(unsigned __int16 *)v100, v95, 4);
      v90 = v96;
      goto LABEL_122;
    }
    v90 = v96;
    v44 = v95;
    goto LABEL_121;
  }
  NtCurrentTeb()->LastStatusValue = -1073741811;
  v72 = NtCurrentTeb();
  v72->LastErrorValue = RtlNtStatusToDosError(-1073741811);
LABEL_191:
  ms_exc.registration.TryLevel = 1;
LABEL_193:
  ms_exc.registration.TryLevel = -2;
  v68 = v86;
  if ( v86 && *(_DWORD *)(v5 + 76) )
  {
    v86[3] = *v86 ^ v86[1] ^ v86[2];
    *v68 ^= *(_DWORD *)(v5 + 80);
  }
  if ( v101 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(v5 + 200));
  v66 = NtCurrentPeb()->SharedData;
  if ( v66 && *v66 )
    v67 = (int)NtCurrentPeb()->SharedData + 550;
  else
    v67 = 2147353472;
  if ( !*(_BYTE *)v67 || (NtCurrentPeb()->TracingFlags & 1) == 0 )
    return Src;
  v21 = Src;
  if ( Src && (Flags & 0x800000) == 0 )
    RtlpLogHeapReallocateEvent(v76, v97, Size, 3);
  return (char *)v21;
}
