/*
 * XREFs of MiTerminateWsleCluster @ 0x14029AE10
 * Callers:
 *     MiDecommitPages @ 0x14021CD20 (MiDecommitPages.c)
 *     MiAppendWsleCluster @ 0x14021DFD0 (MiAppendWsleCluster.c)
 *     MiDeleteVaTail @ 0x14029AD00 (MiDeleteVaTail.c)
 *     MiDeleteVa @ 0x14029BBC0 (MiDeleteVa.c)
 *     MiDeleteSystemPagableVm @ 0x1402AB670 (MiDeleteSystemPagableVm.c)
 *     MiRemoveMappedPtes @ 0x1402B38F0 (MiRemoveMappedPtes.c)
 *     MiDeletePteWsleCluster @ 0x140310EB8 (MiDeletePteWsleCluster.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiDeleteValidSystemPage @ 0x1402235A0 (MiDeleteValidSystemPage.c)
 *     MiInitializeTbFlushStamps @ 0x140223C50 (MiInitializeTbFlushStamps.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiRemoveWsle @ 0x14029D120 (MiRemoveWsle.c)
 *     MiUnlockWsle @ 0x1402B6FC0 (MiUnlockWsle.c)
 *     MiCountWslesInPageTable @ 0x1402DE480 (MiCountWslesInPageTable.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiCompressTbFlushList @ 0x1402F66E0 (MiCompressTbFlushList.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     qsort @ 0x1403CE680 (qsort.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 __fastcall MiTerminateWsleCluster(__int64 a1)
{
  ULONG_PTR v2; // r13
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
  char v18; // r9
  __int64 v19; // rbx
  unsigned __int64 v20; // r15
  unsigned int v21; // r8d
  char v22; // r9
  __int64 v23; // rax
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rbx
  __int64 v27; // rdx
  _KPROCESS *Process; // rcx
  unsigned __int64 *v29; // rbx
  __int64 v30; // rbx
  __int64 result; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // rax
  char v35; // r11
  char v36; // cl
  unsigned __int64 v37; // rdi
  int v38; // esi
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  unsigned __int64 v47; // rcx
  __int64 v48; // rsi
  unsigned __int64 v49; // rdi
  unsigned __int64 v50; // rbx
  struct _LIST_ENTRY *v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rdx
  struct _LIST_ENTRY *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v59; // [rsp+38h] [rbp-C8h] BYREF
  ULONG_PTR v60; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v61; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v62; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v63[3]; // [rsp+58h] [rbp-A8h] BYREF
  int v64; // [rsp+90h] [rbp-70h] BYREF
  __int16 v65; // [rsp+94h] [rbp-6Ch]
  __int16 v66; // [rsp+96h] [rbp-6Ah]
  __int64 v67; // [rsp+98h] [rbp-68h]
  __int64 v68; // [rsp+A0h] [rbp-60h]
  _QWORD Base[21]; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD v70[8]; // [rsp+150h] [rbp+50h] BYREF

  v66 = 0;
  memset(&Base[1], 0, 0x98uLL);
  v2 = *(_QWORD *)(a1 + 8);
  v60 = v2;
  memset(v63, 0, sizeof(v63));
  if ( !v2 )
    return 0LL;
  v3 = 0xFFFFF68000000000uLL;
  v4 = *(_QWORD *)a1;
  v5 = 0LL;
  v58 = *(_QWORD *)a1;
  v6 = (__int64)(v2 << 25) >> 16;
  v7 = *(_BYTE *)(*(_QWORD *)a1 + 184LL);
  v61 = v6;
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
  v67 = 20LL;
  v64 = v9;
  v65 = 0;
  v68 = 0LL;
  Base[0] = 0LL;
  v10 = 0xFFFFF6FB7DBED7F8uLL;
  if ( (*(_BYTE *)(v4 + 184) & 7) == 0 )
  {
    if ( !*(_QWORD *)(a1 + 16) )
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
          v44 = *((_QWORD *)&Flink->Flink + ((v11 >> 3) & 0x1FF));
          v45 = v13 | 0x20;
          if ( (v44 & 0x20) == 0 )
            v45 = *(_QWORD *)v11;
          v13 = v45;
          if ( (v44 & 0x42) != 0 )
            v13 = v45 | 0x42;
        }
      }
      v14 = *(_QWORD *)v11;
      v15 = v13 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
      v59 = v15;
      if ( v11 >= 0xFFFFF6FB7DBED000uLL && v11 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (unsigned int)MiPteHasShadow(0xFFFFF6FFFFFFFFFFuLL, v14) )
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
        if ( MiPteInShadowRange(v11) && (unsigned int)MiPteHasShadow(v17, v16) )
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
        v35 = _InterlockedExchange64((volatile __int64 *)v11, v15);
        if ( v11 >= 0xFFFFF6FB7DBED000uLL && v11 <= v10 )
        {
          MiWritePteShadow(v11, v15);
          v3 = 0xFFFFF68000000000uLL;
        }
        if ( (v35 & 0x20) == 0 )
          goto LABEL_24;
      }
      v18 = v65;
      v19 = 1LL;
      v20 = v12;
      if ( v64 != 1 && (v65 & 8) == 0 && v12 >= v3 && v12 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v18 = v65 | 8;
        LOBYTE(v65) = v65 | 8;
      }
      v21 = HIDWORD(v67);
      if ( !HIDWORD(v67) )
      {
LABEL_36:
        if ( HIDWORD(v67) >= (unsigned int)v67 )
        {
          HIBYTE(v65) = 1;
        }
        else
        {
          while ( 1 )
          {
            v33 = (unsigned __int64)(v19 - 1) > 0x3FF ? 1024LL : v19;
            v34 = v20 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v33 - 1) & 0x3FF;
            v19 -= v33;
            v20 += v33 << 12;
            Base[v21] = v34;
            v68 += v33;
            v21 = HIDWORD(v67) + 1;
            HIDWORD(v67) = v21;
            if ( v21 == (_DWORD)v67 && (v65 & 4) == 0 )
            {
              qsort(Base, v21, 8uLL, MiTbFlushSort);
              MiCompressTbFlushList(&v64);
              v21 = HIDWORD(v67);
              if ( HIDWORD(v67) == (_DWORD)v67 )
                break;
            }
            if ( !v19 )
              goto LABEL_24;
          }
          if ( v19 )
          {
            HIBYTE(v65) = 1;
            v68 = HIDWORD(v67);
          }
        }
        goto LABEL_24;
      }
      v22 = v18 & 4;
      if ( v22
        || (v23 = Base[HIDWORD(v67) - 1], (v23 & 0xC00) != 0)
        || (v24 = Base[HIDWORD(v67) - 1] & 0x3FFLL, (v23 & 0xFFFFFFFFFFFFF000uLL) + ((v24 + 1) << 12) != v12)
        || v24 + 1 < v24
        || v24 + 1 > 0x3FF )
      {
        if ( v22 )
          goto LABEL_36;
        v32 = Base[HIDWORD(v67) - 1];
        if ( (v32 & 0xC00) != 0 )
          goto LABEL_36;
        if ( (v32 & 0xFFFFFFFFFFFFF000uLL) != v12 + 4096 )
          goto LABEL_36;
        v47 = Base[HIDWORD(v67) - 1] & 0x3FFLL;
        if ( v47 + 1 < v47 || v47 + 1 > 0x3FF )
          goto LABEL_36;
        ++v68;
        Base[HIDWORD(v67) - 1] = (v32 - 4096) ^ ((unsigned __int16)(v32 - 4096) ^ (unsigned __int16)(v32 - 4096 + 1)) & 0x3FF;
      }
      else
      {
        ++v68;
        Base[HIDWORD(v67) - 1] = v23 ^ ((unsigned __int16)v23 ^ (unsigned __int16)(v23 + 1)) & 0x3FF;
      }
LABEL_24:
      ++v5;
      v3 = 0xFFFFF68000000000uLL;
      v11 += 8LL;
      v12 += 4096LL;
      v10 = 0xFFFFF6FB7DBED7F8uLL;
      if ( v5 >= *(_QWORD *)(a1 + 16) )
      {
        v2 = v60;
        v6 = v61;
        v4 = v58;
        goto LABEL_26;
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 28) & 0xF) == 8 && *(_QWORD *)(a1 + 16) )
  {
    v48 = (__int64)(v2 << 25) >> 16;
    v49 = v2;
    do
    {
      v50 = *(_QWORD *)v49;
      if ( MiPteInShadowRange(v49)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v50 & 1) != 0
        && ((v50 & 0x20) == 0 || (v50 & 0x42) == 0) )
      {
        v51 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v51 )
        {
          v52 = *((_QWORD *)&v51->Flink + ((v49 >> 3) & 0x1FF));
          v53 = v50 | 0x20;
          if ( (v52 & 0x20) == 0 )
            v53 = v50;
          v50 = v53;
          if ( (v52 & 0x42) != 0 )
            v50 = v53 | 0x42;
        }
      }
      MiUnlockWsle(v58, v48, 48 * ((v50 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
      ++v5;
      v49 += 8LL;
      v48 += 4096LL;
    }
    while ( v5 < *(_QWORD *)(a1 + 16) );
    v2 = v60;
    v6 = v61;
    v4 = v58;
  }
  if ( (*(_DWORD *)(a1 + 24) & 4) == 0 )
    MiInsertTbFlushEntry((__int64)&v64, v6, *(_QWORD *)(a1 + 16), 0);
LABEL_26:
  MiRemoveWsle(v4, v6, *(_QWORD *)(a1 + 16), *(unsigned __int8 *)(a1 + 28), 10, *(_DWORD *)(a1 + 24) & 1);
  v25 = ((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v26 = *(_QWORD *)v25;
  if ( v25 >= 0xFFFFF6FB7DBED000uLL
    && v25 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v26 & 1) != 0
    && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
  {
    v54 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v54 )
    {
      v55 = *((_QWORD *)&v54->Flink + ((v25 >> 3) & 0x1FF));
      v56 = v26 | 0x20;
      if ( (v55 & 0x20) == 0 )
        v56 = v26;
      v26 = v56;
      if ( (v55 & 0x42) != 0 )
        v26 = v56 | 0x42;
    }
  }
  v62 = v26;
  if ( MiPteInShadowRange((unsigned __int64)&v62) && (MiFlags & 0xC00000) != 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process->AddressPolicy != 1 && (v26 & 1) != 0 && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v27 = (__int64)Process[1].ProcessListEntry.Flink;
      if ( v27 )
      {
        v57 = *(_QWORD *)(v27 + 8 * (((unsigned __int64)&v62 >> 3) & 0x1FF));
        v27 = v26 | 0x20;
        Process = (_KPROCESS *)(unsigned __int8)v57;
        LOBYTE(Process) = v57 & 0x20;
        if ( (v57 & 0x20) == 0 )
          v27 = v26;
        v26 = v27;
        if ( (v57 & 0x42) != 0 )
          v26 = v27 | 0x42;
      }
    }
  }
  v29 = (unsigned __int64 *)(48 * ((v26 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  if ( ((*(_DWORD *)v29 >> 4) & 0x3FF) == 0 )
  {
    MiCountWslesInPageTable(Process, v6, v70);
    v36 = 8;
    while ( 1 )
    {
      v27 = (unsigned int)v70[(unsigned __int8)--v36];
      if ( (_DWORD)v27 )
        break;
      if ( !v36 )
        goto LABEL_29;
    }
    v27 &= 0x3FFu;
    *v29 = *v29 & 0xFFFFFFFFFFFE000FuLL | (16 * (v27 | ((unsigned __int64)(v36 & 7) << 10)));
  }
LABEL_29:
  if ( (*(_BYTE *)(v4 + 184) & 7) != 0 )
  {
    v37 = 0LL;
    v38 = (2 * (*(_DWORD *)(a1 + 24) & 8)) | 4;
    if ( (*(_DWORD *)(a1 + 24) & 0x10) == 0 )
      v38 = 2 * (*(_DWORD *)(a1 + 24) & 8);
    if ( *(_QWORD *)(a1 + 16) )
    {
      while ( 1 )
      {
        MiDeleteValidSystemPage(v58, v2, v38, (__int64)v63);
        if ( (*(_DWORD *)(a1 + 24) & 4) != 0 )
          break;
LABEL_61:
        ++v37;
        v2 += 8LL;
        v6 += 4096LL;
        if ( v37 >= *(_QWORD *)(a1 + 16) )
          goto LABEL_30;
      }
      v59 = 0LL;
      MiInitializeTbFlushStamps((__int64 *)&v59, v27);
      v39 = v59;
      if ( MiPteInShadowRange(v2) )
      {
        if ( (unsigned int)MiPteHasShadow(v41, v40) )
        {
          if ( !HIBYTE(word_140C4DF48) && (v39 & 1) != 0 )
            v39 |= 0x8000000000000000uLL;
          *(_QWORD *)v2 = v39;
          MiWritePteShadow(v2, v39);
          goto LABEL_56;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v39 & 1) != 0 )
        {
          v39 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v2 = v39;
LABEL_56:
      v27 = qword_140C4DE80;
      v42 = v59;
      if ( qword_140C4DE80 && (v59 & 0x10) == 0 )
        v42 = v59 & ~qword_140C4DE80;
      if ( (v42 & 0xFFFFFFFF00000000uLL) == 0 )
        MiInsertTbFlushEntry((__int64)&v64, v6, 1LL, 0);
      goto LABEL_61;
    }
  }
LABEL_30:
  v30 = 0LL;
  if ( (*(_BYTE *)(a1 + 24) & 1) != 0 )
    v30 = *((_QWORD *)&v63[0] + 1);
  MiFlushTbList((__int64)&v64, (_KPROCESS *)v27);
  result = v30;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
