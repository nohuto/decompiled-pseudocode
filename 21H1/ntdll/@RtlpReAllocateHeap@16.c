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

char *__fastcall RtlpReAllocateHeap(unsigned int a1, unsigned int a2, char *Src, size_t Size)
{
  unsigned int v4; // edi
  unsigned int v5; // ebx
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
  size_t v17; // esi
  void *Heap; // eax
  _DWORD *SharedData; // eax
  int v20; // eax
  char *v21; // esi
  unsigned int v22; // edx
  struct _TEB *v23; // esi
  size_t v24; // ecx
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
  size_t v53; // eax
  unsigned int v54; // ecx
  _BYTE *v55; // edi
  char v56; // al
  int v57; // eax
  int v58; // edx
  unsigned __int8 v59; // al
  char *v60; // eax
  char *v61; // edi
  __int64 ExtraStuffPointer; // rax
  int v63; // ecx
  size_t v64; // eax
  char *v65; // edi
  _DWORD *v66; // eax
  int v67; // eax
  _DWORD *v68; // ecx
  struct _TEB *v69; // [esp+3Ch] [ebp-ACh]
  struct _TEB *v70; // [esp+40h] [ebp-A8h]
  char v71; // [esp+48h] [ebp-A0h]
  int v72; // [esp+50h] [ebp-98h]
  char *v73; // [esp+64h] [ebp-84h]
  _DWORD *v74; // [esp+70h] [ebp-78h]
  const void *v75; // [esp+74h] [ebp-74h] BYREF
  int v76; // [esp+78h] [ebp-70h]
  _DWORD v77[2]; // [esp+7Ch] [ebp-6Ch] BYREF
  __int16 v78; // [esp+84h] [ebp-64h]
  __int16 v79; // [esp+86h] [ebp-62h]
  unsigned __int8 v80; // [esp+89h] [ebp-5Fh]
  unsigned __int8 v81; // [esp+8Ah] [ebp-5Eh]
  char v82; // [esp+8Bh] [ebp-5Dh]
  _BYTE *v83; // [esp+8Ch] [ebp-5Ch]
  _DWORD *v84; // [esp+90h] [ebp-58h]
  unsigned int v85; // [esp+94h] [ebp-54h]
  int v86; // [esp+98h] [ebp-50h]
  unsigned int v87; // [esp+9Ch] [ebp-4Ch]
  unsigned int v88; // [esp+A0h] [ebp-48h]
  void *v89; // [esp+A4h] [ebp-44h]
  char v90; // [esp+ABh] [ebp-3Dh]
  _DWORD *v91; // [esp+ACh] [ebp-3Ch]
  unsigned int v92; // [esp+B0h] [ebp-38h]
  unsigned int v93; // [esp+B4h] [ebp-34h]
  unsigned int v94; // [esp+B8h] [ebp-30h]
  unsigned int v95; // [esp+BCh] [ebp-2Ch]
  unsigned int v96; // [esp+C0h] [ebp-28h]
  unsigned __int16 *v97; // [esp+C4h] [ebp-24h]
  char v98; // [esp+CBh] [ebp-1Dh]
  unsigned int v99; // [esp+CCh] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+D0h] [ebp-18h]

  v99 = a2;
  v4 = a1;
  v88 = a1;
  v5 = a1;
  v85 = a1;
  v83 = 0;
  v98 = 0;
  v73 = 0;
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
  v97 = (unsigned __int16 *)v9;
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
    v94 = v17;
    v99 &= 0xC003FFFF;
    Heap = (void *)RtlAllocateHeap(v88, v99, Size);
    v89 = Heap;
    ms_exc.registration.TryLevel = -2;
    if ( Heap )
    {
      if ( Size < v17 )
        v17 = Size;
      memmove(Heap, Src, v17);
      RtlFreeHeap(v88, v99, Src);
    }
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v20 = (int)NtCurrentPeb()->SharedData + 550;
    else
      v20 = 2147353472;
    if ( !*(_BYTE *)v20 || (NtCurrentPeb()->TracingFlags & 1) == 0 )
      return (char *)v89;
    v21 = (char *)v89;
    if ( v89 )
    {
      if ( (v99 & 0x800000) == 0 )
        RtlpLogHeapReallocateEvent(Src, v94, Size, 2);
    }
    return v21;
  }
  if ( v9 == (char *)v4 )
  {
    RtlpLogHeapFailure(v9, 0, 0, 0);
    return 0;
  }
  v22 = v99 | *(_DWORD *)(v4 + 68);
  v99 = v22;
  if ( (v22 & 0x61000000) != 0 && (v22 & 0x10000000) == 0 )
    return (char *)RtlDebugReAllocateHeap(Src, Size);
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
  v95 = v25;
  v94 = 0;
  ms_exc.registration.TryLevel = 1;
  if ( (v99 & 1) != 0 )
  {
    v96 = 1;
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
      v76 = 1;
      ++*(_DWORD *)(v4 + 532);
      v96 = 1;
      v90 = 1;
      v98 = 1;
      v99 ^= 1u;
      goto LABEL_64;
    }
    if ( *(void **)(v26 + 12) == v27->ClientId.UniqueThread )
    {
      ++*(_DWORD *)(v26 + 8);
      goto LABEL_59;
    }
    v76 = 0;
    if ( byte_4B3A5DA8 )
    {
      v90 = 0;
      NtCurrentTeb()->LastStatusValue = -1073741420;
      v70 = NtCurrentTeb();
      v70->LastErrorValue = RtlNtStatusToDosError(-1073741420);
      goto LABEL_193;
    }
    RtlEnterCriticalSection(*(_DWORD *)(v4 + 200));
    v96 = 1;
    v4 = v88;
    RtlpUpdateHeapRates(v88, 1);
    v90 = 1;
    v98 = 1;
    v99 ^= 1u;
  }
