/*
 * XREFs of ?VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEXT_DATA@@PEAVDXGCONTEXT@@@Z @ 0x1C003F7CC
 * Callers:
 *     VidSchCreateSystemDevices @ 0x1C00B80AC (VidSchCreateSystemDevices.c)
 *     VidSchCreateHwContext @ 0x1C00F5D30 (VidSchCreateHwContext.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     McTemplateK0pppp_EtwWriteTransfer @ 0x1C003C008 (McTemplateK0pppp_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x1C003C1BC (McTemplateK0pqqqqqqqqppp_EtwWriteTransfer.c)
 *     ?DxgkrnlContextHandleCompareFunction@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C003E30C (-DxgkrnlContextHandleCompareFunction@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?KmdContextHandleCompareFunction@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C003E328 (-KmdContextHandleCompareFunction@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?VidSchiIncrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C0040144 (-VidSchiIncrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     VidSchTerminateHwContext @ 0x1C00428B0 (VidSchTerminateHwContext.c)
 *     VidSchiUpdateDdiHwContextPriority @ 0x1C00F63D0 (VidSchiUpdateDdiHwContextPriority.c)
 */

struct VIDSCH_HW_CONTEXT *__fastcall VidSchiCreateHwContextInternal(
        struct _VIDSCH_DEVICE *a1,
        struct _VIDSCH_CONTEXT_DATA *a2,
        struct DXGCONTEXT *a3)
{
  __int64 v3; // r15
  __int64 Pool2; // rax
  char v8; // di
  __int64 v9; // rbx
  __int64 *v11; // rcx
  __int64 v12; // xmm1_8
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  struct _VIDSCH_DEVICE **v18; // rdx
  struct _VIDSCH_DEVICE *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rdx
  unsigned int v24; // r9d
  __int64 v25; // rax
  bool v26; // cf
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v29; // r8d
  __int64 v30; // r10
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  bool v35; // zf
  struct _VIDSCH_DEVICE *v36; // r9
  __int64 v37; // r8
  struct _RTL_BALANCED_NODE *v38; // r15
  struct _RTL_BALANCED_NODE *v39; // rsi
  __int64 v40; // r8
  struct _RTL_BALANCED_NODE *v41; // rax
  __int64 v42; // r8
  struct _RTL_BALANCED_NODE *v43; // r15
  struct _RTL_BALANCED_NODE *v44; // rsi
  struct _RTL_BALANCED_NODE *v45; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-59h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+98h] [rbp-41h]
  _QWORD v48[10]; // [rsp+A0h] [rbp-39h] BYREF

  v3 = *((_QWORD *)a1 + 4);
  Pool2 = ExAllocatePool2(64LL, 352LL, 1667328342LL);
  v8 = 0;
  v9 = Pool2;
  if ( !Pool2 )
  {
    WdLogSingleEntry0(3LL);
    return 0LL;
  }
  v11 = *(__int64 **)(v3 + 632);
  v12 = *((_QWORD *)a2 + 2);
  *(_OWORD *)(Pool2 + 56) = *(_OWORD *)a2;
  *(_DWORD *)Pool2 = 1667328342;
  *(_QWORD *)(Pool2 + 72) = v12;
  *(_QWORD *)(Pool2 + 24) = a3;
  *(_QWORD *)(Pool2 + 8) = a1;
  *(_DWORD *)(Pool2 + 80) = *((_DWORD *)a2 + 6);
  v13 = *((unsigned int *)a2 + 1);
  if ( (unsigned int)v13 < *(_DWORD *)(v3 + 704) )
    v11 += v13;
  v14 = *v11;
  *(_QWORD *)(v9 + 16) = *v11;
  v15 = ((__int64 (*)(void))DxgCoreInterface[6])();
  *(_QWORD *)(v9 + 248) = 0LL;
  *(_BYTE *)(v9 + 89) = BYTE1(*(_DWORD *)(v15 + 424)) & 1;
  *(_OWORD *)(v9 + 272) = 0LL;
  *(_OWORD *)(v9 + 288) = 0LL;
  *(_OWORD *)(v9 + 304) = 0LL;
  *(_QWORD *)(v9 + 320) = 0LL;
  KeInitializeEvent((PRKEVENT)(v9 + 272), SynchronizationEvent, 0);
  *(_QWORD *)(v9 + 336) = v9 + 328;
  *(_QWORD *)(v9 + 328) = v9 + 328;
  *(_QWORD *)(v9 + 232) = v9 + 224;
  *(_QWORD *)(v9 + 224) = v9 + 224;
  VidSchiIncrementHwContextReference((struct VIDSCH_HW_CONTEXT *)v9);
  SpinLock = (PKSPIN_LOCK)(v3 + 1728);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 1728), &LockHandle);
  v16 = *(_QWORD **)(v14 + 1704);
  v17 = (_QWORD *)(v9 + 208);
  if ( *v16 != v14 + 1696
    || (*v17 = v14 + 1696,
        *(_QWORD *)(v9 + 216) = v16,
        *v16 = v17,
        *(_QWORD *)(v14 + 1704) = v17,
        v18 = (struct _VIDSCH_DEVICE **)*((_QWORD *)a1 + 12),
        v19 = (struct _VIDSCH_DEVICE *)(v9 + 192),
        *v18 != (struct _VIDSCH_DEVICE *)((char *)a1 + 88)) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v19 = (char *)a1 + 88;
  *(_QWORD *)(v9 + 200) = v18;
  *v18 = v19;
  *((_QWORD *)a1 + 12) = v19;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( a3 )
  {
    *(_QWORD *)(v9 + 48) = *((_QWORD *)a3 + 23);
    v20 = *((_QWORD *)a3 + 60);
    *(_QWORD *)(v9 + 32) = v20;
    *(_QWORD *)(v20 + 8) = v9;
    goto LABEL_25;
  }
  v21 = ExAllocatePool2(64LL, 16LL, 1265072196LL);
  *(_QWORD *)(v9 + 32) = v21;
  if ( !v21 )
  {
    WdLogSingleEntry0(3LL);
LABEL_17:
    VidSchTerminateHwContext((PVOID)v9);
    return 0LL;
  }
  *(_BYTE *)(v9 + 90) = 1;
  *(_QWORD *)(v21 + 8) = v9;
  memset(v48, 0, 0x48uLL);
  v22 = *(_QWORD *)(v9 + 16);
  v23 = *(_QWORD *)(v3 + 632);
  v24 = *(_DWORD *)(v3 + 704);
  v48[0] = *(_QWORD *)(v9 + 32);
  v25 = *(unsigned __int16 *)(v22 + 4);
  v26 = (unsigned int)v25 < v24;
  v27 = v23 + 8 * v25;
  if ( !v26 )
    v27 = v23;
  LODWORD(v48[1]) = *(unsigned __int16 *)(*(_QWORD *)v27 + 8LL);
  v28 = *(unsigned __int16 *)(v22 + 4);
  if ( (unsigned int)v28 < v24 )
    v23 += 8 * v28;
  v29 = *(_DWORD *)a2;
  v30 = *(_QWORD *)(v3 + 8);
  HIDWORD(v48[1]) = 1 << *(_BYTE *)(*(_QWORD *)v23 + 6LL);
  v31 = *((_QWORD *)a1 + 2);
  LODWORD(v48[2]) = v48[2] & 0xFFFFFFF2 | ((v29 & 4 | (v29 >> 4) & 0x20) >> 2) | (4
                                                                                * (*(_BYTE *)(344LL
                                                                                            * *(unsigned __int16 *)(v14 + 6)
                                                                                            + *(_QWORD *)(*(_QWORD *)(v30 + 16) + 2680LL)
                                                                                            + 48) & 1 | 4));
  if ( ((int (__fastcall *)(__int64, __int64, _QWORD *))DxgCoreInterface[18])(v30, v31, v48) < 0 )
    goto LABEL_17;
  v35 = bTracingEnabled == 0;
  *(_QWORD *)(v9 + 48) = v48[0];
  if ( !v35 )
  {
    v36 = (struct _VIDSCH_DEVICE *)*((_QWORD *)a1 + 1);
    if ( !v36 )
      v36 = a1;
    if ( (byte_1C006E941 & 4) == 0 )
      goto LABEL_25;
    v37 = (2 * ((*(_DWORD *)(*(_QWORD *)(v9 + 8) + 48LL) >> 4) & 1)) | 1u;
    McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
      v48[6],
      &EventCreateContext,
      v37,
      (__int64)v36,
      v48[1],
      SBYTE4(v48[1]),
      SBYTE4(v48[4]),
      v48[5],
      SBYTE4(v48[5]),
      v48[6],
      SBYTE4(v48[6]),
      v37,
      v9);
  }
  if ( (byte_1C006E941 & 4) != 0 )
    McTemplateK0pppp_EtwWriteTransfer(v33, v32, v34, v9, v9, *(_QWORD *)(v9 + 48), *(_QWORD *)(v9 + 32));
