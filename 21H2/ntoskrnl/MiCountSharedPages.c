/*
 * XREFs of MiCountSharedPages @ 0x14028C460
 * Callers:
 *     MiDeletePartialVad @ 0x1402FD8DC (MiDeletePartialVad.c)
 *     MiSetProtectionOnSection @ 0x140332C70 (MiSetProtectionOnSection.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14053EBCC (MiPrepareImagePagesForHotPatch.c)
 * Callees:
 *     MiWalkPageTables @ 0x1402092C0 (MiWalkPageTables.c)
 *     MiFastLockLeafPageTable @ 0x14020E6D0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiPteNeedsCommitCharge @ 0x14028C998 (MiPteNeedsCommitCharge.c)
 *     MiIsPrototypePteVadLookup @ 0x14028D4D0 (MiIsPrototypePteVadLookup.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiGetAnyMultiplexedVm @ 0x1402FD0FC (MiGetAnyMultiplexedVm.c)
 *     MiGetLeafVa @ 0x14032CE60 (MiGetLeafVa.c)
 *     MiGetProtoPteAddress @ 0x140330B40 (MiGetProtoPteAddress.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     memset @ 0x140414200 (memset.c)
 */

__int64 __fastcall MiCountSharedPages(__int64 a1, __int64 a2, unsigned __int64 a3, _DWORD *a4)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // r14
  unsigned __int8 v8; // al
  unsigned __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // r12
  unsigned __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 LeafVa; // rax
  unsigned __int64 *AnyMultiplexedVm; // rsi
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // r12
  unsigned __int64 Process; // rcx
  char v25; // al
  unsigned __int64 v26; // rsi
  __int64 v27; // rbx
  struct _LIST_ENTRY *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rbx
  unsigned __int8 v36; // [rsp+20h] [rbp-E0h]
  __int64 v37; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int64 *v38; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v39; // [rsp+38h] [rbp-C8h]
  __int64 v40; // [rsp+40h] [rbp-C0h]
  __int128 v41; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v42[8]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v43; // [rsp+60h] [rbp-A0h]
  _QWORD v44[22]; // [rsp+70h] [rbp-90h] BYREF

  v6 = a2;
  v7 = 0LL;
  v38 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v8 = MiLockWorkingSetShared((__int64)v38, a2, a3, a4);
  v36 = v8;
  if ( v6 > a3 )
    goto LABEL_73;
  v9 = v6;
  v10 = 0LL;
  v40 = 0LL;
  v11 = (__int64)(a3 << 25) >> 16;
  v43 = v11;
