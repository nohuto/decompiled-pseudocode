/*
 * XREFs of MiInitializeDynamicPfns @ 0x140528A80
 * Callers:
 *     MiMapNewPfns @ 0x1408C1384 (MiMapNewPfns.c)
 *     MiRemovePhysicalMemory @ 0x1408C163C (MiRemovePhysicalMemory.c)
 * Callees:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiLockProtoPoolPage @ 0x140282DC0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MiSearchNumaNodeTable @ 0x1402931D0 (MiSearchNumaNodeTable.c)
 *     MiReferenceControlAreaPfn @ 0x1402B875C (MiReferenceControlAreaPfn.c)
 *     MiUpdateLargePageBitMap @ 0x140346C18 (MiUpdateLargePageBitMap.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiAbortCombineScan @ 0x140353270 (MiAbortCombineScan.c)
 *     MiInitializeUnusablePfns @ 0x1403AEB10 (MiInitializeUnusablePfns.c)
 *     MiRestrictRangeToNode @ 0x1403AEFF0 (MiRestrictRangeToNode.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x1403EFBB8 (MiInitializeAllResidentPageBasePfns.c)
 *     MiDetermineNewPfnHeatState @ 0x1403F0D70 (MiDetermineNewPfnHeatState.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiSetPfnRemovalRequested @ 0x140549908 (MiSetPfnRemovalRequested.c)
 *     MiInitializeDpcGang @ 0x14055AA60 (MiInitializeDpcGang.c)
 *     MiStartDpcGang @ 0x14055ABBC (MiStartDpcGang.c)
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
  char v26; // r13
  __int64 v27; // r15
  ULONG_PTR v28; // rax
  unsigned __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // rax
  int v34; // eax
  char v35; // al
  unsigned __int64 v36; // rsi
  int v37; // r15d
  char v38; // al
  __int64 v39; // r8
  __int128 v40; // xmm1
  __int64 v41; // rax
  unsigned __int64 v42; // rcx
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  unsigned __int8 v46; // al
  unsigned __int8 v47; // di
  struct _KPRCB *v48; // r10
  int v49; // eax
  char v50[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v51; // [rsp+42h] [rbp-BEh]
  int v52; // [rsp+44h] [rbp-BCh]
  __int64 v53; // [rsp+48h] [rbp-B8h]
  __int64 v54; // [rsp+50h] [rbp-B0h]
  __int16 *v55; // [rsp+58h] [rbp-A8h]
  __int128 v56; // [rsp+60h] [rbp-A0h]
  __int128 v57; // [rsp+70h] [rbp-90h]
  __int128 v58; // [rsp+80h] [rbp-80h]
  __int128 v59; // [rsp+90h] [rbp-70h]
  __int128 v60; // [rsp+A0h] [rbp-60h]
  __int128 v61; // [rsp+B0h] [rbp-50h]
  _QWORD v62[48]; // [rsp+C0h] [rbp-40h] BYREF

  v54 = a5;
  v55 = a3;
  v53 = a6;
  v59 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  memset(v62, 0, sizeof(v62));
  v51 = *a3;
  v13 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v14 = 5;
  v15 = a4 & 6;
  v52 = v15;
  if ( v15 == 4 )
  {
    v16 = ExAcquireSpinLockExclusive(&dword_140C50D48);
    qword_140C52790 += a2;
    v17 = v16;
    byte_140C50C8C = 1;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C50D48);
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
    v15 = v52;
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
    v50[0] = 17;
    while ( a2 )
    {
      v28 = MiRestrictRangeToNode(BugCheckParameter2, a2);
      v29 = v28;
      if ( v54 )
      {
        if ( v28 > (unsigned __int64)(4096 - (unsigned int)(v25 & 0xFFF)) >> 3 )
          v29 = (unsigned __int64)(4096 - (unsigned int)(v25 & 0xFFF)) >> 3;
        while ( 1 )
        {
          v27 = MiLockProtoPoolPage(v25, (__int64)v50);
          if ( v27 )
            break;
          MmAccessFault(2uLL, v25, 0, 0LL);
        }
        MiInitializeUnusablePfns(
          (__m128i *)(48 * BugCheckParameter2 - 0x58000000000LL),
          v29,
          v51,
          v22,
          *(_QWORD *)v54,
          v25,
          *(_DWORD *)(v54 + 16));
        v26 = v50[0];
      }
      else
      {
        v33 = MiSearchNumaNodeTable(BugCheckParameter2);
        MiInitializeDpcGang(v62, *((unsigned int *)v33 + 2), 1LL);
        v62[21] = v55;
        v34 = LODWORD(v62[23]) | 4;
        HIDWORD(v62[22]) = v22;
        v62[0] = BugCheckParameter2;
        v62[1] = v29;
        v62[20] = v53;
        if ( v53 )
          v34 = LODWORD(v62[23]) | 0xC;
        LODWORD(v62[23]) = v34 | 2;
        MiStartDpcGang(v62);
      }
      if ( v25 )
      {
        LOBYTE(v30) = v26;
        MiUnlockProtoPoolPage(v27, v30, v31, v32);
        v25 += 8 * v29;
      }
      a2 -= v29;
      BugCheckParameter2 += v29;
      v53 += v29 << 12;
    }
  }
  else
  {
    if ( (a4 & 2) == 0 )
      MiUpdateLargePageBitMap((__int64)&MiSystemPartition, BugCheckParameter2, a2, 0, 0);
    *((_QWORD *)&v60 + 1) |= 0x8000000000000000uLL;
    *((_QWORD *)&v57 + 1) |= 0x8000000000000000uLL;
    v35 = v14 | BYTE2(v58) & 0xF8;
    v36 = v13 + 48 * a2;
    BYTE2(v58) = v35;
    if ( v13 < v36 )
    {
      v37 = a4 & 0x10;
      do
      {
        v38 = MiLockPageInline(v13, v10, v11, SchedulerAssist);
        v21 = (*(_BYTE *)(v13 + 35) & 0x40) == 0;
        v50[0] = v38;
        if ( !v21 )
          MiSetPfnRemovalRequested(v13, 0LL);
        v40 = v57;
        v41 = *((_QWORD *)&v58 + 1);
        v42 = *((_QWORD *)&v58 + 1) ^ ((unsigned __int64)(unsigned __int16)(*(_QWORD *)(v13 + 40) >> 39) << 39);
        *(_OWORD *)v13 = v56;
        *((_QWORD *)&v58 + 1) = v42 & 0x1FF8000000000LL ^ v41;
        v43 = v58;
        *(_OWORD *)(v13 + 16) = v40;
        *(_OWORD *)(v13 + 32) = v43;
        MiAbortCombineScan(v13, 0x1FF8000000000LL, v39);
        if ( v37 )
        {
          v44 = v60;
          *(_OWORD *)v13 = v59;
          v45 = v61;
          *(_OWORD *)(v13 + 16) = v44;
          *(_OWORD *)(v13 + 32) = v45;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v46 = KeGetCurrentIrql(), v46 <= 0xFu) )
        {
          v47 = v50[0];
          if ( v50[0] <= 0xFu && v46 >= 2u )
          {
            v48 = KeGetCurrentPrcb();
            SchedulerAssist = v48->SchedulerAssist;
            v47 = v50[0];
            v10 = -1LL << (v50[0] + 1);
            v49 = ~(unsigned __int16)v10;
            v21 = (v49 & SchedulerAssist[5]) == 0;
            v11 = (unsigned int)v49 & SchedulerAssist[5];
            SchedulerAssist[5] = v11;
            if ( v21 )
              KiRemoveSystemWorkPriorityKick((__int64)v48);
          }
        }
        else
        {
          v47 = v50[0];
        }
        __writecr8(v47);
        v13 += 48LL;
      }
      while ( v13 < v36 );
    }
  }
}
