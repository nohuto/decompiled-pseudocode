/*
 * XREFs of MiCountSharedPages @ 0x1403420A0
 * Callers:
 *     MiSetProtectionOnSection @ 0x14021B170 (MiSetProtectionOnSection.c)
 *     MiDeletePartialVad @ 0x1402AA764 (MiDeletePartialVad.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1405390AC (MiPrepareImagePagesForHotPatch.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x140207D20 (MiGetProtoPteAddress.c)
 *     MiFastLockLeafPageTable @ 0x14020DBA0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x14025DB00 (MiWalkPageTables.c)
 *     MiGetLeafVa @ 0x140290520 (MiGetLeafVa.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiPteNeedsCommitCharge @ 0x1403425D8 (MiPteNeedsCommitCharge.c)
 *     MiIsPrototypePteVadLookup @ 0x140345200 (MiIsPrototypePteVadLookup.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     memset @ 0x140408F80 (memset.c)
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
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // r12
  int v19; // ecx
  char v20; // al
  unsigned __int64 v21; // rsi
  __int64 v22; // rbx
  unsigned __int64 v23; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rbx
  unsigned __int8 v30; // [rsp+20h] [rbp-E0h]
  __int64 v31; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int64 *v32; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v33; // [rsp+38h] [rbp-C8h]
  __int64 v34; // [rsp+40h] [rbp-C0h]
  __int128 v35; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+60h] [rbp-A0h]
  _QWORD v38[22]; // [rsp+70h] [rbp-90h] BYREF

  v6 = 0LL;
  v32 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v7 = MiLockWorkingSetShared((__int64)v32);
  v30 = v7;
  if ( a2 > a3 )
    goto LABEL_74;
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
  if ( LeafVa < 0xFFFF800000000000uLL || LeafVa >= qword_140C4FA78 && LeafVa <= qword_140C4E2A8 )
    AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  else
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v14 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v11, 0);
  if ( v14 )
  {
    LODWORD(v35) = v14 - 1;
    v16 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v35 + 1) = v16;
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
    MiWalkPageTables((__int64)v38);
    v16 = *((_QWORD *)&v35 + 1);
  }
  if ( v16 )
  {
    v18 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v17 = a3 + 8;
  }
  else
  {
    v17 = a3 + 8;
    v18 = 0LL;
    v16 = a3 + 8;
  }
  v19 = *(_DWORD *)(a1 + 48) >> 7;
  v20 = *(_DWORD *)(a1 + 48) & 0x70;
  v33 = v18;
  if ( v20 != 32 || (v19 & 0x1F) == 1 )
  {
    if ( (v19 & 5) != 5 )
      v6 += (__int64)(v16 - a2) >> 3;
    a2 = v16;
  }
  else
  {
    for ( ; a2 < v16; a2 += 8LL )
    {
      if ( (unsigned int)MiPteNeedsCommitCharge(a1, a2) == 1 )
        ++v6;
    }
  }
  if ( a2 != v17 )
  {
    v21 = (__int64)((a2 << 25) - v34) >> 16;
    while ( 1 )
    {
      v22 = *(_QWORD *)a2;
      v23 = 0xFFFFF6FB7DBED7F8uLL;
      if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (unsigned int)MiPteHasShadow() && (v22 & 1) != 0 && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v25 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
            v26 = v22 | 0x20;
            if ( (v25 & 0x20) == 0 )
              v26 = v22;
            v22 = v26;
            if ( (v25 & 0x42) != 0 )
              v22 = v26 | 0x42;
          }
        }
        v23 = 0xFFFFF6FB7DBED7F8uLL;
      }
      v31 = v22;
      if ( v22 )
      {
        if ( (v22 & 1) != 0 )
        {
          if ( (v22 & 0x200) != 0 )
            goto LABEL_67;
          if ( (unsigned __int64)&v31 >= 0xFFFFF6FB7DBED000uLL
            && (unsigned __int64)&v31 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow()
            && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
          {
            v23 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v23 )
            {
              v27 = *(_QWORD *)(v23 + 8 * (((unsigned __int64)&v31 >> 3) & 0x1FF));
              v23 = v22 | 0x20;
              if ( (v27 & 0x20) == 0 )
                v23 = v22;
              v22 = v23;
              if ( (v27 & 0x42) != 0 )
                v22 = v23 | 0x42;
            }
          }
          v28 = 48 * (((unsigned __int64)v22 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          if ( !(unsigned int)MI_PFN_IS_PROTO(v28, v23, v15)
            || (*(_QWORD *)(v28 + 8) | 0x8000000000000000uLL) != MiGetProtoPteAddress(a1, v21 >> 12, 0, &v36) )
          {
            goto LABEL_67;
          }
        }
        else
        {
          if ( (v22 & 0x400) == 0 )
            goto LABEL_67;
          if ( (unsigned int)MiIsPrototypePteVadLookup(v22) )
          {
            if ( (v22 & 0xA0) == 0xA0 )
              goto LABEL_67;
          }
          else
          {
            if ( qword_140C4DE80 && (v22 & 0x10) == 0 )
              v22 &= ~qword_140C4DE80;
            if ( v22 >> 16 != MiGetProtoPteAddress(a1, v21 >> 12, 0, &v36)
              || (*(_DWORD *)(a1 + 48) & 0x70) == 0x20 && (unsigned int)MiPteNeedsCommitCharge(a1, a2) != 1 )
            {
              goto LABEL_67;
            }
          }
        }
      }
      else if ( (unsigned int)MiPteNeedsCommitCharge(a1, a2) != 1 )
      {
        goto LABEL_67;
      }
      ++v6;
LABEL_67:
      a2 += 8LL;
      v21 += 4096LL;
      v8 = a2;
      if ( (a2 & 0xFFF) == 0 || a2 > a3 )
      {
        MiUnlockPageTableInternal((__int64)v32, v33, v15);
        v9 = v34;
        v10 = v37;
        if ( a2 > a3 )
          goto LABEL_73;
        goto LABEL_3;
      }
    }
  }
  if ( v18 )
    MiUnlockPageTableInternal((__int64)v32, v18, v15);
LABEL_73:
  v7 = v30;
LABEL_74:
  MiUnlockWorkingSetShared((__int64)v32, v7);
  return v6;
}
