/*
 * XREFs of VidSchSubmitDeviceCommand @ 0x1C00059B0
 * Callers:
 *     ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C007C610 (-OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER.c)
 *     ?TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C007DEF0 (-TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FL.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0086DB4 (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 * Callees:
 *     ?VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIIW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C0004BDC (-VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIIW4_VIDSCH_.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x1C00136F8 (VidSchiCheckConditionDeviceCommand.c)
 *     ?HasOutstandingPresentReferences@_VIDMM_GLOBAL_ALLOC_NONPAGED@@QEAA_NXZ @ 0x1C0013E08 (-HasOutstandingPresentReferences@_VIDMM_GLOBAL_ALLOC_NONPAGED@@QEAA_NXZ.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0024310 (McTemplateK0p_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchSubmitDeviceCommand(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // r9d
  unsigned int v11; // ebp
  char v12; // bl
  __int64 v13; // rbx
  KIRQL v14; // di
  _QWORD *v15; // rsi
  _QWORD *v16; // r8
  char v18; // si
  __int64 v19; // r8
  unsigned int v20; // r9d
  unsigned int v21; // r11d
  _QWORD *m; // r10
  unsigned int v23; // edx
  bool v24; // cc
  _QWORD *n; // rdx
  int v26; // ebx
  _QWORD *i; // r10
  unsigned int v28; // edx
  _QWORD *j; // rdx
  _QWORD *v30; // rdx
  _QWORD *v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // r10
  __int64 v34; // rax
  _QWORD *ii; // r10
  bool v36; // bl
  unsigned int v37; // eax
  __int64 *v38; // rcx
  __int64 v39; // rax
  __int64 **v40; // rdx
  _QWORD *k; // r10
  bool v42; // bp
  unsigned int v43; // eax
  struct _KLOCK_QUEUE_HANDLE *p_LockHandle; // rcx
  __int64 v45; // rcx
  __int64 v46; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE v48; // [rsp+48h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE v49; // [rsp+60h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v50; // [rsp+78h] [rbp-30h] BYREF

  if ( !a1 || !a2 )
  {
    v46 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v46 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v46);
    return 3221225485LL;
  }
  v5 = *(_QWORD *)(a1 + 32);
  v6 = *(_QWORD *)(a2 + 48);
  if ( *(_DWORD *)(a2 + 40) )
  {
    v18 = 1;
    if ( *(_DWORD *)a2 == 1 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 1712), &v48);
      v19 = *(_QWORD *)(a1 + 1592);
      v20 = 0;
      v21 = 0;
      if ( *(_QWORD *)(a1 + 1600) < v19 && (*(_DWORD *)(a1 + 1584) || *(_DWORD *)(a1 + 1572)) )
      {
        for ( i = *(_QWORD **)(a1 + 72); i != (_QWORD *)(a1 + 72); v20 = v28 )
        {
          v28 = v20 + 1;
          v24 = i[19] <= i[17];
          i = (_QWORD *)*i;
          if ( v24 )
            v28 = v20;
        }
        for ( j = *(_QWORD **)(a1 + 88); j != (_QWORD *)(a1 + 88); j = (_QWORD *)*j )
        {
          for ( k = (_QWORD *)j[4]; k != j + 4; v21 = v43 )
          {
            v42 = k[8] > k[7] || k[11] > k[10];
            k = (_QWORD *)*k;
            v43 = v21 + 1;
            if ( !v42 )
              v43 = v21;
          }
        }
        if ( v20 || v21 )
        {
          v18 = 0;
          if ( *(_DWORD *)(a2 + 40) == 3 )
          {
            v30 = *(_QWORD **)(a2 + 48);
            v31 = v30 + 27;
            v32 = v30[27];
            if ( v32 )
            {
              if ( *(_QWORD **)(v32 + 8) != v31 )
                goto LABEL_53;
              v33 = (_QWORD *)v30[28];
              if ( (_QWORD *)*v33 != v31 )
                goto LABEL_53;
              *v33 = v32;
              *(_QWORD *)(v32 + 8) = v33;
              *v31 = 0LL;
              v34 = v30[12];
              v30[28] = 0LL;
              _InterlockedDecrement((volatile signed __int32 *)(v34 + 8));
            }
          }
          v26 = VidSchiAddPendingCommandToSyncPointList(a1, v6, v19, v20, v21, 3);
          if ( v26 < 0 )
          {
            p_LockHandle = &v48;
            goto LABEL_65;
          }
        }
        else
        {
          *(_QWORD *)(a1 + 1600) = v19;
        }
      }
      KeReleaseInStackQueuedSpinLock(&v48);
      if ( !v18 )
        return 0LL;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v6 + 96) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v45 = *(_QWORD *)(v6 + 96);
      if ( _InterlockedCompareExchange16((volatile signed __int16 *)(v45 + 4), 2, 1) == 1
        && bTracingEnabled
        && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        McTemplateK0p_EtwWriteTransfer(v45, &EventCompleteOfferAllocation, a3, v6);
      }
    }
    return 0LL;
  }
  v7 = *(_QWORD *)(v6 + 8);
  *(_BYTE *)v6 = 1;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 1712), &LockHandle);
  v9 = *(_QWORD *)(a1 + 1592);
  v10 = 0;
  v11 = 0;
  if ( *(_DWORD *)a2 )
  {
    if ( *(_QWORD *)(a1 + 1600) >= v9 || !*(_DWORD *)(a1 + 1584) && !*(_DWORD *)(a1 + 1572) )
    {
LABEL_6:
      if ( !*(_DWORD *)(v7 + 156)
        && !*(_DWORD *)(v7 + 104)
        && ((*(_BYTE *)(v7 + 25) & 1) == 0
         || !_VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(*(_VIDMM_GLOBAL_ALLOC_NONPAGED **)(v7 + 96))) )
      {
        v12 = 1;
        goto LABEL_10;
      }
      goto LABEL_67;
    }
    for ( m = *(_QWORD **)(a1 + 72); m != (_QWORD *)(a1 + 72); v10 = v23 )
    {
      v23 = v10 + 1;
      v24 = m[19] <= m[17];
      m = (_QWORD *)*m;
      if ( v24 )
        v23 = v10;
    }
    for ( n = *(_QWORD **)(a1 + 88); n != (_QWORD *)(a1 + 88); n = (_QWORD *)*n )
    {
      for ( ii = (_QWORD *)n[4]; ii != n + 4; v11 = v37 )
      {
        v36 = ii[8] > ii[7] || ii[11] > ii[10];
        ii = (_QWORD *)*ii;
        v37 = v11 + 1;
        if ( !v36 )
          v37 = v11;
      }
    }
    if ( !v10 && !v11 )
    {
      *(_QWORD *)(a1 + 1600) = v9;
      goto LABEL_6;
    }
    v26 = VidSchiAddPendingCommandToSyncPointList(a1, v7, v9, v10, v11, 0);
    if ( v26 >= 0 )
    {
LABEL_28:
      *(_BYTE *)v6 = 0;
      v12 = 0;
      goto LABEL_10;
    }
    p_LockHandle = &LockHandle;
LABEL_65:
    KeReleaseInStackQueuedSpinLock(p_LockHandle);
    return (unsigned int)v26;
  }
  if ( !(unsigned int)VidSchiCheckConditionDeviceCommand(v8, v7, v9, 0LL) )
  {
LABEL_67:
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 1744LL), &v49);
    v38 = (__int64 *)(v7 + 200);
    v39 = *(_QWORD *)(a1 + 32) + 1776LL;
    v40 = *(__int64 ***)(*(_QWORD *)(a1 + 32) + 1784LL);
    if ( *v40 != (__int64 *)v39 )
      goto LABEL_53;
    *v38 = v39;
    *(_QWORD *)(v7 + 208) = v40;
    *v40 = v38;
    *(_QWORD *)(v39 + 8) = v38;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v49);
    goto LABEL_28;
  }
  v12 = 1;
LABEL_10:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v12 )
  {
    v13 = **(_QWORD **)(v7 + 8);
    v14 = KfRaiseIrql(2u);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v13 + 44352), &v50);
    v15 = (_QWORD *)(v7 + 200);
    v16 = *(_QWORD **)(v13 + 44368);
    if ( *v16 == v13 + 44360 )
    {
      *v15 = v13 + 44360;
      v15[1] = v16;
      *v16 = v15;
      *(_QWORD *)(v13 + 44368) = v15;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v50);
      KeSetEvent(*(PRKEVENT *)(v13 + 44344), 0, 0);
      KeLowerIrql(v14);
      return 0LL;
    }
LABEL_53:
    __fastfail(3u);
  }
  return 0LL;
}
