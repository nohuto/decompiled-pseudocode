/*
 * XREFs of MiDeletePagablePteRange @ 0x1403420B0
 * Callers:
 *     MiDeleteVad @ 0x1402C08F0 (MiDeleteVad.c)
 *     MiDeleteVirtualAddresses @ 0x1403092D0 (MiDeleteVirtualAddresses.c)
 *     MiDeleteSessionAddressSpace @ 0x14038973C (MiDeleteSessionAddressSpace.c)
 *     MiDeleteSessionPdes @ 0x14038CC18 (MiDeleteSessionPdes.c)
 *     MiDeleteVadBitmap @ 0x14067C9A4 (MiDeleteVadBitmap.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14021F710 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14021FB50 (ExAcquireAutoExpandPushLockExclusive.c)
 *     MiWalkPageTables @ 0x1402ADBC0 (MiWalkPageTables.c)
 *     MiFastLockLeafPageTable @ 0x1402B2FD0 (MiFastLockLeafPageTable.c)
 *     MiCheckProcessShadow @ 0x1402B4180 (MiCheckProcessShadow.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockShared @ 0x1402C1680 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiGetUsedPtesHandle @ 0x1403177B0 (MiGetUsedPtesHandle.c)
 *     MiTbFlushType @ 0x140341F58 (MiTbFlushType.c)
 *     MiDeleteVa @ 0x1403427D0 (MiDeleteVa.c)
 *     MiDeleteVaTail @ 0x140345880 (MiDeleteVaTail.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     MiPreUnlockWorkingSetShared @ 0x14036C3C0 (MiPreUnlockWorkingSetShared.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreePhysicalPageChain @ 0x14054BE28 (MiFreePhysicalPageChain.c)
 *     MiFreeLargePages @ 0x14055E6D8 (MiFreeLargePages.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1405B5FEC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
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
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // eax
  unsigned __int64 v35; // r15
  unsigned __int64 i; // rdi
  __int64 v37; // rax
  bool v38; // zf
  char v39; // al
  int v40; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v42; // rdx
  int v43; // eax
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r10
  _DWORD *v46; // r9
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // rcx
  int v51; // [rsp+24h] [rbp-DCh]
  __int64 v53; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v54; // [rsp+50h] [rbp-B0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v56; // [rsp+78h] [rbp-88h]
  unsigned __int64 v57; // [rsp+80h] [rbp-80h]
  unsigned __int64 v58; // [rsp+88h] [rbp-78h]
  __int64 v59; // [rsp+90h] [rbp-70h]
  __int128 v60; // [rsp+A0h] [rbp-60h] BYREF
  int *v61; // [rsp+B0h] [rbp-50h]
  __int64 v62; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v63; // [rsp+C0h] [rbp-40h]
  __int64 v64; // [rsp+C8h] [rbp-38h]
  __int128 v65; // [rsp+D0h] [rbp-30h]
  __int128 v66; // [rsp+E0h] [rbp-20h]
  __int128 v67; // [rsp+F0h] [rbp-10h]
  __int128 v68; // [rsp+100h] [rbp+0h]
  __int128 v69; // [rsp+110h] [rbp+10h]
  __int128 v70; // [rsp+120h] [rbp+20h]
  __int64 v71; // [rsp+130h] [rbp+30h]
  __int64 (__fastcall *v72)(_QWORD, _QWORD, _QWORD); // [rsp+138h] [rbp+38h]
  __int64 (__fastcall *v73)(_QWORD); // [rsp+140h] [rbp+40h]
  _OWORD *v74; // [rsp+148h] [rbp+48h]
  _OWORD v75[6]; // [rsp+150h] [rbp+50h] BYREF
  __int128 v76; // [rsp+1B0h] [rbp+B0h]
  __int128 v77; // [rsp+1C0h] [rbp+C0h]
  __int128 v78; // [rsp+1D0h] [rbp+D0h]
  __int64 v79; // [rsp+1E0h] [rbp+E0h]
  int v80; // [rsp+1F0h] [rbp+F0h] BYREF
  __int16 v81; // [rsp+1F4h] [rbp+F4h]
  __int16 v82; // [rsp+1F6h] [rbp+F6h]
  __int64 v83; // [rsp+1F8h] [rbp+F8h]
  __int64 v84; // [rsp+200h] [rbp+100h]
  __int64 v85; // [rsp+208h] [rbp+108h]
  __int128 v86; // [rsp+210h] [rbp+110h]
  __int128 v87; // [rsp+220h] [rbp+120h]
  __int128 v88; // [rsp+230h] [rbp+130h]
  __int128 v89; // [rsp+240h] [rbp+140h]
  __int128 v90; // [rsp+250h] [rbp+150h]
  __int128 v91; // [rsp+260h] [rbp+160h]
  __int128 v92; // [rsp+270h] [rbp+170h]
  __int128 v93; // [rsp+280h] [rbp+180h]
  __int128 v94; // [rsp+290h] [rbp+190h]
  __int64 v95; // [rsp+2A0h] [rbp+1A0h]
  void *retaddr; // [rsp+308h] [rbp+208h]
  char v97; // [rsp+330h] [rbp+230h]

  v8 = a6;
  v54 = a3;
  v82 = 0;
  v10 = a3;
  v95 = 0LL;
  v11 = a2;
  v97 = 4 * (a5 & 7);
  LOBYTE(v7) = 0;
  v86 = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  v89 = 0LL;
  v90 = 0LL;
  v91 = 0LL;
  v92 = 0LL;
  v93 = 0LL;
  v94 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  while ( 1 )
  {
    v51 = v7;
    CurrentIrql = v11;
    v79 = 2LL;
    v13 = 0;
    v71 = 0LL;
    v76 = 0LL;
    v75[1] = (unsigned __int64)a7;
    v75[0] = 0LL;
    DWORD2(v76) = v8;
    memset(&v75[2], 0, 64);
    v77 = 0LL;
    v78 = 0LL;
    v60 = 0LL;
    v65 = 0LL;
    v66 = 0LL;
    v67 = 0LL;
    v68 = 0LL;
    v69 = 0LL;
    v70 = 0LL;
    v80 = MiTbFlushType(a1);
    v61 = &v80;
    v19 = BYTE12(v76);
    v81 = 0;
    v84 = 0LL;
    v85 = 0LL;
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      v19 = 1;
    BYTE12(v76) = v19;
    v83 = 20LL;
    BYTE2(v60) = v97 | _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 2)) & 0xE3;
    v74 = v75;
    v20 = 39;
    LOWORD(v60) = 39;
    if ( v15 )
    {
      v20 = 1059;
      LOWORD(v60) = 1059;
    }
    if ( v14 )
    {
      v20 |= 0x800u;
      LOWORD(v60) = v20;
    }
    v21 = BYTE5(v60);
    v63 = v10;
    if ( v18 )
      v21 = 63;
    v64 = v16;
    BYTE5(v60) = v21;
    v22 = 0;
    v62 = a1;
    v72 = MiDeleteVa;
    v73 = MiDeleteVaTail;
    if ( v17 )
    {
      v23 = *(_QWORD *)(a7[4] + 32LL);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquireAutoExpandPushLockExclusive(v23 + 56, 0LL);
      v20 = v60;
    }
    if ( a2 != 17 )
    {
      v22 = 1;
      v25 = v20 & 0xFFFD;
      LOWORD(v60) = v25;
      goto LABEL_27;
    }
    if ( (v60 & 4) != 0 )
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
      v28 = &dword_140C4F7C0;
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
    LODWORD(v7) = v51;
    CurrentIrql = v29;
LABEL_26:
    v25 = v60;
LABEL_27:
    BYTE6(v60) = CurrentIrql;
    if ( (a6 & 0x100) != 0 )
    {
      if ( (a6 & 0x200) == 0 )
        v25 = v25 & 0xEFFB | 0x1000;
      LOWORD(v60) = v25 & 0xFFFD;
      v31 = MiGetSharedVm(a1);
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v31 + 16);
      KxAcquireQueuedSpinLock(&LockHandle, v31 + 16, v32, v33);
    }
    if ( (a6 & 0x80) == 0 )
      goto LABEL_42;
    if ( (_BYTE)v7 )
      goto LABEL_42;
    if ( ((a4 ^ v10) & 0xFFFFFFE00000LL) != 0 )
      goto LABEL_42;
    v34 = MiFastLockLeafPageTable(a1, v10, 0);
    if ( !v34 )
      goto LABEL_42;
    v7 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v56 = v7;
    v57 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v58 = ((v57 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v59 = ((v58 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v35 = *(&v56 + v34);
    if ( v34 == 1 )
    {
      for ( i = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL; v7 <= i; v7 += 8 * v37 )
      {
        MiDeleteVa(&v60, v7, 0LL);
        v37 = (unsigned int)BYTE3(v60) + 1;
        BYTE3(v60) = 0;
      }
      MiDeleteVaTail(&v60);
      v38 = (*(_DWORD *)(MiGetUsedPtesHandle(v54) + 16) & 0x3FF0000) == 0;
      v39 = v51;
      if ( v38 )
        v39 = 1;
      v13 = 1;
      LOBYTE(v51) = v39;
    }
    MiUnlockPageTableInternal(a1, v35);
    if ( !v13 )
LABEL_42:
      MiWalkPageTables((__int64)&v60);
    if ( (a6 & 0x100) != 0 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( (a6 & 0x200) == 0 )
        LOWORD(v60) = v60 | 4;
    }
    if ( !v22 )
    {
      if ( (v60 & 4) != 0 )
      {
        if ( (*(_BYTE *)(a1 + 184) & 7u) < 6 )
        {
          v40 = *(_DWORD *)(a1 + 184);
          if ( (v40 & 0x8000000) != 0 || (v40 & 0x4000000) != 0 || (v40 & 0x10000000) != 0 )
          {
            MiPreUnlockWorkingSetShared(a1, CurrentIrql);
            LOBYTE(v40) = *(_BYTE *)(a1 + 184);
          }
          v7 = (unsigned __int64)&dword_140C4F7C0;
          if ( (v40 & 7) != 2 )
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
          v42 = CurrentPrcb->SchedulerAssist;
          if ( v42 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v43 = v42[6] - 1;
              v42[6] = v43;
              if ( !v43 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v44 = KeGetCurrentIrql();
            if ( v44 <= 0xFu && CurrentIrql <= 0xFu && v44 >= 2u )
            {
              v45 = KeGetCurrentPrcb();
              v46 = v45->SchedulerAssist;
              v47 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v38 = (v47 & v46[5]) == 0;
              v46[5] &= v47;
              if ( v38 )
                KiRemoveSystemWorkPriorityKick(v45);
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
    v48 = a7[5];
    if ( v48 < 0 )
    {
      v53 = 0LL;
      a7[1] = MiFreeLargePages(v48, &v53);
      a7[5] = v53;
    }
    v49 = a7[4];
    if ( v49 && (_QWORD)v77 )
      MiFreePhysicalPageChain(v49, v77, 1LL);
    if ( (a6 & 0x10) != 0 )
    {
      v7 = (unsigned __int64)KeGetCurrentThread();
      ExReleaseAutoExpandPushLockExclusive(*(_QWORD *)(a7[4] + 32LL) + 56LL, 0LL);
      KiLeaveGuardedRegionUnsafe(v7);
    }
    if ( (_BYTE)v51 != 1 )
      break;
    v10 = v54;
    LOBYTE(v7) = 2;
    v11 = a2;
    v8 = a6;
  }
}
