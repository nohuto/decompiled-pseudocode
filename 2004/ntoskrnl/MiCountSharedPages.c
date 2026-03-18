/*
 * XREFs of MiCountSharedPages @ 0x140312D60
 * Callers:
 *     MiDeletePartialVad @ 0x140251734 (MiDeletePartialVad.c)
 *     MiSetProtectionOnSection @ 0x1402ADDF0 (MiSetProtectionOnSection.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1405396FC (MiPrepareImagePagesForHotPatch.c)
 * Callees:
 *     MiWalkPageTables @ 0x140204BE0 (MiWalkPageTables.c)
 *     MiGetLeafVa @ 0x1402374D0 (MiGetLeafVa.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MiGetProtoPteAddress @ 0x14029A830 (MiGetProtoPteAddress.c)
 *     MiFastLockLeafPageTable @ 0x1402A06B0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiPteNeedsCommitCharge @ 0x140313298 (MiPteNeedsCommitCharge.c)
 *     MiIsPrototypePteVadLookup @ 0x140315EC0 (MiIsPrototypePteVadLookup.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall MiCountSharedPages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v6; // r14
  unsigned __int8 v7; // al
  unsigned __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // r12
  unsigned __int64 v11; // rbx
  unsigned __int64 LeafVa; // rax
  char *AnyMultiplexedVm; // rsi
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // r12
  __int64 Process; // rcx
  char v21; // al
  unsigned __int64 v22; // rsi
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rbx
  unsigned __int8 v32; // [rsp+20h] [rbp-E0h]
  __int64 v33; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int64 *v34; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v35; // [rsp+38h] [rbp-C8h]
  __int64 v36; // [rsp+40h] [rbp-C0h]
  __int128 v37; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v38; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A0h]
  _QWORD v40[22]; // [rsp+70h] [rbp-90h] BYREF

  v6 = 0LL;
  v34 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v7 = MiLockWorkingSetShared((__int64)v34);
  v32 = v7;
  if ( a2 > a3 )
    goto LABEL_73;
  v8 = a2;
  v9 = 0LL;
  v36 = 0LL;
  v10 = (__int64)(a3 << 25) >> 16;
  v39 = v10;
LABEL_3:
  v37 = 0LL;
  memset((char *)v40 + 2, 0, 0xAEuLL);
  LOWORD(v40[0]) = 2145;
  v11 = (__int64)((v8 << 25) - v9) >> 16;
  LeafVa = MiGetLeafVa(v11);
  if ( LeafVa < 0xFFFF800000000000uLL || LeafVa >= qword_140C4F938 && LeafVa <= qword_140C4E168 )
    AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  else
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v14 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v11, 0);
  if ( v14 )
  {
    LODWORD(v37) = v14 - 1;
    v17 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v37 + 1) = v17;
  }
  else
  {
    LOWORD(v40[0]) |= 4u;
    v40[21] = &v37;
    v40[2] = 0LL;
    v40[3] = AnyMultiplexedVm;
    BYTE2(v40[0]) = BYTE2(v40[0]) & 0xE3 | 4;
    v40[20] = MiGetNextPageTableTail;
    BYTE6(v40[0]) = v32;
    v40[4] = v11;
    v40[5] = v10;
    MiWalkPageTables((__int16 *)v40);
    v17 = *((_QWORD *)&v37 + 1);
  }
  if ( v17 )
  {
    v19 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v18 = a3 + 8;
  }
  else
  {
    v18 = a3 + 8;
    v19 = 0LL;
    v17 = a3 + 8;
  }
  Process = *(_DWORD *)(a1 + 48) >> 7;
  v21 = *(_DWORD *)(a1 + 48) & 0x70;
  v35 = v19;
  if ( v21 != 32 || (Process & 0x1F) == 1 )
  {
    Process &= 5u;
    if ( (_BYTE)Process != 5 )
      v6 += (__int64)(v17 - a2) >> 3;
    a2 = v17;
  }
  else
  {
    for ( ; a2 < v17; a2 += 8LL )
    {
      if ( (unsigned int)MiPteNeedsCommitCharge(a1, a2) == 1 )
        ++v6;
    }
  }
  if ( a2 != v18 )
  {
    v22 = (__int64)((a2 << 25) - v36) >> 16;
    while ( 1 )
    {
      v23 = *(_QWORD *)a2;
      if ( a2 >= 0xFFFFF6FB7DBED000uLL
        && a2 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(Process, 0xFFFFF6FB7DBED7F8uLL, v15, v16)
        && (v23 & 1) != 0
        && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
      {
        Process = (__int64)KeGetCurrentThread()->ApcState.Process;
        v24 = *(_QWORD *)(Process + 1928);
        if ( v24 )
        {
          v25 = *(_QWORD *)(v24 + 8 * ((a2 >> 3) & 0x1FF));
          v26 = v23 | 0x20;
          Process = (unsigned __int8)v25;
          LOBYTE(Process) = v25 & 0x20;
          if ( (v25 & 0x20) == 0 )
            v26 = v23;
          v23 = v26;
          if ( (v25 & 0x42) != 0 )
            v23 = v26 | 0x42;
        }
      }
      v33 = v23;
      if ( v23 )
      {
        if ( (v23 & 1) != 0 )
        {
          if ( (v23 & 0x200) != 0 )
            goto LABEL_66;
          if ( (unsigned __int64)&v33 >= 0xFFFFF6FB7DBED000uLL
            && (unsigned __int64)&v33 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow(&v33, 0xFFFFF6FB7DBED7F8uLL, v15, v16)
            && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v28 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v33 >> 3) & 0x1FF));
              v29 = v23 | 0x20;
              if ( (v28 & 0x20) == 0 )
                v29 = v23;
              v23 = v29;
              if ( (v28 & 0x42) != 0 )
                v23 = v29 | 0x42;
            }
          }
          v30 = 48 * (((unsigned __int64)v23 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          if ( !(unsigned int)MI_PFN_IS_PROTO(v30) )
            goto LABEL_66;
          Process = MiGetProtoPteAddress(a1, v22 >> 12, 0, &v38);
          if ( (*(_QWORD *)(v30 + 8) | 0x8000000000000000uLL) != Process )
            goto LABEL_66;
        }
        else
        {
          if ( (v23 & 0x400) == 0 )
            goto LABEL_66;
          if ( (unsigned int)MiIsPrototypePteVadLookup(v23, 0xFFFFF6FB7DBED7F8uLL, v15, v16) )
          {
            if ( (v23 & 0xA0) == 0xA0 )
              goto LABEL_66;
          }
          else
          {
            if ( qword_140C4DD40 && (v23 & 0x10) == 0 )
              v23 &= ~qword_140C4DD40;
            if ( v23 >> 16 != MiGetProtoPteAddress(a1, v22 >> 12, 0, &v38)
              || (*(_DWORD *)(a1 + 48) & 0x70) == 0x20 && (unsigned int)MiPteNeedsCommitCharge(a1, a2) != 1 )
            {
              goto LABEL_66;
            }
          }
        }
      }
      else if ( (unsigned int)MiPteNeedsCommitCharge(a1, a2) != 1 )
      {
        goto LABEL_66;
      }
      ++v6;
LABEL_66:
      a2 += 8LL;
      v22 += 4096LL;
      v8 = a2;
      if ( (a2 & 0xFFF) == 0 || a2 > a3 )
      {
        MiUnlockPageTableInternal((__int64)v34, v35);
        v9 = v36;
        v10 = v39;
        if ( a2 > a3 )
          goto LABEL_72;
        goto LABEL_3;
      }
    }
  }
  if ( v19 )
    MiUnlockPageTableInternal((__int64)v34, v19);
LABEL_72:
  v7 = v32;
LABEL_73:
  MiUnlockWorkingSetShared((__int64)v34, v7);
  return v6;
}
