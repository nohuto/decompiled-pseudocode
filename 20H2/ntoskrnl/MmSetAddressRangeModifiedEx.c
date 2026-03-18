/*
 * XREFs of MmSetAddressRangeModifiedEx @ 0x14029ECE0
 * Callers:
 *     CcZeroDataInCache @ 0x140240E98 (CcZeroDataInCache.c)
 *     CcFlushCachePriv @ 0x140296300 (CcFlushCachePriv.c)
 *     CcPurgeAndClearCacheSection @ 0x140316714 (CcPurgeAndClearCacheSection.c)
 *     MmSetAddressRangeModified @ 0x140328AB0 (MmSetAddressRangeModified.c)
 *     CcUnpinRepinnedBcb @ 0x1404E8BD0 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x1402528DC (MI_TIGHTER_PERMISSIONS.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiMakeProtectionMask @ 0x14027C200 (MiMakeProtectionMask.c)
 *     MiGetSystemCacheReverseMap @ 0x140299590 (MiGetSystemCacheReverseMap.c)
 *     MiLockWorkingSetOptimal @ 0x14029C0FC (MiLockWorkingSetOptimal.c)
 *     MiWriteValidPteNewProtection @ 0x14029F0A0 (MiWriteValidPteNewProtection.c)
 *     MiCaptureDirtyBitToPfn @ 0x14029F1B0 (MiCaptureDirtyBitToPfn.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140411300 (memset.c)
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
  BOOL v14; // eax
  __int64 Flink; // rdx
  _KPROCESS *Process; // rcx
  __int64 v17; // r9
  _BOOL8 v18; // r8
  __int64 v19; // rdi
  unsigned __int64 v20; // r12
  __int64 v21; // rbp
  unsigned __int8 CurrentIrql; // r12
  bool v23; // zf
  __int64 v24; // rcx
  __int64 v25; // rax
  struct _LIST_ENTRY *v27; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v31; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v33; // r9
  int v34; // eax
  __int64 v35; // rcx
  struct _LIST_ENTRY *v36; // rdx
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rbx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rdx
  unsigned __int8 v42; // [rsp+20h] [rbp-138h]
  unsigned __int8 v43[3]; // [rsp+21h] [rbp-137h] BYREF
  BOOL v44; // [rsp+24h] [rbp-134h]
  __int64 v45; // [rsp+28h] [rbp-130h] BYREF
  int v46; // [rsp+30h] [rbp-128h] BYREF
  int ProtectionMask; // [rsp+34h] [rbp-124h]
  int v48; // [rsp+38h] [rbp-120h]
  __int64 v49; // [rsp+40h] [rbp-118h]
  unsigned __int64 v50; // [rsp+48h] [rbp-110h]
  __int64 v51; // [rsp+50h] [rbp-108h]
  int v52; // [rsp+60h] [rbp-F8h] BYREF
  __int16 v53; // [rsp+64h] [rbp-F4h]
  __int16 v54; // [rsp+66h] [rbp-F2h]
  __int64 v55; // [rsp+68h] [rbp-F0h]
  __int64 v56; // [rsp+70h] [rbp-E8h]
  __int64 v57; // [rsp+78h] [rbp-E0h]
  _BYTE v58[152]; // [rsp+80h] [rbp-D8h] BYREF

  v2 = a2 - 1;
  v43[0] = 0;
  v54 = 0;
  memset(v58, 0, sizeof(v58));
  v42 = 0;
  ProtectionMask = MiMakeProtectionMask(4u);
  v55 = 20LL;
  v4 = ProtectionMask;
  v52 = 0;
  v53 = 0;
  v56 = 0LL;
  v57 = 0LL;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = (((a1 + v2) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v8 = 0LL;
  v50 = MiLockWorkingSetOptimal((__int64)&unk_140C52840, v5, v43);
  v9 = *(_QWORD *)(MiGetSystemCacheReverseMap(v7) + 24);
  v10 = v9 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v9 & 1) == 0 )
    v10 = v9;
  v11 = *(_QWORD *)(qword_140C4E4C8 + 8LL * (*(_WORD *)(*(_QWORD *)v10 + 60LL) & 0x3FF));
  v12 = v5;
  v51 = v11 + 7232;
  do
  {
    v13 = *(_QWORD *)v5;
    v14 = MiPteInShadowRange(v12);
    v18 = v14;
    if ( v14 )
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
            v29 = *(_QWORD *)(Flink + 8 * ((v5 >> 3) & 0x1FF));
            Flink = v13 | 0x20;
            Process = (_KPROCESS *)(unsigned __int8)v29;
            LOBYTE(Process) = v29 & 0x20;
            if ( (v29 & 0x20) == 0 )
              Flink = v13;
            v13 = Flink;
            if ( (v29 & 0x42) != 0 )
              v13 = Flink | 0x42;
          }
        }
      }
    }
    v45 = v13;
    if ( (v13 & 1) != 0 )
    {
      v48 = 0;
      v19 = 0LL;
      v20 = v13;
      v44 = MiPteInShadowRange((unsigned __int64)&v45);
      Flink = v44;
      if ( v44
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
      {
        v27 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v27 )
        {
          v20 = v13 | 0x20;
          v28 = *((_QWORD *)&v27->Flink + (((unsigned __int64)&v45 >> 3) & 0x1FF));
          if ( (v28 & 0x20) == 0 )
            v20 = v13;
          if ( (v28 & 0x42) != 0 )
            v20 |= 0x42uLL;
        }
      }
      v21 = 48 * ((v20 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        Flink = v44;
        SchedulerAssist[5] |= (-1LL << (CurrentIrql + 1)) & 4;
      }
      v46 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v46);
          while ( *(__int64 *)(v21 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) );
        Flink = v44;
      }
      v23 = (*(_BYTE *)(v21 + 34) & 0x10) == 0;
      v24 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v21 + 40) >> 39) & 0x3FFLL));
      v49 = v24;
      if ( v23 || (*(_DWORD *)(v21 + 16) & 0x400LL) == 0 )
      {
        v25 = MiCaptureDirtyBitToPfn(v21);
        Flink = v44;
        v19 = v25;
        v24 = v49;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v31 = KeGetCurrentIrql();
          if ( v31 <= 0xFu && CurrentIrql <= 0xFu && v31 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v33 = CurrentPrcb->SchedulerAssist;
            v34 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v23 = (v34 & v33[5]) == 0;
            v33[5] &= v34;
            if ( v23 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v24 = v49;
            Flink = v44;
          }
        }
      }
      __writecr8(CurrentIrql);
      if ( v19 )
      {
        MiReleasePageFileInfo(v24, v19, 0LL);
        Flink = v44;
      }
      v4 = ProtectionMask;
      if ( ProtectionMask != 2 || (v13 & 0x800) == 0 )
      {
        if ( (v13 & 0x42) == 0 )
          goto LABEL_18;
        MiWriteValidPteNewProtection(v5, v13 & 0xFFFFFFFFFFFFFFBDuLL);
        v42 = 1;
LABEL_17:
        MiInsertTbFlushEntry(&v52, v7, 1LL, 0LL);
        goto LABEL_18;
      }
      v35 = v13;
      if ( (_DWORD)Flink
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
      {
        v36 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        v35 = v13;
        if ( v36 )
        {
          v35 = v13 | 0x20;
          v37 = *((_QWORD *)&v36->Flink + (((unsigned __int64)&v45 >> 3) & 0x1FF));
          if ( (v37 & 0x20) == 0 )
            v35 = v13;
          if ( (v37 & 0x42) != 0 )
            v35 |= 0x42uLL;
        }
      }
      v8 ^= (v8 ^ v35) & 0xFFFFFFFFF000LL;
      MiWriteValidPteNewProtection(v5, v8);
      if ( ((MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0) && !MI_TIGHTER_PERMISSIONS(v13, v8) )
        v38 = v48;
      else
        v38 = 1;
      if ( (v13 & 0x42) != 0 )
        v42 = 1;
      if ( v38 )
        goto LABEL_17;
    }
    else if ( v4 == 2 && (v13 & 8) == 0 )
    {
      v39 = v13 | 8;
      v45 = v39;
      v40 = v39;
      if ( !v18 )
        goto LABEL_87;
      if ( !(unsigned int)MiPteHasShadow(Process, Flink, v18, v17) )
      {
        v40 = v39;
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v39 & 1) != 0 )
        {
          v40 = v39 | 0x8000000000000000uLL;
        }
LABEL_87:
        *(_QWORD *)v5 = v40;
        goto LABEL_18;
      }
      v41 = v39;
      if ( !HIBYTE(word_140C4DE88) && (v39 & 1) != 0 )
        v41 = v39 | 0x8000000000000000uLL;
      *(_QWORD *)v5 = v41;
      MiWritePteShadow(v5, v41);
    }
LABEL_18:
    v5 += 8LL;
    v7 += 4096LL;
    v12 = v5;
  }
  while ( v5 <= v6 );
  MiFlushTbList(&v52, Flink);
  MiUnlockPageTableInternal(v51);
  MiUnlockWorkingSetShared(v51, v43[0]);
  return v42;
}
