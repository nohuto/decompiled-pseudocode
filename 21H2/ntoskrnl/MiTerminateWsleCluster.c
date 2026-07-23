/*
 * XREFs of MiTerminateWsleCluster @ 0x140345A70
 * Callers:
 *     MiDeletePteWsleCluster @ 0x14023F0C8 (MiDeletePteWsleCluster.c)
 *     MiDeleteSystemPagableVm @ 0x1403107D0 (MiDeleteSystemPagableVm.c)
 *     MiRemoveMappedPtes @ 0x140313250 (MiRemoveMappedPtes.c)
 *     MiDecommitPages @ 0x14033F570 (MiDecommitPages.c)
 *     MiAppendWsleCluster @ 0x140340820 (MiAppendWsleCluster.c)
 *     MiDeleteVa @ 0x1403427D0 (MiDeleteVa.c)
 *     MiDeleteVaTail @ 0x140345880 (MiDeleteVaTail.c)
 * Callees:
 *     MiCountWslesInPageTable @ 0x140202320 (MiCountWslesInPageTable.c)
 *     MiInitializeTbFlushStamps @ 0x14021B0C0 (MiInitializeTbFlushStamps.c)
 *     MiCompressTbFlushList @ 0x140220720 (MiCompressTbFlushList.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiUnlockWsle @ 0x14025DBBC (MiUnlockWsle.c)
 *     MiDeleteValidSystemPage @ 0x140333B70 (MiDeleteValidSystemPage.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiRemoveWsle @ 0x140343D30 (MiRemoveWsle.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     qsort @ 0x1403D2C30 (qsort.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MiTerminateWsleCluster(__int64 a1)
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
  char v16; // r9
  __int64 v17; // rbx
  unsigned __int64 v18; // r15
  unsigned int v19; // r8d
  char v20; // r9
  __int64 v21; // rax
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rbx
  __int64 Process; // rcx
  unsigned __int64 *v26; // rbx
  __int64 v27; // rbx
  __int64 result; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  char v32; // r11
  char v33; // cl
  int v34; // edx
  unsigned __int64 v35; // rdi
  int v36; // esi
  __int64 v37; // rbx
  __int64 v38; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rsi
  unsigned __int64 v45; // rdi
  unsigned __int64 v46; // rbx
  struct _LIST_ENTRY *v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rdx
  struct _LIST_ENTRY *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v57; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v58; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v59; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v60; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v61[3]; // [rsp+58h] [rbp-A8h] BYREF
  int v62; // [rsp+90h] [rbp-70h] BYREF
  __int16 v63; // [rsp+94h] [rbp-6Ch]
  __int16 v64; // [rsp+96h] [rbp-6Ah]
  __int64 v65; // [rsp+98h] [rbp-68h]
  __int64 v66; // [rsp+A0h] [rbp-60h]
  _QWORD Base[21]; // [rsp+A8h] [rbp-58h] BYREF
  _OWORD v68[2]; // [rsp+150h] [rbp+50h] BYREF

  v64 = 0;
  memset(&Base[1], 0, 0x98uLL);
  v2 = *(_QWORD *)(a1 + 8);
  v58 = v2;
  memset(v61, 0, sizeof(v61));
  if ( !v2 )
    return 0LL;
  v3 = 0xFFFFF68000000000uLL;
  v4 = *(_QWORD *)a1;
  v5 = 0LL;
  v56 = *(_QWORD *)a1;
  v6 = (__int64)(v2 << 25) >> 16;
  v7 = *(_BYTE *)(*(_QWORD *)a1 + 184LL);
  v59 = v6;
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
  v65 = 20LL;
  v62 = v9;
  v63 = 0;
  v66 = 0LL;
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
          v40 = *((_QWORD *)&Flink->Flink + ((v11 >> 3) & 0x1FF));
          v41 = v13 | 0x20;
          if ( (v40 & 0x20) == 0 )
            v41 = *(_QWORD *)v11;
          v13 = v41;
          if ( (v40 & 0x42) != 0 )
            v13 = v41 | 0x42;
        }
      }
      v14 = *(_QWORD *)v11;
      v15 = v13 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
      v57 = v15;
      if ( v11 >= 0xFFFFF6FB7DBED000uLL && v11 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (unsigned int)MiPteHasShadow() )
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
        if ( (unsigned int)MiPteInShadowRange(v11) && (unsigned int)MiPteHasShadow() )
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
        v32 = _InterlockedExchange64((volatile __int64 *)v11, v15);
        if ( v11 >= 0xFFFFF6FB7DBED000uLL && v11 <= v10 )
        {
          MiWritePteShadow(v11, v15);
          v3 = 0xFFFFF68000000000uLL;
        }
        if ( (v32 & 0x20) == 0 )
          goto LABEL_24;
      }
      v16 = v63;
      v17 = 1LL;
      v18 = v12;
      if ( v62 != 1 && (v63 & 8) == 0 && v12 >= v3 && v12 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v16 = v63 | 8;
        LOBYTE(v63) = v63 | 8;
      }
      v19 = HIDWORD(v65);
      if ( !HIDWORD(v65) )
      {
LABEL_36:
        if ( HIDWORD(v65) >= (unsigned int)v65 )
        {
          HIBYTE(v63) = 1;
        }
        else
        {
          while ( 1 )
          {
            v30 = (unsigned __int64)(v17 - 1) > 0x3FF ? 1024LL : v17;
            v31 = v18 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v30 - 1) & 0x3FF;
            v17 -= v30;
            v18 += v30 << 12;
            Base[v19] = v31;
            v66 += v30;
            v19 = HIDWORD(v65) + 1;
            HIDWORD(v65) = v19;
            if ( v19 == (_DWORD)v65 && (v63 & 4) == 0 )
            {
              qsort(Base, v19, 8uLL, (int (__cdecl *)(const void *, const void *))MiTbFlushSort);
              MiCompressTbFlushList((__int64)&v62);
              v19 = HIDWORD(v65);
              if ( HIDWORD(v65) == (_DWORD)v65 )
                break;
            }
            if ( !v17 )
              goto LABEL_24;
          }
          if ( v17 )
          {
            HIBYTE(v63) = 1;
            v66 = HIDWORD(v65);
          }
        }
        goto LABEL_24;
      }
      v20 = v16 & 4;
      if ( v20
        || (v21 = Base[HIDWORD(v65) - 1], (v21 & 0xC00) != 0)
        || (v22 = Base[HIDWORD(v65) - 1] & 0x3FFLL, (v21 & 0xFFFFFFFFFFFFF000uLL) + ((v22 + 1) << 12) != v12)
        || v22 + 1 < v22
        || v22 + 1 > 0x3FF )
      {
        if ( v20 )
          goto LABEL_36;
        v29 = Base[HIDWORD(v65) - 1];
        if ( (v29 & 0xC00) != 0 )
          goto LABEL_36;
        if ( (v29 & 0xFFFFFFFFFFFFF000uLL) != v12 + 4096 )
          goto LABEL_36;
        v43 = Base[HIDWORD(v65) - 1] & 0x3FFLL;
        if ( v43 + 1 < v43 || v43 + 1 > 0x3FF )
          goto LABEL_36;
        ++v66;
        Base[HIDWORD(v65) - 1] = (v29 - 4096) ^ ((unsigned __int16)(v29 - 4096) ^ (unsigned __int16)(v29 - 4096 + 1)) & 0x3FF;
      }
      else
      {
        ++v66;
        Base[HIDWORD(v65) - 1] = v21 ^ ((unsigned __int16)v21 ^ (unsigned __int16)(v21 + 1)) & 0x3FF;
      }
LABEL_24:
      ++v5;
      v3 = 0xFFFFF68000000000uLL;
      v11 += 8LL;
      v12 += 4096LL;
      v10 = 0xFFFFF6FB7DBED7F8uLL;
      if ( v5 >= *(_QWORD *)(a1 + 16) )
      {
        v2 = v58;
        v6 = v59;
        v4 = v56;
        goto LABEL_26;
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 28) & 0xF) == 8 && *(_QWORD *)(a1 + 16) )
  {
    v44 = (__int64)(v2 << 25) >> 16;
    v45 = v2;
    do
    {
      v46 = *(_QWORD *)v45;
      if ( (unsigned int)MiPteInShadowRange(v45)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v46 & 1) != 0
        && ((v46 & 0x20) == 0 || (v46 & 0x42) == 0) )
      {
        v47 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v47 )
        {
          v48 = *((_QWORD *)&v47->Flink + ((v45 >> 3) & 0x1FF));
          v49 = v46 | 0x20;
          if ( (v48 & 0x20) == 0 )
            v49 = v46;
          v46 = v49;
          if ( (v48 & 0x42) != 0 )
            v46 = v49 | 0x42;
        }
      }
      MiUnlockWsle(v56, v44, 48 * ((v46 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
      ++v5;
      v45 += 8LL;
      v44 += 4096LL;
    }
    while ( v5 < *(_QWORD *)(a1 + 16) );
    v2 = v58;
    v6 = v59;
    v4 = v56;
  }
  if ( (*(_DWORD *)(a1 + 24) & 4) == 0 )
    MiInsertTbFlushEntry((__int64)&v62, v6, *(_QWORD *)(a1 + 16), 0);
LABEL_26:
  MiRemoveWsle(v4, v6, *(_QWORD *)(a1 + 16), *(_BYTE *)(a1 + 28), 10, *(_DWORD *)(a1 + 24) & 1);
  v23 = ((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v24 = *(_QWORD *)v23;
  if ( v23 >= 0xFFFFF6FB7DBED000uLL
    && v23 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v24 & 1) != 0
    && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
  {
    v50 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v50 )
    {
      v51 = *((_QWORD *)&v50->Flink + ((v23 >> 3) & 0x1FF));
      v52 = v24 | 0x20;
      if ( (v51 & 0x20) == 0 )
        v52 = v24;
      v24 = v52;
      if ( (v51 & 0x42) != 0 )
        v24 = v52 | 0x42;
    }
  }
  v60 = v24;
  if ( (unsigned int)MiPteInShadowRange(&v60) )
  {
    if ( (MiFlags & 0xC00000) != 0 )
    {
      Process = (__int64)KeGetCurrentThread()->ApcState.Process;
      if ( *(_BYTE *)(Process + 912) != 1 && (v24 & 1) != 0 && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
      {
        Process = (__int64)KeGetCurrentThread()->ApcState.Process;
        v53 = *(_QWORD *)(Process + 1928);
        if ( v53 )
        {
          v54 = *(_QWORD *)(v53 + 8 * (((unsigned __int64)&v60 >> 3) & 0x1FF));
          v55 = v24 | 0x20;
          Process = (unsigned __int8)v54;
          LOBYTE(Process) = v54 & 0x20;
          if ( (v54 & 0x20) == 0 )
            v55 = v24;
          v24 = v55;
          if ( (v54 & 0x42) != 0 )
            v24 = v55 | 0x42;
        }
      }
    }
  }
  v26 = (unsigned __int64 *)(48 * ((v24 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  if ( ((*(_DWORD *)v26 >> 4) & 0x3FF) == 0 )
  {
    MiCountWslesInPageTable(Process, v6, v68);
    v33 = 8;
    while ( 1 )
    {
      v34 = *((_DWORD *)v68 + (unsigned __int8)--v33);
      if ( v34 )
        break;
      if ( !v33 )
        goto LABEL_29;
    }
    *v26 = *v26 & 0xFFFFFFFFFFFE000FuLL | (16 * (v34 & 0x3FF | ((unsigned __int64)(v33 & 7) << 10)));
  }
LABEL_29:
  if ( (*(_BYTE *)(v4 + 184) & 7) != 0 )
  {
    v35 = 0LL;
    v36 = (2 * (*(_DWORD *)(a1 + 24) & 8)) | 4;
    if ( (*(_DWORD *)(a1 + 24) & 0x10) == 0 )
      v36 = 2 * (*(_DWORD *)(a1 + 24) & 8);
    if ( *(_QWORD *)(a1 + 16) )
    {
      while ( 1 )
      {
        MiDeleteValidSystemPage(v56, v2, v36, (__int64)v61);
        if ( (*(_DWORD *)(a1 + 24) & 4) != 0 )
          break;
LABEL_61:
        ++v35;
        v2 += 8LL;
        v6 += 4096LL;
        if ( v35 >= *(_QWORD *)(a1 + 16) )
          goto LABEL_30;
      }
      v57 = 0LL;
      MiInitializeTbFlushStamps((__int64 *)&v57);
      v37 = v57;
      if ( (unsigned int)MiPteInShadowRange(v2) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_140C4E048) && (v37 & 1) != 0 )
            v37 |= 0x8000000000000000uLL;
          *(_QWORD *)v2 = v37;
          MiWritePteShadow(v2, v37);
          goto LABEL_56;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v37 & 1) != 0 )
        {
          v37 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v2 = v37;
LABEL_56:
      v38 = v57;
      if ( qword_140C4DF80 && (v57 & 0x10) == 0 )
        v38 = v57 & ~qword_140C4DF80;
      if ( (v38 & 0xFFFFFFFF00000000uLL) == 0 )
        MiInsertTbFlushEntry((__int64)&v62, v6, 1LL, 0);
      goto LABEL_61;
    }
  }
LABEL_30:
  v27 = 0LL;
  if ( (*(_BYTE *)(a1 + 24) & 1) != 0 )
    v27 = *((_QWORD *)&v61[0] + 1);
  MiFlushTbList(&v62);
  result = v27;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
