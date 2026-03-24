/*
 * XREFs of MmSetAddressRangeModifiedEx @ 0x14030F640
 * Callers:
 *     CcFlushCachePriv @ 0x14022CBA0 (CcFlushCachePriv.c)
 *     MmSetAddressRangeModified @ 0x1402C9E40 (MmSetAddressRangeModified.c)
 *     CcZeroDataInCache @ 0x1402E86F8 (CcZeroDataInCache.c)
 *     CcPurgeAndClearCacheSection @ 0x1402EF194 (CcPurgeAndClearCacheSection.c)
 *     CcUnpinRepinnedBcb @ 0x1404EA760 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiMakeProtectionMask @ 0x14021AA20 (MiMakeProtectionMask.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x1402E6EC4 (MI_TIGHTER_PERMISSIONS.c)
 *     MiWriteValidPteNewProtection @ 0x14030FA00 (MiWriteValidPteNewProtection.c)
 *     MiCaptureDirtyBitToPfn @ 0x14030FB10 (MiCaptureDirtyBitToPfn.c)
 *     MiLockWorkingSetOptimal @ 0x14030FC94 (MiLockWorkingSetOptimal.c)
 *     MiGetSystemCacheReverseMap @ 0x140311FB0 (MiGetSystemCacheReverseMap.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414200 (memset.c)
 */

