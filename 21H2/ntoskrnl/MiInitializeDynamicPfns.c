/*
 * XREFs of MiInitializeDynamicPfns @ 0x140582D7C
 * Callers:
 *     MiMapNewPfns @ 0x140969514 (MiMapNewPfns.c)
 *     MiRemovePhysicalMemory @ 0x140969850 (MiRemovePhysicalMemory.c)
 * Callees:
 *     MiInitializeAllResidentPageBasePfns @ 0x140246160 (MiInitializeAllResidentPageBasePfns.c)
 *     MiAbortCombineScan @ 0x140268998 (MiAbortCombineScan.c)
 *     MiPageCombiningActive @ 0x140268A48 (MiPageCombiningActive.c)
 *     MiLockProtoPoolPageForce @ 0x140273AAC (MiLockProtoPoolPageForce.c)
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 *     MiUpdateLargePageBitMap @ 0x1402C38D0 (MiUpdateLargePageBitMap.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockProtoPoolPage @ 0x140334790 (MiUnlockProtoPoolPage.c)
 *     MiReferenceControlAreaPfn @ 0x14033E11C (MiReferenceControlAreaPfn.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     MiCreatePfnTemplate @ 0x1403B770C (MiCreatePfnTemplate.c)
 *     MiDetermineNewPfnHeatState @ 0x1403B78C4 (MiDetermineNewPfnHeatState.c)
 *     MiInitializeNewPfns @ 0x1403B790C (MiInitializeNewPfns.c)
 *     MiRestrictRangeToNode @ 0x1403B7A10 (MiRestrictRangeToNode.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiShouldYieldProcessor @ 0x14059109C (MiShouldYieldProcessor.c)
 *     MiSetPfnRemovalRequested @ 0x1405ADDA8 (MiSetPfnRemovalRequested.c)
 *     MiUpdatePartitionChildPageCounts @ 0x1405BFE08 (MiUpdatePartitionChildPageCounts.c)
 *     MiInitializeDpcGang @ 0x1405C04D4 (MiInitializeDpcGang.c)
 *     MiStartDpcGang @ 0x1405C0634 (MiStartDpcGang.c)
 */

