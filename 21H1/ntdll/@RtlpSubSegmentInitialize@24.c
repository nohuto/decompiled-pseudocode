/*
 * XREFs of @RtlpSubSegmentInitialize@24 @ 0x4B2C37B0
 * Callers:
 *     _RtlpAllocateHeapInternal@16 @ 0x4B2C5D90 (_RtlpAllocateHeapInternal@16.c)
 * Callees:
 *     _RtlRandomEx@4 @ 0x4B2AECC0 (_RtlRandomEx@4.c)
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpLfhIncrementDataSlot@0 @ 0x4B3079D9 (_RtlpLfhIncrementDataSlot@0.c)
 *     _RtlpLogHeapSubSegmentInitialize@20 @ 0x4B36F4DC (_RtlpLogHeapSubSegmentInitialize@20.c)
 *     @RtlpSubSegmentDebugInitialize@28 @ 0x4B370CFD (@RtlpSubSegmentDebugInitialize@28.c)
 */

int __fastcall RtlpSubSegmentInitialize(int a1, int a2, unsigned int a3, int a4, int a5, int a6)
{
  signed __int32 v6; // esi
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  unsigned __int8 v11; // al
  unsigned __int8 v12; // al
  unsigned int v13; // esi
  int v14; // edi
  unsigned int v15; // eax
  unsigned int v16; // ebx
  int v17; // edx
  unsigned int v18; // ecx
  unsigned int v19; // edx
  unsigned int v20; // ecx
  int v21; // esi
  signed __int64 v22; // rax
  unsigned int v23; // edx
  unsigned int v24; // ecx
  unsigned int v25; // esi
  bool v26; // zf
  signed __int32 v27; // esi
  _DWORD *v28; // ecx
  int v29; // eax
  int v30; // edx
  signed __int32 v31; // ecx
  unsigned __int32 HeapData_high; // esi
  unsigned int v33; // edi
  unsigned int v34; // eax
  unsigned __int32 v35; // esi
  _DWORD *SharedData; // eax
  int result; // eax
  int v38; // ecx
  unsigned int v39; // eax
  unsigned int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  signed __int32 v44; // [esp+Ch] [ebp-2Ch] BYREF
  signed __int32 v45; // [esp+10h] [ebp-28h]
  unsigned int v46; // [esp+14h] [ebp-24h]
  unsigned int v47; // [esp+18h] [ebp-20h]
  unsigned int v48; // [esp+1Ch] [ebp-1Ch]
  int v49; // [esp+20h] [ebp-18h]
  signed __int32 v50; // [esp+24h] [ebp-14h]
  int v51; // [esp+28h] [ebp-10h]
  _DWORD *v52; // [esp+2Ch] [ebp-Ch]
  unsigned int v53; // [esp+30h] [ebp-8h]
  int v54; // [esp+34h] [ebp-4h]

  v6 = *(_DWORD *)(a2 + 16);
  v8 = *(unsigned __int8 *)(a2 + 27);
  v54 = a2;
  v51 = a1;
  v45 = v6;
  v9 = *(unsigned __int8 *)(a6 + 2);
  if ( v8 )
    v10 = *(_DWORD *)(a1 + 4 * v9 + 1476) + 104 * v8 - 104;
  else
    v10 = *(_DWORD *)(a1 + 4 * v9 + 960);
  v11 = *(_BYTE *)(a6 + 3);
  v52 = (_DWORD *)v10;
  v12 = (v11 >> 1) & 3;
  if ( v12 )
  {
    result = RtlpSubSegmentDebugInitialize(a3, v12, a4, a5, a6);
    if ( result )
      return result;
    a2 = v54;
  }
  v13 = a4 + 8;
  v47 = a4 + 8;
  v14 = 0;
  v50 = (unsigned __int16)((unsigned int)(a4 + 8) >> 3);
  *(_DWORD *)a3 = a2;
  v46 = ((((a5 - 32) / (unsigned int)(a4 + 8) + 31) >> 3) + 32) & 0xFFFFFFF8;
  v15 = a3 + v46;
  v53 = RtlpLFHKey;
  if ( a3 + v46 + a4 + 8 <= a5 + a3 )
  {
    v49 = v13 << 13;
    v16 = v46 << 13;
    do
    {
      v17 = (unsigned __int16)v14;
      v18 = v53 ^ v16 ^ *(_DWORD *)(v51 + 12) ^ (v15 >> 3);
      ++v14;
      v16 += v49;
      *(_DWORD *)v15 = v18;
      v19 = *(_DWORD *)(v15 + 4) & 0xFF0000FF | (v17 << 8);
      v48 = v16;
      *(_DWORD *)(v15 + 4) = v19;
      *(_BYTE *)(v15 + 7) = 0x80;
      v15 += v13;
      v20 = v13 + v15;
      v13 = v47;
    }
    while ( v20 <= a5 + a3 );
    a1 = v51;
  }
  *(_DWORD *)(a3 + 20) = v14;
  *(_DWORD *)(a3 + 24) = a3 + 28;
  memset((void *)(a3 + 28), 0, (unsigned int)(v14 + 7) >> 3);
  if ( (v14 & 0x1F) != 0 )
    *(_DWORD *)(a3 + 28 + 4 * ((unsigned int)v14 >> 5)) |= -1 << (v14 & 0x1F);
  v21 = v54;
  HIDWORD(v22) = v52;
  *(_WORD *)(v54 + 20) = v50;
  *(_WORD *)(v21 + 24) = v14;
  v48 = (unsigned __int16)v14;
  *(_DWORD *)v21 = HIDWORD(v22);
  *(_BYTE *)(v21 + 26) = *(_BYTE *)(a6 + 2);
  *(_WORD *)(v21 + 22) = 0;
  *(_DWORD *)(v21 + 4) = a3;
  *(_DWORD *)(v21 + 8) = 0;
  *(_DWORD *)(v21 + 12) = 0;
  HIWORD(v50) = 8 * v50;
  LOWORD(v50) = v46;
  *(_DWORD *)(a3 + 16) = a3 ^ a1 ^ v50 ^ v53;
  if ( *(_DWORD *)(HIDWORD(v22) + 84) )
  {
    if ( ++*(_WORD *)(HIDWORD(v22) + 96) <= 0x1Cu )
      goto LABEL_12;
    v38 = *(_DWORD *)HIDWORD(v22);
    v41 = *(_DWORD *)(*(_DWORD *)HIDWORD(v22) + 20);
    if ( v41 )
    {
      v40 = v41 - 4;
      goto LABEL_29;
    }
  }
  else
  {
    v38 = *(_DWORD *)HIDWORD(v22);
    v39 = *(_DWORD *)(*(_DWORD *)HIDWORD(v22) + 20);
    if ( v39 < 0x20 )
    {
      v40 = v39 + 4;
LABEL_29:
      *(_DWORD *)(v38 + 20) = v40;
    }
  }
  *(_WORD *)(HIDWORD(v22) + 96) = 0;
LABEL_12:
  LODWORD(v22) = HIDWORD(v22) + 80;
  v53 = HIDWORD(v22) + 80;
  do
  {
    v23 = *(_DWORD *)v22;
    v24 = *(_DWORD *)(v22 + 4);
    v46 = *(_DWORD *)v22;
    v47 = v24;
    if ( v14 <= 0 )
      v25 = v24 - 1;
    else
      v25 = v24 + 1;
    v22 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)v53,
            __SPAIR64__(v25, v23 + v14),
            __SPAIR64__(v24, v23));
    v26 = (_DWORD)v22 == v46;
    v27 = v45;
    LODWORD(v22) = v53;
  }
  while ( !v26 || HIDWORD(v22) != v47 );
  v28 = v52;
  v29 = *v52;
  v28[22] = ++*(_DWORD *)(v29 + 16);
  HIWORD(v50) = *((unsigned __int8 *)RtlpLowFragHeapRandomData + (unsigned __int16)RtlpLfhIncrementDataSlot())
              % (unsigned int)v14;
  LOWORD(v50) = v48;
  _InterlockedOr(&v44, 0);
  v30 = v54;
  v31 = v50;
  *(_DWORD *)(a3 + 12) = -253701952;
  *(_DWORD *)(v30 + 28) = 1;
  _InterlockedCompareExchange((volatile signed __int32 *)(v30 + 16), v31, v27);
  if ( (RtlpLowFragHeapGlobalFlags & 2) == 0 )
  {
    HeapData_high = (unsigned __int8)HIWORD(NtCurrentTeb()->HeapData);
    v50 = HeapData_high;
    if ( !dword_4B3A6634 && (int)ZwQueryInformationProcess(-1, 36, &dword_4B3A6634, 4, 0) < 0 )
    {
      v45 = MEMORY[0x7FFE0004];
      if ( MEMORY[0x7FFE0004] < 0x1000000u )
      {
        while ( MEMORY[0x7FFE0324] != MEMORY[0x7FFE0328] )
          _mm_pause();
        HeapData_high = v50;
        v42 = v45 * (MEMORY[0x7FFE0324] << 8) + (((unsigned int)v45 * (unsigned __int64)MEMORY[0x7FFE0320]) >> 24);
      }
      else
      {
        v42 = (MEMORY[0x7FFE0004] * (unsigned __int64)MEMORY[0x7FFE0320]) >> 24;
      }
      dword_4B3A6634 = v42;
    }
    v33 = RtlRandomEx(&dword_4B3A6634);
    v46 = v33;
    if ( !dword_4B3A6634 && (int)ZwQueryInformationProcess(-1, 36, &dword_4B3A6634, 4, 0) < 0 )
    {
      v45 = MEMORY[0x7FFE0004];
      if ( MEMORY[0x7FFE0004] < 0x1000000u )
      {
        while ( MEMORY[0x7FFE0324] != MEMORY[0x7FFE0328] )
          _mm_pause();
        HeapData_high = v50;
        v33 = v46;
        v43 = v45 * (MEMORY[0x7FFE0324] << 8) + (((unsigned int)v45 * (unsigned __int64)MEMORY[0x7FFE0320]) >> 24);
      }
      else
      {
        v43 = (MEMORY[0x7FFE0004] * (unsigned __int64)MEMORY[0x7FFE0320]) >> 24;
      }
      dword_4B3A6634 = v43;
    }
    v34 = RtlRandomEx(&dword_4B3A6634);
    v30 = v54;
    v35 = HeapData_high >> 3;
    RtlpLowFragHeapRandomData[2 * v35] = v34 & 0x7F7F7F7F;
    dword_4B3A4204[2 * v35] = v33 & 0x7F7F7F7F;
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    result = (int)NtCurrentPeb()->SharedData + 550;
  else
    result = 2147353472;
  if ( *(_BYTE *)result )
  {
    result = (int)NtCurrentPeb();
    if ( (*(_BYTE *)(result + 576) & 1) != 0 )
      return RtlpLogHeapSubSegmentInitialize(
               *(unsigned __int16 *)(v30 + 20),
               *(unsigned __int16 *)(v30 + 24),
               *(unsigned __int8 *)(v30 + 27));
  }
  return result;
}
