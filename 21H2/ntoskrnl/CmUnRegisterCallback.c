/*
 * XREFs of CmUnRegisterCallback @ 0x140869D70
 * Callers:
 *     VrpDecrementSiloCount @ 0x1408828B4 (VrpDecrementSiloCount.c)
 *     EtwpRegTraceEnableCallback @ 0x14093BBD0 (EtwpRegTraceEnableCallback.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x140212AE0 (ObReferenceObjectSafe.c)
 *     ExBlockOnAddressPushLock @ 0x140213E80 (ExBlockOnAddressPushLock.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     RtlpInterlockedFlushSList @ 0x140407B90 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmListGetNextElement @ 0x1405E17C4 (CmListGetNextElement.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall CmUnRegisterCallback(LARGE_INTEGER Cookie)
{
  NTSTATUS v2; // esi
  struct _KTHREAD *CurrentThread; // rax
  char *NextElement; // rax
  char *v5; // rdi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD *v10; // rax
  _QWORD *v11; // rcx
  void **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rdx
  void **v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  char v24; // r15
  struct _KTHREAD *v25; // rax
  _QWORD *v26; // r13
  _QWORD *v27; // rax
  _QWORD *v28; // rbx
  _QWORD *v29; // r13
  _QWORD *v30; // r14
  __int64 v31; // rdx
  _QWORD *v32; // rcx
  __int64 v33; // rcx
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rcx
  PADAPTER_OBJECT *v41; // rbx
  struct _KTHREAD *v42; // rax
  _QWORD *v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  PSLIST_ENTRY v47; // rbx
  PSLIST_ENTRY v48; // rcx
  void *v49; // rcx
  _QWORD *v51; // [rsp+30h] [rbp-88h] BYREF
  _QWORD *v52[4]; // [rsp+38h] [rbp-80h] BYREF
  __int128 v53; // [rsp+58h] [rbp-60h] BYREF
  __int128 v54; // [rsp+68h] [rbp-50h] BYREF
  __int64 v55; // [rsp+78h] [rbp-40h]
  __int64 v56; // [rsp+D0h] [rbp+18h] BYREF
  int v57; // [rsp+D8h] [rbp+20h]

  v2 = -1073741811;
  v57 = -1073741811;
  v54 = 0LL;
  v55 = 0LL;
  v53 = 0LL;
  v52[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
  do
  {
    do
    {
      NextElement = CmListGetNextElement((_QWORD **)&CallbackListHead, v52, 0);
      v5 = NextElement;
      v52[1] = NextElement;
      if ( !NextElement )
        goto LABEL_12;
    }
    while ( *((_QWORD *)NextElement + 3) != Cookie.QuadPart );
    v6 = *((_DWORD *)NextElement + 4);
    LODWORD(v56) = v6;
    if ( !v6 )
    {
      v19 = *(_QWORD **)v5;
      v20 = (void **)*((_QWORD *)v5 + 1);
      if ( *(char **)(*(_QWORD *)v5 + 8LL) == v5 && *v20 == v5 )
      {
        *v20 = v19;
        v19[1] = v20;
        ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v21, v22, v23);
        v2 = 0;
        v57 = 0;
        goto LABEL_17;
      }
LABEL_33:
      __fastfail(3u);
    }
  }
  while ( v6 < 0 );
  _InterlockedOr((volatile signed __int32 *)v5 + 4, 0x80000000);
  ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v8, v9);
  while ( 1 )
  {
    LODWORD(v56) = *((_DWORD *)v5 + 4);
    if ( (_DWORD)v56 == 0x80000000 )
      break;
    ExBlockOnAddressPushLock((__int64)&CallbackListDeleteEvent, (_QWORD *)v5 + 2, &v56, 4uLL, 0LL);
  }
  v10 = KeGetCurrentThread();
  --v10->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
  v11 = *(_QWORD **)v5;
  v12 = (void **)*((_QWORD *)v5 + 1);
  if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || *v12 != v5 )
    goto LABEL_33;
  *v12 = v11;
  v11[1] = v12;
  ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14, v15);
  v2 = 0;
  v57 = 0;
LABEL_12:
  if ( v2 < 0 )
  {
    ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v16, v17, v18);
    return v2;
  }
LABEL_17:
  *((_QWORD *)&v53 + 1) = &v53;
  *(_QWORD *)&v53 = &v53;
  v24 = 0;
  v25 = KeGetCurrentThread();
  --v25->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpContextListLock, 0LL);
  v26 = v5 + 64;
  v27 = (_QWORD *)*((_QWORD *)v5 + 8);
  v28 = v27;
  v52[3] = v5 + 64;
  while ( 1 )
  {
    v51 = v27;
    if ( v28 == v26 )
      break;
    v29 = (_QWORD *)*v27;
    v30 = v27 - 2;
    if ( ObReferenceObjectSafe(v27[4]) )
    {
      v31 = v30[2];
      v32 = (_QWORD *)v30[3];
      if ( *(_QWORD **)(v31 + 8) != v30 + 2 )
        goto LABEL_33;
      if ( (_QWORD *)*v32 != v30 + 2 )
        goto LABEL_33;
      *v32 = v31;
      *(_QWORD *)(v31 + 8) = v32;
      v33 = *v30;
      v34 = (_QWORD *)v30[1];
      if ( *(_QWORD **)(*v30 + 8LL) != v30 )
        goto LABEL_33;
      if ( (_QWORD *)*v34 != v30 )
        goto LABEL_33;
      *v34 = v33;
      *(_QWORD *)(v33 + 8) = v34;
      v35 = (_QWORD *)*((_QWORD *)&v53 + 1);
      if ( **((__int128 ***)&v53 + 1) != &v53 )
        goto LABEL_33;
      *v28 = &v53;
      v28[1] = v35;
      *v35 = v28;
      *((_QWORD *)&v53 + 1) = v28;
    }
    else
    {
      v24 = 1;
    }
    v27 = v29;
    v28 = v29;
    v26 = v5 + 64;
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v36, v37, v38);
  while ( 1 )
  {
    v39 = v53;
    if ( (__int128 *)v53 == &v53 )
      break;
    v40 = *(_QWORD *)v53;
    if ( *(__int128 **)(v53 + 8) != &v53 || *(_QWORD *)(v40 + 8) != (_QWORD)v53 )
      goto LABEL_33;
    *(_QWORD *)&v53 = *(_QWORD *)v53;
    *(_QWORD *)(v40 + 8) = &v53;
    v41 = (PADAPTER_OBJECT *)(v39 - 16);
    v52[2] = (_QWORD *)(v39 - 16);
    v54 = *(_OWORD *)(v39 - 16 + 48);
    (*((void (__fastcall **)(_QWORD, __int64, __int128 *))v5 + 5))(*((_QWORD *)v5 + 4), 40LL, &v54);
    HalPutDmaAdapter(v41[6]);
    ExFreePoolWithTag(v41, 0x63634D43u);
  }
  while ( v24 )
  {
    v42 = KeGetCurrentThread();
    --v42->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpContextListLock, 0LL);
    v51 = (_QWORD *)*((_QWORD *)v5 + 8);
    v43 = v51;
    ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v44, v45, v46);
    if ( v43 == v26 )
      v24 = 0;
    else
      ExBlockOnAddressPushLock((__int64)&CallbackListDeleteEvent, (_QWORD *)v5 + 8, &v51, 8uLL, 0LL);
  }
  if ( _InterlockedExchangeAdd(&CmpCallBackCount, 0xFFFFFFFF) == 1 )
  {
    v47 = RtlpInterlockedFlushSList(&CmpCallbackContextSList);
    while ( v47 )
    {
      v48 = v47;
      v47 = v47->Next;
      ExFreePoolWithTag(v48, 0);
    }
  }
  v49 = (void *)*((_QWORD *)v5 + 7);
  if ( v49 )
    ExFreePoolWithTag(v49, 0);
  ExFreePoolWithTag(v5, 0);
  return v2;
}