void __fastcall MiInitializeDynamicPfns(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR a2,
        unsigned __int16 *a3,
        unsigned int a4,
        __int64 a5,
        ULONG_PTR *a6)
{
  unsigned __int16 *v6; // rsi
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 v11; // rbx
  KIRQL v12; // al
  unsigned __int64 v13; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v16; // eax
  bool v17; // zf
  int v18; // eax
  int v19; // r9d
  ULONG_PTR v20; // rsi
  char v21; // r13
  ULONG_PTR v22; // rax
  unsigned __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // rax
  int v28; // eax
  __int64 v29; // r8
  ULONG_PTR *v30; // rdx
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // r15
  __int64 v33; // r12
  unsigned __int8 v34; // di
  int v35; // r14d
  unsigned __int64 v36; // rsi
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  unsigned __int8 v41; // al
  unsigned __int8 v42; // di
  struct _KPRCB *v43; // r10
  int v44; // eax
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r9
  _DWORD *v47; // r8
  int v48; // eax
  char v49[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v50; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v51; // [rsp+48h] [rbp-B8h]
  ULONG_PTR *v52; // [rsp+50h] [rbp-B0h]
  ULONG_PTR *v53; // [rsp+58h] [rbp-A8h]
  __int128 v54; // [rsp+60h] [rbp-A0h]
  __int128 v55; // [rsp+70h] [rbp-90h]
  __int128 v56; // [rsp+80h] [rbp-80h]
  __int128 v57; // [rsp+90h] [rbp-70h]
  __int128 v58; // [rsp+A0h] [rbp-60h]
  __int128 v59; // [rsp+B0h] [rbp-50h]
  __m128i v60[3]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v61[28]; // [rsp+F0h] [rbp-10h] BYREF

  v6 = a3;
  v53 = (ULONG_PTR *)a3;
  v52 = a6;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  memset(v61, 0, 0xD8uLL);
  LOWORD(v50) = *v6;
  v11 = 48 * BugCheckParameter2 - 0x220000000000LL;
  LODWORD(v51) = 5;
  if ( (a4 & 0x10000A) == 8 )
  {
    v12 = ExAcquireSpinLockExclusive(&dword_140C55048);
    qword_140C590D0 += a2;
    v13 = v12;
    byte_140C54F8C = 1;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C55048);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v17 = (v16 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v16;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v13);
    v6 = (unsigned __int16 *)v53;
    LODWORD(v51) = 6;
  }
  if ( (a4 & 1) != 0 )
  {
    memset(v60, 0, sizeof(v60));
    if ( (a4 & 0x3000) != 0 )
    {
      v18 = MiDetermineNewPfnHeatState(0, (a4 >> 12) & 1);
      MiInitializeAllResidentPageBasePfns(v6, BugCheckParameter2, a2, v19, 1, v18 == 0, 0);
    }
    if ( (a4 & 2) != 0 )
    {
      v20 = *(_QWORD *)(a5 + 8);
      MiReferenceControlAreaPfn(**(_QWORD **)a5, *(_QWORD *)a5, a2);
      a4 |= *(_DWORD *)(a5 + 16);
    }
    else
    {
      if ( v53 != &MiSystemPartition )
        MiUpdatePartitionChildPageCounts(v53, &MiSystemPartition, BugCheckParameter2, a2);
      v20 = 0LL;
    }
    v51 = 0LL;
    v21 = 17;
    v49[0] = 17;
    if ( a5 )
      MiCreatePfnTemplate((__int64)v60, a4, v50);
    while ( a2 )
    {
      v22 = MiRestrictRangeToNode(BugCheckParameter2, a2);
      v23 = v22;
      if ( a5 )
      {
        if ( v22 > (unsigned __int64)(4096 - (unsigned int)(v20 & 0xFFF)) >> 3 )
          v23 = (unsigned __int64)(4096 - (unsigned int)(v20 & 0xFFF)) >> 3;
        v51 = MiLockProtoPoolPageForce(v20, (__int64)v49);
        MiInitializeNewPfns(
          (__m128i *)(48 * BugCheckParameter2 - 0x220000000000LL),
          v23,
          v60,
          v50,
          a4,
          *(_QWORD *)a5,
          (unsigned __int64 *)v20);
        v21 = v49[0];
      }
      else
      {
        v27 = MiSearchNumaNodeTable(BugCheckParameter2);
        MiInitializeDpcGang(v61, *((unsigned int *)v27 + 2), 1LL);
        v61[21] = v53;
        v28 = LODWORD(v61[23]) | 4;
        HIDWORD(v61[22]) = a4;
        v61[0] = BugCheckParameter2;
        v61[1] = v23;
        LODWORD(v61[23]) |= 4u;
        v61[20] = v52;
        if ( v52 )
        {
          v28 |= 8u;
          LODWORD(v61[23]) = v28;
        }
        if ( (a4 & 0x80000) == 0 )
          LODWORD(v61[23]) = v28 | 2;
        MiStartDpcGang(v61);
      }
      if ( v20 )
      {
        LOBYTE(v24) = v21;
        MiUnlockProtoPoolPage(v51, v24, v25, v26);
        v20 += 8 * v23;
      }
      a2 -= v23;
      BugCheckParameter2 += v23;
      v52 += 512 * v23;
    }
    return;
  }
  if ( (a4 & 2) == 0 )
    MiUpdateLargePageBitMap((__int64)&MiSystemPartition, BugCheckParameter2, a2, 0, 0);
  v29 = 0x1FF80000000000LL;
  v30 = *(ULONG_PTR **)(qword_140C51F48 + 8 * ((*(_QWORD *)(v11 + 40) >> 43) & 0x3FFLL));
  *((_QWORD *)&v58 + 1) |= 0x8000000000000000uLL;
  *((_QWORD *)&v55 + 1) |= 0x8000000000000000uLL;
  v31 = (unsigned __int64)*(unsigned __int16 *)v30 << 43;
  BYTE2(v56) = v51 | BYTE2(v56) & 0xF8;
  v52 = v30;
  *((_QWORD *)&v56 + 1) ^= (*((_QWORD *)&v56 + 1) ^ v31) & 0x1FF80000000000LL;
  if ( v30 != &MiSystemPartition )
    MiUpdatePartitionChildPageCounts(&MiSystemPartition, v30, BugCheckParameter2, a2);
  v32 = v11 + 48 * a2;
  v33 = 0LL;
  v34 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v34 <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v30 = (ULONG_PTR *)((-1LL << (v34 + 1)) & 4);
    v29 = (unsigned int)v30 | SchedulerAssist[5];
    SchedulerAssist[5] = v29;
  }
  v49[0] = v34;
  if ( v11 < v32 )
  {
    v35 = a4 & 0x20;
    v36 = v11 + 24;
    while ( 1 )
    {
      v50 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v36, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v50, (__int64)v30, v29, (__int64)SchedulerAssist);
        while ( *(__int64 *)v36 < 0 );
      }
      if ( (*(_BYTE *)(v36 + 11) & 0x40) != 0 )
        MiSetPfnRemovalRequested(v11, 0LL, 1LL);
      if ( MiPageCombiningActive((__int64)v52) )
        break;
      if ( v35 )
        goto LABEL_53;
      v37 = v55;
      *(_OWORD *)v11 = v54;
      v38 = v56;
