/*
 * XREFs of MmSetAddressRangeModifiedEx @ 0x1402BBFB0
 * Callers:
 *     CcFlushCachePriv @ 0x14022C120 (CcFlushCachePriv.c)
 *     CcZeroDataInCache @ 0x1402C0B3C (CcZeroDataInCache.c)
 *     CcPurgeAndClearCacheSection @ 0x1402CDFA8 (CcPurgeAndClearCacheSection.c)
 *     MmSetAddressRangeModified @ 0x14031A8F0 (MmSetAddressRangeModified.c)
 *     CcUnpinRepinnedBcb @ 0x1404E5090 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiMakeProtectionMask @ 0x14021A3B0 (MiMakeProtectionMask.c)
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiCaptureDirtyBitToPfn @ 0x140223BF0 (MiCaptureDirtyBitToPfn.c)
 *     MiGetSystemCacheReverseMap @ 0x14022B3C0 (MiGetSystemCacheReverseMap.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x1402BBEA4 (MI_TIGHTER_PERMISSIONS.c)
 *     MiWriteValidPteNewProtection @ 0x1402BC370 (MiWriteValidPteNewProtection.c)
 *     MiLockWorkingSetOptimal @ 0x1402BC3DC (MiLockWorkingSetOptimal.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 __fastcall MmSetAddressRangeModifiedEx(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // r13
  int v4; // edi
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // r15
  __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 Flink; // rdx
  _KPROCESS *Process; // rcx
  BOOL v16; // r8d
  __int64 v17; // rdi
  unsigned __int64 v18; // r12
  struct _LIST_ENTRY *v19; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 v21; // rbp
  unsigned __int8 CurrentIrql; // r12
  bool v23; // zf
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int8 v29; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v31; // r9
  int v32; // eax
  __int64 v33; // rcx
  struct _LIST_ENTRY *v34; // rdx
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rbx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rdx
  unsigned __int8 v40; // [rsp+20h] [rbp-138h]
  unsigned __int8 v41[3]; // [rsp+21h] [rbp-137h] BYREF
  BOOL v42; // [rsp+24h] [rbp-134h]
  __int64 v43; // [rsp+28h] [rbp-130h] BYREF
  int v44; // [rsp+30h] [rbp-128h] BYREF
  int ProtectionMask; // [rsp+34h] [rbp-124h]
  int v46; // [rsp+38h] [rbp-120h]
  __int64 v47; // [rsp+40h] [rbp-118h]
  __int64 v48; // [rsp+48h] [rbp-110h]
  __int64 v49; // [rsp+50h] [rbp-108h]
  int v50; // [rsp+60h] [rbp-F8h] BYREF
  __int16 v51; // [rsp+64h] [rbp-F4h]
  __int16 v52; // [rsp+66h] [rbp-F2h]
  __int64 v53; // [rsp+68h] [rbp-F0h]
  __int64 v54; // [rsp+70h] [rbp-E8h]
  __int64 v55; // [rsp+78h] [rbp-E0h]
  _BYTE v56[152]; // [rsp+80h] [rbp-D8h] BYREF

  v2 = a2 - 1;
  v41[0] = 0;
  v52 = 0;
  memset(v56, 0, sizeof(v56));
  v40 = 0;
  ProtectionMask = MiMakeProtectionMask(4u);
  v53 = 20LL;
  v4 = ProtectionMask;
  v50 = 0;
  v51 = 0;
  v54 = 0LL;
  v55 = 0LL;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = (((a1 + v2) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v8 = 0LL;
  v48 = MiLockWorkingSetOptimal(&unk_140C528C0, v5, v41);
  v9 = *(_QWORD *)(MiGetSystemCacheReverseMap(v7) + 24);
  v10 = v9 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v9 & 1) == 0 )
    v10 = v9;
  v11 = *(_QWORD *)(qword_140C4E588 + 8LL * (*(_WORD *)(*(_QWORD *)v10 + 60LL) & 0x3FF));
  v12 = v5;
  v49 = v11 + 7232;
  do
  {
    v13 = *(_QWORD *)v5;
    v16 = MiPteInShadowRange(v12);
    if ( v16 )
    {
      if ( (MiFlags & 0xC00000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 && (v13 & 1) != 0 && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          Flink = (__int64)Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v28 = *(_QWORD *)(Flink + 8 * ((v5 >> 3) & 0x1FF));
            Flink = v13 | 0x20;
            Process = (_KPROCESS *)(unsigned __int8)v28;
            LOBYTE(Process) = v28 & 0x20;
            if ( (v28 & 0x20) == 0 )
              Flink = v13;
            v13 = Flink;
            if ( (v28 & 0x42) != 0 )
              v13 = Flink | 0x42;
          }
        }
      }
    }
    v43 = v13;
    if ( (v13 & 1) != 0 )
    {
      v46 = 0;
      v17 = 0LL;
      v18 = v13;
      v42 = MiPteInShadowRange((unsigned __int64)&v43);
      Flink = v42;
      if ( v42
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
      {
        v19 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v19 )
        {
          v18 = v13 | 0x20;
          v27 = *((_QWORD *)&v19->Flink + (((unsigned __int64)&v43 >> 3) & 0x1FF));
          if ( (v27 & 0x20) == 0 )
            v18 = v13;
          if ( (v27 & 0x42) != 0 )
            v18 |= 0x42uLL;
        }
      }
      v21 = 48 * ((v18 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v19 = (struct _LIST_ENTRY *)((unsigned int)(-1LL << (CurrentIrql + 1)) & 4 | SchedulerAssist[5]);
        Flink = v42;
        SchedulerAssist[5] = (_DWORD)v19;
      }
      v44 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v44, Flink, (__int64)v19, (__int64)SchedulerAssist);
          while ( *(__int64 *)(v21 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) );
        Flink = v42;
      }
      v23 = (*(_BYTE *)(v21 + 34) & 0x10) == 0;
      v24 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v21 + 40) >> 39) & 0x3FFLL));
      v47 = v24;
      if ( v23 || (*(_DWORD *)(v21 + 16) & 0x400LL) == 0 )
      {
        v25 = MiCaptureDirtyBitToPfn(v21);
        Flink = v42;
        v17 = v25;
        v24 = v47;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v29 = KeGetCurrentIrql();
          if ( v29 <= 0xFu && CurrentIrql <= 0xFu && v29 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v31 = CurrentPrcb->SchedulerAssist;
            v32 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v23 = (v32 & v31[5]) == 0;
            v31[5] &= v32;
            if ( v23 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v24 = v47;
            Flink = v42;
          }
        }
      }
      __writecr8(CurrentIrql);
      if ( v17 )
      {
        MiReleasePageFileInfo(v24, v17, 0LL);
        Flink = v42;
      }
      v4 = ProtectionMask;
      if ( ProtectionMask != 2 || (v13 & 0x800) == 0 )
      {
        if ( (v13 & 0x42) == 0 )
          goto LABEL_18;
        MiWriteValidPteNewProtection(v5, v13 & 0xFFFFFFFFFFFFFFBDuLL);
        v40 = 1;
LABEL_17:
        MiInsertTbFlushEntry((__int64)&v50, v7, 1LL, 0);
        goto LABEL_18;
      }
      v33 = v13;
      if ( (_DWORD)Flink
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
      {
        v34 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        v33 = v13;
        if ( v34 )
        {
          v33 = v13 | 0x20;
          v35 = *((_QWORD *)&v34->Flink + (((unsigned __int64)&v43 >> 3) & 0x1FF));
          if ( (v35 & 0x20) == 0 )
            v33 = v13;
          if ( (v35 & 0x42) != 0 )
            v33 |= 0x42uLL;
        }
      }
      v8 ^= (v8 ^ v33) & 0xFFFFFFFFF000LL;
      MiWriteValidPteNewProtection(v5, v8);
      if ( ((MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0) && !MI_TIGHTER_PERMISSIONS(v13, v8) )
        v36 = v46;
      else
        v36 = 1;
      if ( (v13 & 0x42) != 0 )
        v40 = 1;
      if ( v36 )
        goto LABEL_17;
    }
    else if ( v4 == 2 && (v13 & 8) == 0 )
    {
      v37 = v13 | 8;
      v43 = v37;
      v38 = v37;
      if ( !v16 )
        goto LABEL_87;
      if ( !(unsigned int)MiPteHasShadow(Process, Flink) )
      {
        v38 = v37;
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v37 & 1) != 0 )
        {
          v38 = v37 | 0x8000000000000000uLL;
        }
LABEL_87:
        *(_QWORD *)v5 = v38;
        goto LABEL_18;
      }
      v39 = v37;
      if ( !HIBYTE(word_140C4DF48) && (v37 & 1) != 0 )
        v39 = v37 | 0x8000000000000000uLL;
      *(_QWORD *)v5 = v39;
      MiWritePteShadow(v5, v39);
    }
LABEL_18:
    v5 += 8LL;
    v7 += 4096LL;
    v12 = v5;
  }
  while ( v5 <= v6 );
  MiFlushTbList((__int64)&v50, (_KPROCESS *)Flink);
  MiUnlockPageTableInternal(v49, v48);
  MiUnlockWorkingSetShared(v49, v41[0]);
  return v40;
}
