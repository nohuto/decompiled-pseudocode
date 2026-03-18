/*
 * XREFs of MiDeletePagablePteRange @ 0x140242470
 * Callers:
 *     MiDeleteVad @ 0x140212740 (MiDeleteVad.c)
 *     MiDeleteVirtualAddresses @ 0x140251FF0 (MiDeleteVirtualAddresses.c)
 *     MiDeleteSessionAddressSpace @ 0x140386CEC (MiDeleteSessionAddressSpace.c)
 *     MiDeleteSessionPdes @ 0x14038A0D8 (MiDeleteSessionPdes.c)
 *     MiDeleteVadBitmap @ 0x14061D3D8 (MiDeleteVadBitmap.c)
 * Callees:
 *     MiWalkPageTables @ 0x140204BE0 (MiWalkPageTables.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x140213300 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockShared @ 0x140228470 (ExAcquireSpinLockShared.c)
 *     MiDeleteVaTail @ 0x140241CD0 (MiDeleteVaTail.c)
 *     MiDeleteVa @ 0x140242B90 (MiDeleteVa.c)
 *     MiTbFlushType @ 0x140245D64 (MiTbFlushType.c)
 *     MiGetUsedPtesHandle @ 0x140245EC0 (MiGetUsedPtesHandle.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     KxAcquireQueuedSpinLock @ 0x14029AB10 (KxAcquireQueuedSpinLock.c)
 *     MiFastLockLeafPageTable @ 0x1402A06B0 (MiFastLockLeafPageTable.c)
 *     MiCheckProcessShadow @ 0x1402A1860 (MiCheckProcessShadow.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     MiPreUnlockWorkingSetShared @ 0x140311648 (MiPreUnlockWorkingSetShared.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140331DC0 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140332ED0 (ExAcquireAutoExpandPushLockExclusive.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreePhysicalPageChain @ 0x140546718 (MiFreePhysicalPageChain.c)
 *     MiFreeLargePages @ 0x140558FF8 (MiFreeLargePages.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1405B0844 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

void __fastcall MiDeletePagablePteRange(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        char a5,
        int a6,
        _QWORD *a7)
{
  unsigned __int64 v7; // rbx
  int v8; // r12d
  unsigned __int64 v10; // r15
  unsigned __int8 v11; // al
  unsigned __int8 CurrentIrql; // si
  char v13; // di
  int v14; // edx
  int v15; // r8d
  __int64 v16; // r9
  int v17; // r10d
  int v18; // r11d
  char v19; // al
  __int16 v20; // ax
  char v21; // cl
  __int64 v22; // rdx
  char v23; // r12
  __int64 v24; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int16 v26; // ax
  unsigned __int8 v27; // al
  _DWORD *SchedulerAssist; // r9
  LONG *v29; // rbx
  KIRQL v30; // al
  __int64 SharedVm; // rbx
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // r15
  unsigned __int64 i; // rdi
  __int64 v36; // rax
  bool v37; // zf
  char v38; // al
  int v39; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v41; // rdx
  int v42; // eax
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r10
  _DWORD *v45; // r9
  int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // rcx
  int v50; // [rsp+24h] [rbp-DCh]
  __int64 v52; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v53; // [rsp+50h] [rbp-B0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v55; // [rsp+78h] [rbp-88h]
  unsigned __int64 v56; // [rsp+80h] [rbp-80h]
  unsigned __int64 v57; // [rsp+88h] [rbp-78h]
  __int64 v58; // [rsp+90h] [rbp-70h]
  __int128 v59; // [rsp+A0h] [rbp-60h] BYREF
  int *v60; // [rsp+B0h] [rbp-50h]
  __int64 v61; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v62; // [rsp+C0h] [rbp-40h]
  __int64 v63; // [rsp+C8h] [rbp-38h]
  __int128 v64; // [rsp+D0h] [rbp-30h]
  __int128 v65; // [rsp+E0h] [rbp-20h]
  __int128 v66; // [rsp+F0h] [rbp-10h]
  __int128 v67; // [rsp+100h] [rbp+0h]
  __int128 v68; // [rsp+110h] [rbp+10h]
  __int128 v69; // [rsp+120h] [rbp+20h]
  __int64 v70; // [rsp+130h] [rbp+30h]
  __int64 (__fastcall *v71)(_QWORD, _QWORD, _QWORD); // [rsp+138h] [rbp+38h]
  __int64 (__fastcall *v72)(__int64 *); // [rsp+140h] [rbp+40h]
  _OWORD *v73; // [rsp+148h] [rbp+48h]
  _OWORD v74[6]; // [rsp+150h] [rbp+50h] BYREF
  __int128 v75; // [rsp+1B0h] [rbp+B0h]
  __int128 v76; // [rsp+1C0h] [rbp+C0h]
  __int128 v77; // [rsp+1D0h] [rbp+D0h]
  __int64 v78; // [rsp+1E0h] [rbp+E0h]
  int v79; // [rsp+1F0h] [rbp+F0h] BYREF
  __int16 v80; // [rsp+1F4h] [rbp+F4h]
  __int16 v81; // [rsp+1F6h] [rbp+F6h]
  __int64 v82; // [rsp+1F8h] [rbp+F8h]
  __int64 v83; // [rsp+200h] [rbp+100h]
  __int64 v84; // [rsp+208h] [rbp+108h]
  __int128 v85; // [rsp+210h] [rbp+110h]
  __int128 v86; // [rsp+220h] [rbp+120h]
  __int128 v87; // [rsp+230h] [rbp+130h]
  __int128 v88; // [rsp+240h] [rbp+140h]
  __int128 v89; // [rsp+250h] [rbp+150h]
  __int128 v90; // [rsp+260h] [rbp+160h]
  __int128 v91; // [rsp+270h] [rbp+170h]
  __int128 v92; // [rsp+280h] [rbp+180h]
  __int128 v93; // [rsp+290h] [rbp+190h]
  __int64 v94; // [rsp+2A0h] [rbp+1A0h]
  void *retaddr; // [rsp+308h] [rbp+208h]
  char v96; // [rsp+330h] [rbp+230h]

  v8 = a6;
  v53 = a3;
  v81 = 0;
  v10 = a3;
  v94 = 0LL;
  v11 = a2;
  v96 = 4 * (a5 & 7);
  LOBYTE(v7) = 0;
  v85 = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  v89 = 0LL;
  v90 = 0LL;
  v91 = 0LL;
  v92 = 0LL;
  v93 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  while ( 1 )
  {
    v50 = v7;
    CurrentIrql = v11;
    v78 = 2LL;
    v13 = 0;
    v70 = 0LL;
    v75 = 0LL;
    v74[1] = (unsigned __int64)a7;
    v74[0] = 0LL;
    DWORD2(v75) = v8;
    memset(&v74[2], 0, 64);
    v76 = 0LL;
    v77 = 0LL;
    v59 = 0LL;
    v64 = 0LL;
    v65 = 0LL;
    v66 = 0LL;
    v67 = 0LL;
    v68 = 0LL;
    v69 = 0LL;
    v79 = MiTbFlushType(a1);
    v60 = &v79;
    v19 = BYTE12(v75);
    v80 = 0;
    v83 = 0LL;
    v84 = 0LL;
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      v19 = 1;
    BYTE12(v75) = v19;
    v82 = 20LL;
    BYTE2(v59) = v96 | _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 2)) & 0xE3;
    v73 = v74;
    v20 = 39;
    LOWORD(v59) = 39;
    if ( v15 )
    {
      v20 = 1059;
      LOWORD(v59) = 1059;
    }
    if ( v14 )
    {
      v20 |= 0x800u;
      LOWORD(v59) = v20;
    }
    v21 = BYTE5(v59);
    v22 = 63LL;
    v62 = v10;
    if ( v18 )
      v21 = 63;
    v63 = v16;
    BYTE5(v59) = v21;
    v23 = 0;
    v61 = a1;
    v71 = MiDeleteVa;
    v72 = MiDeleteVaTail;
    if ( v17 )
    {
      v24 = *(_QWORD *)(a7[4] + 32LL);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquireAutoExpandPushLockExclusive(v24 + 56, 0LL);
      v20 = v59;
    }
    if ( a2 != 17 )
    {
      v23 = 1;
      v26 = v20 & 0xFFFD;
      LOWORD(v59) = v26;
      goto LABEL_27;
    }
    if ( (v59 & 4) != 0 )
    {
      v27 = *(_BYTE *)(a1 + 184) & 7;
      if ( v27 >= 6u )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          v22 = (-1LL << (CurrentIrql + 1)) & 4;
          SchedulerAssist[5] |= v22;
        }
        goto LABEL_26;
      }
      v29 = &dword_140C4F580;
      if ( v27 != 2 )
        v29 = (LONG *)(a1 + 192);
      v30 = ExAcquireSpinLockShared(v29);
      if ( v29[1] )
        _InterlockedExchange(v29 + 1, 0);
    }
    else
    {
      SharedVm = MiGetSharedVm(a1, v22);
      v30 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
      *(_DWORD *)(SharedVm + 4) = 0;
    }
    LODWORD(v7) = v50;
    CurrentIrql = v30;
LABEL_26:
    v26 = v59;
LABEL_27:
    BYTE6(v59) = CurrentIrql;
    if ( (a6 & 0x100) != 0 )
    {
      if ( (a6 & 0x200) == 0 )
      {
        v22 = 4096LL;
        v26 = v26 & 0xEFFB | 0x1000;
      }
      LOWORD(v59) = v26 & 0xFFFD;
      v32 = MiGetSharedVm(a1, v22);
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v32 + 64);
      KxAcquireQueuedSpinLock(&LockHandle);
    }
    if ( (a6 & 0x80) == 0 )
      goto LABEL_42;
    if ( (_BYTE)v7 )
      goto LABEL_42;
    if ( ((a4 ^ v10) & 0xFFFFFFE00000LL) != 0 )
      goto LABEL_42;
    v33 = MiFastLockLeafPageTable(a1, v10, 0LL);
    if ( !v33 )
      goto LABEL_42;
    v7 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v55 = v7;
    v56 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v57 = ((v56 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v58 = ((v57 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v34 = *(&v55 + v33);
    if ( v33 == 1 )
    {
      for ( i = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL; v7 <= i; v7 += 8 * v36 )
      {
        MiDeleteVa(&v59, v7, 0LL);
        v36 = (unsigned int)BYTE3(v59) + 1;
        BYTE3(v59) = 0;
      }
      MiDeleteVaTail((__int64 *)&v59);
      v37 = (*(_DWORD *)(MiGetUsedPtesHandle(v53) + 16) & 0x3FF0000) == 0;
      v38 = v50;
      if ( v37 )
        v38 = 1;
      v13 = 1;
      LOBYTE(v50) = v38;
    }
    MiUnlockPageTableInternal(a1, v34);
    if ( !v13 )
LABEL_42:
      MiWalkPageTables((__int16 *)&v59);
    if ( (a6 & 0x100) != 0 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( (a6 & 0x200) == 0 )
        LOWORD(v59) = v59 | 4;
    }
    if ( !v23 )
    {
      if ( (v59 & 4) != 0 )
      {
        if ( (*(_BYTE *)(a1 + 184) & 7u) < 6 )
        {
          v39 = *(_DWORD *)(a1 + 184);
          if ( (v39 & 0x8000000) != 0 || (v39 & 0x4000000) != 0 || (v39 & 0x10000000) != 0 )
          {
            MiPreUnlockWorkingSetShared(a1, CurrentIrql);
            LOBYTE(v39) = *(_BYTE *)(a1 + 184);
          }
          v7 = (unsigned __int64)&dword_140C4F580;
          if ( (v39 & 7) != 2 )
            v7 = a1 + 192;
          MiCheckProcessShadow(a1, 1LL);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v7, retaddr);
          }
          else
          {
            _InterlockedAnd((volatile signed __int32 *)v7, 0xBFFFFFFF);
            _InterlockedDecrement((volatile signed __int32 *)v7);
          }
          CurrentPrcb = KeGetCurrentPrcb();
          v41 = CurrentPrcb->SchedulerAssist;
          if ( v41 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v42 = v41[6] - 1;
              v41[6] = v42;
              if ( !v42 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v43 = KeGetCurrentIrql();
            if ( v43 <= 0xFu && CurrentIrql <= 0xFu && v43 >= 2u )
            {
              v44 = KeGetCurrentPrcb();
              v45 = v44->SchedulerAssist;
              v46 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v37 = (v46 & v45[5]) == 0;
              v45[5] &= v46;
              if ( v37 )
                KiRemoveSystemWorkPriorityKick(v44);
            }
          }
        }
        __writecr8(CurrentIrql);
      }
      else
      {
        MiUnlockWorkingSetExclusive(a1, CurrentIrql);
      }
    }
    v47 = a7[5];
    if ( v47 < 0 )
    {
      v52 = 0LL;
      a7[1] = MiFreeLargePages(v47, &v52);
      a7[5] = v52;
    }
    v48 = a7[4];
    if ( v48 && (_QWORD)v76 )
      MiFreePhysicalPageChain(v48, v76, 1LL);
    if ( (a6 & 0x10) != 0 )
    {
      v7 = (unsigned __int64)KeGetCurrentThread();
      ExReleaseAutoExpandPushLockExclusive(*(_QWORD *)(a7[4] + 32LL) + 56LL, 0LL);
      KiLeaveGuardedRegionUnsafe(v7);
    }
    if ( (_BYTE)v50 != 1 )
      break;
    v10 = v53;
    LOBYTE(v7) = 2;
    v11 = a2;
    v8 = a6;
  }
}