LABEL_64:
  ms_exc.registration.TryLevel = 2;
  if ( *(_BYTE *)(v8 + 7) == 5 )
    v8 -= 8 * *(unsigned __int8 *)(v8 + 6);
  v97 = (unsigned __int16 *)v8;
  if ( *(_DWORD *)(v4 + 76) )
  {
    *(_DWORD *)v8 ^= *(_DWORD *)(v4 + 80);
    if ( *(_BYTE *)(v8 + 3) != (*(_BYTE *)v8 ^ (unsigned __int8)(*(_BYTE *)(v8 + 1) ^ *(_BYTE *)(v8 + 2))) )
      RtlpAnalyzeHeapFailure(v8);
  }
  v83 = (_BYTE *)v8;
  for ( i = *(_DWORD **)(v4 + 180); (unsigned int)*(unsigned __int16 *)v8 >= i[1] && *i; i = (_DWORD *)*i )
    ;
  if ( (v99 & 0x3C000100) != 0 || *(_DWORD *)(v5 + 188) || (*(_BYTE *)(v8 + 2) & 2) != 0 )
    v95 += 8;
  v91 = (_DWORD *)(v8 + 7);
  v29 = *(_BYTE *)(v8 + 7);
  if ( (v29 & 0x3F) != 0 )
  {
    if ( v29 == 4 )
    {
      v30 = v8 - 24;
      if ( *(_DWORD *)(v5 + 76) )
      {
        v31 = *(_DWORD *)v8;
        v86 = v31;
        if ( (v31 & *(_DWORD *)(v5 + 76)) != 0 )
        {
          v31 ^= *(_DWORD *)(v5 + 80);
          v86 = v31;
        }
        v79 = v31;
        v8 = (unsigned int)v97;
      }
      else
      {
        LOWORD(v31) = *(_WORD *)v8;
        v79 = *(_WORD *)v8;
      }
      v94 = *(_DWORD *)(v30 + 16) - (unsigned __int16)v31;
      v32 = (v94 + *(unsigned __int16 *)v8) >> 3;
      v93 = v32;
      v95 = (v95 + 4119) & 0xFFFFF000;
      goto LABEL_109;
    }
    v33 = *(_WORD *)v8;
    v32 = *(unsigned __int16 *)v8;
    v87 = v32;
    v93 = v32;
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
          v78 = v37;
          v8 = (unsigned int)v97;
          v32 = v93;
          v87 = v93;
        }
        else
        {
          LOWORD(v37) = v33;
          v78 = v33;
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
        v8 = (unsigned int)v97;
        v32 = v93;
        v87 = v93;
      }
      v34 = *(_DWORD *)(v8 + 8 * v37 - 4);
    }
    else
    {
      v34 = v29 & 0x3F;
    }
    v77[1] = v34;
    v94 = 8 * v32 - v34;
    if ( v32 < *(unsigned __int16 *)(v5 + 240) )
    {
      v38 = v32 >> 3;
      LOBYTE(v32) = v32 & 7;
      v87 = v32;
      v39 = ((unsigned __int8)(v96 << v32) & *(_BYTE *)(v38 + v5 + 242)) == 0;
      v32 = v93;
      if ( !v39 )
      {
        v8 = (unsigned int)v97;
LABEL_109:
        v87 = v32;
        goto LABEL_110;
      }
      v40 = *(_DWORD *)(v5 + 236);
      v87 = v93;
      v41 = (_WORD *)(v40 + 2 * v93);
      v42 = (unsigned __int16)*v41;
      if ( v42 > 1 )
        *v41 = v42 - 1;
      v8 = (unsigned int)v97;
    }
