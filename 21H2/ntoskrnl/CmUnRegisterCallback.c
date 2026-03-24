/*
 * XREFs of CmUnRegisterCallback @ 0x140869C10
 * Callers:
 *     VrpDecrementSiloCount @ 0x140882754 (VrpDecrementSiloCount.c)
 *     EtwpRegTraceEnableCallback @ 0x14093BA00 (EtwpRegTraceEnableCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ObReferenceObjectSafe @ 0x14029B150 (ObReferenceObjectSafe.c)
 *     ExBlockOnAddressPushLock @ 0x14029CC60 (ExBlockOnAddressPushLock.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     RtlpInterlockedFlushSList @ 0x1404079B0 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     CmListGetNextElement @ 0x1406A3CF4 (CmListGetNextElement.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall CmUnRegisterCallback(LARGE_INTEGER Cookie)
{
  NTSTATUS v2; // esi
  struct _KTHREAD *CurrentThread; // rax
  char *NextElement; // rax
  char *v5; // rdi
  int v6; // eax
  struct _KTHREAD *v7; // rax
  _QWORD *v8; // rcx
  void **v9; // rax
  _QWORD *v10; // rdx
  void **v11; // rax
  char v12; // r15
  struct _KTHREAD *v13; // rax
  _QWORD *v14; // r13
  _QWORD *v15; // rax
  _QWORD *v16; // rbx
  _QWORD *v17; // r13
  _QWORD *v18; // r14
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  PADAPTER_OBJECT *v26; // rbx
  struct _KTHREAD *v27; // rax
  _QWORD *v28; // rbx
  PSLIST_ENTRY v29; // rbx
  PSLIST_ENTRY v30; // rcx
  void *v31; // rcx
  _QWORD *v33; // [rsp+30h] [rbp-88h] BYREF
  _QWORD *v34[4]; // [rsp+38h] [rbp-80h] BYREF
  __int128 v35; // [rsp+58h] [rbp-60h] BYREF
  __int128 v36; // [rsp+68h] [rbp-50h] BYREF
  __int64 v37; // [rsp+78h] [rbp-40h]
  __int64 v38; // [rsp+D0h] [rbp+18h] BYREF
  int v39; // [rsp+D8h] [rbp+20h]

  v2 = -1073741811;
  v39 = -1073741811;
  v36 = 0LL;
  v37 = 0LL;
  v35 = 0LL;
  v34[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
  do
  {
    do
    {
      NextElement = CmListGetNextElement((_QWORD **)&CallbackListHead, v34, 0);
      v5 = NextElement;
      v34[1] = NextElement;
      if ( !NextElement )
        goto LABEL_12;
    }
    while ( *((_QWORD *)NextElement + 3) != Cookie.QuadPart );
    v6 = *((_DWORD *)NextElement + 4);
    LODWORD(v38) = v6;
    if ( !v6 )
    {
      v10 = *(_QWORD **)v5;
      v11 = (void **)*((_QWORD *)v5 + 1);
      if ( *(char **)(*(_QWORD *)v5 + 8LL) == v5 && *v11 == v5 )
      {
        *v11 = v10;
        v10[1] = v11;
        ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v2 = 0;
        v39 = 0;
        goto LABEL_17;
      }
LABEL_33:
      __fastfail(3u);
    }
  }
  while ( v6 < 0 );
  _InterlockedOr((volatile signed __int32 *)v5 + 4, 0x80000000);
  ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  while ( 1 )
  {
    LODWORD(v38) = *((_DWORD *)v5 + 4);
    if ( (_DWORD)v38 == 0x80000000 )
      break;
    ExBlockOnAddressPushLock((__int64)&CallbackListDeleteEvent, (_QWORD *)v5 + 2, &v38, 4uLL, 0LL);
  }
  v7 = KeGetCurrentThread();
  --v7->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
  v8 = *(_QWORD **)v5;
  v9 = (void **)*((_QWORD *)v5 + 1);
  if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || *v9 != v5 )
    goto LABEL_33;
  *v9 = v8;
  v8[1] = v9;
  ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v2 = 0;
  v39 = 0;
LABEL_12:
  if ( v2 < 0 )
  {
    ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v2;
  }
LABEL_17:
  *((_QWORD *)&v35 + 1) = &v35;
  *(_QWORD *)&v35 = &v35;
  v12 = 0;
  v13 = KeGetCurrentThread();
  --v13->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpContextListLock, 0LL);
  v14 = v5 + 64;
  v15 = (_QWORD *)*((_QWORD *)v5 + 8);
  v16 = v15;
  v34[3] = v5 + 64;
  while ( 1 )
  {
    v33 = v15;
    if ( v16 == v14 )
      break;
    v17 = (_QWORD *)*v15;
    v18 = v15 - 2;
    if ( ObReferenceObjectSafe(v15[4]) )
    {
      v19 = v18[2];
      v20 = (_QWORD *)v18[3];
      if ( *(_QWORD **)(v19 + 8) != v18 + 2 )
        goto LABEL_33;
      if ( (_QWORD *)*v20 != v18 + 2 )
        goto LABEL_33;
      *v20 = v19;
      *(_QWORD *)(v19 + 8) = v20;
      v21 = *v18;
      v22 = (_QWORD *)v18[1];
      if ( *(_QWORD **)(*v18 + 8LL) != v18 )
        goto LABEL_33;
      if ( (_QWORD *)*v22 != v18 )
        goto LABEL_33;
      *v22 = v21;
      *(_QWORD *)(v21 + 8) = v22;
      v23 = (_QWORD *)*((_QWORD *)&v35 + 1);
      if ( **((__int128 ***)&v35 + 1) != &v35 )
        goto LABEL_33;
      *v16 = &v35;
      v16[1] = v23;
      *v23 = v16;
      *((_QWORD *)&v35 + 1) = v16;
    }
    else
    {
      v12 = 1;
    }
    v15 = v17;
    v16 = v17;
    v14 = v5 + 64;
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  while ( 1 )
  {
    v24 = v35;
    if ( (__int128 *)v35 == &v35 )
      break;
    v25 = *(_QWORD *)v35;
    if ( *(__int128 **)(v35 + 8) != &v35 || *(_QWORD *)(v25 + 8) != (_QWORD)v35 )
      goto LABEL_33;
    *(_QWORD *)&v35 = *(_QWORD *)v35;
    *(_QWORD *)(v25 + 8) = &v35;
    v26 = (PADAPTER_OBJECT *)(v24 - 16);
    v34[2] = (_QWORD *)(v24 - 16);
    v36 = *(_OWORD *)(v24 - 16 + 48);
    (*((void (__fastcall **)(_QWORD, __int64, __int128 *))v5 + 5))(*((_QWORD *)v5 + 4), 40LL, &v36);
    HalPutDmaAdapter(v26[6]);
    ExFreePoolWithTag(v26, 0x63634D43u);
  }
  while ( v12 )
  {
    v27 = KeGetCurrentThread();
    --v27->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpContextListLock, 0LL);
    v33 = (_QWORD *)*((_QWORD *)v5 + 8);
    v28 = v33;
    ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v28 == v14 )
      v12 = 0;
    else
      ExBlockOnAddressPushLock((__int64)&CallbackListDeleteEvent, (_QWORD *)v5 + 8, &v33, 8uLL, 0LL);
  }
  if ( _InterlockedExchangeAdd(&CmpCallBackCount, 0xFFFFFFFF) == 1 )
  {
    v29 = RtlpInterlockedFlushSList(&CmpCallbackContextSList);
    while ( v29 )
    {
      v30 = v29;
      v29 = v29->Next;
      ExFreePoolWithTag(v30, 0);
    }
  }
  v31 = (void *)*((_QWORD *)v5 + 7);
  if ( v31 )
    ExFreePoolWithTag(v31, 0);
  ExFreePoolWithTag(v5, 0);
  return v2;
}
