/*
 * XREFs of MiTerminateWsleCluster @ 0x14033AD20
 * Callers:
 *     MiDeletePteWsleCluster @ 0x1402C0C2C (MiDeletePteWsleCluster.c)
 *     MiDeleteSystemPagableVm @ 0x140305A80 (MiDeleteSystemPagableVm.c)
 *     MiRemoveMappedPtes @ 0x140308500 (MiRemoveMappedPtes.c)
 *     MiDecommitPages @ 0x140334820 (MiDecommitPages.c)
 *     MiAppendWsleCluster @ 0x140335AD0 (MiAppendWsleCluster.c)
 *     MiDeleteVa @ 0x140337A80 (MiDeleteVa.c)
 *     MiDeleteVaTail @ 0x14033AB30 (MiDeleteVaTail.c)
 * Callees:
 *     MiUnlockWsle @ 0x14026FC1C (MiUnlockWsle.c)
 *     MiCountWslesInPageTable @ 0x140285180 (MiCountWslesInPageTable.c)
 *     MiInitializeTbFlushStamps @ 0x1402967E0 (MiInitializeTbFlushStamps.c)
 *     MiCompressTbFlushList @ 0x1402A32E0 (MiCompressTbFlushList.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiDeleteValidSystemPage @ 0x140328E20 (MiDeleteValidSystemPage.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MiRemoveWsle @ 0x140338FE0 (MiRemoveWsle.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     qsort @ 0x1403D2AC0 (qsort.c)
 *     memset @ 0x140414200 (memset.c)
 */

