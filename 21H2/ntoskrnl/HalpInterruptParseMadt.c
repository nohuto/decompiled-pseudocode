/*
 * XREFs of HalpInterruptParseMadt @ 0x1403A9994
 * Callers:
 *     HalpInterruptParseAcpiTables @ 0x1403A9920 (HalpInterruptParseAcpiTables.c)
 * Callees:
 *     HalpInterruptGsiToLine @ 0x140378AAC (HalpInterruptGsiToLine.c)
 *     HalpInterruptSortProcessorTable @ 0x1403A9F04 (HalpInterruptSortProcessorTable.c)
 *     HalpMmAllocateMemoryInternal @ 0x1403BB428 (HalpMmAllocateMemoryInternal.c)
 *     HalpInterruptBlockSmtSiblings @ 0x1404D19B0 (HalpInterruptBlockSmtSiblings.c)
 *     HalpInterruptMapParkedPage @ 0x1404D1B40 (HalpInterruptMapParkedPage.c)
 */

__int64 __fastcall HalpInterruptParseMadt(__int64 a1, int a2)
{
  unsigned int v3; // r13d
  unsigned int v4; // r15d
  __int64 v5; // r8
  __int64 v6; // rdi
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rbp
  _BYTE *v9; // r14
  __int64 v10; // rcx
  _BYTE *v11; // r9
  char *v12; // rdx
  char v13; // al
  bool v14; // zf
  unsigned int v15; // r10d
  unsigned __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rsi
  __int64 v20; // r9
  __int64 v21; // rdi
  unsigned int *v22; // rcx
  unsigned int v23; // r11d
  _DWORD *v24; // rdx
  __int64 v25; // r10
  __int64 v27; // rcx
  _BYTE *v28; // rdi
  char v29; // al
  _DWORD *v30; // rcx
  int v31; // eax
  unsigned int v32; // ecx
  _DWORD *v33; // r8
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned int v36; // esi
  int v37; // ebp
  unsigned int v38; // edi
  _DWORD *v39; // rdx
  unsigned int v40; // eax
  ULONG_PTR v41; // rdx
  __int64 v42; // r10
  ULONG_PTR v43; // rax
  unsigned __int64 v44; // rcx
  __int128 v45; // xmm2
  __int128 v46; // xmm3
  __int128 v47; // xmm4
  __int128 v48; // xmm5
  ULONG_PTR v49; // r14
  __int64 v50; // r8
  __int64 v51; // r9
  _DWORD *v52; // rdx
  unsigned int v53; // eax
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  __int64 v57; // rcx
  unsigned int v58; // eax
  int v59; // edx
  int v60; // eax
  __int64 *v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  int v65; // eax
  char v66; // al
  int v67; // eax
  unsigned int v68; // eax
  ULONG_PTR v69; // rsi
  __int64 v70; // rcx
  int v71; // ecx
  int v72; // ecx
  __int64 MemoryInternal; // rax
  _OWORD *v74; // rcx
  unsigned __int64 v75; // rax
  __int128 v76; // xmm2
  __int128 v77; // xmm3
  __int128 v78; // xmm4
  __int128 v79; // xmm5
  ULONG_PTR v80; // rdx
  ULONG_PTR v81; // rax
  unsigned __int64 v82; // rcx
  __int128 v83; // xmm2
  __int128 v84; // xmm3
  __int128 v85; // xmm4
  __int128 v86; // xmm5
  __int64 v87; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v88; // [rsp+68h] [rbp+10h]

  v87 = 0LL;
  v3 = 0;
  v4 = 0;
  v88 = 0;
  v5 = 0LL;
  v6 = a1 + 44;
  v7 = a1 + *(unsigned int *)(a1 + 4);
  v8 = a1 + 46;
  v9 = (_BYTE *)(a1 + 44);
  if ( a2 )
  {
    if ( v8 > v7 )
    {
LABEL_39:
      if ( (unsigned int)HalpInterruptProcessorCount > 1 )
      {
        v32 = 0;
        if ( (_DWORD)HalpInterruptProcessorCount )
        {
          v33 = (_DWORD *)(HalpInterruptProcessorState + 8);
          while ( *v33 != HalpInterruptP0LocalId )
          {
            ++v32;
            v33 += 16;
            if ( v32 >= (unsigned int)HalpInterruptProcessorCount )
              goto LABEL_44;
          }
          v3 = v32;
        }
LABEL_44:
        v34 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore - 1);
        v35 = (unsigned int)v34 & HalpInterruptP0LocalId;
        v36 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore * KeGetCurrentPrcb()->CoresPerPhysicalProcessor - 1);
        v37 = v36 & HalpInterruptP0LocalId;
        if ( v3 )
        {
          v74 = (_OWORD *)HalpInterruptProcessorState;
          v75 = (unsigned __int64)v3 << 6;
          v76 = *(_OWORD *)HalpInterruptProcessorState;
          v77 = *(_OWORD *)(HalpInterruptProcessorState + 16);
          v78 = *(_OWORD *)(HalpInterruptProcessorState + 32);
          v79 = *(_OWORD *)(HalpInterruptProcessorState + 48);
          *(_OWORD *)HalpInterruptProcessorState = *(_OWORD *)(v75 + HalpInterruptProcessorState);
          v74[1] = *(_OWORD *)((char *)v74 + v75 + 16);
          v74[2] = *(_OWORD *)((char *)v74 + v75 + 32);
          v74[3] = *(_OWORD *)((char *)v74 + v75 + 48);
          *(_OWORD *)((char *)v74 + v75) = v76;
          *(_OWORD *)((char *)v74 + v75 + 16) = v77;
          *(_OWORD *)((char *)v74 + v75 + 32) = v78;
          *(_OWORD *)((char *)v74 + v75 + 48) = v79;
        }
        v38 = 1;
        if ( (unsigned int)HalpInterruptProcessorCount > 1 )
        {
          v39 = (_DWORD *)(HalpInterruptProcessorState + 72);
          do
          {
            if ( ((unsigned int)v34 & *v39) != (_DWORD)v35 )
              break;
            ++v38;
            v39 += 16;
          }
          while ( v38 < (unsigned int)HalpInterruptProcessorCount );
        }
        v40 = v38 + 1;
        if ( v38 + 1 < (unsigned int)HalpInterruptProcessorCount )
        {
          v41 = HalpInterruptProcessorState + ((unsigned __int64)v40 << 6);
          v42 = (unsigned int)HalpInterruptProcessorCount - v40;
          do
          {
            if ( ((unsigned int)v34 & *(_DWORD *)(v41 + 8)) == (_DWORD)v35 )
            {
              v43 = HalpInterruptProcessorState;
              v44 = (unsigned __int64)v38++ << 6;
              v45 = *(_OWORD *)(v44 + HalpInterruptProcessorState);
              v46 = *(_OWORD *)(v44 + HalpInterruptProcessorState + 16);
              v47 = *(_OWORD *)(v44 + HalpInterruptProcessorState + 32);
              v48 = *(_OWORD *)(v44 + HalpInterruptProcessorState + 48);
              *(_OWORD *)(v44 + HalpInterruptProcessorState) = *(_OWORD *)v41;
              *(_OWORD *)(v44 + v43 + 16) = *(_OWORD *)(v41 + 16);
              *(_OWORD *)(v44 + v43 + 32) = *(_OWORD *)(v41 + 32);
              *(_OWORD *)(v44 + v43 + 48) = *(_OWORD *)(v41 + 48);
              *(_OWORD *)v41 = v45;
              *(_OWORD *)(v41 + 16) = v46;
              *(_OWORD *)(v41 + 32) = v47;
              *(_OWORD *)(v41 + 48) = v48;
            }
            v41 += 64LL;
            --v42;
          }
          while ( v42 );
        }
        if ( v38 > 1 )
          HalpInterruptHyperThreading = 1;
        v49 = HalpInterruptProcessorState;
        HalpInterruptSortProcessorTable(HalpInterruptProcessorState + 64, v38 - 1, v34, v35);
        v51 = v38;
        if ( v38 < (unsigned int)HalpInterruptProcessorCount )
        {
          v52 = (_DWORD *)(((unsigned __int64)v38 << 6) + v49 + 8);
          do
          {
            if ( (v36 & *v52) != v37 )
              break;
            ++v38;
            v52 += 16;
          }
          while ( v38 < (unsigned int)HalpInterruptProcessorCount );
        }
        v53 = v38 + 1;
        if ( v38 + 1 < (unsigned int)HalpInterruptProcessorCount )
        {
          v80 = HalpInterruptProcessorState + ((unsigned __int64)v53 << 6);
          v50 = (unsigned int)HalpInterruptProcessorCount - v53;
          do
          {
            if ( (v36 & *(_DWORD *)(v80 + 8)) == v37 )
            {
              v81 = HalpInterruptProcessorState;
              v82 = (unsigned __int64)v38++ << 6;
              v83 = *(_OWORD *)(v82 + HalpInterruptProcessorState);
              v84 = *(_OWORD *)(v82 + HalpInterruptProcessorState + 16);
              v85 = *(_OWORD *)(v82 + HalpInterruptProcessorState + 32);
              v86 = *(_OWORD *)(v82 + HalpInterruptProcessorState + 48);
              *(_OWORD *)(v82 + HalpInterruptProcessorState) = *(_OWORD *)v80;
              *(_OWORD *)(v82 + v81 + 16) = *(_OWORD *)(v80 + 16);
              *(_OWORD *)(v82 + v81 + 32) = *(_OWORD *)(v80 + 32);
              *(_OWORD *)(v82 + v81 + 48) = *(_OWORD *)(v80 + 48);
              *(_OWORD *)v80 = v83;
              *(_OWORD *)(v80 + 16) = v84;
              *(_OWORD *)(v80 + 32) = v85;
              *(_OWORD *)(v80 + 48) = v86;
            }
            v80 += 64LL;
            --v50;
          }
          while ( v50 );
        }
        HalpInterruptSortProcessorTable(HalpInterruptProcessorState + (v51 << 6), v38 - (unsigned int)v51, v50, v51);
        HalpInterruptSortProcessorTable(
          HalpInterruptProcessorState + ((unsigned __int64)v38 << 6),
          (unsigned int)HalpInterruptProcessorCount - v38,
          v54,
          v55);
        if ( HalpInterruptBlockHyperthreading && HalpInterruptHyperThreading )
          HalpInterruptBlockSmtSiblings();
      }
      return v88;
    }
    while ( 1 )
    {
      v27 = (unsigned __int8)v9[1];
      if ( (unsigned __int8)v27 < 2u || (unsigned __int64)&v9[v27] > v7 )
        goto LABEL_39;
      v28 = v9;
      v9 += v27;
      v29 = *v28;
      if ( *v28 || (_BYTE)v27 != 8 )
      {
        if ( v29 == 9 && (_BYTE)v27 == 16 )
        {
          v30 = (_DWORD *)(HalpInterruptProcessorState + ((unsigned __int64)v4 << 6));
          if ( (v28[8] & 1) == 0 )
            goto LABEL_38;
          *v30 = *((_DWORD *)v28 + 1);
          v30[1] = *((_DWORD *)v28 + 3);
          v31 = *((_DWORD *)v28 + 1);
          goto LABEL_37;
        }
        if ( v29 == 11
          && (unsigned __int8)v27 >= 0x28u
          && ((unsigned int)HalpInterruptGicVersion < 3 || (unsigned __int8)v27 >= 0x4Cu) )
        {
          v69 = HalpInterruptProcessorState + ((unsigned __int64)v4 << 6);
          if ( (v28[12] & 1) != 0 )
          {
            v70 = *((_QWORD *)v28 + 3);
            if ( *((_DWORD *)v28 + 4) == 1 && v70 )
              v71 = HalpInterruptMapParkedPage(v70, HalpInterruptProcessorState + ((unsigned __int64)v4 << 6), v5);
            else
              v71 = -1073741811;
            v88 = v71;
            if ( v71 == -1073741670 )
              return 3221225626LL;
            if ( v71 >= 0 )
            {
              if ( (unsigned int)HalpInterruptGicVersion < 3 )
                v72 = *((_DWORD *)v28 + 1);
              else
                v72 = (*(_QWORD *)(v28 + 68) >> 8) & 0xFF000000 | *((_DWORD *)v28 + 17) & 0xFFFFFF;
              *(_DWORD *)v69 = v72;
              *(_DWORD *)(v69 + 4) = *((_DWORD *)v28 + 2);
              *(_DWORD *)(v69 + 8) = *((_DWORD *)v28 + 1);
              *(_DWORD *)(v69 + 40) = *((_DWORD *)v28 + 5);
              if ( v28[1] < 0x4Cu )
              {
                *(_QWORD *)(v69 + 48) = 0LL;
                *(_BYTE *)(v69 + 45) = 0;
              }
              else
              {
                *(_QWORD *)(v69 + 48) = *(_QWORD *)(v28 + 68);
                *(_BYTE *)(v69 + 45) = 1;
                if ( v28[1] >= 0x4Du )
                  *(_BYTE *)(v69 + 44) = v28[76];
              }
              if ( (v28[12] & 2) != 0 )
                *(_BYTE *)(v69 + 14) = 1;
              ++v4;
            }
          }
        }
        else
        {
          if ( v29 == 3 && (_BYTE)v27 == 8 )
          {
            MemoryInternal = HalpMmAllocateMemoryInternal(24LL, 1LL);
            v64 = MemoryInternal;
            if ( !MemoryInternal )
              return 3221225626LL;
            *(_BYTE *)(MemoryInternal + 8) = 0;
            *(_DWORD *)(MemoryInternal + 16) = *((unsigned __int16 *)v28 + 1);
            v67 = *((_DWORD *)v28 + 1);
            goto LABEL_90;
          }
          if ( v29 == 4 && (_BYTE)v27 == 6 || v29 == 10 && (_BYTE)v27 == 12 )
          {
            v64 = HalpMmAllocateMemoryInternal(24LL, 1LL);
            if ( !v64 )
              return 3221225626LL;
            *(_OWORD *)v64 = 0LL;
            *(_QWORD *)(v64 + 16) = 0LL;
            *(_BYTE *)(v64 + 8) = 1;
            if ( *v28 == 4 )
            {
              v65 = (unsigned __int8)v28[2];
              *(_DWORD *)(v64 + 12) = v65;
              if ( v28[2] == 0xFF )
                v65 = -1;
              *(_DWORD *)(v64 + 12) = v65;
              *(_DWORD *)(v64 + 16) = *(unsigned __int16 *)(v28 + 3);
              v66 = v28[5];
            }
            else
            {
              *(_DWORD *)(v64 + 12) = *((_DWORD *)v28 + 1);
              *(_DWORD *)(v64 + 16) = *((unsigned __int16 *)v28 + 1);
              v66 = v28[8];
            }
            v67 = -(v66 != 0) - 4;
LABEL_90:
            *(_DWORD *)(v64 + 20) = v67;
            *(_QWORD *)v64 = HalpInterruptNmiSources;
            HalpInterruptNmiSources = v64;
            goto LABEL_38;
          }
          if ( v29 == 2 && (_BYTE)v27 == 10 )
          {
            if ( (int)HalpInterruptGsiToLine(*((unsigned int *)v28 + 1), &v87) >= 0 )
            {
              v56 = HalpMmAllocateMemoryInternal(40LL, 1LL);
              v57 = v56;
              if ( !v56 )
                return 3221225626LL;
              *(_OWORD *)v56 = 0LL;
              *(_OWORD *)(v56 + 16) = 0LL;
              *(_QWORD *)(v56 + 32) = 0LL;
              v58 = (unsigned __int8)v28[3];
              if ( v58 < 8 )
              {
                v59 = 45056;
              }
              else
              {
                v58 -= 8;
                v59 = 45057;
              }
              *(_DWORD *)(v57 + 16) = v59;
              *(_DWORD *)(v57 + 20) = v58;
              *(_QWORD *)(v57 + 24) = v87;
              v60 = 2;
              if ( (v28[8] & 3u) < 2 )
                v60 = 1;
              *(_DWORD *)(v57 + 36) = v60;
              *(_DWORD *)(v57 + 32) = (v28[8] & 8) == 0;
              v61 = (__int64 *)qword_140C498C8;
              if ( *(__int64 **)qword_140C498C8 != &HalpInterruptOverrides )
                __fastfail(3u);
              *(_QWORD *)v57 = &HalpInterruptOverrides;
              *(_QWORD *)(v57 + 8) = v61;
              *v61 = v57;
              qword_140C498C8 = v57;
            }
            v88 = 0;
          }
        }
      }
      else
      {
        v30 = (_DWORD *)(HalpInterruptProcessorState + ((unsigned __int64)v4 << 6));
        if ( (v28[4] & 1) != 0 )
        {
          *v30 = (unsigned __int8)v28[3];
          v30[1] = (unsigned __int8)v28[2];
          v31 = (unsigned __int8)v28[3];
LABEL_37:
          v30[2] = v31;
          ++v4;
        }
      }
LABEL_38:
      if ( (unsigned __int64)(v9 + 2) > v7 )
        goto LABEL_39;
    }
  }
  if ( v8 <= v7 )
  {
    while ( 1 )
    {
      v10 = (unsigned __int8)v9[1];
      if ( (unsigned __int8)v10 < 2u )
        goto LABEL_13;
      v11 = &v9[v10];
      if ( (unsigned __int64)&v9[v10] > v7 )
        goto LABEL_13;
      v12 = v9;
      v9 += v10;
      v13 = *v12;
      if ( !*v12 && (_BYTE)v10 == 8 )
        break;
      if ( v13 == 9 && (_BYTE)v10 == 16 )
      {
        v14 = (v12[8] & 1) == 0;
        goto LABEL_8;
      }
      if ( v13 == 1 && (_BYTE)v10 == 12 )
      {
        ++HalpInterruptIoApicCount;
      }
      else if ( v13 == 11 && (unsigned __int8)v10 >= 0x28u )
      {
        v14 = (v12[12] & 1) == 0;
        goto LABEL_8;
      }
LABEL_12:
      if ( (unsigned __int64)(v11 + 2) > v7 )
        goto LABEL_13;
    }
    v14 = (v12[4] & 1) == 0;
LABEL_8:
    if ( !v14 )
      LODWORD(HalpInterruptProcessorCount) = HalpInterruptProcessorCount + 1;
    LODWORD(v5) = v5 + 1;
    if ( (unsigned int)v5 > HalpInterruptMaxProcessors )
      HalpInterruptMaxProcessors = v5;
    goto LABEL_12;
  }
