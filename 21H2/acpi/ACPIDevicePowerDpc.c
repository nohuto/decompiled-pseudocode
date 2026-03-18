/*
 * XREFs of ACPIDevicePowerDpc @ 0x1C000F880
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalMovePowerList @ 0x1C0002BA8 (ACPIInternalMovePowerList.c)
 *     ACPIDeviceCompleteRequest @ 0x1C000AA40 (ACPIDeviceCompleteRequest.c)
 *     ACPIDevicePowerProcessGenericPhase @ 0x1C000C598 (ACPIDevicePowerProcessGenericPhase.c)
 *     WPP_RECORDER_SF_qsLLdqss @ 0x1C000FE70 (WPP_RECORDER_SF_qsLLdqss.c)
 *     ACPIDevicePowerProcessPhase4 @ 0x1C0022A98 (ACPIDevicePowerProcessPhase4.c)
 *     ACPIDevicePowerProcessPhase3 @ 0x1C0022FAC (ACPIDevicePowerProcessPhase3.c)
 *     WPP_RECORDER_SF_ @ 0x1C00234AC (WPP_RECORDER_SF_.c)
 *     ACPIDeviceRecordDependencies @ 0x1C0025DD0 (ACPIDeviceRecordDependencies.c)
 *     ACPIIsPhase3ListEmptyOfUnblockedItems @ 0x1C002615C (ACPIIsPhase3ListEmptyOfUnblockedItems.c)
 *     ACPIDevicePowerProcessBlockedItems @ 0x1C002B950 (ACPIDevicePowerProcessBlockedItems.c)
 *     ACPIDeviceRecordBlockedOnPhase3List @ 0x1C002D73C (ACPIDeviceRecordBlockedOnPhase3List.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     ACPIMovePowerListUnblockedItems @ 0x1C00515FC (ACPIMovePowerListUnblockedItems.c)
 */