__int64 __fastcall MmSetAddressRangeModifiedEx(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // r13
  int v4; // edi
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // r15
  __int64 v8; // rsi
  __int64 Flink; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rbx
  int v14; // r8d
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // r12
  struct _LIST_ENTRY *v17; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 v19; // rbp
  unsigned __int8 CurrentIrql; // r12
  bool v21; // zf
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int8 v27; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v29; // r9
  int v30; // eax
  __int64 v31; // rcx
  struct _LIST_ENTRY *v32; // rdx
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rbx
  unsigned __int64 v36; // rax
  __int64 v37; // r8
  unsigned __int64 v38; // rdx
  unsigned __int8 v39; // [rsp+20h] [rbp-138h]
  unsigned __int8 v40[3]; // [rsp+21h] [rbp-137h] BYREF
  unsigned int v41; // [rsp+24h] [rbp-134h]
  __int64 v42; // [rsp+28h] [rbp-130h] BYREF
  int v43; // [rsp+30h] [rbp-128h] BYREF
  int ProtectionMask; // [rsp+34h] [rbp-124h]
  int v45; // [rsp+38h] [rbp-120h]
  __int64 v46; // [rsp+40h] [rbp-118h]
  unsigned __int64 v47; // [rsp+48h] [rbp-110h]
  __int64 v48; // [rsp+50h] [rbp-108h]
  int v49; // [rsp+60h] [rbp-F8h] BYREF
  __int16 v50; // [rsp+64h] [rbp-F4h]
  __int16 v51; // [rsp+66h] [rbp-F2h]
  __int64 v52; // [rsp+68h] [rbp-F0h]
  __int64 v53; // [rsp+70h] [rbp-E8h]
  __int64 v54; // [rsp+78h] [rbp-E0h]
  _BYTE v55[152]; // [rsp+80h] [rbp-D8h] BYREF

  v2 = a2 - 1;
  v40[0] = 0;
  v51 = 0;
  memset(v55, 0, sizeof(v55));
  v39 = 0;
  ProtectionMask = MiMakeProtectionMask(4u);
  v52 = 20LL;
  v4 = ProtectionMask;
  v49 = 0;
  v50 = 0;
  v53 = 0LL;
  v54 = 0LL;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = (((a1 + v2) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v8 = 0LL;
  v47 = MiLockWorkingSetOptimal(&unk_140C529C0, v5, v40);
  Flink = *(_QWORD *)(MiGetSystemCacheReverseMap(v7) + 24);
  v10 = Flink & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (Flink & 1) == 0 )
    v10 = Flink;
  v11 = *(_QWORD *)(qword_140C4E648 + 8LL * (*(_WORD *)(*(_QWORD *)v10 + 60LL) & 0x3FF));
  v12 = v5;
  v48 = v11 + 7232;
  do
  {
    v13 = *(_QWORD *)v5;
    v14 = MiPteInShadowRange(v12, Flink);
    if ( v14
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v13 & 1) != 0
      && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
    {
      Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v26 = *(_QWORD *)(Flink + 8 * ((v5 >> 3) & 0x1FF));
        Flink = v13 | 0x20;
        if ( (v26 & 0x20) == 0 )
          Flink = v13;
        v13 = Flink;
        if ( (v26 & 0x42) != 0 )
          v13 = Flink | 0x42;
      }
    }
    v42 = v13;
    if ( (v13 & 1) != 0 )
    {
      v45 = 0;
      v15 = 0LL;
      v16 = v13;
      v41 = MiPteInShadowRange(&v42, Flink);
      Flink = v41;
      if ( v41
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
      {
        v17 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v17 )
        {
          v16 = v13 | 0x20;
          v25 = *((_QWORD *)&v17->Flink + (((unsigned __int64)&v42 >> 3) & 0x1FF));
          if ( (v25 & 0x20) == 0 )
            v16 = v13;
          if ( (v25 & 0x42) != 0 )
            v16 |= 0x42uLL;
        }
      }
      v19 = 48 * ((v16 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v17 = (struct _LIST_ENTRY *)((unsigned int)(-1LL << (CurrentIrql + 1)) & 4 | SchedulerAssist[5]);
        Flink = v41;
        SchedulerAssist[5] = (_DWORD)v17;
      }
      v43 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v43, Flink, (__int64)v17, (__int64)SchedulerAssist);
          while ( *(__int64 *)(v19 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) );
        Flink = v41;
      }
      v21 = (*(_BYTE *)(v19 + 34) & 0x10) == 0;
      v22 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v19 + 40) >> 39) & 0x3FFLL));
      v46 = v22;
      if ( v21 || (*(_DWORD *)(v19 + 16) & 0x400LL) == 0 )
      {
        v23 = MiCaptureDirtyBitToPfn(v19);
        Flink = v41;
        v15 = v23;
        v22 = v46;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v27 = KeGetCurrentIrql();
          if ( v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v29 = CurrentPrcb->SchedulerAssist;
            v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v21 = (v30 & v29[5]) == 0;
            v29[5] &= v30;
            if ( v21 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v22 = v46;
            Flink = v41;
          }
        }
      }
      __writecr8(CurrentIrql);
      if ( v15 )
      {
        MiReleasePageFileInfo(v22, v15, 0);
        Flink = v41;
      }
      v4 = ProtectionMask;
      if ( ProtectionMask != 2 || (v13 & 0x800) == 0 )
      {
        if ( (v13 & 0x42) == 0 )
          goto LABEL_18;
        MiWriteValidPteNewProtection(v5, v13 & 0xFFFFFFFFFFFFFFBDuLL);
        v39 = 1;
LABEL_17:
        MiInsertTbFlushEntry(&v49, v7, 1LL, 0LL);
        goto LABEL_18;
      }
      v31 = v13;
      if ( (_DWORD)Flink
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
      {
        v32 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        v31 = v13;
        if ( v32 )
        {
          v31 = v13 | 0x20;
          v33 = *((_QWORD *)&v32->Flink + (((unsigned __int64)&v42 >> 3) & 0x1FF));
          if ( (v33 & 0x20) == 0 )
            v31 = v13;
          if ( (v33 & 0x42) != 0 )
            v31 |= 0x42uLL;
        }
      }
      v8 ^= (v8 ^ v31) & 0xFFFFFFFFF000LL;
      MiWriteValidPteNewProtection(v5, v8);
      if ( ((MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0) && !MI_TIGHTER_PERMISSIONS(v13, v8) )
        v34 = v45;
      else
        v34 = 1;
      if ( (v13 & 0x42) != 0 )
        v39 = 1;
      if ( v34 )
        goto LABEL_17;
    }
    else if ( v4 == 2 && (v13 & 8) == 0 )
    {
      v35 = v13 | 8;
      v42 = v35;
      v36 = v35;
      if ( !v14 )
        goto LABEL_87;
      if ( !(unsigned int)MiPteHasShadow() )
      {
        v36 = v35;
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v35 & 1) != 0 )
        {
          v36 = v35 | 0x8000000000000000uLL;
        }
LABEL_87:
        *(_QWORD *)v5 = v36;
        goto LABEL_18;
      }
      v38 = v35;
      if ( !HIBYTE(word_140C4E008) && (v35 & 1) != 0 )
        v38 = v35 | 0x8000000000000000uLL;
      *(_QWORD *)v5 = v38;
      MiWritePteShadow(v5, v38, v37);
    }
LABEL_18:
    v5 += 8LL;
    v7 += 4096LL;
    v12 = v5;
  }
  while ( v5 <= v6 );
  MiFlushTbList(&v49);
  MiUnlockPageTableInternal(v48, v47);
  MiUnlockWorkingSetShared(v48, v40[0]);
  return v39;
}
