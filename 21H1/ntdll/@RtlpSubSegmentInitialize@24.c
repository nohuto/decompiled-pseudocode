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
  ULONG v33; // edi
  ULONG v34; // eax
  unsigned __int32 v35; // esi
  _DWORD *SharedData; // eax
  int result; // eax
  int v38; // ecx
  unsigned int v39; // eax
  unsigned int v40; // eax
  int v41; // eax
  ULONG v42; // eax
  ULONG v43; // eax
  size_t v44; // [esp-4h] [ebp-3Ch]
  signed __int32 v45; // [esp+Ch] [ebp-2Ch] BYREF
  signed __int32 v46; // [esp+10h] [ebp-28h]
  unsigned int v47; // [esp+14h] [ebp-24h]
  unsigned int v48; // [esp+18h] [ebp-20h]
  unsigned int v49; // [esp+1Ch] [ebp-1Ch]
  int v50; // [esp+20h] [ebp-18h]
  signed __int32 v51; // [esp+24h] [ebp-14h]
  int v52; // [esp+28h] [ebp-10h]
  _DWORD *v53; // [esp+2Ch] [ebp-Ch]
  unsigned int v54; // [esp+30h] [ebp-8h]
  int v55; // [esp+34h] [ebp-4h]

  v6 = *(_DWORD *)(a2 + 16);
  v8 = *(unsigned __int8 *)(a2 + 27);
  v55 = a2;
  v52 = a1;
  v46 = v6;
  v9 = *(unsigned __int8 *)(a6 + 2);
  if ( v8 )
    v10 = *(_DWORD *)(a1 + 4 * v9 + 1476) + 104 * v8 - 104;
  else
    v10 = *(_DWORD *)(a1 + 4 * v9 + 960);
  v11 = *(_BYTE *)(a6 + 3);
  v53 = (_DWORD *)v10;
  v12 = (v11 >> 1) & 3;
  if ( v12 )
  {
    result = RtlpSubSegmentDebugInitialize(a3, v12, a4, a5, a6);
    if ( result )
      return result;
    a2 = v55;
  }
  v13 = a4 + 8;
  v48 = a4 + 8;
  v14 = 0;
  v51 = (unsigned __int16)((unsigned int)(a4 + 8) >> 3);
  *(_DWORD *)a3 = a2;
  v47 = ((((a5 - 32) / (unsigned int)(a4 + 8) + 31) >> 3) + 32) & 0xFFFFFFF8;
  v15 = a3 + v47;
  v54 = RtlpLFHKey;
  if ( a3 + v47 + a4 + 8 <= a5 + a3 )
  {
    v50 = v13 << 13;
    v16 = v47 << 13;
    do
    {
      v17 = (unsigned __int16)v14;
      v18 = v54 ^ v16 ^ *(_DWORD *)(v52 + 12) ^ (v15 >> 3);
      ++v14;
      v16 += v50;
      *(_DWORD *)v15 = v18;
      v19 = *(_DWORD *)(v15 + 4) & 0xFF0000FF | (v17 << 8);
      v49 = v16;
      *(_DWORD *)(v15 + 4) = v19;
      *(_BYTE *)(v15 + 7) = 0x80;
      v15 += v13;
      v20 = v13 + v15;
      v13 = v48;
    }
    while ( v20 <= a5 + a3 );
    a1 = v52;
  }
  *(_DWORD *)(a3 + 20) = v14;
  *(_DWORD *)(a3 + 24) = a3 + 28;
  LODWORD(v44) = (unsigned int)(v14 + 7) >> 3;
  memset((void *)(a3 + 28), 0, v44);
  if ( (v14 & 0x1F) != 0 )
    *(_DWORD *)(a3 + 28 + 4 * ((unsigned int)v14 >> 5)) |= -1 << (v14 & 0x1F);
  v21 = v55;
  HIDWORD(v22) = v53;
  *(_WORD *)(v55 + 20) = v51;
  *(_WORD *)(v21 + 24) = v14;
  v49 = (unsigned __int16)v14;
  *(_DWORD *)v21 = HIDWORD(v22);
  *(_BYTE *)(v21 + 26) = *(_BYTE *)(a6 + 2);
  *(_WORD *)(v21 + 22) = 0;
  *(_DWORD *)(v21 + 4) = a3;
  *(_DWORD *)(v21 + 8) = 0;
  *(_DWORD *)(v21 + 12) = 0;
  HIWORD(v51) = 8 * v51;
  LOWORD(v51) = v47;
  *(_DWORD *)(a3 + 16) = a3 ^ a1 ^ v51 ^ v54;
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
  v54 = HIDWORD(v22) + 80;
  do
  {
    v23 = *(_DWORD *)v22;
    v24 = *(_DWORD *)(v22 + 4);
    v47 = *(_DWORD *)v22;
    v48 = v24;
    if ( v14 <= 0 )
      v25 = v24 - 1;
    else
      v25 = v24 + 1;
    v22 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)v54,
            __SPAIR64__(v25, v23 + v14),
            __SPAIR64__(v24, v23));
    v26 = (_DWORD)v22 == v47;
    v27 = v46;
    LODWORD(v22) = v54;
  }
  while ( !v26 || HIDWORD(v22) != v48 );
  v28 = v53;
  v29 = *v53;
  v28[22] = ++*(_DWORD *)(v29 + 16);
  HIWORD(v51) = *((unsigned __int8 *)RtlpLowFragHeapRandomData + (unsigned __int16)RtlpLfhIncrementDataSlot())
              % (unsigned int)v14;
  LOWORD(v51) = v49;
  _InterlockedOr(&v45, 0);
  v30 = v55;
  v31 = v51;
  *(_DWORD *)(a3 + 12) = -253701952;
  *(_DWORD *)(v30 + 28) = 1;
  _InterlockedCompareExchange((volatile signed __int32 *)(v30 + 16), v31, v27);
  if ( (RtlpLowFragHeapGlobalFlags & 2) == 0 )
  {
    HeapData_high = (unsigned __int8)HIWORD(NtCurrentTeb()->HeapData);
    v51 = HeapData_high;
    if ( !ProcessInformation
      && ZwQueryInformationProcess((HANDLE)0xFFFFFFFF, ProcessCookie, &ProcessInformation, 4u, 0) < 0 )
    {
      v46 = MEMORY[0x7FFE0004];
      if ( MEMORY[0x7FFE0004] < 0x1000000u )
      {
        while ( MEMORY[0x7FFE0324] != MEMORY[0x7FFE0328] )
          _mm_pause();
        HeapData_high = v51;
        v42 = v46 * (MEMORY[0x7FFE0324] << 8) + (((unsigned int)v46 * (unsigned __int64)MEMORY[0x7FFE0320]) >> 24);
      }
      else
      {
        v42 = (MEMORY[0x7FFE0004] * (unsigned __int64)MEMORY[0x7FFE0320]) >> 24;
      }
      ProcessInformation = v42;
    }
    v33 = RtlRandomEx(&ProcessInformation);
    v47 = v33;
    if ( !ProcessInformation
      && ZwQueryInformationProcess((HANDLE)0xFFFFFFFF, ProcessCookie, &ProcessInformation, 4u, 0) < 0 )
    {
      v46 = MEMORY[0x7FFE0004];
      if ( MEMORY[0x7FFE0004] < 0x1000000u )
      {
        while ( MEMORY[0x7FFE0324] != MEMORY[0x7FFE0328] )
          _mm_pause();
        HeapData_high = v51;
        v33 = v47;
        v43 = v46 * (MEMORY[0x7FFE0324] << 8) + (((unsigned int)v46 * (unsigned __int64)MEMORY[0x7FFE0320]) >> 24);
      }
      else
      {
        v43 = (MEMORY[0x7FFE0004] * (unsigned __int64)MEMORY[0x7FFE0320]) >> 24;
      }
      ProcessInformation = v43;
    }
    v34 = RtlRandomEx(&ProcessInformation);
    v30 = v55;
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
