/*
 * XREFs of CmpCallCallBacksEx @ 0x140626B30
 * Callers:
 *     NtQueryKey @ 0x1405EBF30 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x1405EC5D0 (NtQueryValueKey.c)
 *     CmPostCallbackNotificationEx @ 0x1405ECF70 (CmPostCallbackNotificationEx.c)
 *     NtSetInformationKey @ 0x1405FA5C0 (NtSetInformationKey.c)
 *     NtEnumerateKey @ 0x1405FAA20 (NtEnumerateKey.c)
 *     NtSetValueKey @ 0x140618C70 (NtSetValueKey.c)
 *     CmpSecurityMethod @ 0x140619DF0 (CmpSecurityMethod.c)
 *     NtEnumerateValueKey @ 0x14061E420 (NtEnumerateValueKey.c)
 *     CmpCallCallBacks @ 0x140622994 (CmpCallCallBacks.c)
 *     CmPostCallbackNotification @ 0x140622CE0 (CmPostCallbackNotification.c)
 *     CmpParseKey @ 0x140623680 (CmpParseKey.c)
 *     NtQueryMultipleValueKey @ 0x1406572C0 (NtQueryMultipleValueKey.c)
 *     CmLoadDifferencingKey @ 0x14068C83C (CmLoadDifferencingKey.c)
 *     NtDeleteKey @ 0x140692140 (NtDeleteKey.c)
 *     NtDeleteValueKey @ 0x140693CE0 (NtDeleteValueKey.c)
 *     NtFlushKey @ 0x1406DFA70 (NtFlushKey.c)
 *     NtSaveKeyEx @ 0x140714B70 (NtSaveKeyEx.c)
 *     NtRenameKey @ 0x1408642D0 (NtRenameKey.c)
 *     NtReplaceKey @ 0x1408647D0 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x140864B60 (NtRestoreKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfUnblockPushLock @ 0x1403F1A30 (ExfUnblockPushLock.c)
 *     RtlpInterlockedPopEntrySList @ 0x1403FDD60 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FDDA0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     CmpFreeCallbackContext @ 0x1404E70E4 (CmpFreeCallbackContext.c)
 *     CmpCallbackFillObjectContext @ 0x1406270E0 (CmpCallbackFillObjectContext.c)
 *     CmpCallbackFatalFilter @ 0x140865704 (CmpCallbackFatalFilter.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpCallCallBacksEx(
        unsigned int a1,
        __int64 a2,
        _SLIST_ENTRY *a3,
        char a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  char v7; // r14
  _SLIST_ENTRY *v8; // rsi
  struct _KTHREAD *CurrentThread; // rax
  PVOID SparePtr; // rax
  __int64 *v13; // r12
  struct _KTHREAD *v14; // rax
  _SLIST_ENTRY *v15; // r13
  __int64 v16; // rdx
  __int64 v17; // r8
  _DWORD *v18; // r9
  struct _KTHREAD *v19; // rcx
  bool v20; // zf
  _SLIST_ENTRY *PoolWithTag; // rsi
  struct _KTHREAD *v22; // rdx
  _SLIST_ENTRY **v23; // rax
  _SLIST_ENTRY *v24; // rcx
  int v25; // ecx
  int v26; // ecx
  __int64 v27; // rdx
  __int64 v28; // r8
  _DWORD *v29; // r9
  struct _KTHREAD *v30; // rcx
  __int128 *v31; // r12
  unsigned int v33; // r9d
  _SLIST_ENTRY *v34; // rbx
  _SLIST_ENTRY **v35; // rax
  _SLIST_ENTRY *v36; // r14
  _OWORD *v37; // r8
  PVOID *v38; // rax
  unsigned int v39; // ecx
  struct _KTHREAD *v40; // rax
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY **v42; // rax
  PVOID *v43; // rax
  __int64 v44; // rdx
  int v45; // eax
  signed __int32 v46[8]; // [rsp+0h] [rbp-108h] BYREF
  char v47; // [rsp+20h] [rbp-E8h]
  char v48; // [rsp+21h] [rbp-E7h]
  int v49; // [rsp+24h] [rbp-E4h]
  _SLIST_ENTRY *v50; // [rsp+30h] [rbp-D8h]
  __int128 *v51; // [rsp+38h] [rbp-D0h]
  __int64 *v52; // [rsp+40h] [rbp-C8h]
  _SLIST_ENTRY *v53; // [rsp+48h] [rbp-C0h]
  struct _KTHREAD *v54; // [rsp+50h] [rbp-B8h]
  _SLIST_ENTRY *v55; // [rsp+58h] [rbp-B0h]
  __int128 v56; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v57; // [rsp+70h] [rbp-98h]
  __int128 v58; // [rsp+80h] [rbp-88h]
  __int64 v59; // [rsp+90h] [rbp-78h]
  __int64 v60; // [rsp+98h] [rbp-70h]
  __int64 v61; // [rsp+A0h] [rbp-68h]
  __int128 v62; // [rsp+A8h] [rbp-60h] BYREF

  v7 = a4;
  v8 = a3;
  v55 = a3;
  v61 = a2;
  v60 = a6;
  v49 = 0;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v62 = 0LL;
  v51 = 0LL;
  v53 = 0LL;
  v47 = 0;
  CurrentThread = KeGetCurrentThread();
  v54 = CurrentThread;
  if ( a4 == 1 )
  {
    SparePtr = CurrentThread[1].WaitBlock[0].SparePtr;
    if ( SparePtr )
      v13 = (__int64 *)*((_QWORD *)SparePtr + 1);
    else
      v13 = &CallbackListHead;
    v14 = KeGetCurrentThread();
    --v14->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
    v15 = (_SLIST_ENTRY *)a7;
    while ( 1 )
    {
      do
      {
        v13 = (__int64 *)*v13;
        v52 = v13;
        v48 = 1;
        if ( v13 == &CallbackListHead )
          goto LABEL_21;
      }
      while ( *((int *)v13 + 4) < 0 );
      _InterlockedIncrement((volatile signed __int32 *)v13 + 4);
      ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
      v19 = KeGetCurrentThread();
      v20 = v19->KernelApcDisable++ == -1;
      if ( v20
        && ($C774EFD68449142D8271B1EC1EB7FB26 *)v19->ApcState.ApcListHead[0].Flink != &v19->152
        && !v19->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery((__int64)v19, v16, v17, v18);
      }
      v48 = 0;
      PoolWithTag = RtlpInterlockedPopEntrySList(&CmpCallbackContextSList);
      if ( !PoolWithTag )
        PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x69634D43u);
      v50 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      *((_QWORD *)&PoolWithTag[1].Next + 1) = v13;
      PoolWithTag[2].Next = 0LL;
      v22 = v54;
      PoolWithTag[1].Next = (_SLIST_ENTRY *)v54[1].WaitBlock[0].SparePtr;
      v22[1].WaitBlock[0].SparePtr = &PoolWithTag[1];
      v23 = *(_SLIST_ENTRY ***)(a7 + 8);
      if ( *v23 != (_SLIST_ENTRY *)a7 )
        goto LABEL_98;
      PoolWithTag->Next = (_SLIST_ENTRY *)a7;
      *((_QWORD *)&PoolWithTag->Next + 1) = v23;
      *v23 = PoolWithTag;
      *(_QWORD *)(a7 + 8) = PoolWithTag;
      CmpCallbackFillObjectContext(a1, a2, v13 + 3);
      v24 = a3;
      if ( !a3 || (*((_DWORD *)v13 + 5) & 1) == 0 )
        v24 = (_SLIST_ENTRY *)a2;
      v25 = ((__int64 (__fastcall *)(__int64, _QWORD, _SLIST_ENTRY *))v13[5])(v13[4], (int)a1, v24);
      v49 = v25;
      if ( a1 == 14 )
      {
        v49 = 0;
      }
      else if ( v25 < 0 )
      {
        Next = PoolWithTag->Next;
        v42 = (_SLIST_ENTRY **)*((_QWORD *)&PoolWithTag->Next + 1);
        if ( *(&PoolWithTag->Next->Next + 1) != PoolWithTag || *v42 != PoolWithTag )
LABEL_98:
          __fastfail(3u);
        *v42 = Next;
        *((_QWORD *)&Next->Next + 1) = v42;
        v43 = (PVOID *)v54[1].WaitBlock[0].SparePtr;
        if ( v43 )
          v54[1].WaitBlock[0].SparePtr = *v43;
        CmpFreeCallbackContext(PoolWithTag);
        if ( _InterlockedDecrement((volatile signed __int32 *)v13 + 4) == 0x80000000 )
        {
          _InterlockedOr(v46, 0);
          if ( CallbackListDeleteEvent )
            ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
        }
        v7 = 0;
        v47 = 1;
LABEL_21:
        v26 = v49;
        goto LABEL_22;
      }
      switch ( a1 )
      {
        case 0x1Cu:
LABEL_55:
          PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 80);
          *(_QWORD *)(a2 + 80) = 0LL;
          break;
        case 8u:
LABEL_56:
          PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 48);
          *(_QWORD *)(a2 + 48) = 0LL;
          break;
        case 7u:
LABEL_49:
          PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 40);
          *(_QWORD *)(a2 + 40) = 0LL;
          break;
        case 0xEu:
LABEL_20:
          PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 8);
          *(_QWORD *)(a2 + 8) = 0LL;
          break;
        default:
          switch ( a1 )
          {
            case 0u:
            case 0x1Eu:
              goto LABEL_20;
            case 1u:
            case 5u:
            case 6u:
              goto LABEL_49;
            case 2u:
            case 4u:
            case 0x22u:
              PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 16);
              *(_QWORD *)(a2 + 16) = 0LL;
              break;
            case 3u:
            case 0x24u:
            case 0x2Fu:
              PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 32);
              *(_QWORD *)(a2 + 32) = 0LL;
              break;
            case 9u:
              goto LABEL_56;
            case 0xFu:
            case 0x10u:
            case 0x11u:
            case 0x12u:
            case 0x13u:
            case 0x14u:
            case 0x15u:
            case 0x16u:
            case 0x17u:
            case 0x18u:
            case 0x19u:
            case 0x1Bu:
            case 0x1Du:
            case 0x1Fu:
            case 0x21u:
            case 0x23u:
            case 0x25u:
            case 0x27u:
            case 0x2Au:
            case 0x2Cu:
            case 0x2Eu:
            case 0x30u:
              *(_QWORD *)(a2 + 32) = PoolWithTag[2].Next;
              break;
            case 0x1Au:
              goto LABEL_55;
            case 0x20u:
              PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 64);
              *(_QWORD *)(a2 + 64) = 0LL;
              break;
            case 0x26u:
            case 0x29u:
            case 0x2Bu:
            case 0x2Du:
              PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 24);
              *(_QWORD *)(a2 + 24) = 0LL;
              break;
            default:
              goto LABEL_50;
          }
          break;
      }
LABEL_50:
      v40 = KeGetCurrentThread();
      --v40->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
    }
    if ( _InterlockedDecrement((volatile signed __int32 *)v13 + 4) == 0x80000000 )
    {
      _InterlockedOr(v46, 0);
      if ( CallbackListDeleteEvent )
        ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
    }
    v26 = -1073741670;
    v49 = -1073741670;
    v47 = 1;
    v7 = 0;
LABEL_22:
    if ( v48 )
    {
      ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
      v30 = KeGetCurrentThread();
      v20 = v30->KernelApcDisable++ == -1;
      if ( v20
        && ($C774EFD68449142D8271B1EC1EB7FB26 *)v30->ApcState.ApcListHead[0].Flink != &v30->152
        && !v30->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery((__int64)v30, v27, v28, v29);
      }
      v26 = v49;
    }
    v8 = a3;
  }
  else
  {
    v15 = (_SLIST_ENTRY *)a7;
    v26 = v49;
  }
  if ( v7 )
  {
    v31 = v51;
  }
  else
  {
    if ( v47 == 1 )
    {
      v56 = 0LL;
      v57 = 0LL;
      v58 = 0LL;
      v59 = 0LL;
      v31 = &v56;
      v51 = &v56;
      v33 = a5;
      if ( ((a5 - 27) & 0xFFFFFFFD) != 0 )
      {
        *(_QWORD *)&v56 = v60;
      }
      else
      {
        if ( v26 == -1073740541 )
          v44 = **(_QWORD **)(a2 + 72);
        else
          v44 = 0LL;
        *(_QWORD *)&v56 = v44;
      }
      if ( v26 == -1073740541 )
      {
        v45 = 0;
        if ( ((a1 - 26) & 0xFFFFFFFD) == 0 )
          v45 = *((_DWORD *)&v8->Next + 3);
        DWORD2(v56) = v45;
      }
      else
      {
        DWORD2(v56) = v26;
        v45 = v26;
      }
      DWORD2(v57) = v45;
      *(_QWORD *)&v57 = v61;
      if ( v8 )
      {
        v53 = (_SLIST_ENTRY *)&v62;
        *(_QWORD *)&v62 = &v56;
        *((_QWORD *)&v62 + 1) = v55;
      }
    }
    else
    {
      v31 = (__int128 *)a2;
      v51 = (__int128 *)a2;
      v53 = v8;
      v33 = a1;
      a5 = a1;
    }
    while ( v15->Next != v15 )
    {
      v34 = (_SLIST_ENTRY *)*((_QWORD *)&v15->Next + 1);
      v55 = v34;
      v35 = (_SLIST_ENTRY **)*((_QWORD *)&v34->Next + 1);
      if ( v34->Next != v15 || *v35 != v34 )
        goto LABEL_98;
      *((_QWORD *)&v15->Next + 1) = v35;
      *v35 = v15;
      v50 = (_SLIST_ENTRY *)*((_QWORD *)&v34[1].Next + 1);
      v36 = v50;
      *((_QWORD *)v31 + 4) = v34[2].Next;
      CmpCallbackFillObjectContext(v33, v31, &v36[1].Next + 1);
      if ( v8 && (HIDWORD(v36[1].Next) & 1) != 0 )
        v37 = v53;
      else
        v37 = v31;
      v49 = (*((__int64 (__fastcall **)(_SLIST_ENTRY *, _QWORD, _OWORD *))&v36[2].Next + 1))(v36[2].Next, (int)a5, v37);
      v38 = (PVOID *)v54[1].WaitBlock[0].SparePtr;
      if ( v38 )
        v54[1].WaitBlock[0].SparePtr = *v38;
      v39 = CmpCallBackCount * KeNumberProcessors_0;
      if ( (unsigned int)(CmpCallBackCount * KeNumberProcessors_0) > 0x40 )
        v39 = 64;
      if ( LOWORD(CmpCallbackContextSList.Alignment) >= v39 )
        ExFreePoolWithTag(v34, 0);
      else
        RtlpInterlockedPushEntrySList(&CmpCallbackContextSList, v34);
      if ( _InterlockedDecrement((volatile signed __int32 *)&v36[1]) == 0x80000000 )
      {
        _InterlockedOr(v46, 0);
        if ( CallbackListDeleteEvent )
          ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
      }
      if ( v49 == -1073740541 )
        *((_DWORD *)v31 + 2) = *((_DWORD *)v31 + 6);
      v26 = 0;
      v49 = 0;
      v33 = a5;
    }
  }
  if ( v47 == 1 )
  {
    if ( v31 )
    {
      v26 = *((_DWORD *)v31 + 6);
      if ( v26 >= 0 )
        return (unsigned int)-1073740541;
    }
  }
  return (unsigned int)v26;
}