LABEL_110:
    v43 = v95 >> 3;
    v44 = v95 >> 3;
    v92 = v95 >> 3;
    if ( v95 >> 3 > v32 )
    {
      if ( *(_BYTE *)v91 == 4 || !RtlpGrowBlockInPlace(v5, v99, v8, Size, v95 >> 3) )
      {
        if ( (v99 & 0x10) != 0 )
        {
          Src = 0;
        }
        else
        {
          v54 = v99 & 0xC003FFFF;
          v99 &= 0xC003FFFF;
          v55 = (_BYTE *)(v8 + 2);
          v56 = *(_BYTE *)(v8 + 2);
          if ( (v56 & 2) != 0 )
          {
            v99 = v54 & 0xFFFFF1FF | (16 * (v56 & 0xE0 | 0x10));
            ms_exc.registration.TryLevel = 3;
            v57 = *(unsigned __int16 *)(RtlpGetExtraStuffPointer(v8) + 2);
            if ( (__int16)v57 > 0 )
              v99 = v58 | (v57 << 18);
            ms_exc.registration.TryLevel = 2;
          }
          else
          {
            v8 = (unsigned int)v97;
            if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
            {
              v59 = *((_BYTE *)v97 + 3);
              v81 = v59;
              if ( v59 )
              {
                v80 = v59;
                v99 = v54 | (v59 << 18);
              }
            }
          }
          v91 = (_DWORD *)(v5 + 76);
          if ( *(_DWORD *)(v5 + 76) )
          {
            *(_BYTE *)(v8 + 3) = *v55 ^ *(_BYTE *)v8 ^ *(_BYTE *)(v8 + 1);
            *(_DWORD *)v8 ^= *(_DWORD *)(v5 + 80);
          }
          v83 = 0;
          v60 = (char *)RtlAllocateHeap(v88, v99, Size);
          v89 = v60;
          ms_exc.registration.TryLevel = 2;
          if ( v60 )
          {
            v61 = v60 - 8;
            if ( *(v60 - 1) == 5 )
              v61 -= 8 * (unsigned __int8)v61[6];
            if ( *v91 )
            {
              *(_DWORD *)v61 ^= *(_DWORD *)(v5 + 80);
              if ( v61[3] != ((unsigned __int8)*v61 ^ (unsigned __int8)(v61[1] ^ v61[2])) )
                RtlpAnalyzeHeapFailure(v61);
            }
            v83 = v61;
            if ( (v61[2] & 2) != 0 )
            {
              ExtraStuffPointer = RtlpGetExtraStuffPointer(v61);
              v84 = (_DWORD *)ExtraStuffPointer;
              if ( *(_DWORD *)HIDWORD(ExtraStuffPointer) )
              {
                v63 = *(_DWORD *)(v5 + 80);
                *(_DWORD *)v8 ^= v63;
                LOBYTE(v63) = *(_BYTE *)v8 ^ *(_BYTE *)(v8 + 1) ^ *(_BYTE *)(v8 + 2);
                if ( *(_BYTE *)(v8 + 3) != (_BYTE)v63 )
                {
                  RtlpAnalyzeHeapFailure(v63);
                  LODWORD(ExtraStuffPointer) = v84;
                }
              }
              ms_exc.registration.TryLevel = 5;
              if ( (*(_BYTE *)(v8 + 2) & 2) != 0 )
              {
                v84[1] = *(_DWORD *)(RtlpGetExtraStuffPointer(v8) + 4);
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
            if ( *v91 )
            {
              v61[3] = *v61 ^ v61[1] ^ v61[2];
              *(_DWORD *)v61 ^= *(_DWORD *)(v5 + 80);
            }
            v83 = 0;
            if ( v98 )
            {
              RtlLeaveCriticalSection(*(_DWORD *)(v5 + 200));
              v98 = 0;
              v99 &= ~1u;
            }
            v64 = Size;
            if ( Size >= v94 )
              v64 = v94;
            v65 = (char *)v89;
            memcpy(v89, Src, v64);
            RtlFreeHeap(v88, v99, Src);
          }
          else
          {
            v65 = 0;
          }
          v73 = Src;
          Src = v65;
        }
      }
      goto LABEL_191;
    }
    if ( v43 + 1 == v32 )
    {
      v44 = v43 + 1;
      v92 = v43 + 1;
      v95 += 8;
      ++v43;
    }
    if ( *(_BYTE *)v91 == 4 )
    {
      *(_WORD *)v8 = v95 - Size;
      goto LABEL_122;
    }
    if ( (*(_BYTE *)(v8 + 2) & 2) != 0 )
    {
      v74 = (_DWORD *)(v8 + 8 * (*(unsigned __int16 *)v8 - 1));
      v45 = (_DWORD *)(v8 + 8 * (v43 - 1));
      v84 = v45;
      *v45 = *v74;
      v45[1] = v74[1];
      if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
      {
        v44 = v92;
        v87 = v93;
        *((_WORD *)v84 + 1) = RtlpUpdateTagEntry(v93, v92, 4);
LABEL_121:
        v8 = (unsigned int)v97;
LABEL_122:
        v46 = Size;
        if ( Size > v94 )
        {
          if ( (v99 & 8) != 0 )
          {
            memset(&Src[v94], 0, Size - v94);
          }
          else
          {
            if ( (*(_BYTE *)(v5 + 64) & 0x40) == 0 )
              goto LABEL_132;
            v47 = v94 & 3;
            if ( (v94 & 3) != 0 )
            {
              v47 = 4 - v47;
              v46 = Size;
            }
            v5 = v85;
            if ( v46 <= v47 + v94 )
              goto LABEL_132;
            v48 = (v46 - v47 - v94) & 0xFFFFFFFC;
            if ( v48 )
              RtlFillMemoryUlong(v8 + v47 + v94 + 8, v48, -1163005939);
          }
          v46 = Size;
        }
LABEL_132:
        if ( (*(_BYTE *)(v5 + 64) & 0x20) != 0 )
        {
          *(_DWORD *)(v8 + v46 + 8) = -1414812757;
          *(_DWORD *)(v8 + v46 + 12) = -1414812757;
        }
        if ( v44 != v87 )
        {
          v71 = *(_BYTE *)(v8 + 2) & 0xFE;
          if ( *(_BYTE *)v91 == 4 )
          {
            v49 = v8 - 24;
            v44 = v92;
            if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
              *(_WORD *)(v49 + 10) = RtlpUpdateTagEntry(v93, v92, 5);
            v75 = (const void *)(v49 + v95);
            v77[0] = 8 * v93 - v95;
            v72 = RtlpSecMemFreeVirtualMemory(v95, &v75, v77, 0x4000);
            if ( v72 >= 0 )
            {
              *(_DWORD *)(v49 + 16) -= v77[0];
              v8 = (unsigned int)v97;
            }
            else
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint("Unable to release memory at %p for %Ix bytes - Status == %x\n", v75, v77[0], v72);
              if ( NtCurrentPeb()->BeingDebugged )
              {
                RtlpHeapInvalidBadAddress = 0;
                __debugbreak();
                RtlpHeapInvalidBreakPoint = 0;
              }
              v8 = (unsigned int)v97;
              v44 = v92;
            }
          }
          else
          {
            v50 = *(unsigned __int16 *)v8 - (unsigned __int16)v44;
            *(_WORD *)v8 = v44;
            v51 = *(_DWORD *)(v5 + 64) & 0x40;
            v52 = *(_BYTE *)(v8 + 6);
            if ( v52 )
              v96 = (v8 & 0xFFFF0000) + ((v96 - v52) << 16);
            else
              v96 = v5;
            RtlpCreateSplitBlock(v5, v96, (unsigned __int16 *)(v8 + 8 * v44), v71, v51 != 0, v44, v50);
          }
        }
        if ( *(_BYTE *)(v8 + 7) != 4 )
        {
          v53 = v95 - Size;
          v91 = (_DWORD *)(v95 - Size);
          if ( v95 - Size >= 0x3F )
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
      v8 = (unsigned int)v97;
      v82 = *((_BYTE *)v97 + 3);
      v44 = v92;
      *((_BYTE *)v97 + 3) = RtlpUpdateTagEntry(*v97, v92, 4);
      v87 = v93;
      goto LABEL_122;
    }
    v87 = v93;
    v44 = v92;
    goto LABEL_121;
  }
  NtCurrentTeb()->LastStatusValue = -1073741811;
  v69 = NtCurrentTeb();
  v69->LastErrorValue = RtlNtStatusToDosError(-1073741811);
LABEL_191:
  ms_exc.registration.TryLevel = 1;
LABEL_193:
  ms_exc.registration.TryLevel = -2;
  v68 = v83;
  if ( v83 && *(_DWORD *)(v5 + 76) )
  {
    v83[3] = *v83 ^ v83[1] ^ v83[2];
    *v68 ^= *(_DWORD *)(v5 + 80);
  }
  if ( v98 )
    RtlLeaveCriticalSection(*(_DWORD *)(v5 + 200));
  v66 = NtCurrentPeb()->SharedData;
  if ( v66 && *v66 )
    v67 = (int)NtCurrentPeb()->SharedData + 550;
  else
    v67 = 2147353472;
  if ( !*(_BYTE *)v67 || (NtCurrentPeb()->TracingFlags & 1) == 0 )
    return Src;
  v21 = Src;
  if ( Src && (v99 & 0x800000) == 0 )
    RtlpLogHeapReallocateEvent(v73, v94, Size, 3);
  return v21;
}
