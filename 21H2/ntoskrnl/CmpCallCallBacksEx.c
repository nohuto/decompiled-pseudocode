/*
 * XREFs of CmpCallCallBacksEx @ 0x140735760
 * Callers:
 *     NtSaveKeyEx @ 0x14065A1F0 (NtSaveKeyEx.c)
 *     CmLoadDifferencingKey @ 0x14067CE4C (CmLoadDifferencingKey.c)
 *     NtDeleteKey @ 0x14067DE90 (NtDeleteKey.c)
 *     CmPostCallbackNotificationEx @ 0x14067FF60 (CmPostCallbackNotificationEx.c)
 *     NtEnumerateValueKey @ 0x1406A1370 (NtEnumerateValueKey.c)
 *     NtFlushKey @ 0x1406A5C00 (NtFlushKey.c)
 *     NtQueryMultipleValueKey @ 0x140713980 (NtQueryMultipleValueKey.c)
 *     NtDeleteValueKey @ 0x140714980 (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x14071FAA0 (NtSetValueKey.c)
 *     CmpSecurityMethod @ 0x140721010 (CmpSecurityMethod.c)
 *     NtQueryKey @ 0x1407333B0 (NtQueryKey.c)
 *     CmpParseKey @ 0x1407349A0 (CmpParseKey.c)
 *     CmPostCallbackNotification @ 0x1407C04B4 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x1407C0568 (CmpCallCallBacks.c)
 *     NtEnumerateKey @ 0x1407C1130 (NtEnumerateKey.c)
 *     CmpDeleteKeyObject @ 0x1407C2680 (CmpDeleteKeyObject.c)
 *     NtQueryValueKey @ 0x1407C9930 (NtQueryValueKey.c)
 *     NtReplaceKey @ 0x14090F3F0 (NtReplaceKey.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     CmpFreeCallbackContext @ 0x1403765BC (CmpFreeCallbackContext.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429880 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     CmpCallbackFillObjectContext @ 0x140735E30 (CmpCallbackFillObjectContext.c)
 *     CmpCallbackFatalFilter @ 0x1409100F4 (CmpCallbackFatalFilter.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpCallCallBacksEx(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        char a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  char v7; // r14
  struct _KTHREAD *CurrentThread; // rax
  PVOID SparePtr; // rcx
  __int64 *v12; // r12
  struct _KTHREAD *v13; // rax
  _SLIST_ENTRY *v14; // r13
  struct _SLIST_ENTRY *PoolWithTag; // rsi
  struct _KTHREAD *v16; // rdx
  struct _SLIST_ENTRY **v17; // rax
  __int64 v18; // rcx
  int v19; // ecx
  _SLIST_ENTRY *Next; // rcx
  struct _SLIST_ENTRY **v21; // rax
  PVOID *v22; // rax
  int v23; // esi
  __int128 *v24; // r12
  __int64 v26; // r14
  struct _SLIST_ENTRY *v27; // rbx
  struct _SLIST_ENTRY **v28; // rax
  struct _SLIST_ENTRY *v29; // rsi
  __int128 *v30; // r8
  PVOID *v31; // rax
  unsigned int v32; // ecx
  struct _KTHREAD *v33; // rax
  __int64 v34; // rcx
  int v35; // eax
  signed __int32 v36[8]; // [rsp+0h] [rbp-108h] BYREF
  char v37; // [rsp+20h] [rbp-E8h]
  char v38; // [rsp+21h] [rbp-E7h]
  int v39; // [rsp+24h] [rbp-E4h]
  struct _SLIST_ENTRY *v40; // [rsp+30h] [rbp-D8h]
  __int128 *v41; // [rsp+38h] [rbp-D0h]
  __int64 *v42; // [rsp+40h] [rbp-C8h]
  __int128 *v43; // [rsp+48h] [rbp-C0h]
  struct _KTHREAD *v44; // [rsp+50h] [rbp-B8h]
  struct _SLIST_ENTRY *v45; // [rsp+58h] [rbp-B0h]
  __int128 v46; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v47; // [rsp+70h] [rbp-98h]
  __int128 v48; // [rsp+80h] [rbp-88h]
  __int64 v49; // [rsp+90h] [rbp-78h]
  __int64 v50; // [rsp+98h] [rbp-70h]
  __int64 v51; // [rsp+A0h] [rbp-68h]
  __int128 v52; // [rsp+A8h] [rbp-60h] BYREF

  v7 = a4;
  v45 = (struct _SLIST_ENTRY *)a3;
  v51 = a2;
  v50 = a6;
  v39 = 0;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v52 = 0LL;
  v41 = 0LL;
  v43 = 0LL;
  v37 = 0;
  CurrentThread = KeGetCurrentThread();
  v44 = CurrentThread;
  if ( a4 == 1 )
  {
    SparePtr = CurrentThread[1].WaitBlock[0].SparePtr;
    if ( SparePtr )
      v12 = (__int64 *)*((_QWORD *)SparePtr + 1);
    else
      v12 = &CallbackListHead;
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
    v14 = (_SLIST_ENTRY *)a7;
    while ( 1 )
    {
      do
      {
        v12 = (__int64 *)*v12;
        v42 = v12;
        v38 = 1;
        if ( v12 == &CallbackListHead )
          goto LABEL_26;
      }
      while ( *((int *)v12 + 4) < 0 );
      _InterlockedIncrement((volatile signed __int32 *)v12 + 4);
      ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
      KeLeaveCriticalRegion();
      v38 = 0;
      PoolWithTag = RtlpInterlockedPopEntrySList(&CmpCallbackContextSList);
      if ( !PoolWithTag )
        PoolWithTag = (struct _SLIST_ENTRY *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x69634D43u);
      v40 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      *((_QWORD *)&PoolWithTag[1].Next + 1) = v12;
      PoolWithTag[2].Next = 0LL;
      v16 = v44;
      PoolWithTag[1].Next = (_SLIST_ENTRY *)v44[1].WaitBlock[0].SparePtr;
      v16[1].WaitBlock[0].SparePtr = &PoolWithTag[1];
      v17 = *(struct _SLIST_ENTRY ***)(a7 + 8);
      if ( *v17 != (struct _SLIST_ENTRY *)a7 )
        goto LABEL_93;
      PoolWithTag->Next = (_SLIST_ENTRY *)a7;
      *((_QWORD *)&PoolWithTag->Next + 1) = v17;
      *v17 = PoolWithTag;
      *(_QWORD *)(a7 + 8) = PoolWithTag;
      CmpCallbackFillObjectContext(a1, a2, v12 + 3);
      v18 = a3;
      if ( !a3 || (*((_DWORD *)v12 + 5) & 1) == 0 )
        v18 = a2;
      v19 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64))v12[5])(v12[4], (int)a1, v18);
      v39 = v19;
      if ( a1 == 14 )
      {
        v39 = 0;
      }
      else if ( v19 < 0 )
      {
        Next = PoolWithTag->Next;
        v21 = (struct _SLIST_ENTRY **)*((_QWORD *)&PoolWithTag->Next + 1);
        if ( *(&PoolWithTag->Next->Next + 1) != PoolWithTag || *v21 != PoolWithTag )
LABEL_93:
          __fastfail(3u);
        *v21 = Next;
        *((_QWORD *)&Next->Next + 1) = v21;
        v22 = (PVOID *)v44[1].WaitBlock[0].SparePtr;
        if ( v22 )
          v44[1].WaitBlock[0].SparePtr = *v22;
        CmpFreeCallbackContext(PoolWithTag);
        if ( _InterlockedDecrement((volatile signed __int32 *)v12 + 4) == 0x80000000 )
        {
          _InterlockedOr(v36, 0);
          if ( CallbackListDeleteEvent )
            ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
        }
        v7 = 0;
        v37 = 1;
LABEL_26:
        v23 = v39;
        goto LABEL_27;
      }
      switch ( a1 )
      {
        case 0x1Cu:
LABEL_58:
          PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 80);
          *(_QWORD *)(a2 + 80) = 0LL;
          break;
        case 7u:
LABEL_52:
          PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 40);
          *(_QWORD *)(a2 + 40) = 0LL;
          break;
        case 8u:
LABEL_59:
          PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 48);
          *(_QWORD *)(a2 + 48) = 0LL;
          break;
        case 0xEu:
LABEL_19:
          PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 8);
          *(_QWORD *)(a2 + 8) = 0LL;
          break;
        default:
          switch ( a1 )
          {
            case 0u:
            case 0x1Eu:
              goto LABEL_19;
            case 1u:
            case 5u:
            case 6u:
              goto LABEL_52;
            case 2u:
            case 4u:
            case 0x22u:
              PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 16);
              *(_QWORD *)(a2 + 16) = 0LL;
              break;
            case 3u:
            case 0x24u:
            case 0x2Fu:
            case 0x31u:
              PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 32);
              *(_QWORD *)(a2 + 32) = 0LL;
              break;
            case 9u:
              goto LABEL_59;
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
            case 0x32u:
              *(_QWORD *)(a2 + 32) = PoolWithTag[2].Next;
              break;
            case 0x1Au:
              goto LABEL_58;
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
              goto LABEL_53;
          }
          break;
      }
LABEL_53:
      v33 = KeGetCurrentThread();
      --v33->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
    }
    if ( _InterlockedDecrement((volatile signed __int32 *)v12 + 4) == 0x80000000 )
    {
      _InterlockedOr(v36, 0);
      if ( CallbackListDeleteEvent )
        ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
    }
    v23 = -1073741670;
    v39 = -1073741670;
    v37 = 1;
    v7 = 0;
LABEL_27:
    if ( v38 )
    {
      ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v14 = (_SLIST_ENTRY *)a7;
    v23 = v39;
  }
  if ( v7 )
  {
    v24 = v41;
  }
  else
  {
    if ( v37 == 1 )
    {
      v46 = 0LL;
      v47 = 0LL;
      v48 = 0LL;
      v49 = 0LL;
      v24 = &v46;
      v41 = &v46;
      if ( ((a5 - 27) & 0xFFFFFFFD) != 0 )
      {
        *(_QWORD *)&v46 = v50;
      }
      else
      {
        if ( v23 == -1073740541 )
          v34 = **(_QWORD **)(a2 + 72);
        else
          v34 = 0LL;
        *(_QWORD *)&v46 = v34;
      }
      v26 = a3;
      if ( v23 == -1073740541 )
      {
        if ( ((a1 - 26) & 0xFFFFFFFD) != 0 )
          v35 = 0;
        else
          v35 = *(_DWORD *)(a3 + 12);
        DWORD2(v46) = v35;
      }
      else
      {
        DWORD2(v46) = v23;
        v35 = v23;
      }
      DWORD2(v47) = v35;
      *(_QWORD *)&v47 = v51;
      a1 = a5;
      if ( a3 )
      {
        v43 = &v52;
        *(_QWORD *)&v52 = &v46;
        *((_QWORD *)&v52 + 1) = v45;
      }
    }
    else
    {
      v24 = (__int128 *)a2;
      v41 = (__int128 *)a2;
      v26 = a3;
      v43 = (__int128 *)a3;
    }
    while ( v14->Next != v14 )
    {
      v27 = (struct _SLIST_ENTRY *)*((_QWORD *)&v14->Next + 1);
      v45 = v27;
      v28 = (struct _SLIST_ENTRY **)*((_QWORD *)&v27->Next + 1);
      if ( v27->Next != v14 || *v28 != v27 )
        goto LABEL_93;
      *((_QWORD *)&v14->Next + 1) = v28;
      *v28 = v14;
      v40 = (struct _SLIST_ENTRY *)*((_QWORD *)&v27[1].Next + 1);
      v29 = v40;
      *((_QWORD *)v24 + 4) = v27[2].Next;
      CmpCallbackFillObjectContext(a1, v24, &v29[1].Next + 1);
      if ( v26 && (HIDWORD(v29[1].Next) & 1) != 0 )
        v30 = v43;
      else
        v30 = v24;
      v39 = (*((__int64 (__fastcall **)(_SLIST_ENTRY *, _QWORD, __int128 *))&v29[2].Next + 1))(
              v29[2].Next,
              (int)a1,
              v30);
      v31 = (PVOID *)v44[1].WaitBlock[0].SparePtr;
      if ( v31 )
        v44[1].WaitBlock[0].SparePtr = *v31;
      v32 = CmpCallBackCount * KeNumberProcessors_0;
      if ( (unsigned int)(CmpCallBackCount * KeNumberProcessors_0) > 0x40 )
        v32 = 64;
      if ( LOWORD(CmpCallbackContextSList.Alignment) >= v32 )
        ExFreePoolWithTag(v27, 0);
      else
        RtlpInterlockedPushEntrySList(&CmpCallbackContextSList, v27);
      if ( _InterlockedDecrement((volatile signed __int32 *)&v29[1]) == 0x80000000 )
      {
        _InterlockedOr(v36, 0);
        if ( CallbackListDeleteEvent )
          ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
      }
      if ( v39 == -1073740541 )
        *((_DWORD *)v24 + 2) = *((_DWORD *)v24 + 6);
      v23 = 0;
      v39 = 0;
    }
  }
  if ( v37 == 1 )
  {
    if ( v24 )
    {
      v23 = *((_DWORD *)v24 + 6);
      if ( v23 >= 0 )
        return (unsigned int)-1073740541;
    }
  }
  return (unsigned int)v23;
}
