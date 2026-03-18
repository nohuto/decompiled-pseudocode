/*
 * XREFs of MiInitializeDynamicPfns @ 0x1405290D0
 * Callers:
 *     MiMapNewPfns @ 0x1408C26D4 (MiMapNewPfns.c)
 *     MiRemovePhysicalMemory @ 0x1408C298C (MiRemovePhysicalMemory.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiLockProtoPoolPage @ 0x140229D70 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MiSearchNumaNodeTable @ 0x14023A180 (MiSearchNumaNodeTable.c)
 *     MiReferenceControlAreaPfn @ 0x14025F72C (MiReferenceControlAreaPfn.c)
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     MiAbortCombineScan @ 0x1402F7290 (MiAbortCombineScan.c)
 *     MiUpdateLargePageBitMap @ 0x1403178D8 (MiUpdateLargePageBitMap.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiInitializeUnusablePfns @ 0x1403A86F0 (MiInitializeUnusablePfns.c)
 *     MiRestrictRangeToNode @ 0x1403A8BD0 (MiRestrictRangeToNode.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x1403F0F18 (MiInitializeAllResidentPageBasePfns.c)
 *     MiDetermineNewPfnHeatState @ 0x1403F20D0 (MiDetermineNewPfnHeatState.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiSetPfnRemovalRequested @ 0x140549F58 (MiSetPfnRemovalRequested.c)
 *     MiInitializeDpcGang @ 0x14055B0B0 (MiInitializeDpcGang.c)
 *     MiStartDpcGang @ 0x14055B20C (MiStartDpcGang.c)
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
  __int64 v30; // rdx
  _QWORD *v31; // rax
  int v32; // eax
  char v33; // al
  unsigned __int64 v34; // rsi
  int v35; // r15d
  unsigned __int8 v36; // al
  __int64 v37; // r8
  __int128 v38; // xmm1
  __int64 v39; // rax
  unsigned __int64 v40; // rcx
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  unsigned __int8 v44; // al
  unsigned __int8 v45; // di
  struct _KPRCB *v46; // r10
  int v47; // eax
  unsigned __int8 v48[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v49; // [rsp+42h] [rbp-BEh]
  int v50; // [rsp+44h] [rbp-BCh]
  __int64 v51; // [rsp+48h] [rbp-B8h]
  __int64 v52; // [rsp+50h] [rbp-B0h]
  __int16 *v53; // [rsp+58h] [rbp-A8h]
  __int128 v54; // [rsp+60h] [rbp-A0h]
  __int128 v55; // [rsp+70h] [rbp-90h]
  __int128 v56; // [rsp+80h] [rbp-80h]
  __int128 v57; // [rsp+90h] [rbp-70h]
  __int128 v58; // [rsp+A0h] [rbp-60h]
  __int128 v59; // [rsp+B0h] [rbp-50h]
  _QWORD v60[48]; // [rsp+C0h] [rbp-40h] BYREF

  v52 = a5;
  v53 = a3;
  v51 = a6;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  memset(v60, 0, sizeof(v60));
  v49 = *a3;
  v13 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v14 = 5;
  v15 = a4 & 6;
  v50 = v15;
  if ( v15 == 4 )
  {
    v16 = ExAcquireSpinLockExclusive(&dword_140C50C48);
    qword_140C52690 += a2;
    v17 = v16;
    byte_140C50B8C = 1;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C50C48);
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
    v15 = v50;
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
    v48[0] = 17;
    while ( a2 )
    {
      v28 = MiRestrictRangeToNode(BugCheckParameter2, a2);
      v29 = v28;
      if ( v52 )
      {
        if ( v28 > (unsigned __int64)(4096 - (unsigned int)(v25 & 0xFFF)) >> 3 )
          v29 = (unsigned __int64)(4096 - (unsigned int)(v25 & 0xFFF)) >> 3;
        while ( 1 )
        {
          v27 = MiLockProtoPoolPage(v25, v48);
          if ( v27 )
            break;
          MmAccessFault(2uLL, v25, 0, 0LL);
        }
        MiInitializeUnusablePfns(
          (__m128i *)(48 * BugCheckParameter2 - 0x58000000000LL),
          v29,
          v49,
          v22,
          *(_QWORD *)v52,
          v25,
          *(_DWORD *)(v52 + 16));
        v26 = v48[0];
      }
      else
      {
        v31 = MiSearchNumaNodeTable(BugCheckParameter2);
        MiInitializeDpcGang(v60, *((unsigned int *)v31 + 2), 1LL);
        v60[21] = v53;
        v32 = LODWORD(v60[23]) | 4;
        HIDWORD(v60[22]) = v22;
        v60[0] = BugCheckParameter2;
        v60[1] = v29;
        v60[20] = v51;
        if ( v51 )
          v32 = LODWORD(v60[23]) | 0xC;
        LODWORD(v60[23]) = v32 | 2;
        MiStartDpcGang(v60);
      }
      if ( v25 )
      {
        LOBYTE(v30) = v26;
        MiUnlockProtoPoolPage(v27, v30);
        v25 += 8 * v29;
      }
      a2 -= v29;
      BugCheckParameter2 += v29;
      v51 += v29 << 12;
    }
  }
  else
  {
    if ( (a4 & 2) == 0 )
      MiUpdateLargePageBitMap((__int64)&MiSystemPartition, BugCheckParameter2, a2, 0, 0);
    *((_QWORD *)&v58 + 1) |= 0x8000000000000000uLL;
    *((_QWORD *)&v55 + 1) |= 0x8000000000000000uLL;
    v33 = v14 | BYTE2(v56) & 0xF8;
    v34 = v13 + 48 * a2;
    BYTE2(v56) = v33;
    if ( v13 < v34 )
    {
      v35 = a4 & 0x10;
      do
      {
        v36 = MiLockPageInline(v13, v10, v11, SchedulerAssist);
        v21 = (*(_BYTE *)(v13 + 35) & 0x40) == 0;
        v48[0] = v36;
        if ( !v21 )
          MiSetPfnRemovalRequested(v13, 0LL);
        v38 = v55;
        v39 = *((_QWORD *)&v56 + 1);
        v40 = *((_QWORD *)&v56 + 1) ^ ((unsigned __int64)(unsigned __int16)(*(_QWORD *)(v13 + 40) >> 39) << 39);
        *(_OWORD *)v13 = v54;
        *((_QWORD *)&v56 + 1) = v40 & 0x1FF8000000000LL ^ v39;
        v41 = v56;
        *(_OWORD *)(v13 + 16) = v38;
        *(_OWORD *)(v13 + 32) = v41;
        MiAbortCombineScan(v13, 0x1FF8000000000LL, v37);
        if ( v35 )
        {
          v42 = v58;
          *(_OWORD *)v13 = v57;
          v43 = v59;
          *(_OWORD *)(v13 + 16) = v42;
          *(_OWORD *)(v13 + 32) = v43;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v44 = KeGetCurrentIrql(), v44 <= 0xFu) )
        {
          v45 = v48[0];
          if ( v48[0] <= 0xFu && v44 >= 2u )
          {
            v46 = KeGetCurrentPrcb();
            SchedulerAssist = v46->SchedulerAssist;
            v45 = v48[0];
            v10 = -1LL << (v48[0] + 1);
            v47 = ~(unsigned __int16)v10;
            v21 = (v47 & SchedulerAssist[5]) == 0;
            v11 = (unsigned int)v47 & SchedulerAssist[5];
            SchedulerAssist[5] = v11;
            if ( v21 )
              KiRemoveSystemWorkPriorityKick((__int64)v46);
          }
        }
        else
        {
          v45 = v48[0];
        }
        __writecr8(v45);
        v13 += 48LL;
      }
      while ( v13 < v34 );
    }
  }
}