void __fastcall ACPIDevicePowerDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v4; // eax
  __int64 *v5; // rdx
  PVOID *v6; // rdi
  struct _SLIST_ENTRY *v7; // rcx
  char v8; // bp
  PVOID *v9; // rsi
  struct _SLIST_ENTRY *v10; // r14
  unsigned __int32 v11; // eax
  unsigned __int32 v12; // ebx
  __int64 v13; // rdx
  int v14; // edx
  char v15; // si
  __int64 v16; // r8
  void *v17; // r9
  __int64 v18; // rcx
  PVOID *p_Next; // rbx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  _SLIST_ENTRY *Next; // rcx
  struct _SLIST_ENTRY **v25; // rax
  struct _SLIST_ENTRY **v26; // rax
  __int64 i; // rcx
  PVOID Entry[2]; // [rsp+70h] [rbp-38h] BYREF

  Entry[1] = Entry;
  Entry[0] = Entry;
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
  v4 = AcpiPowerDpcFlags;
  v5 = &AcpiPowerPhase5List;
  if ( (AcpiPowerDpcFlags & 2) != 0 )
  {
    while ( 1 )
    {
      AcpiPowerDpcFlags = v4 & 0xFFFFFFFD;
      if ( (__int64 *)AcpiPowerQueueList != &AcpiPowerQueueList )
        ACPIInternalMovePowerList((_QWORD **)&AcpiPowerQueueList, (__int64)Entry);
      KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
      if ( (__int64 *)AcpiPowerPhase3List == &AcpiPowerPhase3List )
      {
        if ( (__int64 *)AcpiPowerBlockedOnPhase3List != &AcpiPowerBlockedOnPhase3List )
          ACPIInternalMovePowerList((_QWORD **)&AcpiPowerBlockedOnPhase3List, (__int64)Entry);
      }
      else
      {
        if ( Entry[0] == Entry )
          goto LABEL_9;
        ACPIDeviceRecordBlockedOnPhase3List(Entry);
      }
      if ( Entry[0] != Entry )
      {
        ACPIDeviceRecordDependencies(Entry);
        ACPIInternalMovePowerList((_QWORD **)Entry, (__int64)&AcpiPowerPhase0List);
      }
LABEL_9:
      if ( (__int64 *)AcpiPowerBlockedOnDependencyList != &AcpiPowerBlockedOnDependencyList )
        ACPIDevicePowerProcessBlockedItems();
      v6 = (PVOID *)AcpiPowerPhase0List;
      if ( AcpiPowerPhase0List != &AcpiPowerPhase0List )
      {
        v8 = 1;
        while ( 1 )
        {
          v9 = (PVOID *)*v6;
          v10 = (struct _SLIST_ENTRY *)v6;
          v11 = _InterlockedCompareExchange((volatile signed __int32 *)v6 + 52, 1, 1);
          v12 = v11;
          if ( v11 >= 5 )
            KeBugCheckEx(0xA3u, 1uLL, 0xC17B1uLL, 0LL, 0LL);
          _mm_lfence();
          v13 = AcpiDevicePowerProcessPhase0Dispatch[v11];
          if ( v13 )
          {
            _InterlockedCompareExchange((volatile signed __int32 *)v6 + 52, 1, v11);
            if ( (*(int (__fastcall **)(PVOID *))(v13 + 8LL * *((int *)v6 + 12)))(v6) < 0 )
              v6 = v9;
            goto LABEL_56;
          }
          v6 = v9;
          if ( v11 == 1 )
            break;
          if ( v11 )
            goto LABEL_54;
LABEL_56:
          if ( v6 == &AcpiPowerPhase0List )
          {
            if ( v8 )
              ACPIInternalMovePowerList((_QWORD **)&AcpiPowerPhase0List, (__int64)&AcpiPowerPhase1List);
            goto LABEL_12;
          }
        }
        v14 = *((_DWORD *)&v10[3].Next + 2);
        if ( (v14 & 0x10000000) != 0
          || (v15 = 0, (v14 & 0x1000000) != 0)
          && ((v14 & 0x4000000) != 0
           || (*(_BYTE *)(*((_QWORD *)&v10[2].Next + 1) + 1000LL) & 0x40) != 0
           && (v10[4].Next != &v10[4] || (v14 & 0x2000000) == 0 && AcpiPowerCurrentPagingPathTransitions)) )
        {
          v15 = 1;
        }
        v16 = *((_QWORD *)&v10[2].Next + 1);
        v17 = &unk_1C006FB8B;
        if ( v16 )
        {
          v18 = *(_QWORD *)(v16 + 8);
          if ( (v18 & 0x200000000000LL) != 0 && (v18 & 0x400000000000LL) != 0 )
            v17 = *(void **)(v16 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qsLLdqss(WPP_GLOBAL_Control->DeviceExtension, v14, v16, (_DWORD)v17);
        if ( v15 )
        {
          Next = v10->Next;
          if ( *(&v10->Next->Next + 1) != v10
            || (v25 = (struct _SLIST_ENTRY **)*((_QWORD *)&v10->Next + 1), *v25 != v10)
            || (*v25 = Next,
                *((_QWORD *)&Next->Next + 1) = v25,
                v10[6].Next = (_SLIST_ENTRY *)&AcpiPowerPhase0List,
                v26 = (struct _SLIST_ENTRY **)qword_1C0081338,
                *(__int64 **)qword_1C0081338 != &AcpiPowerBlockedOnDependencyList) )
          {
            __fastfail(3u);
          }
          v10->Next = (_SLIST_ENTRY *)&AcpiPowerBlockedOnDependencyList;
          *((_QWORD *)&v10->Next + 1) = v26;
          *v26 = v10;
          qword_1C0081338 = (__int64)v10;
          goto LABEL_56;
        }
LABEL_54:
        v8 = 0;
        if ( v12 == 2 )
          ACPIDeviceCompleteRequest(v10);
        goto LABEL_56;
      }
LABEL_12:
      if ( (__int64 *)AcpiPowerPhase1List == &AcpiPowerPhase1List )
        goto LABEL_13;
      if ( AcpiPowerPhase0List == &AcpiPowerPhase0List )
      {
        v21 = ACPIDevicePowerProcessGenericPhase(
                (_SLIST_ENTRY *)&AcpiPowerPhase1List,
                (__int64)&AcpiDevicePowerProcessPhase1Dispatch,
                7u,
                0);
        if ( v21 >= 0 && v21 != 259 )
          ACPIInternalMovePowerList((_QWORD **)&AcpiPowerPhase1List, (__int64)&AcpiPowerPhase2List);
LABEL_13:
        if ( AcpiPowerPhase0List == &AcpiPowerPhase0List )
        {
          if ( (__int64 *)AcpiPowerPhase1List == &AcpiPowerPhase1List
            && (__int64 *)AcpiPowerPhase2List != &AcpiPowerPhase2List )
          {
            v22 = ACPIDevicePowerProcessGenericPhase(
                    (_SLIST_ENTRY *)&AcpiPowerPhase2List,
                    (__int64)&AcpiDevicePowerProcessPhase2Dispatch,
                    7u,
                    0);
            if ( v22 >= 0 && v22 != 259 )
              ACPIInternalMovePowerList((_QWORD **)&AcpiPowerPhase2List, (__int64)&AcpiPowerPhase3List);
          }
          if ( (__int64 *)AcpiPowerPhase1List == &AcpiPowerPhase1List
            && AcpiPowerPhase0List == &AcpiPowerPhase0List
            && (__int64 *)AcpiPowerPhase3List != &AcpiPowerPhase3List
            && (__int64 *)AcpiPowerPhase2List == &AcpiPowerPhase2List )
          {
            v20 = ACPIDevicePowerProcessPhase3();
            if ( v20 >= 0 )
            {
              if ( v20 == 259 )
              {
                if ( (unsigned __int8)ACPIIsPhase3ListEmptyOfUnblockedItems() )
                {
                  ACPIMovePowerListUnblockedItems(&AcpiPowerPhase3List);
                  for ( i = AcpiPowerPhase3List; (__int64 *)i != &AcpiPowerPhase3List; i = *(_QWORD *)i )
                    *(_DWORD *)(i + 56) &= 0xEEFFFFFF;
                }
              }
              else
              {
                ACPIInternalMovePowerList((_QWORD **)&AcpiPowerPhase3List, (__int64)&AcpiPowerPhase4List);
              }
            }
          }
        }
      }
      if ( AcpiPowerPhase4List != &AcpiPowerPhase4List )
      {
        v23 = ACPIDevicePowerProcessPhase4();
        if ( v23 >= 0 && v23 != 259 )
          ACPIInternalMovePowerList((_QWORD **)&AcpiPowerPhase4List, (__int64)&AcpiPowerPhase5List);
      }
      if ( (__int64 *)AcpiPowerPhase5List != &AcpiPowerPhase5List )
        ACPIDevicePowerProcessGenericPhase(
          (_SLIST_ENTRY *)&AcpiPowerPhase5List,
          (__int64)&AcpiDevicePowerProcessPhase5Dispatch,
          9u,
          1);
      KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
      v4 = AcpiPowerDpcFlags;
      if ( (AcpiPowerDpcFlags & 2) == 0 )
      {
        v5 = &AcpiPowerPhase5List;
        break;
      }
    }
  }
  if ( AcpiPowerPhase0List == &AcpiPowerPhase0List
    && (__int64 *)AcpiPowerPhase3List == &AcpiPowerPhase3List
    && (__int64 *)AcpiPowerBlockedOnDependencyList == &AcpiPowerBlockedOnDependencyList
    && (__int64 *)AcpiPowerPhase5List == &AcpiPowerPhase5List
    && (__int64 *)AcpiPowerPhase1List == &AcpiPowerPhase1List
    && (__int64 *)AcpiPowerPhase2List == &AcpiPowerPhase2List
    && AcpiPowerPhase4List == &AcpiPowerPhase4List )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v5,
        10,
        51,
        (__int64)&WPP_a8f7cd0141bb322231380cc24ac7ac02_Traceguids);
    }
    if ( (__int64 *)AcpiPowerSynchronizeList != &AcpiPowerSynchronizeList )
      ACPIInternalMovePowerList((_QWORD **)&AcpiPowerSynchronizeList, (__int64)Entry);
  }
  AcpiPowerDpcFlags &= ~1u;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
  v7 = (struct _SLIST_ENTRY *)Entry[0];
  if ( Entry[0] != Entry )
  {
    do
    {
      p_Next = (PVOID *)&v7->Next->Next;
      ACPIDeviceCompleteRequest(v7);
      v7 = (struct _SLIST_ENTRY *)p_Next;
    }
    while ( p_Next != Entry );
  }
}
