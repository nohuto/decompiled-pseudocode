/*
 * XREFs of ?VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEXT_DATA@@PEAVDXGCONTEXT@@@Z @ 0x1C0036FE8
 * Callers:
 *     VidSchCreateSystemDevices @ 0x1C009922C (VidSchCreateSystemDevices.c)
 *     VidSchCreateHwContext @ 0x1C00D3310 (VidSchCreateHwContext.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0017820 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018EC0 (memset.c)
 *     McTemplateK0pppp_EtwWriteTransfer @ 0x1C0033608 (McTemplateK0pppp_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x1C00336A8 (McTemplateK0pqqqqqqqqppp_EtwWriteTransfer.c)
 *     ?VidSchiIncrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C0037BC4 (-VidSchiIncrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     VidSchTerminateHwContext @ 0x1C003AB00 (VidSchTerminateHwContext.c)
 *     VidSchiUpdateDdiHwContextPriority @ 0x1C00D3B78 (VidSchiUpdateDdiHwContextPriority.c)
 */

struct VIDSCH_HW_CONTEXT *__fastcall VidSchiCreateHwContextInternal(
        struct _VIDSCH_DEVICE *a1,
        struct _VIDSCH_CONTEXT_DATA *a2,
        struct DXGCONTEXT *a3)
{
  __int64 v3; // r15
  char *PoolWithTag; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // di
  char *v11; // rbx
  __int64 v12; // rax
  __int64 v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r13
  char v18; // cl
  _QWORD *v19; // rdx
  _QWORD *v20; // rax
  struct _VIDSCH_DEVICE **v21; // rdx
  struct _VIDSCH_DEVICE *v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // r8
  __int64 v26; // rdx
  unsigned int v27; // r9d
  __int64 v28; // rax
  bool v29; // cf
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned int v32; // r8d
  __int64 v33; // r10
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  bool v38; // zf
  struct _VIDSCH_DEVICE *v39; // r9
  __int64 v40; // r8
  _QWORD *v41; // rdx
  __int64 v42; // r8
  _QWORD *v43; // rax
  __int64 v44; // r8
  _QWORD *v45; // rdx
  _QWORD *v46; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-51h] BYREF
  _QWORD v48[10]; // [rsp+A0h] [rbp-39h] BYREF

  v3 = *((_QWORD *)a1 + 4);
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x160uLL, 0x63616956u);
  v10 = 0;
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v12 = WdLogNewEntry5_WdWarning(v9, v8);
    WdLogEvent5_WdWarning(v12);
    return 0LL;
  }
  memset(PoolWithTag, 0, 0x160uLL);
  *(_DWORD *)v11 = 1667328342;
  *((_QWORD *)v11 + 3) = a3;
  *((_QWORD *)v11 + 1) = a1;
  *(_OWORD *)(v11 + 56) = *(_OWORD *)a2;
  *((_QWORD *)v11 + 9) = *((_QWORD *)a2 + 2);
  *((_DWORD *)v11 + 20) = *((_DWORD *)a2 + 6);
  v14 = *((unsigned int *)a2 + 1);
  v15 = *(_QWORD **)(v3 + 624);
  if ( (unsigned int)v14 < *(_DWORD *)(v3 + 696) )
    v15 += v14;
  *((_QWORD *)v11 + 2) = *v15;
  v16 = DxgCoreInterface[6]();
  v17 = *((_QWORD *)v11 + 2);
  v18 = *(_BYTE *)(v16 + 347);
  *((_QWORD *)v11 + 31) = 0LL;
  v11[89] = (v18 & 0x20) != 0;
  *((_OWORD *)v11 + 17) = 0LL;
  *((_OWORD *)v11 + 18) = 0LL;
  *((_OWORD *)v11 + 19) = 0LL;
  *((_QWORD *)v11 + 40) = 0LL;
  KeInitializeEvent((PRKEVENT)(v11 + 272), SynchronizationEvent, 0);
  *((_QWORD *)v11 + 42) = v11 + 328;
  *((_QWORD *)v11 + 41) = v11 + 328;
  *((_QWORD *)v11 + 29) = v11 + 224;
  *((_QWORD *)v11 + 28) = v11 + 224;
  VidSchiIncrementHwContextReference((struct VIDSCH_HW_CONTEXT *)v11);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 1712), &LockHandle);
  v19 = *(_QWORD **)(v17 + 1696);
  v20 = v11 + 208;
  if ( *v19 != v17 + 1688
    || (*v20 = v17 + 1688,
        *((_QWORD *)v11 + 27) = v19,
        *v19 = v20,
        *(_QWORD *)(v17 + 1696) = v20,
        v21 = (struct _VIDSCH_DEVICE **)*((_QWORD *)a1 + 12),
        v22 = (struct _VIDSCH_DEVICE *)(v11 + 192),
        *v21 != (struct _VIDSCH_DEVICE *)((char *)a1 + 88)) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v22 = (char *)a1 + 88;
  *((_QWORD *)v11 + 25) = v21;
  *v21 = v22;
  *((_QWORD *)a1 + 12) = v22;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( a3 )
  {
    *((_QWORD *)v11 + 6) = *((_QWORD *)a3 + 23);
    v23 = *((_QWORD *)a3 + 62);
    *((_QWORD *)v11 + 4) = v23;
    *(_QWORD *)(v23 + 8) = v11;
  }
  else
  {
    v24 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x10uLL, 0x4B677844u);
    if ( v24 )
      *(_OWORD *)v24 = 0LL;
    *((_QWORD *)v11 + 4) = v24;
    if ( !v24 )
      goto LABEL_40;
    v11[90] = 1;
    v24[1] = v11;
    memset(v48, 0, 0x48uLL);
    v25 = *((_QWORD *)v11 + 2);
    v26 = *(_QWORD *)(v3 + 624);
    v27 = *(_DWORD *)(v3 + 696);
    v48[0] = *((_QWORD *)v11 + 4);
    v28 = *(unsigned __int16 *)(v25 + 4);
    v29 = (unsigned int)v28 < v27;
    v30 = v26 + 8 * v28;
    if ( !v29 )
      v30 = v26;
    LODWORD(v48[1]) = *(unsigned __int16 *)(*(_QWORD *)v30 + 8LL);
    v31 = *(unsigned __int16 *)(v25 + 4);
    if ( (unsigned int)v31 < v27 )
      v26 += 8 * v31;
    v32 = *(_DWORD *)a2;
    v33 = *(_QWORD *)(v3 + 8);
    HIDWORD(v48[1]) = 1 << *(_BYTE *)(*(_QWORD *)v26 + 6LL);
    v34 = *((_QWORD *)a1 + 2);
    LODWORD(v48[2]) = v48[2] & 0xFFFFFFF2 | ((v32 & 4 | (v32 >> 4) & 0x20) >> 2) | (4
                                                                                  * (*(_BYTE *)(360LL
                                                                                              * *(unsigned __int16 *)(v17 + 6)
                                                                                              + *(_QWORD *)(*(_QWORD *)(v33 + 16) + 2584LL)
                                                                                              + 48) & 1 | 4));
    if ( ((int (__fastcall *)(__int64, __int64, _QWORD *))DxgCoreInterface[18])(v33, v34, v48) < 0 )
    {
LABEL_40:
      VidSchTerminateHwContext(v11);
      return 0LL;
    }
    v38 = bTracingEnabled == 0;
    *((_QWORD *)v11 + 6) = v48[0];
    if ( !v38 )
    {
      v39 = (struct _VIDSCH_DEVICE *)*((_QWORD *)a1 + 1);
      if ( !v39 )
        v39 = a1;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
        goto LABEL_25;
      v40 = (2 * ((*(_DWORD *)(*((_QWORD *)v11 + 1) + 48LL) >> 4) & 1)) | 1u;
      McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
        v48[6],
        &EventCreateContext,
        v40,
        (__int64)v39,
        v48[1],
        SBYTE4(v48[1]),
        SBYTE4(v48[4]),
        v48[5],
        SBYTE4(v48[5]),
        v48[6],
        SBYTE4(v48[6]),
        v40,
        v11);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pppp_EtwWriteTransfer(v36, v35, v37, v11, v11, *((_QWORD *)v11 + 6), *((_QWORD *)v11 + 4));
  }
