/*
 * XREFs of VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002F370
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x1C0002980 (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0002C90 (VidSchiCompleteFlipEntry.c)
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x1C0003E20 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0009E00 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     ?NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C000EC18 (-NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C000F47C (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0010CE0 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00112BC (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C00150C0 (VidSchiPropagatePresentHistoryToken.c)
 *     __security_check_cookie @ 0x1C0017740 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00185C0 (memset.c)
 *     ?VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEBU_VIDSCH_CALL_EXECUTE_FLIP@@W4_VIDSCH_FLIP_STATUS@@I@Z @ 0x1C002B028 (-VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEBU_.c)
 *     VidSchiComputeFlipEntryStatusAfterFlip @ 0x1C002F0DC (VidSchiComputeFlipEntryStatusAfterFlip.c)
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1C0031660 (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 *     VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x1C0031EE0 (VidSchiUnreferenceDisplayingAllocationsForThisEntry.c)
 */

void __fastcall VidSchiExecuteMmIoFlipAtPassiveLevel(__int64 a1)
{
  __int64 v1; // r13
  _DWORD *v3; // r14
  __int64 v4; // rsi
  __int64 v5; // r12
  __int64 v6; // r15
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  struct _D3DKMT_PRESENTHISTORYTOKEN *v15; // r8
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  char v23; // [rsp+28h] [rbp-E0h]
  int v24; // [rsp+68h] [rbp-A0h] BYREF
  int v25; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v26; // [rsp+70h] [rbp-98h] BYREF
  int v27; // [rsp+74h] [rbp-94h] BYREF
  _QWORD v28[2]; // [rsp+78h] [rbp-90h] BYREF
  char v29; // [rsp+88h] [rbp-80h]
  __int64 v30[2]; // [rsp+98h] [rbp-70h] BYREF
  int v31; // [rsp+A8h] [rbp-60h]
  int v32; // [rsp+ACh] [rbp-5Ch]
  _DWORD *v33; // [rsp+B0h] [rbp-58h]
  int v34; // [rsp+B8h] [rbp-50h]
  int v35; // [rsp+BCh] [rbp-4Ch]
  __int64 v36; // [rsp+C0h] [rbp-48h]
  __int64 v37; // [rsp+C8h] [rbp-40h]
  __int64 v38; // [rsp+D0h] [rbp-38h]
  _BYTE v39[8]; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v40; // [rsp+E0h] [rbp-28h] BYREF
  _QWORD v41[4]; // [rsp+F0h] [rbp-18h] BYREF
  __int16 v42; // [rsp+110h] [rbp+8h]
  _QWORD v43[268]; // [rsp+118h] [rbp+10h] BYREF
  _OWORD v44[2]; // [rsp+978h] [rbp+870h] BYREF
  __int64 v45; // [rsp+998h] [rbp+890h]
  _BYTE v46[80]; // [rsp+9A8h] [rbp+8A0h] BYREF

  v1 = *(unsigned int *)(a1 + 8);
  v3 = *(_DWORD **)(a1 + 16);
  v4 = *(_QWORD *)a1;
  v5 = *(unsigned int *)(a1 + 12);
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v5 + 3104);
  v7 = (__int64)&v3[336 * v1 + 22];
  memset(v43, 0, 0x858uLL);
  memset(v46, 0, sizeof(v46));
  v45 = 0LL;
  v23 = *(_BYTE *)(a1 + 24);
  v40 = 0LL;
  memset(v44, 0, sizeof(v44));
  VidSchiSetupMmIoFlipMultiPlaneOverlay3(
    v4,
    1344 * v1 + (_DWORD)v3 + 88,
    v5,
    (unsigned int)v43,
    v23,
    (__int64)v46,
    (__int64)&v40,
    (__int64)v44);
  HIDWORD(v43[1]) |= 8u;
  v8 = ((__int64 (__fastcall *)(_QWORD, _QWORD *))DxgCoreInterface[61])(
         *(_QWORD *)(*(_QWORD *)(v43[0] + 16LL) + 2696LL),
         &v43[1]);
  v11 = v8;
  if ( v8 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v9);
    v12[6] = v43;
    v12[3] = 281LL;
    v12[4] = 11LL;
    v12[5] = v11;
    v12[7] = *(_QWORD *)(v4 + 16);
    WdLogEvent5_WdCriticalError(v12);
    __debugbreak();
  }
  v41[0] = v4 + 1712;
  v42 = 0;
  AcquireSpinLock::Acquire((Acquire *)v41);
  v29 = 0;
  v28[1] = v28;
  v28[0] = v28;
  if ( (*(_DWORD *)(v7 + 1136) & 0x10) != 0 )
  {
    v13 = **(unsigned int **)(v7 + 1176);
    v14 = ((unsigned __int16)v13 | (unsigned __int16)(**(_DWORD **)(v7 + 1176) >> 10)) & 0x3FF;
  }
  else
  {
    v13 = *(unsigned int *)(v4 + 144);
    v14 = (1 << v13) - 1;
  }
  *(_DWORD *)(v6 + 2356) &= ~v14;
  if ( (*(_DWORD *)(v7 + 1136) & 0x20) != 0 )
  {
    v15 = *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v7 + 1152);
    if ( v15 )
      VidSchiPropagatePresentHistoryToken(
        (struct _VIDSCH_GLOBAL *)v4,
        *(union _SLIST_HEADER **)(v7 + 1144),
        v15,
        1,
        (*(_DWORD *)(v7 + 1136) & 0x40) != 0,
        0,
        0,
        *(_QWORD *)(v7 + 1160),
        *(_QWORD *)(v7 + 1176),
        0LL,
        (__int64 *)((v7 + 1304) & -(__int64)(*(_QWORD *)(v7 + 1304) != 0LL)),
        0);
  }
  v25 = 0;
  VidSchiComputeFlipEntryStatusAfterFlip(v13, (__int64)v43, &v25);
  v16 = v25;
  VidSchiLogMmIoFlipMultiPlaneOverlay3(v4, &v3[336 * v1 + 22], (__int64)v43, v25, *(_DWORD *)(v7 + 1072));
  *(_DWORD *)(v7 + 1052) = v16;
  if ( v16 == 11 )
  {
    v18 = 336LL * (unsigned int)v3[11];
    v26 = 0;
    v19 = v3[v18 + 285];
    if ( v19 == 5 || v19 == 15 )
    {
      v27 = 0;
      LOBYTE(v24) = 0;
      v34 = ((_BYTE)v1 - 1) & 0x3F;
      v36 = *(_QWORD *)(v6 + 33192);
      v37 = *(_QWORD *)(v6 + 33200);
      v30[1] = 0LL;
      v32 = 0;
      v35 = 0;
      v38 = 0LL;
      v30[0] = v4;
      v31 = v5;
      v33 = v3;
      VidSchiProcessVsyncCompletedFlipEntry((struct HwQueueStagingList *)v28, v30, (__int64)v39, &v27, &v26, &v24);
    }
    *(_QWORD *)(v7 + 1112) = *(_QWORD *)(v6 + 33200);
    *(_QWORD *)(v7 + 1128) = *(_QWORD *)(v6 + 33192);
    VidSchiUnreferenceDisplayingAllocationsForThisEntry(v28, v17, v6, &v3[336 * v1 + 22]);
    VidSchiReferenceDisplayingAllocationsForThisEntry(
      (struct HwQueueStagingList *)v28,
      v4,
      (_WORD *)v6,
      (__int64)&v3[336 * v1 + 22]);
    VidSchiCompleteFlipEntry((__int64)v28, v4, v5, (__int64)v3, v1, v1, 0, 0LL);
  }
  else
  {
    if ( (*(_DWORD *)(v7 + 1136) & 0x10) != 0 )
      v20 = ((unsigned __int16)**(_DWORD **)(v7 + 1176) | (unsigned __int16)(**(_DWORD **)(v7 + 1176) >> 10)) & 0x3FF;
    else
      v20 = (1 << *(_DWORD *)(v4 + 144)) - 1;
    *(_DWORD *)(v6 + 2352) |= v20;
    *(_QWORD *)(v7 + 1104) = MEMORY[0xFFFFF78000000320];
  }
  v21 = 336LL * (unsigned int)v3[11];
  v3[12] = v1;
  v22 = v3[v21 + 285];
  if ( v22 != 5 && v22 != 15 )
    v3[11] = v1;
  v3[10] = ((_BYTE)v1 + 1) & 0x3F;
  v3[20] = *(_DWORD *)(v7 + 1072);
  VIDMM_GLOBAL::NotifyOnFlip(*(VIDMM_GLOBAL **)(*(_QWORD *)(v4 + 8) + 648LL));
  --*(_DWORD *)(*(_QWORD *)(v4 + 240) + 808LL);
  VidSchiUpdateFlipQueueHistory(1u, v4, v5, (__int64)v3, v1);
  if ( !v29 )
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v28);
  AcquireSpinLock::Release((AcquireSpinLock *)v41);
}