LABEL_25:
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
  v38 = *(struct _RTL_BALANCED_NODE **)(v9 + 32);
  v39 = *(struct _RTL_BALANCED_NODE **)(v14 + 1736);
  LOBYTE(v40) = 0;
  if ( v39 )
  {
    while ( 1 )
    {
      if ( (int)DxgkrnlContextHandleCompareFunction(v38, v39) < 0 )
      {
        v41 = v39->Children[0];
        if ( !v39->Children[0] )
        {
          LOBYTE(v40) = 0;
          break;
        }
      }
      else
      {
        v41 = v39->Children[1];
        if ( !v41 )
        {
          LOBYTE(v40) = 1;
          break;
        }
      }
      v39 = v41;
    }
  }
  RtlAvlInsertNodeEx(v14 + 1736, v39, v40, v9 + 96);
  v43 = *(struct _RTL_BALANCED_NODE **)(v9 + 48);
  v44 = *(struct _RTL_BALANCED_NODE **)(v14 + 1744);
  if ( !v44 )
    goto LABEL_36;
  while ( (int)KmdContextHandleCompareFunction(v43, v44) < 0 )
  {
    v45 = v44->Children[0];
    if ( !v44->Children[0] )
      goto LABEL_36;
LABEL_38:
    v44 = v45;
  }
  v45 = v44->Children[1];
  if ( v45 )
    goto LABEL_38;
  v8 = 1;
LABEL_36:
  LOBYTE(v42) = v8;
  RtlAvlInsertNodeEx(v14 + 1744, v44, v42, v9 + 120);
  *(_BYTE *)(v9 + 91) = 1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  VidSchiUpdateDdiHwContextPriority(v9);
  return (struct VIDSCH_HW_CONTEXT *)v9;
}