LABEL_54:
      *(_OWORD *)(v11 + 16) = v37;
      *(_OWORD *)(v11 + 32) = v38;
LABEL_55:
      _InterlockedAnd64((volatile signed __int64 *)v36, 0x7FFFFFFFFFFFFFFFuLL);
      v11 += 48LL;
      v36 += 48LL;
      if ( (++v33 & 0x3F) != 0 || !(unsigned int)MiShouldYieldProcessor() )
      {
        v34 = v49[0];
      }
      else
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v41 = KeGetCurrentIrql(), v41 <= 0xFu) )
        {
          v42 = v49[0];
          if ( v49[0] <= 0xFu && v41 >= 2u )
          {
            v43 = KeGetCurrentPrcb();
            SchedulerAssist = v43->SchedulerAssist;
            v42 = v49[0];
            v30 = (ULONG_PTR *)(-1LL << (v49[0] + 1));
            v44 = ~(unsigned __int16)v30;
            v17 = (v44 & SchedulerAssist[5]) == 0;
            v29 = (unsigned int)v44 & SchedulerAssist[5];
            SchedulerAssist[5] = v29;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick((__int64)v43);
          }
        }
        else
        {
          v42 = v49[0];
        }
        __writecr8(v42);
        v34 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v34 <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          v30 = (ULONG_PTR *)((-1LL << (v34 + 1)) & 4);
          v29 = (unsigned int)v30 | SchedulerAssist[5];
          SchedulerAssist[5] = v29;
        }
        v49[0] = v34;
      }
      if ( v11 >= v32 )
        goto LABEL_72;
    }
    v39 = v55;
    *(_OWORD *)v11 = v54;
    v40 = v56;
    *(_OWORD *)(v11 + 16) = v39;
    *(_OWORD *)(v11 + 32) = v40;
    MiAbortCombineScan(v11);
    if ( !v35 )
      goto LABEL_55;
LABEL_53:
    v37 = v58;
    *(_OWORD *)v11 = v57;
    v38 = v59;
    goto LABEL_54;
  }
LABEL_72:
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v45 = KeGetCurrentIrql();
      if ( v45 <= 0xFu && v34 <= 0xFu && v45 >= 2u )
      {
        v46 = KeGetCurrentPrcb();
        v47 = v46->SchedulerAssist;
        v34 = v49[0];
        v48 = ~(unsigned __int16)(-1LL << (v49[0] + 1));
        v17 = (v48 & v47[5]) == 0;
        v47[5] &= v48;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick((__int64)v46);
      }
    }
  }
  __writecr8(v34);
}
