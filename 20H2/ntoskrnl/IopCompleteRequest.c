/*
 * XREFs of IopCompleteRequest @ 0x1402186C0
 * Callers:
 *     IoRemoveIoCompletion @ 0x140207710 (IoRemoveIoCompletion.c)
 *     NtSetInformationFile @ 0x14020FE90 (NtSetInformationFile.c)
 *     IopfCompleteRequest @ 0x140292590 (IopfCompleteRequest.c)
 *     IopCompleteIrpInFileObjectList @ 0x140294E84 (IopCompleteIrpInFileObjectList.c)
 *     NtQueryInformationFile @ 0x1405FB1C0 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x1406107D0 (IopSynchronousServiceTail.c)
 *     IopAbortRequest @ 0x140893830 (IopAbortRequest.c)
 * Callees:
 *     IopUpdateWriteTransferCount @ 0x140209E80 (IopUpdateWriteTransferCount.c)
 *     IoFreeMdl @ 0x14020A410 (IoFreeMdl.c)
 *     IoFreeIrp @ 0x140218F40 (IoFreeIrp.c)
 *     ObDereferenceObjectDeferDelete @ 0x140219220 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     IopDequeueIrpFromThread @ 0x14021B3A0 (IopDequeueIrpFromThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     KeInsertQueueEx @ 0x140295180 (KeInsertQueueEx.c)
 *     KeInitializeApc @ 0x1402D69A0 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1402EBBB0 (KeInsertQueueApc.c)
 *     IopSkipCompletionPort @ 0x140328304 (IopSkipCompletionPort.c)
 *     IopDequeueIrpFromFileObject @ 0x14038D820 (IopDequeueIrpFromFileObject.c)
 *     IopDecrementCompletionContextUsageCount @ 0x1403F0294 (IopDecrementCompletionContextUsageCount.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x1403F035C (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     IopProcessBufferedIoCompletion @ 0x1403F0428 (IopProcessBufferedIoCompletion.c)
 *     IopUpdateIrpTransferCount @ 0x1403F0538 (IopUpdateIrpTransferCount.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     IopDecrementIrpRefCount @ 0x1404FEB8C (IopDecrementIrpRefCount.c)
 *     IopExceptionFilter @ 0x1404FEEDC (IopExceptionFilter.c)
 *     FeatureServicing_40524482_EnableKey @ 0x1405CBC40 (FeatureServicing_40524482_EnableKey.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall IopCompleteRequest(__int64 a1, __int64 a2, _QWORD *a3, ULONG_PTR *a4, _QWORD *a5)
{
  IRP *v6; // r14
  struct _KTHREAD *CurrentThread; // r13
  ULONG_PTR v8; // rsi
  unsigned int *v9; // r15
  unsigned int v10; // eax
  int v11; // ecx
  unsigned __int64 v12; // r13
  struct _MDL *v13; // rcx
  struct _MDL *v14; // rbx
  struct _DMA_ADAPTER *v15; // rcx
  __int64 v16; // rcx
  struct _KEVENT *v17; // rcx
  IRP *v18; // rcx
  struct _DMA_ADAPTER *v19; // rbx
  __int64 v20; // r15
  __int64 v21; // rcx
  int v22; // r13d
  int v23; // r8d
  __int64 v24; // rcx
  int v25; // r8d
  __int64 v26; // r8
  int v27; // ecx
  IRP *v28; // rcx
  int v29; // eax
  struct _MDL *v30; // rcx
  struct _MDL *Next; // rbx
  struct _KEVENT *v32; // rcx
  struct _DMA_ADAPTER *v33; // rcx
  struct _DMA_ADAPTER *v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rcx
  struct _KEVENT *v37; // rcx
  int v38; // ecx
  int v39; // eax
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rcx
  struct _KTHREAD *v42; // rax
  __int64 v43; // rax
  unsigned __int64 v44; // rcx
  struct _KTHREAD *v45; // rax
  int v46; // r8d
  __int64 v47; // rcx
  int v48; // r8d
  __int64 v49; // r8
  int v50; // ecx
  IRP *v51; // rcx
  struct _DMA_ADAPTER *v52; // [rsp+48h] [rbp-80h]
  struct _KTHREAD *v53; // [rsp+50h] [rbp-78h]
  __int64 v54; // [rsp+70h] [rbp-58h]
  char v55; // [rsp+E0h] [rbp+18h]

  v6 = (IRP *)(a1 - 120);
  CurrentThread = KeGetCurrentThread();
  v53 = CurrentThread;
  v8 = *a4;
  if ( !a3 || (v55 = 1, *a3 != 1LL) )
    v55 = 0;
  v9 = (unsigned int *)(a1 - 104);
  v10 = *(_DWORD *)(a1 - 104);
  if ( (v10 & 0x80u) != 0 )
  {
    *(_DWORD *)(v8 + 56) = *(_DWORD *)(a1 - 72);
    *(_QWORD *)(a1 + 40) = *a5;
    KeSetEvent((PRKEVENT)(v8 + 152), 0, 0);
    return;
  }
  v11 = EnableFeatureServicing_40524482;
  if ( (unsigned int)EnableFeatureServicing_40524482 >= 2 )
  {
    v11 = (unsigned __int8)FeatureServicing_40524482_EnableKey();
    v10 = *v9;
  }
  if ( !v11 )
  {
    if ( (v10 & 0x10) != 0 )
    {
      if ( (v10 & 0x40) != 0 )
      {
        v29 = *(_DWORD *)(a1 - 72);
        if ( v29 != -2147483626 && (v29 & 0xC0000000) != 0xC0000000 )
          memmove(*(void **)(a1 - 8), *(const void **)(a1 - 96), *(_QWORD *)(a1 - 64));
      }
      v10 = *v9;
      if ( (*v9 & 0x20) != 0 )
      {
        ExFreePoolWithTag(*(PVOID *)(a1 - 96), 0);
        v10 = *v9;
      }
    }
    *v9 = v10 & 0xFFFFFFCF;
    v30 = *(struct _MDL **)(a1 - 112);
    if ( v30 )
    {
      do
      {
        Next = v30->Next;
        IoFreeMdl(v30);
        v30 = Next;
      }
      while ( Next );
    }
    *(_QWORD *)(a1 - 112) = 0LL;
    if ( (*(_DWORD *)(a1 - 72) & 0xC0000000) == 0xC0000000 )
    {
      if ( !*(_BYTE *)(a1 - 55) )
        goto LABEL_98;
      if ( (*v9 & 4) != 0 || v8 && (*(_DWORD *)(v8 + 80) & 2) != 0 )
      {
        if ( !v8 )
          goto LABEL_98;
        if ( (*v9 & 4) != 0 )
        {
          *(_OWORD *)*(_QWORD *)(a1 - 48) = *(_OWORD *)(a1 - 72);
          v32 = *(struct _KEVENT **)(a1 - 40);
          if ( v32 )
          {
LABEL_97:
            KeSetEvent(v32, 0, 0);
LABEL_98:
            if ( (*v9 & 0x2000) != 0 )
              IopDequeueIrpFromFileObject(v6, v8);
            if ( v8 )
              ObDereferenceObjectDeferDelete((PVOID)v8);
            v33 = *(struct _DMA_ADAPTER **)(a1 - 40);
            if ( v33 && v8 && (*v9 & 4) == 0 )
              HalPutDmaAdapter(v33);
            v18 = v6;
            if ( (*v9 & 0x8000) == 0 )
              goto LABEL_45;
LABEL_107:
            if ( !(unsigned int)IopDecrementIrpRefCount(v18) )
              IoFreeIrp(v6);
            return;
          }
        }
        else
        {
          *(_DWORD *)(v8 + 56) = *(_DWORD *)(a1 - 72);
        }
        v32 = (struct _KEVENT *)(v8 + 152);
        goto LABEL_97;
      }
    }
    v34 = 0LL;
    v52 = 0LL;
    v54 = 0LL;
    if ( v8 )
    {
      v35 = *(_QWORD *)(v8 + 176);
      if ( v35 )
      {
        if ( (*v9 & 0x2000) != 0 )
        {
          v34 = *(struct _DMA_ADAPTER **)v35;
          v52 = *(struct _DMA_ADAPTER **)v35;
          v54 = *(_QWORD *)(v35 + 8);
        }
        else
        {
          IopIncrementCompletionContextUsageCountAndReadData(v8);
          v34 = 0LL;
        }
        if ( v34 )
          ObfReferenceObject(v34);
      }
    }
    v36 = *(_QWORD *)(a1 - 48);
    if ( (*(_BYTE *)(a1 - 49) & 0x10) != 0 )
      *(_DWORD *)(v36 + 4) = *(_DWORD *)(a1 - 64);
    else
      *(_QWORD *)(v36 + 8) = *(_QWORD *)(a1 - 64);
    *(_DWORD *)v36 = *(_DWORD *)(a1 - 72);
    v37 = *(struct _KEVENT **)(a1 - 40);
    if ( v37 )
    {
      KeSetEvent(v37, 0, 0);
      if ( !v8 )
        goto LABEL_130;
      v38 = *(_DWORD *)(a1 - 104);
      if ( (v38 & 4) == 0 )
      {
        HalPutDmaAdapter(*(PADAPTER_OBJECT *)(a1 - 40));
        v38 = *(_DWORD *)(a1 - 104);
      }
      if ( (*(_DWORD *)(v8 + 80) & 2) == 0 || (v38 & 0x1000) != 0 )
      {
LABEL_130:
        v39 = *(_DWORD *)(a1 - 104);
        if ( (v39 & 0x2000) != 0 )
          v40 = *(_QWORD *)(a1 - 32) & 0xFFFFFFFFFFFFFFF9uLL;
        else
          v40 = 0LL;
        if ( (v39 & 0x100) != 0 )
        {
          v41 = *(unsigned int *)(a1 - 64);
          if ( v40 )
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v40 + 1576), *(unsigned int *)(a1 - 64));
          }
          else
          {
            v42 = KeGetCurrentThread();
            v42->ReadTransferCount += v41;
          }
          __addgsqword(0x2EE8u, v41);
        }
        else
        {
          if ( (v39 & 0x200) != 0 )
          {
            IopUpdateWriteTransferCount(*(_DWORD *)(a1 - 64), v40);
            goto LABEL_146;
          }
          v43 = *(_QWORD *)(a1 - 64);
          if ( v43 < 0 )
          {
LABEL_146:
            if ( (*(_DWORD *)(a1 - 104) & 0x2000) != 0 )
            {
              IopDequeueIrpFromFileObject(v6, v8);
            }
            else
            {
              *(_QWORD *)(a1 + 32) = CurrentThread;
              IopDequeueIrpFromThread(v6);
            }
            v46 = *(_DWORD *)(a1 - 104) & 0x8000;
            if ( v46 || (*(_QWORD *)(a1 - 32) &= ~1uLL, (v47 = *(_QWORD *)(a1 - 32)) == 0) )
            {
              if ( v34 && *(_QWORD *)(a1 - 24) && !(unsigned int)IopSkipCompletionPort(v8, v6) )
              {
                v49 = 0LL;
                if ( v8 )
                {
                  v50 = *(_DWORD *)(*(_QWORD *)(v8 + 8) + 72LL);
                  if ( v50 == 8 || v50 == 20 )
                    v49 = 1LL;
                }
                *(_QWORD *)a1 = v54;
                *(_DWORD *)(a1 + 64) = 0;
                KeInsertQueueEx(v34, a1 + 48, v49, 0LL);
                goto LABEL_167;
              }
              v51 = v6;
              if ( v46 )
              {
                if ( (unsigned int)IopDecrementIrpRefCount(v6) )
                  goto LABEL_167;
                v51 = v6;
              }
              IoFreeIrp(v51);
            }
            else
            {
              if ( v55 )
                v48 = *(char *)(a1 - 50);
              else
                v48 = 2;
              KeInitializeApc(
                a1,
                (_DWORD)CurrentThread,
                v48,
                (unsigned int)IopUserRundown,
                (__int64)IopUserRundown,
                v47,
                *(_BYTE *)(a1 - 56),
                *(_QWORD *)(a1 - 24));
              KeInsertQueueApc(a1, *(_QWORD *)(a1 - 48), 0LL, 2LL);
            }
LABEL_167:
            if ( v34 )
              HalPutDmaAdapter(v34);
            goto LABEL_169;
          }
          v44 = (unsigned int)v43;
          if ( v40 )
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v40 + 1592), (unsigned int)v43);
          }
          else
          {
            v45 = KeGetCurrentThread();
            v45->OtherTransferCount += v44;
          }
          __addgsqword(0x2EF8u, v44);
        }
        v34 = v52;
        goto LABEL_146;
      }
    }
    else
    {
      if ( !v8 )
        goto LABEL_130;
      if ( (*(_DWORD *)(v8 + 80) & 0x4000000) != 0 )
        goto LABEL_129;
    }
    KeSetEvent((PRKEVENT)(v8 + 152), 0, 0);
LABEL_129:
    *(_DWORD *)(v8 + 56) = *(_DWORD *)(a1 - 72);
    goto LABEL_130;
  }
  if ( (v10 & 0x2000) != 0 )
    v12 = *(_QWORD *)(a1 - 32) & 0xFFFFFFFFFFFFFFF9uLL;
  else
    v12 = 0LL;
  IopProcessBufferedIoCompletion(v6);
  v13 = *(struct _MDL **)(a1 - 112);
  if ( v13 )
  {
    do
    {
      v14 = v13->Next;
      IoFreeMdl(v13);
      v13 = v14;
    }
    while ( v14 );
  }
  *(_QWORD *)(a1 - 112) = 0LL;
  if ( (*(_DWORD *)(a1 - 72) & 0xC0000000) == 0xC0000000 && !*(_BYTE *)(a1 - 55) )
  {
    v15 = *(struct _DMA_ADAPTER **)(a1 - 40);
    if ( v15 && v8 && (*v9 & 4) == 0 )
      HalPutDmaAdapter(v15);
    goto LABEL_34;
  }
  v16 = *(_QWORD *)(a1 - 48);
  if ( (*(_BYTE *)(a1 - 49) & 0x10) != 0 )
    *(_DWORD *)(v16 + 4) = *(_DWORD *)(a1 - 64);
  else
    *(_QWORD *)(v16 + 8) = *(_QWORD *)(a1 - 64);
  *(_DWORD *)v16 = *(_DWORD *)(a1 - 72);
  v17 = *(struct _KEVENT **)(a1 - 40);
  if ( !v17 )
  {
    if ( !v8 )
      goto LABEL_34;
    if ( (*(_DWORD *)(v8 + 80) & 0x4000000) != 0 )
    {
LABEL_33:
      *(_DWORD *)(v8 + 56) = *(_DWORD *)(a1 - 72);
      goto LABEL_34;
    }
LABEL_32:
    KeSetEvent((PRKEVENT)(v8 + 152), 0, 0);
    goto LABEL_33;
  }
  KeSetEvent(v17, 0, 0);
  if ( v8 )
  {
    if ( (*(_DWORD *)(a1 - 104) & 4) == 0 )
      HalPutDmaAdapter(*(PADAPTER_OBJECT *)(a1 - 40));
    if ( (*(_DWORD *)(v8 + 80) & 2) != 0 && (*(_DWORD *)(a1 - 104) & 0x1000) == 0 )
      goto LABEL_32;
  }
LABEL_34:
  if ( (*(_DWORD *)(a1 - 72) & 0xC0000000) == 0xC0000000
    && (!*(_BYTE *)(a1 - 55) || (*(_DWORD *)(a1 - 104) & 4) != 0 || v8 && (*(_DWORD *)(v8 + 80) & 2) != 0) )
  {
    if ( (*(_DWORD *)(a1 - 104) & 0x2000) != 0 )
      IopDequeueIrpFromFileObject(v6, v8);
    if ( v8 )
      ObDereferenceObjectDeferDelete((PVOID)v8);
    v18 = v6;
    if ( (*(_DWORD *)(a1 - 104) & 0x8000) == 0 )
    {
      CurrentThread = v53;
LABEL_45:
      *(_QWORD *)(a1 + 32) = CurrentThread;
      IopDequeueIrpFromThread(v18);
      IoFreeIrp(v6);
      return;
    }
    goto LABEL_107;
  }
  v19 = 0LL;
  v20 = 0LL;
  if ( v8 )
  {
    v21 = *(_QWORD *)(v8 + 176);
    if ( v21 )
    {
      if ( (*(_DWORD *)(a1 - 104) & 0x2000) != 0 )
      {
        v19 = *(struct _DMA_ADAPTER **)v21;
        v20 = *(_QWORD *)(v21 + 8);
      }
      else
      {
        IopIncrementCompletionContextUsageCountAndReadData(v8);
        v19 = 0LL;
        v20 = 0LL;
      }
      if ( v19 )
        ObfReferenceObject(v19);
    }
  }
  IopUpdateIrpTransferCount(v6, v12);
  if ( (*(_DWORD *)(a1 - 104) & 0x2000) != 0 )
  {
    IopDequeueIrpFromFileObject(v6, v8);
    v22 = (int)v53;
  }
  else
  {
    v22 = (int)v53;
    *(_QWORD *)(a1 + 32) = v53;
    IopDequeueIrpFromThread(v6);
  }
  v23 = *(_DWORD *)(a1 - 104) & 0x8000;
  if ( v23 || (*(_QWORD *)(a1 - 32) &= ~1uLL, (v24 = *(_QWORD *)(a1 - 32)) == 0) )
  {
    if ( v19 && *(_QWORD *)(a1 - 24) && !(unsigned int)IopSkipCompletionPort(v8, v6) )
    {
      v26 = 0LL;
      if ( v8 )
      {
        v27 = *(_DWORD *)(*(_QWORD *)(v8 + 8) + 72LL);
        if ( v27 == 8 || v27 == 20 )
          v26 = 1LL;
      }
      *(_QWORD *)a1 = v20;
      *(_DWORD *)(a1 + 64) = 0;
      KeInsertQueueEx(v19, a1 + 48, v26, 0LL);
      goto LABEL_74;
    }
    v28 = v6;
    if ( v23 )
    {
      if ( (unsigned int)IopDecrementIrpRefCount(v6) )
        goto LABEL_74;
      v28 = v6;
    }
    IoFreeIrp(v28);
  }
  else
  {
    if ( v55 )
      v25 = *(char *)(a1 - 50);
    else
      v25 = 2;
    KeInitializeApc(
      a1,
      v22,
      v25,
      (unsigned int)IopUserRundown,
      (__int64)IopUserRundown,
      v24,
      *(_BYTE *)(a1 - 56),
      *(_QWORD *)(a1 - 24));
    KeInsertQueueApc(a1, *(_QWORD *)(a1 - 48), 0LL, 2LL);
  }
LABEL_74:
  if ( v19 )
    HalPutDmaAdapter(v19);
LABEL_169:
  if ( v8 )
    ObDereferenceObjectDeferDelete((PVOID)v8);
}