LABEL_13:
  HalpInterruptIoApic = HalpMmAllocateMemoryInternal((unsigned int)(16 * HalpInterruptIoApicCount), 1LL);
  if ( HalpInterruptIoApic )
  {
    v15 = 0;
    v16 = a1 + *(unsigned int *)(a1 + 4);
    if ( v8 <= v16 )
    {
      do
      {
        v17 = *(unsigned __int8 *)(v6 + 1);
        if ( (unsigned __int8)v17 < 2u || v6 + v17 > v16 )
          break;
        v18 = v6;
        v6 += v17;
        if ( *(_BYTE *)v18 == 1 && (_BYTE)v17 == 12 )
        {
          v62 = HalpInterruptIoApic;
          v63 = 2LL * v15++;
          *(_DWORD *)(HalpInterruptIoApic + 8 * v63) = *(unsigned __int8 *)(v18 + 2);
          *(_DWORD *)(v62 + 8 * v63 + 4) = *(_DWORD *)(v18 + 4);
          *(_DWORD *)(v62 + 8 * v63 + 8) = *(_DWORD *)(v18 + 8);
        }
      }
      while ( v6 + 2 <= v16 );
    }
    if ( HalpInterruptIoApicCount )
    {
      v19 = (unsigned int)HalpInterruptIoApicCount;
      v20 = (unsigned int)HalpInterruptIoApicCount;
      v21 = HalpInterruptIoApic + 8;
      v22 = (unsigned int *)(HalpInterruptIoApic + 12);
      do
      {
        v23 = *(v22 - 1);
        v24 = (_DWORD *)v21;
        *v22 = -1;
        v25 = v19;
        do
        {
          if ( *v24 > v23 )
          {
            v68 = *v24 - v23;
            if ( v68 < *v22 )
              *v22 = v68;
          }
          v24 += 4;
          --v25;
        }
        while ( v25 );
        v22 += 4;
        --v20;
      }
      while ( v20 );
    }
    return v88;
  }
  HalpInterruptLastProblem = 30;
  return 3221225495LL;
}
