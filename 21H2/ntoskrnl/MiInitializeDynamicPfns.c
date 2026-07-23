/*
 * XREFs of MiInitializeDynamicPfns @ 0x14052E7E0
 * Callers:
 *     MiMapNewPfns @ 0x1408C5E34 (MiMapNewPfns.c)
 *     MiRemovePhysicalMemory @ 0x1408C60EC (MiRemovePhysicalMemory.c)
 * Callees:
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiUpdateLargePageBitMap @ 0x14030ADE0 (MiUpdateLargePageBitMap.c)
 *     MiAbortCombineScan @ 0x14030E4C0 (MiAbortCombineScan.c)
 *     MiReferenceControlAreaPfn @ 0x140324CD0 (MiReferenceControlAreaPfn.c)
 *     MiLockProtoPoolPage @ 0x140324E50 (MiLockProtoPoolPage.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInitializeUnusablePfns @ 0x1403B1150 (MiInitializeUnusablePfns.c)
 *     MiRestrictRangeToNode @ 0x1403B1630 (MiRestrictRangeToNode.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x1403F6BC8 (MiInitializeAllResidentPageBasePfns.c)
 *     MiDetermineNewPfnHeatState @ 0x1403F7D80 (MiDetermineNewPfnHeatState.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiSetPfnRemovalRequested @ 0x14054F668 (MiSetPfnRemovalRequested.c)
 *     MiInitializeDpcGang @ 0x140560790 (MiInitializeDpcGang.c)
 *     MiStartDpcGang @ 0x1405608EC (MiStartDpcGang.c)
 */

