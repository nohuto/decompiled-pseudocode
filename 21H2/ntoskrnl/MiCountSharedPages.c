/*
 * XREFs of MiCountSharedPages @ 0x1402D0500
 * Callers:
 *     MiPerformVadSplitting @ 0x1402ED194 (MiPerformVadSplitting.c)
 *     MiSetProtectionOnSection @ 0x14032D1C0 (MiSetProtectionOnSection.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1405A3818 (MiPrepareImagePagesForHotPatch.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiPteNeedsCommitCharge @ 0x1402336A8 (MiPteNeedsCommitCharge.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiIsPrototypePteVadLookup @ 0x1402806A0 (MiIsPrototypePteVadLookup.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiGetLeafVa @ 0x1402CFEB0 (MiGetLeafVa.c)
 *     MiWalkPageTables @ 0x14030CF90 (MiWalkPageTables.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x140319600 (MiGetProtoPteAddress.c)
 *     MiFastLockLeafPageTable @ 0x14031D9B0 (MiFastLockLeafPageTable.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiCountSharedPages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 *v5; // r14
  __int64 v6; // r13
  __int64 v7; // r12
  unsigned __int64 v8; // rbx
  unsigned __int64 LeafVa; // rax
  char *AnyMultiplexedVm; // rsi
  int v11; // eax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r15
  int v14; // ecx
  __int64 v15; // rsi
  signed __int64 v16; // r14
  __int64 v17; // r12
  unsigned __int64 v18; // rsi
  signed __int64 v19; // rbx
  unsigned __int64 v20; // rbx
  bool v22; // zf
  __int64 v23; // r14
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned __int8 v27; // [rsp+20h] [rbp-148h]
  signed __int64 v28; // [rsp+28h] [rbp-140h] BYREF
  __int64 v29; // [rsp+30h] [rbp-138h]
  unsigned __int64 v30; // [rsp+38h] [rbp-130h]
  unsigned __int64 *v31; // [rsp+40h] [rbp-128h]
  __int128 v32; // [rsp+48h] [rbp-120h] BYREF
  __int64 v33; // [rsp+58h] [rbp-110h]
  __int64 v34; // [rsp+60h] [rbp-108h]
  _QWORD v35[22]; // [rsp+70h] [rbp-F8h] BYREF

  v29 = a1;
  v28 = 0LL;
  v5 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v31 = v5;
  v27 = MiLockWorkingSetShared((__int64)v5);
  if ( a2 > a3 )
  {
LABEL_22:
    v15 = v28;
    goto LABEL_23;
  }
  v6 = 0LL;
  v34 = 0LL;
  v7 = (__int64)(a3 << 25) >> 16;
  v33 = v7;
LABEL_3:
  v32 = 0LL;
  memset((char *)v35 + 4, 0, 0xACuLL);
  LODWORD(v35[0]) = 2145;
  v8 = (__int64)((a2 << 25) - v6) >> 16;
  LeafVa = MiGetLeafVa(v8);
  if ( LeafVa < 0xFFFF800000000000uLL || LeafVa >= qword_140C540C0 && LeafVa <= qword_140C51BF0 )
    AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  else
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v11 = MiFastLockLeafPageTable(AnyMultiplexedVm, v8, 0LL);
  if ( v11 )
  {
    LODWORD(v32) = v11 - 1;
    v12 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v32 + 1) = v12;
  }
  else
  {
    LODWORD(v35[0]) |= 4u;
    v35[21] = &v32;
    v35[2] = 0LL;
    v35[3] = AnyMultiplexedVm;
    BYTE4(v35[0]) = BYTE4(v35[0]) & 0xE3 | 4;
    v35[20] = MiGetNextPageTableTail;
    HIBYTE(v35[0]) = v27;
    v35[4] = (__int64)((a2 << 25) - v6) >> 16;
    v35[5] = v7;
    MiWalkPageTables(v35);
    v12 = *((_QWORD *)&v32 + 1);
  }
  if ( v12 )
  {
    v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  else
  {
    v13 = 0LL;
    v12 = a3 + 8;
  }
  v30 = v13;
  v14 = *(_DWORD *)(v29 + 48) >> 7;
  if ( (*(_DWORD *)(v29 + 48) & 0x70) != 0x20 || (v14 & 0x1F) == 1 )
  {
    v15 = v28;
    if ( (v14 & 5) != 5 )
    {
      v15 = ((__int64)(v12 - a2) >> 3) + v28;
      v28 = v15;
    }
    a2 = v12;
  }
  else
  {
    v15 = v28;
    if ( a2 < v12 )
    {
      v23 = v29;
      do
      {
        if ( MiPteNeedsCommitCharge(v23, a2) )
          ++v15;
        a2 += 8LL;
      }
      while ( a2 < v12 );
      v5 = v31;
      v28 = v15;
    }
  }
  if ( a2 != a3 + 8 )
  {
    v16 = v28;
    v17 = v29;
    v18 = (__int64)((a2 << 25) - v6) >> 16;
    while ( 1 )
    {
      v19 = *(_QWORD *)a2;
      if ( a2 >= 0xFFFFF6FB7DBED000uLL
        && a2 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v19 & 1) != 0
        && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v25 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
          v26 = v19 | 0x20;
          if ( (v25 & 0x20) == 0 )
            v26 = *(_QWORD *)a2;
          v19 = v26;
          if ( (v25 & 0x42) != 0 )
            v19 = v26 | 0x42;
        }
      }
      v28 = v19;
      if ( !v19 )
        break;
      if ( (v19 & 1) != 0 )
      {
        if ( (v19 & 0x200) != 0 )
          goto LABEL_19;
        v20 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v28) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        if ( *(__int64 *)(v20 + 40) >= 0
          || (*(_QWORD *)(v20 + 8) | 0x8000000000000000uLL) != MiGetProtoPteAddress(v17, v18 >> 12, 0LL, &v28) )
        {
          goto LABEL_19;
        }
        goto LABEL_26;
      }
      if ( (v19 & 0x400) != 0 )
      {
        if ( MiIsPrototypePteVadLookup(v19) )
        {
          v22 = (v19 & 0xA0) == 0xA0;
          goto LABEL_25;
        }
        if ( qword_140C50780 && (v19 & 0x10) == 0 )
          v19 &= ~qword_140C50780;
        if ( v19 >> 16 != MiGetProtoPteAddress(v17, v18 >> 12, 0LL, &v28)
          || (*(_DWORD *)(v17 + 48) & 0x70) == 0x20 && !MiPteNeedsCommitCharge(v17, a2) )
        {
          goto LABEL_19;
        }
LABEL_26:
        ++v16;
      }
LABEL_19:
      a2 += 8LL;
      v18 += 4096LL;
      if ( (a2 & 0xFFF) == 0 || a2 > a3 )
      {
        v28 = v16;
        v5 = v31;
        MiUnlockPageTableInternal((__int64)v31, v30);
        v7 = v33;
        v6 = v34;
        if ( a2 > a3 )
          goto LABEL_22;
        goto LABEL_3;
      }
    }
    v22 = !MiPteNeedsCommitCharge(v17, a2);
LABEL_25:
    if ( v22 )
      goto LABEL_19;
    goto LABEL_26;
  }
  if ( v13 )
    MiUnlockPageTableInternal((__int64)v5, v13);
LABEL_23:
  MiUnlockWorkingSetShared((__int64)v5, v27);
  return v15;
}
