/*
 * XREFs of MiTerminateWsleCluster @ 0x140241DE0
 * Callers:
 *     MiDeleteVaTail @ 0x140241CD0 (MiDeleteVaTail.c)
 *     MiDeleteVa @ 0x140242B90 (MiDeleteVa.c)
 *     MiDeleteSystemPagableVm @ 0x140252640 (MiDeleteSystemPagableVm.c)
 *     MiRemoveMappedPtes @ 0x14025A8C0 (MiRemoveMappedPtes.c)
 *     MiDecommitPages @ 0x1402AF9A0 (MiDecommitPages.c)
 *     MiAppendWsleCluster @ 0x1402B0C50 (MiAppendWsleCluster.c)
 *     MiDeletePteWsleCluster @ 0x14034E960 (MiDeletePteWsleCluster.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiRemoveWsle @ 0x1402440F0 (MiRemoveWsle.c)
 *     MiUnlockWsle @ 0x14025DF90 (MiUnlockWsle.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiDeleteValidSystemPage @ 0x1402B6220 (MiDeleteValidSystemPage.c)
 *     MiInitializeTbFlushStamps @ 0x1402B68D0 (MiInitializeTbFlushStamps.c)
 *     MiCountWslesInPageTable @ 0x1403018B0 (MiCountWslesInPageTable.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiCompressTbFlushList @ 0x140333580 (MiCompressTbFlushList.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     qsort @ 0x1403CF4C0 (qsort.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall MiTerminateWsleCluster(__int64 *a1)
{
  unsigned __int64 v2; // r13
  unsigned __int64 v3; // r8
  __int64 v4; // rdi
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r15
  char v7; // al
  unsigned __int8 v8; // al
  int v9; // ecx
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // r9
  __int64 v21; // rbx
  unsigned __int64 v22; // r15
  unsigned int v23; // r8d
  char v24; // r9
  __int64 v25; // rax
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rbx
  __int64 v29; // rdx
  _KPROCESS *Process; // rcx
  unsigned __int64 *v31; // rbx
  __int64 v32; // rbx
  __int64 result; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  unsigned __int64 v36; // rax
  char v37; // r11
  char v38; // cl
  unsigned __int64 v39; // rdi
  unsigned int v40; // esi
  unsigned __int64 v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v48; // rax
  __int64 v49; // rdx
  unsigned __int64 v51; // rcx
  __int64 v52; // rsi
  unsigned __int64 v53; // rdi
  unsigned __int64 v54; // rbx
  struct _LIST_ENTRY *v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rdx
  struct _LIST_ENTRY *v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v63; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v64; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v65; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v66; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v67[3]; // [rsp+58h] [rbp-A8h] BYREF
  int v68; // [rsp+90h] [rbp-70h] BYREF
  __int16 v69; // [rsp+94h] [rbp-6Ch]
  __int16 v70; // [rsp+96h] [rbp-6Ah]
  __int64 v71; // [rsp+98h] [rbp-68h]
  __int64 v72; // [rsp+A0h] [rbp-60h]
  _QWORD Base[21]; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD v74[8]; // [rsp+150h] [rbp+50h] BYREF

  v70 = 0;
  memset(&Base[1], 0, 0x98uLL);
  v2 = a1[1];
  v64 = v2;
  memset(v67, 0, sizeof(v67));
  if ( !v2 )
    return 0LL;
  v3 = 0xFFFFF68000000000uLL;
  v4 = *a1;
  v5 = 0LL;
  v62 = *a1;
  v6 = (__int64)(v2 << 25) >> 16;
  v7 = *(_BYTE *)(*a1 + 184);
  v65 = v6;
  v8 = v7 & 7;
  if ( v8 )
  {
    v9 = 2;
    if ( v8 >= 2u )
      v9 = 0;
  }
  else
  {
    v9 = 1;
  }
  v71 = 20LL;
  v68 = v9;
  v69 = 0;
  v72 = 0LL;
  Base[0] = 0LL;
  v10 = 0xFFFFF6FB7DBED7F8uLL;
  if ( (*(_BYTE *)(v4 + 184) & 7) == 0 )
  {
    if ( !a1[2] )
      goto LABEL_26;
    v11 = v2;
    v12 = (__int64)(v2 << 25) >> 16;
    while ( 1 )
    {
      v13 = *(_QWORD *)v11;
      if ( v11 >= 0xFFFFF6FB7DBED000uLL
        && v11 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v13 & 1) != 0
        && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v48 = *((_QWORD *)&Flink->Flink + ((v11 >> 3) & 0x1FF));
          v49 = v13 | 0x20;
          if ( (v48 & 0x20) == 0 )
            v49 = *(_QWORD *)v11;
          v13 = v49;
          if ( (v48 & 0x42) != 0 )
            v13 = v49 | 0x42;
        }
      }
      v14 = *(_QWORD *)v11;
      v15 = v13 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
      v63 = v15;
      if ( v11 >= 0xFFFFF6FB7DBED000uLL && v11 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (unsigned int)MiPteHasShadow(0xFFFFF6FFFFFFFFFFuLL, v14, 0xFFFFF68000000000uLL, 0xFFFFF6FB7DBED7F8uLL) )
          LOBYTE(v14) = v14 | 0x20;
      }
      if ( (MiFlags & 0x800) != 0 )
      {
        LOBYTE(v14) = 32;
      }
      else if ( (MiFlags & 0x4000000) != 0 )
      {
        _mm_lfence();
      }
      if ( (v14 & 0x20) != 0 )
      {
        if ( MiPteInShadowRange(v11) && (unsigned int)MiPteHasShadow(v17, v16, v18, v19) )
        {
          *(_QWORD *)v11 = v15;
          MiWritePteShadow(v11, v15);
        }
        else
        {
          *(_QWORD *)v11 = v15;
        }
        v3 = 0xFFFFF68000000000uLL;
      }
      else
      {
        v37 = _InterlockedExchange64((volatile __int64 *)v11, v15);
        if ( v11 >= 0xFFFFF6FB7DBED000uLL && v11 <= v10 )
        {
          MiWritePteShadow(v11, v15);
          v3 = 0xFFFFF68000000000uLL;
        }
        if ( (v37 & 0x20) == 0 )
          goto LABEL_24;
      }
      v20 = v69;
      v21 = 1LL;
      v22 = v12;
      if ( v68 != 1 && (v69 & 8) == 0 && v12 >= v3 && v12 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v20 = v69 | 8;
        LOBYTE(v69) = v69 | 8;
      }
      v23 = HIDWORD(v71);
      if ( !HIDWORD(v71) )
      {
LABEL_36:
        if ( HIDWORD(v71) >= (unsigned int)v71 )
        {
          HIBYTE(v69) = 1;
        }
        else
        {
          while ( 1 )
          {
            v35 = (unsigned __int64)(v21 - 1) > 0x3FF ? 1024LL : v21;
            v36 = v22 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v35 - 1) & 0x3FF;
            v21 -= v35;
            v22 += v35 << 12;
            Base[v23] = v36;
            v72 += v35;
            v23 = HIDWORD(v71) + 1;
            HIDWORD(v71) = v23;
            if ( v23 == (_DWORD)v71 && (v69 & 4) == 0 )
            {
              qsort(Base, v23, 8uLL, MiTbFlushSort);
              MiCompressTbFlushList(&v68);
              v23 = HIDWORD(v71);
              if ( HIDWORD(v71) == (_DWORD)v71 )
                break;
            }
            if ( !v21 )
              goto LABEL_24;
          }
          if ( v21 )
          {
            HIBYTE(v69) = 1;
            v72 = HIDWORD(v71);
          }
        }
        goto LABEL_24;
      }
      v24 = v20 & 4;
      if ( v24
        || (v25 = Base[HIDWORD(v71) - 1], (v25 & 0xC00) != 0)
        || (v26 = Base[HIDWORD(v71) - 1] & 0x3FFLL, (v25 & 0xFFFFFFFFFFFFF000uLL) + ((v26 + 1) << 12) != v12)
        || v26 + 1 < v26
        || v26 + 1 > 0x3FF )
      {
        if ( v24 )
          goto LABEL_36;
        v34 = Base[HIDWORD(v71) - 1];
        if ( (v34 & 0xC00) != 0 )
          goto LABEL_36;
        if ( (v34 & 0xFFFFFFFFFFFFF000uLL) != v12 + 4096 )
          goto LABEL_36;
        v51 = Base[HIDWORD(v71) - 1] & 0x3FFLL;
        if ( v51 + 1 < v51 || v51 + 1 > 0x3FF )
          goto LABEL_36;
        ++v72;
        Base[HIDWORD(v71) - 1] = (v34 - 4096) ^ ((unsigned __int16)(v34 - 4096) ^ (unsigned __int16)(v34 - 4096 + 1)) & 0x3FF;
      }
      else
      {
        ++v72;
        Base[HIDWORD(v71) - 1] = v25 ^ ((unsigned __int16)v25 ^ (unsigned __int16)(v25 + 1)) & 0x3FF;
      }
LABEL_24:
      ++v5;
      v3 = 0xFFFFF68000000000uLL;
      v11 += 8LL;
      v12 += 4096LL;
      v10 = 0xFFFFF6FB7DBED7F8uLL;
      if ( v5 >= a1[2] )
      {
        v2 = v64;
        v6 = v65;
        v4 = v62;
        goto LABEL_26;
      }
    }
  }
  if ( (*((_BYTE *)a1 + 28) & 0xF) == 8 && a1[2] )
  {
    v52 = (__int64)(v2 << 25) >> 16;
    v53 = v2;
    do
    {
      v54 = *(_QWORD *)v53;
      if ( MiPteInShadowRange(v53)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v54 & 1) != 0
        && ((v54 & 0x20) == 0 || (v54 & 0x42) == 0) )
      {
        v55 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v55 )
        {
          v56 = *((_QWORD *)&v55->Flink + ((v53 >> 3) & 0x1FF));
          v57 = v54 | 0x20;
          if ( (v56 & 0x20) == 0 )
            v57 = v54;
          v54 = v57;
          if ( (v56 & 0x42) != 0 )
            v54 = v57 | 0x42;
        }
      }
      MiUnlockWsle(v62, v52, 48 * ((v54 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
      ++v5;
      v53 += 8LL;
      v52 += 4096LL;
    }
    while ( v5 < a1[2] );
    v2 = v64;
    v6 = v65;
    v4 = v62;
  }
  if ( (a1[3] & 4) == 0 )
    MiInsertTbFlushEntry(&v68, v6, a1[2], 0LL);
LABEL_26:
  MiRemoveWsle(v4, v6, a1[2], *((unsigned __int8 *)a1 + 28), 10, a1[3] & 1);
  v27 = ((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v28 = *(_QWORD *)v27;
  if ( v27 >= 0xFFFFF6FB7DBED000uLL
    && v27 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v28 & 1) != 0
    && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
  {
    v58 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v58 )
    {
      v59 = *((_QWORD *)&v58->Flink + ((v27 >> 3) & 0x1FF));
      v60 = v28 | 0x20;
      if ( (v59 & 0x20) == 0 )
        v60 = v28;
      v28 = v60;
      if ( (v59 & 0x42) != 0 )
        v28 = v60 | 0x42;
    }
  }
  v66 = v28;
  if ( MiPteInShadowRange((unsigned __int64)&v66) && (MiFlags & 0xC00000) != 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process->AddressPolicy != 1 && (v28 & 1) != 0 && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v29 = (__int64)Process[1].ProcessListEntry.Flink;
      if ( v29 )
      {
        v61 = *(_QWORD *)(v29 + 8 * (((unsigned __int64)&v66 >> 3) & 0x1FF));
        v29 = v28 | 0x20;
        Process = (_KPROCESS *)(unsigned __int8)v61;
        LOBYTE(Process) = v61 & 0x20;
        if ( (v61 & 0x20) == 0 )
          v29 = v28;
        v28 = v29;
        if ( (v61 & 0x42) != 0 )
          v28 = v29 | 0x42;
      }
    }
  }
  v31 = (unsigned __int64 *)(48 * ((v28 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  if ( ((*(_DWORD *)v31 >> 4) & 0x3FF) == 0 )
  {
    MiCountWslesInPageTable(Process, v6, v74);
    v38 = 8;
    while ( 1 )
    {
      v29 = (unsigned int)v74[(unsigned __int8)--v38];
      if ( (_DWORD)v29 )
        break;
      if ( !v38 )
        goto LABEL_29;
    }
    v29 &= 0x3FFu;
    *v31 = *v31 & 0xFFFFFFFFFFFE000FuLL | (16 * (v29 | ((unsigned __int64)(v38 & 7) << 10)));
  }
LABEL_29:
  if ( (*(_BYTE *)(v4 + 184) & 7) != 0 )
  {
    v39 = 0LL;
    v40 = (2 * (a1[3] & 8)) | 4;
    if ( (a1[3] & 0x10) == 0 )
      v40 = 2 * (a1[3] & 8);
    if ( a1[2] )
    {
      while ( 1 )
      {
        MiDeleteValidSystemPage(v62, v2, v40, v67);
        if ( (a1[3] & 4) != 0 )
          break;
LABEL_61:
        ++v39;
        v2 += 8LL;
        v6 += 4096LL;
        if ( v39 >= a1[2] )
          goto LABEL_30;
      }
      v63 = 0LL;
      MiInitializeTbFlushStamps(&v63);
      v41 = v63;
      if ( MiPteInShadowRange(v2) )
      {
        if ( (unsigned int)MiPteHasShadow(v43, v42, v44, v45) )
        {
          if ( !HIBYTE(word_140C4DE08) && (v41 & 1) != 0 )
            v41 |= 0x8000000000000000uLL;
          *(_QWORD *)v2 = v41;
          MiWritePteShadow(v2, v41);
          goto LABEL_56;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v41 & 1) != 0 )
        {
          v41 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v2 = v41;
LABEL_56:
      v29 = qword_140C4DD40;
      v46 = v63;
      if ( qword_140C4DD40 && (v63 & 0x10) == 0 )
        v46 = v63 & ~qword_140C4DD40;
      if ( (v46 & 0xFFFFFFFF00000000uLL) == 0 )
        MiInsertTbFlushEntry(&v68, v6, 1LL, 0LL);
      goto LABEL_61;
    }
  }
LABEL_30:
  v32 = 0LL;
  if ( (a1[3] & 1) != 0 )
    v32 = *((_QWORD *)&v67[0] + 1);
  MiFlushTbList((__int64)&v68, (_KPROCESS *)v29);
  result = v32;
  a1[1] = 0LL;
  a1[2] = 0LL;
  return result;
}
