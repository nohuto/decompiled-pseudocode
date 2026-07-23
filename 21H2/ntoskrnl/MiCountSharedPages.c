/*
 * XREFs of MiCountSharedPages @ 0x140209600
 * Callers:
 *     MiDeletePartialVad @ 0x14030862C (MiDeletePartialVad.c)
 *     MiSetProtectionOnSection @ 0x14033D9C0 (MiSetProtectionOnSection.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14053EE0C (MiPrepareImagePagesForHotPatch.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiPteNeedsCommitCharge @ 0x140209B38 (MiPteNeedsCommitCharge.c)
 *     MiIsPrototypePteVadLookup @ 0x14020A670 (MiIsPrototypePteVadLookup.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiWalkPageTables @ 0x1402ADBC0 (MiWalkPageTables.c)
 *     MiFastLockLeafPageTable @ 0x1402B2FD0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiGetLeafVa @ 0x140337BB0 (MiGetLeafVa.c)
 *     MiGetProtoPteAddress @ 0x14033B890 (MiGetProtoPteAddress.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     memset @ 0x140414300 (memset.c)
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
  unsigned __int64 *AnyMultiplexedVm; // rsi
  int v14; // eax
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r12
  unsigned __int64 Process; // rcx
  char v19; // al
  unsigned __int64 v20; // rsi
  __int64 v21; // rbx
  struct _LIST_ENTRY *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rbx
  unsigned __int8 v30; // [rsp+20h] [rbp-E0h]
  __int64 v31; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int64 *v32; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v33; // [rsp+38h] [rbp-C8h]
  __int64 v34; // [rsp+40h] [rbp-C0h]
  __int128 v35; // [rsp+48h] [rbp-B8h] BYREF
  char v36[8]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+60h] [rbp-A0h]
  _QWORD v38[22]; // [rsp+70h] [rbp-90h] BYREF

  v6 = 0LL;
  v32 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v7 = MiLockWorkingSetShared(v32);
  v30 = v7;
  if ( a2 > a3 )
    goto LABEL_73;
  v8 = a2;
  v9 = 0LL;
  v34 = 0LL;
  v10 = (__int64)(a3 << 25) >> 16;
  v37 = v10;
LABEL_3:
  v35 = 0LL;
  memset((char *)v38 + 2, 0, 0xAEuLL);
  LOWORD(v38[0]) = 2145;
  v11 = (__int64)((v8 << 25) - v9) >> 16;
  LeafVa = MiGetLeafVa(v11);
  if ( LeafVa < 0xFFFF800000000000uLL || LeafVa >= qword_140C4FB78 && LeafVa <= qword_140C4E3A8 )
    AnyMultiplexedVm = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  else
    AnyMultiplexedVm = (unsigned __int64 *)MiGetAnyMultiplexedVm(1LL);
  v14 = MiFastLockLeafPageTable(AnyMultiplexedVm, v11, 0LL);
  if ( v14 )
  {
    LODWORD(v35) = v14 - 1;
    v15 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v35 + 1) = v15;
  }
  else
  {
    LOWORD(v38[0]) |= 4u;
    v38[21] = &v35;
    v38[2] = 0LL;
    v38[3] = AnyMultiplexedVm;
    BYTE2(v38[0]) = BYTE2(v38[0]) & 0xE3 | 4;
    v38[20] = MiGetNextPageTableTail;
    BYTE6(v38[0]) = v30;
    v38[4] = v11;
    v38[5] = v10;
    MiWalkPageTables(v38);
    v15 = *((_QWORD *)&v35 + 1);
  }
  if ( v15 )
  {
    v17 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v16 = a3 + 8;
  }
  else
  {
    v16 = a3 + 8;
    v17 = 0LL;
    v15 = a3 + 8;
  }
  Process = *(_DWORD *)(a1 + 48) >> 7;
  v19 = *(_DWORD *)(a1 + 48) & 0x70;
  v33 = v17;
  if ( v19 != 32 || (Process & 0x1F) == 1 )
  {
    Process &= 5u;
    if ( (_BYTE)Process != 5 )
      v6 += (__int64)(v15 - a2) >> 3;
    a2 = v15;
  }
  else
  {
    for ( ; a2 < v15; a2 += 8LL )
    {
      if ( (unsigned int)MiPteNeedsCommitCharge(a1, a2) == 1 )
        ++v6;
    }
  }
  if ( a2 != v16 )
  {
    v20 = (__int64)((a2 << 25) - v34) >> 16;
    while ( 1 )
    {
      v21 = *(_QWORD *)a2;
      if ( a2 >= 0xFFFFF6FB7DBED000uLL
        && a2 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(Process, 0xFFFFF6FB7DBED7F8uLL)
        && (v21 & 1) != 0
        && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
      {
        Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        v22 = *(struct _LIST_ENTRY **)(Process + 1928);
        if ( v22 )
        {
          v23 = *((_QWORD *)&v22->Flink + ((a2 >> 3) & 0x1FF));
          v24 = v21 | 0x20;
          Process = (unsigned __int8)v23;
          LOBYTE(Process) = v23 & 0x20;
          if ( (v23 & 0x20) == 0 )
            v24 = v21;
          v21 = v24;
          if ( (v23 & 0x42) != 0 )
            v21 = v24 | 0x42;
        }
      }
      v31 = v21;
      if ( v21 )
      {
        if ( (v21 & 1) != 0 )
        {
          if ( (v21 & 0x200) != 0 )
            goto LABEL_66;
          if ( (unsigned __int64)&v31 >= 0xFFFFF6FB7DBED000uLL
            && (unsigned __int64)&v31 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow(&v31, 0xFFFFF6FB7DBED7F8uLL)
            && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v26 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v31 >> 3) & 0x1FF));
              v27 = v21 | 0x20;
              if ( (v26 & 0x20) == 0 )
                v27 = v21;
              v21 = v27;
              if ( (v26 & 0x42) != 0 )
                v21 = v27 | 0x42;
            }
          }
          v28 = 48 * (((unsigned __int64)v21 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          if ( !(unsigned int)MI_PFN_IS_PROTO(v28) )
            goto LABEL_66;
          Process = MiGetProtoPteAddress(a1, v20 >> 12, 0LL, v36);
          if ( (*(_QWORD *)(v28 + 8) | 0x8000000000000000uLL) != Process )
            goto LABEL_66;
        }
        else
        {
          if ( (v21 & 0x400) == 0 )
            goto LABEL_66;
          if ( (unsigned int)MiIsPrototypePteVadLookup(v21, 0xFFFFF6FB7DBED7F8uLL) )
          {
            if ( (v21 & 0xA0) == 0xA0 )
              goto LABEL_66;
          }
          else
          {
            if ( qword_140C4DF80 && (v21 & 0x10) == 0 )
              v21 &= ~qword_140C4DF80;
            if ( v21 >> 16 != MiGetProtoPteAddress(a1, v20 >> 12, 0LL, v36)
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
      v20 += 4096LL;
      v8 = a2;
      if ( (a2 & 0xFFF) == 0 || a2 > a3 )
      {
        MiUnlockPageTableInternal((__int64)v32, v33);
        v9 = v34;
        v10 = v37;
        if ( a2 > a3 )
          goto LABEL_72;
        goto LABEL_3;
      }
    }
  }
  if ( v17 )
    MiUnlockPageTableInternal((__int64)v32, v17);
LABEL_72:
  v7 = v30;
LABEL_73:
  MiUnlockWorkingSetShared(v32, v7);
  return v6;
}
