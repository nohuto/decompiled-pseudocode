/*
 * XREFs of MiDeletePagablePteRange @ 0x14029B4A0
 * Callers:
 *     MiDeleteVad @ 0x14026B790 (MiDeleteVad.c)
 *     MiDeleteVirtualAddresses @ 0x1402AB020 (MiDeleteVirtualAddresses.c)
 *     MiDeleteSessionAddressSpace @ 0x140385D7C (MiDeleteSessionAddressSpace.c)
 *     MiDeleteSessionPdes @ 0x140389064 (MiDeleteSessionPdes.c)
 *     MiDeleteVadBitmap @ 0x140662AF8 (MiDeleteVadBitmap.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x140208000 (KxAcquireQueuedSpinLock.c)
 *     MiFastLockLeafPageTable @ 0x14020DBA0 (MiFastLockLeafPageTable.c)
 *     MiCheckProcessShadow @ 0x14020ED50 (MiCheckProcessShadow.c)
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     MiWalkPageTables @ 0x14025DB00 (MiWalkPageTables.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x14026C350 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockShared @ 0x1402814C0 (ExAcquireSpinLockShared.c)
 *     MiDeleteVaTail @ 0x14029AD00 (MiDeleteVaTail.c)
 *     MiDeleteVa @ 0x14029BBC0 (MiDeleteVa.c)
 *     MiTbFlushType @ 0x14029ED94 (MiTbFlushType.c)
 *     MiGetUsedPtesHandle @ 0x14029EEF0 (MiGetUsedPtesHandle.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1402F5090 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402F6030 (ExAcquireAutoExpandPushLockExclusive.c)
 *     MiPreUnlockWorkingSetShared @ 0x14030C55C (MiPreUnlockWorkingSetShared.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreePhysicalPageChain @ 0x1405460C8 (MiFreePhysicalPageChain.c)
 *     MiFreeLargePages @ 0x1405589A8 (MiFreeLargePages.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1405B0124 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
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
  char v22; // r12
  __int64 v23; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int16 v25; // ax
  unsigned __int8 v26; // al
  _DWORD *SchedulerAssist; // r9
  LONG *v28; // rbx
  KIRQL v29; // al
  LONG *SharedVm; // rbx
  LONG *v31; // rax
  int v32; // eax
  __int64 v33; // r15
  unsigned __int64 i; // rdi
  __int64 v35; // rax
  bool v36; // zf
  char v37; // al
  int v38; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v40; // rdx
  int v41; // eax
  unsigned __int8 v42; // al
  struct _KPRCB *v43; // r10
  _DWORD *v44; // r9
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  int v52; // [rsp+24h] [rbp-DCh]
  __int64 v54; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v55; // [rsp+50h] [rbp-B0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v57; // [rsp+78h] [rbp-88h]
  unsigned __int64 v58; // [rsp+80h] [rbp-80h]
  unsigned __int64 v59; // [rsp+88h] [rbp-78h]
  __int64 v60; // [rsp+90h] [rbp-70h]
  __int128 v61; // [rsp+A0h] [rbp-60h] BYREF
  int *v62; // [rsp+B0h] [rbp-50h]
  __int64 v63; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v64; // [rsp+C0h] [rbp-40h]
  __int64 v65; // [rsp+C8h] [rbp-38h]
  __int128 v66; // [rsp+D0h] [rbp-30h]
  __int128 v67; // [rsp+E0h] [rbp-20h]
  __int128 v68; // [rsp+F0h] [rbp-10h]
  __int128 v69; // [rsp+100h] [rbp+0h]
  __int128 v70; // [rsp+110h] [rbp+10h]
  __int128 v71; // [rsp+120h] [rbp+20h]
  __int64 v72; // [rsp+130h] [rbp+30h]
  __int64 (__fastcall *v73)(_QWORD, _QWORD, _QWORD); // [rsp+138h] [rbp+38h]
  __int64 (__fastcall *v74)(__int64 *); // [rsp+140h] [rbp+40h]
  _OWORD *v75; // [rsp+148h] [rbp+48h]
  _OWORD v76[6]; // [rsp+150h] [rbp+50h] BYREF
  __int128 v77; // [rsp+1B0h] [rbp+B0h]
  __int128 v78; // [rsp+1C0h] [rbp+C0h]
  __int128 v79; // [rsp+1D0h] [rbp+D0h]
  __int64 v80; // [rsp+1E0h] [rbp+E0h]
  int v81; // [rsp+1F0h] [rbp+F0h] BYREF
  __int16 v82; // [rsp+1F4h] [rbp+F4h]
  __int16 v83; // [rsp+1F6h] [rbp+F6h]
  __int64 v84; // [rsp+1F8h] [rbp+F8h]
  __int64 v85; // [rsp+200h] [rbp+100h]
  __int64 v86; // [rsp+208h] [rbp+108h]
  __int128 v87; // [rsp+210h] [rbp+110h]
  __int128 v88; // [rsp+220h] [rbp+120h]
  __int128 v89; // [rsp+230h] [rbp+130h]
  __int128 v90; // [rsp+240h] [rbp+140h]
  __int128 v91; // [rsp+250h] [rbp+150h]
  __int128 v92; // [rsp+260h] [rbp+160h]
  __int128 v93; // [rsp+270h] [rbp+170h]
  __int128 v94; // [rsp+280h] [rbp+180h]
  __int128 v95; // [rsp+290h] [rbp+190h]
  __int64 v96; // [rsp+2A0h] [rbp+1A0h]
  void *retaddr; // [rsp+308h] [rbp+208h]
  char v98; // [rsp+330h] [rbp+230h]

  v8 = a6;
  v55 = a3;
  v83 = 0;
  v10 = a3;
  v96 = 0LL;
  v11 = a2;
  v98 = 4 * (a5 & 7);
  LOBYTE(v7) = 0;
  v87 = 0LL;
  v88 = 0LL;
  v89 = 0LL;
  v90 = 0LL;
  v91 = 0LL;
  v92 = 0LL;
  v93 = 0LL;
  v94 = 0LL;
  v95 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  while ( 1 )
  {
    v52 = v7;
    CurrentIrql = v11;
    v80 = 2LL;
    v13 = 0;
    v72 = 0LL;
    v77 = 0LL;
    v76[1] = (unsigned __int64)a7;
    v76[0] = 0LL;
    DWORD2(v77) = v8;
    memset(&v76[2], 0, 64);
    v78 = 0LL;
    v79 = 0LL;
    v61 = 0LL;
    v66 = 0LL;
    v67 = 0LL;
    v68 = 0LL;
    v69 = 0LL;
    v70 = 0LL;
    v71 = 0LL;
    v81 = MiTbFlushType(a1);
    v62 = &v81;
    v19 = BYTE12(v77);
    v82 = 0;
    v85 = 0LL;
    v86 = 0LL;
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      v19 = 1;
    BYTE12(v77) = v19;
    v84 = 20LL;
    BYTE2(v61) = v98 | _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 2)) & 0xE3;
    v75 = v76;
    v20 = 39;
    LOWORD(v61) = 39;
    if ( v15 )
    {
      v20 = 1059;
      LOWORD(v61) = 1059;
    }
    if ( v14 )
    {
      v20 |= 0x800u;
      LOWORD(v61) = v20;
    }
    v21 = BYTE5(v61);
    v64 = v10;
    if ( v18 )
      v21 = 63;
    v65 = v16;
    BYTE5(v61) = v21;
    v22 = 0;
    v63 = a1;
    v73 = MiDeleteVa;
    v74 = MiDeleteVaTail;
    if ( v17 )
    {
      v23 = *(_QWORD *)(a7[4] + 32LL);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquireAutoExpandPushLockExclusive(v23 + 56, 0LL);
      v20 = v61;
    }
    if ( a2 != 17 )
    {
      v22 = 1;
      v25 = v20 & 0xFFFD;
      LOWORD(v61) = v25;
      goto LABEL_27;
    }
    if ( (v61 & 4) != 0 )
    {
      v26 = *(_BYTE *)(a1 + 184) & 7;
      if ( v26 >= 6u )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
        }
        goto LABEL_26;
      }
      v28 = &dword_140C4F6C0;
      if ( v26 != 2 )
        v28 = (LONG *)(a1 + 192);
      v29 = ExAcquireSpinLockShared(v28);
      if ( v28[1] )
        _InterlockedExchange(v28 + 1, 0);
    }
    else
    {
      SharedVm = MiGetSharedVm(a1);
      v29 = ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
    }
    LODWORD(v7) = v52;
    CurrentIrql = v29;
LABEL_26:
    v25 = v61;
LABEL_27:
    BYTE6(v61) = CurrentIrql;
    if ( (a6 & 0x100) != 0 )
    {
      if ( (a6 & 0x200) == 0 )
        v25 = v25 & 0xEFFB | 0x1000;
      LOWORD(v61) = v25 & 0xFFFD;
      v31 = MiGetSharedVm(a1);
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v31 + 16);
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v31 + 8);
    }
    if ( (a6 & 0x80) == 0 )
      goto LABEL_42;
    if ( (_BYTE)v7 )
      goto LABEL_42;
    if ( ((a4 ^ v10) & 0xFFFFFFE00000LL) != 0 )
      goto LABEL_42;
    v32 = MiFastLockLeafPageTable(a1, v10, 0);
    if ( !v32 )
      goto LABEL_42;
    v7 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v57 = v7;
    v58 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v59 = ((v58 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v60 = ((v59 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v33 = *(&v57 + v32);
    if ( v32 == 1 )
    {
      for ( i = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL; v7 <= i; v7 += 8 * v35 )
      {
        MiDeleteVa(&v61, v7, 0LL);
        v35 = (unsigned int)BYTE3(v61) + 1;
        BYTE3(v61) = 0;
      }
      MiDeleteVaTail((__int64 *)&v61);
      v36 = (*(_DWORD *)(MiGetUsedPtesHandle(v55) + 16) & 0x3FF0000) == 0;
      v37 = v52;
      if ( v36 )
        v37 = 1;
      v13 = 1;
      LOBYTE(v52) = v37;
    }
    MiUnlockPageTableInternal(a1, v33);
    if ( !v13 )
LABEL_42:
      MiWalkPageTables((__int64)&v61);
    if ( (a6 & 0x100) != 0 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( (a6 & 0x200) == 0 )
        LOWORD(v61) = v61 | 4;
    }
    if ( !v22 )
    {
      if ( (v61 & 4) != 0 )
      {
        if ( (*(_BYTE *)(a1 + 184) & 7u) < 6 )
        {
          v38 = *(_DWORD *)(a1 + 184);
          if ( (v38 & 0x8000000) != 0 || (v38 & 0x4000000) != 0 || (v38 & 0x10000000) != 0 )
          {
            MiPreUnlockWorkingSetShared(a1, CurrentIrql);
            LOBYTE(v38) = *(_BYTE *)(a1 + 184);
          }
          v7 = (unsigned __int64)&dword_140C4F6C0;
          if ( (v38 & 7) != 2 )
            v7 = a1 + 192;
          MiCheckProcessShadow(a1, 1u);
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
          v40 = CurrentPrcb->SchedulerAssist;
          if ( v40 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v41 = v40[6] - 1;
              v40[6] = v41;
              if ( !v41 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v42 = KeGetCurrentIrql();
            if ( v42 <= 0xFu && CurrentIrql <= 0xFu && v42 >= 2u )
            {
              v43 = KeGetCurrentPrcb();
              v44 = v43->SchedulerAssist;
              v45 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v36 = (v45 & v44[5]) == 0;
              v44[5] &= v45;
              if ( v36 )
                KiRemoveSystemWorkPriorityKick(v43);
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
    v46 = a7[5];
    if ( v46 < 0 )
    {
      v54 = 0LL;
      a7[1] = MiFreeLargePages(v46, &v54);
      a7[5] = v54;
    }
    v47 = a7[4];
    if ( v47 && (_QWORD)v78 )
      MiFreePhysicalPageChain(v47, v78, 1LL);
    if ( (a6 & 0x10) != 0 )
    {
      v7 = (unsigned __int64)KeGetCurrentThread();
      ExReleaseAutoExpandPushLockExclusive(*(_QWORD *)(a7[4] + 32LL) + 56LL, 0LL);
      KiLeaveGuardedRegionUnsafe(v7, v48, v49, v50);
    }
    if ( (_BYTE)v52 != 1 )
      break;
    v10 = v55;
    LOBYTE(v7) = 2;
    v11 = a2;
    v8 = a6;
  }
}