LABEL_25:
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 1712), &LockHandle);
  v41 = *(_QWORD **)(v17 + 1728);
  LOBYTE(v42) = 0;
  if ( v41 )
  {
    while ( 1 )
    {
      if ( *((_QWORD *)v11 + 4) >= *(v41 - 8) )
      {
        v43 = (_QWORD *)v41[1];
        if ( !v43 )
        {
          LOBYTE(v42) = 1;
          break;
        }
      }
      else
      {
        v43 = (_QWORD *)*v41;
        if ( !*v41 )
          break;
      }
      v41 = v43;
    }
  }
  RtlAvlInsertNodeEx(v17 + 1728, v41, v42, v11 + 96);
  v45 = *(_QWORD **)(v17 + 1736);
  if ( !v45 )
    goto LABEL_39;
  while ( *((_QWORD *)v11 + 6) < *(v45 - 9) )
  {
    v46 = (_QWORD *)*v45;
    if ( !*v45 )
      goto LABEL_39;
LABEL_37:
    v45 = v46;
  }
  v46 = (_QWORD *)v45[1];
  if ( v46 )
    goto LABEL_37;
  v10 = 1;
LABEL_39:
  LOBYTE(v44) = v10;
  RtlAvlInsertNodeEx(v17 + 1736, v45, v44, v11 + 120);
  v11[91] = 1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  VidSchiUpdateDdiHwContextPriority(v11);
  return (struct VIDSCH_HW_CONTEXT *)v11;
}