__int64 __fastcall MiTerminateWsleCluster(__int64 a1)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // r13
  unsigned __int64 v4; // r8
  __int64 v5; // rdi
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r15
  char v8; // al
  unsigned __int8 v9; // al
  int v10; // ecx
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  char v17; // r9
  __int64 v18; // rbx
  unsigned __int64 v19; // r15
  unsigned int v20; // r8d
  char v21; // r9
  __int64 v22; // rax
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rbx
  __int64 Process; // rcx
  unsigned __int64 *v27; // rbx
  __int64 v28; // rbx
  __int64 result; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // rax
  char v33; // r11
  char v34; // cl
  int v35; // edx
  unsigned __int64 v36; // rdi
  int v37; // esi
  __int64 v38; // rdx
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v46; // r8
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rsi
  unsigned __int64 v49; // rdi
  unsigned __int64 v50; // rbx
  struct _LIST_ENTRY *v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rdx
  struct _LIST_ENTRY *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v61; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v62; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v63; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v64; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v65[3]; // [rsp+58h] [rbp-A8h] BYREF
  int v66; // [rsp+90h] [rbp-70h] BYREF
  __int16 v67; // [rsp+94h] [rbp-6Ch]
  __int16 v68; // [rsp+96h] [rbp-6Ah]
  __int64 v69; // [rsp+98h] [rbp-68h]
  __int64 v70; // [rsp+A0h] [rbp-60h]
  _QWORD Base[21]; // [rsp+A8h] [rbp-58h] BYREF
  _OWORD v72[2]; // [rsp+150h] [rbp+50h] BYREF

  v68 = 0;
  memset(&Base[1], 0, 0x98uLL);
  v3 = *(_QWORD *)(a1 + 8);
  v62 = v3;
  memset(v65, 0, sizeof(v65));
  if ( !v3 )
    return 0LL;
  v4 = 0xFFFFF68000000000uLL;
  v5 = *(_QWORD *)a1;
  v6 = 0LL;
  v60 = *(_QWORD *)a1;
  v7 = (__int64)(v3 << 25) >> 16;
  v8 = *(_BYTE *)(*(_QWORD *)a1 + 184LL);
  v63 = v7;
  v9 = v8 & 7;
  if ( v9 )
  {
    v10 = 2;
    if ( v9 >= 2u )
      v10 = 0;
  }
  else
  {
    v10 = 1;
  }
  v69 = 20LL;
  v66 = v10;
  v67 = 0;
  v70 = 0LL;
  Base[0] = 0LL;
  v11 = 0xFFFFF6FB7DBED7F8uLL;
  if ( (*(_BYTE *)(v5 + 184) & 7) == 0 )
  {
    if ( !*(_QWORD *)(a1 + 16) )
      goto LABEL_26;
    v12 = v3;
    v13 = (__int64)(v3 << 25) >> 16;
    while ( 1 )
    {
      v14 = *(_QWORD *)v12;
      if ( v12 >= 0xFFFFF6FB7DBED000uLL
        && v12 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v14 & 1) != 0
        && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v43 = *((_QWORD *)&Flink->Flink + ((v12 >> 3) & 0x1FF));
          v44 = v14 | 0x20;
          if ( (v43 & 0x20) == 0 )
            v44 = *(_QWORD *)v12;
          v14 = v44;
          if ( (v43 & 0x42) != 0 )
            v14 = v44 | 0x42;
        }
      }
      v15 = *(_QWORD *)v12;
      v16 = v14 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
      v61 = v16;
      if ( v12 >= 0xFFFFF6FB7DBED000uLL && v12 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (unsigned int)MiPteHasShadow() )
          v15 |= 0x20uLL;
      }
      if ( (MiFlags & 0x800) != 0 )
      {
        v15 = 32LL;
      }
      else if ( (MiFlags & 0x4000000) != 0 )
      {
        _mm_lfence();
      }
      if ( (v15 & 0x20) != 0 )
      {
        if ( (unsigned int)MiPteInShadowRange(v12, v15) && (unsigned int)MiPteHasShadow() )
        {
          *(_QWORD *)v12 = v16;
          MiWritePteShadow(v12, v16, v46);
        }
        else
        {
          *(_QWORD *)v12 = v16;
        }
        v4 = 0xFFFFF68000000000uLL;
      }
      else
      {
        v33 = _InterlockedExchange64((volatile __int64 *)v12, v16);
        if ( v12 >= 0xFFFFF6FB7DBED000uLL && v12 <= v11 )
        {
          MiWritePteShadow(v12, v16, v4);
          v4 = 0xFFFFF68000000000uLL;
        }
        if ( (v33 & 0x20) == 0 )
          goto LABEL_24;
      }
      v17 = v67;
      v18 = 1LL;
      v19 = v13;
      if ( v66 != 1 && (v67 & 8) == 0 && v13 >= v4 && v13 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v17 = v67 | 8;
        LOBYTE(v67) = v67 | 8;
      }
      v20 = HIDWORD(v69);
      if ( !HIDWORD(v69) )
      {
LABEL_36:
        if ( HIDWORD(v69) >= (unsigned int)v69 )
        {
          HIBYTE(v67) = 1;
        }
        else
        {
          while ( 1 )
          {
            v31 = (unsigned __int64)(v18 - 1) > 0x3FF ? 1024LL : v18;
            v32 = v19 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v31 - 1) & 0x3FF;
            v18 -= v31;
            v19 += v31 << 12;
            Base[v20] = v32;
            v70 += v31;
            v20 = HIDWORD(v69) + 1;
            HIDWORD(v69) = v20;
            if ( v20 == (_DWORD)v69 && (v67 & 4) == 0 )
            {
              qsort(Base, v20, 8uLL, (int (__cdecl *)(const void *, const void *))MiTbFlushSort);
              MiCompressTbFlushList((__int64)&v66);
              v20 = HIDWORD(v69);
              if ( HIDWORD(v69) == (_DWORD)v69 )
                break;
            }
            if ( !v18 )
              goto LABEL_24;
          }
          if ( v18 )
          {
            HIBYTE(v67) = 1;
            v70 = HIDWORD(v69);
          }
        }
        goto LABEL_24;
      }
      v21 = v17 & 4;
      if ( v21
        || (v22 = Base[HIDWORD(v69) - 1], (v22 & 0xC00) != 0)
        || (v23 = Base[HIDWORD(v69) - 1] & 0x3FFLL, (v22 & 0xFFFFFFFFFFFFF000uLL) + ((v23 + 1) << 12) != v13)
        || v23 + 1 < v23
        || v23 + 1 > 0x3FF )
      {
        if ( v21 )
          goto LABEL_36;
        v30 = Base[HIDWORD(v69) - 1];
        if ( (v30 & 0xC00) != 0 )
          goto LABEL_36;
        if ( (v30 & 0xFFFFFFFFFFFFF000uLL) != v13 + 4096 )
          goto LABEL_36;
        v47 = Base[HIDWORD(v69) - 1] & 0x3FFLL;
        if ( v47 + 1 < v47 || v47 + 1 > 0x3FF )
          goto LABEL_36;
        ++v70;
        Base[HIDWORD(v69) - 1] = (v30 - 4096) ^ ((unsigned __int16)(v30 - 4096) ^ (unsigned __int16)(v30 - 4096 + 1)) & 0x3FF;
      }
      else
      {
        ++v70;
        Base[HIDWORD(v69) - 1] = v22 ^ ((unsigned __int16)v22 ^ (unsigned __int16)(v22 + 1)) & 0x3FF;
      }