void __fastcall MiInitializeDynamicPfns(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR a2,
        __int16 *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 v13; // rbx
  char v14; // si
  int v15; // eax
  KIRQL v16; // al
  unsigned __int64 v17; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v20; // eax
  bool v21; // zf
  unsigned int v22; // r14d
  int v23; // eax
  int v24; // r9d
  unsigned __int64 v25; // rsi
  unsigned __int8 v26; // r13
  __int64 v27; // r15
  ULONG_PTR v28; // rax
  unsigned __int64 v29; // rbx
  _QWORD *v30; // rax
  int v31; // eax
  char v32; // al
  unsigned __int64 v33; // rsi
  int v34; // r15d
  unsigned __int8 v35; // al
  __int64 v36; // r8
  __int128 v37; // xmm1
  __int64 v38; // rax
  unsigned __int64 v39; // rcx
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  unsigned __int8 v43; // al
  unsigned __int8 v44; // di
  struct _KPRCB *v45; // r10
  int v46; // eax
  unsigned __int8 v47[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v48; // [rsp+42h] [rbp-BEh]
  int v49; // [rsp+44h] [rbp-BCh]
  __int64 v50; // [rsp+48h] [rbp-B8h]
  __int64 v51; // [rsp+50h] [rbp-B0h]
  __int16 *v52; // [rsp+58h] [rbp-A8h]
  __int128 v53; // [rsp+60h] [rbp-A0h]
  __int128 v54; // [rsp+70h] [rbp-90h]
  __int128 v55; // [rsp+80h] [rbp-80h]
  __int128 v56; // [rsp+90h] [rbp-70h]
  __int128 v57; // [rsp+A0h] [rbp-60h]
  __int128 v58; // [rsp+B0h] [rbp-50h]
  _QWORD v59[48]; // [rsp+C0h] [rbp-40h] BYREF

  v51 = a5;
  v52 = a3;
  v50 = a6;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  memset(v59, 0, sizeof(v59));
  v48 = *a3;
  v13 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v14 = 5;
  v15 = a4 & 6;
  v49 = v15;
  if ( v15 == 4 )
  {
    v16 = ExAcquireSpinLockExclusive(&dword_140C50E88);
    qword_140C528D0 += a2;
    v17 = v16;
    byte_140C50DCC = 1;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C50E88);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v17 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v10 = -1LL << ((unsigned __int8)v17 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v20 = ~(unsigned __int16)v10;
          v21 = (v20 & SchedulerAssist[5]) == 0;
          v11 = (unsigned int)v20 & SchedulerAssist[5];
          SchedulerAssist[5] = v11;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v17);
    v15 = v49;
    v14 = 6;
  }
  if ( (a4 & 1) != 0 )
  {
    v22 = a4 | 0x40;
    if ( v15 != 4 )
      v22 = a4;
    if ( (v22 & 0x1800) != 0 )
    {
      v23 = MiDetermineNewPfnHeatState(0, (v22 >> 11) & 1);
      MiInitializeAllResidentPageBasePfns(
        (unsigned __int16 *)&MiSystemPartition,
        BugCheckParameter2,
        a2,
        v24,
        1,
        v23 == 0,
        0);
    }
    if ( (v22 & 2) != 0 )
    {
      v25 = *(_QWORD *)(a5 + 8);
      MiReferenceControlAreaPfn(**(_QWORD **)a5, *(_QWORD *)a5, a2);
    }
    else
    {
      v25 = 0LL;
    }
    v26 = 17;
    v27 = 0LL;
    v47[0] = 17;
    while ( a2 )
    {
      v28 = MiRestrictRangeToNode(BugCheckParameter2, a2);
      v29 = v28;
      if ( v51 )
      {
        if ( v28 > (unsigned __int64)(4096 - (unsigned int)(v25 & 0xFFF)) >> 3 )
          v29 = (unsigned __int64)(4096 - (unsigned int)(v25 & 0xFFF)) >> 3;
        while ( 1 )
        {
          v27 = MiLockProtoPoolPage(v25, v47);
          if ( v27 )
            break;
          MmAccessFault(2uLL, v25, 0, 0LL);
        }
        MiInitializeUnusablePfns(
          (__m128i *)(48 * BugCheckParameter2 - 0x58000000000LL),
          v29,
          v48,
          v22,
          *(_QWORD *)v51,
          v25,
          *(_DWORD *)(v51 + 16));
        v26 = v47[0];
      }
      else
      {
        v30 = MiSearchNumaNodeTable(BugCheckParameter2);
        MiInitializeDpcGang(v59, *((unsigned int *)v30 + 2), 1LL);
        v59[21] = v52;
        v31 = LODWORD(v59[23]) | 4;
        HIDWORD(v59[22]) = v22;
        v59[0] = BugCheckParameter2;
        v59[1] = v29;
        v59[20] = v50;
        if ( v50 )
          v31 = LODWORD(v59[23]) | 0xC;
        LODWORD(v59[23]) = v31 | 2;
        MiStartDpcGang(v59);
      }
      if ( v25 )
      {
        MiUnlockProtoPoolPage(v27, v26);
        v25 += 8 * v29;
      }
      a2 -= v29;
      BugCheckParameter2 += v29;
      v50 += v29 << 12;
    }
  }
  else
  {
    if ( (a4 & 2) == 0 )
      MiUpdateLargePageBitMap((__int64)&MiSystemPartition, BugCheckParameter2, a2, 0, 0);
    *((_QWORD *)&v57 + 1) |= 0x8000000000000000uLL;
    *((_QWORD *)&v54 + 1) |= 0x8000000000000000uLL;
    v32 = v14 | BYTE2(v55) & 0xF8;
    v33 = v13 + 48 * a2;
    BYTE2(v55) = v32;
    if ( v13 < v33 )
    {
      v34 = a4 & 0x10;
      do
      {
        v35 = MiLockPageInline(v13, v10, v11, SchedulerAssist);
        v21 = (*(_BYTE *)(v13 + 35) & 0x40) == 0;
        v47[0] = v35;
        if ( !v21 )
          MiSetPfnRemovalRequested(v13, 0LL);
        v37 = v54;
        v38 = *((_QWORD *)&v55 + 1);
        v39 = *((_QWORD *)&v55 + 1) ^ ((unsigned __int64)(unsigned __int16)(*(_QWORD *)(v13 + 40) >> 39) << 39);
        *(_OWORD *)v13 = v53;
        *((_QWORD *)&v55 + 1) = v39 & 0x1FF8000000000LL ^ v38;
        v40 = v55;
        *(_OWORD *)(v13 + 16) = v37;
        *(_OWORD *)(v13 + 32) = v40;
        MiAbortCombineScan(v13, 0x1FF8000000000LL, v36);
        if ( v34 )
        {
          v41 = v57;
          *(_OWORD *)v13 = v56;
          v42 = v58;
          *(_OWORD *)(v13 + 16) = v41;
          *(_OWORD *)(v13 + 32) = v42;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v43 = KeGetCurrentIrql(), v43 <= 0xFu) )
        {
          v44 = v47[0];
          if ( v47[0] <= 0xFu && v43 >= 2u )
          {
            v45 = KeGetCurrentPrcb();
            SchedulerAssist = v45->SchedulerAssist;
            v44 = v47[0];
            v10 = -1LL << (v47[0] + 1);
            v46 = ~(unsigned __int16)v10;
            v21 = (v46 & SchedulerAssist[5]) == 0;
            v11 = (unsigned int)v46 & SchedulerAssist[5];
            SchedulerAssist[5] = v11;
            if ( v21 )
              KiRemoveSystemWorkPriorityKick((__int64)v45);
          }
        }
        else
        {
          v44 = v47[0];
        }
        __writecr8(v44);
        v13 += 48LL;
      }
      while ( v13 < v33 );
    }
  }
}