LABEL_3:
  v41 = 0LL;
  memset((char *)v44 + 2, 0, 0xAEuLL);
  LOWORD(v44[0]) = 2145;
  v12 = (__int64)((v9 << 25) - v10) >> 16;
  LeafVa = MiGetLeafVa(v12, v13, v14, v15);
  if ( LeafVa < 0xFFFF800000000000uLL || LeafVa >= qword_140C4FB38 && LeafVa <= qword_140C4E368 )
    AnyMultiplexedVm = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  else
    AnyMultiplexedVm = (unsigned __int64 *)MiGetAnyMultiplexedVm(1LL);
  v18 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v12, 0);
  if ( v18 )
  {
    LODWORD(v41) = v18 - 1;
    v21 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v41 + 1) = v21;
  }
  else
  {
    LOWORD(v44[0]) |= 4u;
    v44[21] = &v41;
    v44[2] = 0LL;
    v44[3] = AnyMultiplexedVm;
    BYTE2(v44[0]) = BYTE2(v44[0]) & 0xE3 | 4;
    v44[20] = MiGetNextPageTableTail;
    BYTE6(v44[0]) = v36;
    v44[4] = v12;
    v44[5] = v11;
    MiWalkPageTables((__int64)v44);
    v21 = *((_QWORD *)&v41 + 1);
  }
  if ( v21 )
  {
    v23 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v22 = a3 + 8;
  }
  else
  {
    v22 = a3 + 8;
    v23 = 0LL;
    v21 = a3 + 8;
  }
  Process = *(_DWORD *)(a1 + 48) >> 7;
  v25 = *(_DWORD *)(a1 + 48) & 0x70;
  v39 = v23;
  if ( v25 != 32 || (Process & 0x1F) == 1 )
  {
    Process &= 5u;
    if ( (_BYTE)Process != 5 )
      v7 += (__int64)(v21 - v6) >> 3;
    v6 = v21;
  }
  else
  {
    for ( ; v6 < v21; v6 += 8LL )
    {
      if ( (unsigned int)MiPteNeedsCommitCharge(a1, v6) == 1 )
        ++v7;
    }
  }
  if ( v6 != v22 )
  {
    v26 = (__int64)((v6 << 25) - v40) >> 16;
    while ( 1 )
    {
      v27 = *(_QWORD *)v6;
      if ( v6 >= 0xFFFFF6FB7DBED000uLL
        && v6 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(Process, 0xFFFFF6FB7DBED7F8uLL, v19, v20)
        && (v27 & 1) != 0
        && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
      {
        Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        v28 = *(struct _LIST_ENTRY **)(Process + 1928);
        if ( v28 )
        {
          v29 = *((_QWORD *)&v28->Flink + ((v6 >> 3) & 0x1FF));
          v30 = v27 | 0x20;
          Process = (unsigned __int8)v29;
          LOBYTE(Process) = v29 & 0x20;
          if ( (v29 & 0x20) == 0 )
            v30 = v27;
          v27 = v30;
          if ( (v29 & 0x42) != 0 )
            v27 = v30 | 0x42;
        }
      }
      v37 = v27;
      if ( v27 )
      {
        if ( (v27 & 1) != 0 )
        {
          if ( (v27 & 0x200) != 0 )
            goto LABEL_66;
          if ( (unsigned __int64)&v37 >= 0xFFFFF6FB7DBED000uLL
            && (unsigned __int64)&v37 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow(&v37, 0xFFFFF6FB7DBED7F8uLL, v19, v20)
            && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v32 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v37 >> 3) & 0x1FF));
              v33 = v27 | 0x20;
              if ( (v32 & 0x20) == 0 )
                v33 = v27;
              v27 = v33;
              if ( (v32 & 0x42) != 0 )
                v27 = v33 | 0x42;
            }
          }
          v34 = 48 * (((unsigned __int64)v27 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          if ( !(unsigned int)MI_PFN_IS_PROTO(v34) )
            goto LABEL_66;
          Process = MiGetProtoPteAddress(a1, v26 >> 12, 0LL, v42);
          if ( (*(_QWORD *)(v34 + 8) | 0x8000000000000000uLL) != Process )
            goto LABEL_66;
        }
        else
        {
          if ( (v27 & 0x400) == 0 )
            goto LABEL_66;
          if ( (unsigned int)MiIsPrototypePteVadLookup(v27) )
          {
            if ( (v27 & 0xA0) == 0xA0 )
              goto LABEL_66;
          }
          else
          {
            if ( qword_140C4DF40 && (v27 & 0x10) == 0 )
              v27 &= ~qword_140C4DF40;
            if ( v27 >> 16 != MiGetProtoPteAddress(a1, v26 >> 12, 0LL, v42)
              || (*(_DWORD *)(a1 + 48) & 0x70) == 0x20 && (unsigned int)MiPteNeedsCommitCharge(a1, v6) != 1 )
            {
              goto LABEL_66;
            }
          }
        }
      }
      else if ( (unsigned int)MiPteNeedsCommitCharge(a1, v6) != 1 )
      {
        goto LABEL_66;
      }
      ++v7;
LABEL_66:
      v6 += 8LL;
      v26 += 4096LL;
      v9 = v6;
      if ( (v6 & 0xFFF) == 0 || v6 > a3 )
      {
        MiUnlockPageTableInternal((__int64)v38, v39);
        v10 = v40;
        v11 = v43;
        if ( v6 > a3 )
          goto LABEL_72;
        goto LABEL_3;
      }
    }
  }
  if ( v23 )
    MiUnlockPageTableInternal((__int64)v38, v23);
LABEL_72:
  v8 = v36;
LABEL_73:
  MiUnlockWorkingSetShared((__int64)v38, v8);
  return v7;
}