LABEL_24:
      ++v6;
      v4 = 0xFFFFF68000000000uLL;
      v12 += 8LL;
      v13 += 4096LL;
      v11 = 0xFFFFF6FB7DBED7F8uLL;
      if ( v6 >= *(_QWORD *)(a1 + 16) )
      {
        v3 = v62;
        v7 = v63;
        v5 = v60;
        goto LABEL_26;
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 28) & 0xF) == 8 && *(_QWORD *)(a1 + 16) )
  {
    v48 = (__int64)(v3 << 25) >> 16;
    v49 = v3;
    do
    {
      v50 = *(_QWORD *)v49;
      if ( (unsigned int)MiPteInShadowRange(v49, v2)
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
      MiUnlockWsle(v60, v48, 48 * ((v50 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
      ++v6;
      v49 += 8LL;
      v48 += 4096LL;
    }
    while ( v6 < *(_QWORD *)(a1 + 16) );
    v3 = v62;
    v7 = v63;
    v5 = v60;
  }
  if ( (*(_DWORD *)(a1 + 24) & 4) == 0 )
    MiInsertTbFlushEntry((__int64)&v66, v7, *(_QWORD *)(a1 + 16), 0);
LABEL_26:
  MiRemoveWsle(v5, v7, *(_QWORD *)(a1 + 16), *(unsigned __int8 *)(a1 + 28), 10, *(_DWORD *)(a1 + 24) & 1);
  v24 = ((v7 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v25 = *(_QWORD *)v24;
  if ( v24 >= 0xFFFFF6FB7DBED000uLL
    && v24 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v25 & 1) != 0
    && ((v25 & 0x20) == 0 || (v25 & 0x42) == 0) )
  {
    v54 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v54 )
    {
      v55 = *((_QWORD *)&v54->Flink + ((v24 >> 3) & 0x1FF));
      v24 = v25 | 0x20;
      if ( (v55 & 0x20) == 0 )
        v24 = v25;
      v25 = v24;
      if ( (v55 & 0x42) != 0 )
        v25 = v24 | 0x42;
    }
  }
  v64 = v25;
  if ( (unsigned int)MiPteInShadowRange(&v64, v24) )
  {
    if ( (MiFlags & 0xC00000) != 0 )
    {
      Process = (__int64)KeGetCurrentThread()->ApcState.Process;
      if ( *(_BYTE *)(Process + 912) != 1 && (v25 & 1) != 0 && ((v25 & 0x20) == 0 || (v25 & 0x42) == 0) )
      {
        Process = (__int64)KeGetCurrentThread()->ApcState.Process;
        v56 = *(_QWORD *)(Process + 1928);
        if ( v56 )
        {
          v57 = *(_QWORD *)(v56 + 8 * (((unsigned __int64)&v64 >> 3) & 0x1FF));
          v58 = v25 | 0x20;
          Process = (unsigned __int8)v57;
          LOBYTE(Process) = v57 & 0x20;
          if ( (v57 & 0x20) == 0 )
            v58 = v25;
          v25 = v58;
          if ( (v57 & 0x42) != 0 )
            v25 = v58 | 0x42;
        }
      }
    }
  }
  v27 = (unsigned __int64 *)(48 * ((v25 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  if ( ((*(_DWORD *)v27 >> 4) & 0x3FF) == 0 )
  {
    MiCountWslesInPageTable(Process, v7, v72);
    v34 = 8;
    while ( 1 )
    {
      v35 = *((_DWORD *)v72 + (unsigned __int8)--v34);
      if ( v35 )
        break;
      if ( !v34 )
        goto LABEL_29;
    }
    *v27 = *v27 & 0xFFFFFFFFFFFE000FuLL | (16 * (v35 & 0x3FF | ((unsigned __int64)(v34 & 7) << 10)));
  }
LABEL_29:
  if ( (*(_BYTE *)(v5 + 184) & 7) != 0 )
  {
    v36 = 0LL;
    v37 = (2 * (*(_DWORD *)(a1 + 24) & 8)) | 4;
    if ( (*(_DWORD *)(a1 + 24) & 0x10) == 0 )
      v37 = 2 * (*(_DWORD *)(a1 + 24) & 8);
    if ( *(_QWORD *)(a1 + 16) )
    {
      while ( 1 )
      {
        MiDeleteValidSystemPage(v60, v3, v37, (__int64)v65);
        if ( (*(_DWORD *)(a1 + 24) & 4) != 0 )
          break;
LABEL_61:
        ++v36;
        v3 += 8LL;
        v7 += 4096LL;
        if ( v36 >= *(_QWORD *)(a1 + 16) )
          goto LABEL_30;
      }
      v61 = 0LL;
      MiInitializeTbFlushStamps((__int64 *)&v61, v38);
      v39 = v61;
      if ( (unsigned int)MiPteInShadowRange(v3, v40) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_140C4E008) && (v39 & 1) != 0 )
            v39 |= 0x8000000000000000uLL;
          *(_QWORD *)v3 = v39;
          MiWritePteShadow(v3, v39, v59);
          goto LABEL_56;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v39 & 1) != 0 )
        {
          v39 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v3 = v39;
LABEL_56:
      v41 = v61;
      if ( qword_140C4DF40 && (v61 & 0x10) == 0 )
        v41 = v61 & ~qword_140C4DF40;
      if ( (v41 & 0xFFFFFFFF00000000uLL) == 0 )
        MiInsertTbFlushEntry((__int64)&v66, v7, 1LL, 0);
      goto LABEL_61;
    }
  }
LABEL_30:
  v28 = 0LL;
  if ( (*(_BYTE *)(a1 + 24) & 1) != 0 )
    v28 = *((_QWORD *)&v65[0] + 1);
  MiFlushTbList(&v66);
  result = v28;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
