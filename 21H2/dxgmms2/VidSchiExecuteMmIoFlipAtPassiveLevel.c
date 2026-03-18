/*
 * XREFs of VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C001BBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0009AD0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x1C000F520 (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x1C000F9B4 (VidSchiUnreferenceDisplayingAllocationsForThisEntry.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0010190 (VidSchiCompleteFlipEntry.c)
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x1C0010E20 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 *     ?VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEBU_VIDSCH_CALL_EXECUTE_FLIP@@W4_VIDSCH_FLIP_STATUS@@I_K@Z @ 0x1C0011338 (-VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEBU.c)
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1C0011E34 (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 *     VidSchiComputeFlipEntryStatusAfterFlip @ 0x1C0012684 (VidSchiComputeFlipEntryStatusAfterFlip.c)
 *     ?VidSchiUpdateFlipTelemetryStats@@YAXPEAU_VIDSCH_PROCESS@@PEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAU_VIDSCH_PRESENT_INFO@@@Z @ 0x1C00126D4 (-VidSchiUpdateFlipTelemetryStats@@YAXPEAU_VIDSCH_PROCESS@@PEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAU_VI.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0014690 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0014924 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C0015F38 (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C001863C (VidSchiPropagatePresentHistoryToken.c)
 *     ?NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C001BF2C (-NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT_AUXILIARYPRESENTINFO@@@Z @ 0x1C0034000 (-GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT.c)
 *     ?VidSchiIncrementPendingFlipsForFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C0045B4C (-VidSchiIncrementPendingFlipsForFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU.c)
 *     ?VidSchiSetNextFlipEarliestIdealTime@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C0046144 (-VidSchiSetNextFlipEarliestIdealTime@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH.c)
 */

void __fastcall VidSchiExecuteMmIoFlipAtPassiveLevel(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // r12
  __int64 v3; // r14
  __int64 v4; // r13
  unsigned __int8 v5; // bl
  __int64 v6; // r15
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rcx
  int v10; // edx
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  struct _D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO *FlipManagerAuxiliaryPresentInfo; // rax
  int v18; // [rsp+68h] [rbp-A0h] BYREF
  int v19; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v20; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v21[2]; // [rsp+78h] [rbp-90h] BYREF
  char v22; // [rsp+88h] [rbp-80h]
  __int64 v23[2]; // [rsp+98h] [rbp-70h] BYREF
  int v24; // [rsp+A8h] [rbp-60h]
  int v25; // [rsp+ACh] [rbp-5Ch]
  __int64 v26; // [rsp+B0h] [rbp-58h]
  int v27; // [rsp+B8h] [rbp-50h]
  int v28; // [rsp+BCh] [rbp-4Ch]
  __int64 v29; // [rsp+C0h] [rbp-48h]
  __int64 v30; // [rsp+C8h] [rbp-40h]
  __int64 v31; // [rsp+D0h] [rbp-38h]
  _BYTE v32[8]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v33[2]; // [rsp+E0h] [rbp-28h] BYREF
  _QWORD v34[4]; // [rsp+F0h] [rbp-18h] BYREF
  __int16 v35; // [rsp+110h] [rbp+8h]
  LARGE_INTEGER v36[268]; // [rsp+118h] [rbp+10h] BYREF
  __int64 v37[2]; // [rsp+978h] [rbp+870h] BYREF
  __int128 v38; // [rsp+988h] [rbp+880h]
  __int64 v39; // [rsp+998h] [rbp+890h]
  __int64 v40[10]; // [rsp+9A8h] [rbp+8A0h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = *(unsigned int *)(a1 + 12);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(unsigned int *)(a1 + 8);
  v5 = *(_BYTE *)(a1 + 24);
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v2 + 3200);
  v7 = 1376 * v4 + v3 + 120;
  memset(v36, 0, 0x858uLL);
  memset(v40, 0, sizeof(v40));
  LOWORD(v27) = 0;
  v39 = 0LL;
  v23[0] = v1 + 1728;
  *(_OWORD *)v33 = 0LL;
  *(_OWORD *)v37 = 0LL;
  v38 = 0LL;
  AcquireSpinLock::Acquire((Acquire *)v23);
  VidSchiSetupMmIoFlipMultiPlaneOverlay3(
    (struct _VIDSCH_GLOBAL *)v1,
    (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v7,
    v2,
    (struct _VIDSCH_CALL_EXECUTE_FLIP *)v36,
    v5,
    (__int64)v40,
    (__int64)v33,
    (unsigned __int64)v37);
  AcquireSpinLock::Release((AcquireSpinLock *)v23);
  v36[1].HighPart |= 8u;
  v8 = ((__int64 (__fastcall *)(_QWORD, LARGE_INTEGER *))DxgCoreInterface[63])(
         *(_QWORD *)(*(_QWORD *)(v36[0].QuadPart + 16) + 2792LL),
         &v36[1]);
  if ( v8 )
  {
    WdLogSingleEntry5(0LL, 281LL, 11LL, v8, v36, *(_QWORD *)(v1 + 16));
    __debugbreak();
    goto LABEL_18;
  }
  v35 = 0;
  v34[0] = v1 + 1728;
  AcquireSpinLock::Acquire((Acquire *)v34);
  v22 = 0;
  v21[1] = v21;
  v21[0] = v21;
  v9 = *(_QWORD *)(v7 + 1176);
  if ( (*(_DWORD *)(v7 + 1136) & 0x10) != 0 )
  {
LABEL_18:
    v10 = ((unsigned __int16)*(_DWORD *)v9 | (unsigned __int16)(*(_DWORD *)v9 >> 10)) & 0x3FF;
    goto LABEL_4;
  }
  v9 = *(unsigned int *)(v1 + 152);
  v10 = (1 << v9) - 1;
LABEL_4:
  *(_DWORD *)(v6 + 3004) &= ~v10;
  if ( (*(_DWORD *)(v7 + 1136) & 0x20) != 0 && *(_QWORD *)(v7 + 1152) )
  {
    FlipManagerAuxiliaryPresentInfo = GetFlipManagerAuxiliaryPresentInfo(*(struct _D3DKMT_AUXILIARYPRESENTINFO **)(v7 + 1320));
    if ( FlipManagerAuxiliaryPresentInfo )
      *((_DWORD *)FlipManagerAuxiliaryPresentInfo + 7) = 0;
    VidSchiPropagatePresentHistoryToken(
      (struct _VIDSCH_GLOBAL *)v1,
      *(union _SLIST_HEADER **)(v7 + 1144),
      *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v7 + 1152),
      1,
      (*(_DWORD *)(v7 + 1136) & 0x40) != 0,
      0,
      0,
      *(_QWORD *)(v7 + 1160),
      *(_QWORD *)(v7 + 1176),
      0LL,
      (__int64 *)((v7 + 1328) & -(__int64)(*(_QWORD *)(v7 + 1328) != 0LL)),
      0);
  }
  v19 = 0;
  VidSchiComputeFlipEntryStatusAfterFlip(v9, (__int64)v36, &v19);
  VidSchiUpdateFlipTelemetryStats(
    *(struct _VIDSCH_PROCESS **)(*(_QWORD *)(v7 + 1040) + 40LL),
    (struct _VIDSCH_CALL_EXECUTE_FLIP *)v36,
    (struct _VIDSCH_PRESENT_INFO *)v6);
  v11 = v19;
  VidSchiLogMmIoFlipMultiPlaneOverlay3(
    v1,
    (_DWORD *)(1376 * v4 + v3 + 120),
    v36,
    v19,
    *(_DWORD *)(v7 + 1072),
    *(_QWORD *)(v3 + 104));
  *(_DWORD *)(v7 + 1052) = v11;
  if ( v11 == 11 )
  {
    v13 = 1376LL * *(unsigned int *)(v3 + 68);
    v19 = 0;
    v14 = *(_DWORD *)(v13 + v3 + 1172);
    if ( v14 == 5 || v14 == 15 )
    {
      LODWORD(v20) = 0;
      LOBYTE(v18) = 0;
      v27 = ((_BYTE)v4 - 1) & 0x3F;
      v29 = *(_QWORD *)(v6 + 44104);
      v30 = *(_QWORD *)(v6 + 44120);
      v23[1] = 0LL;
      v25 = 0;
      v28 = 0;
      v31 = 0LL;
      v23[0] = v1;
      v24 = v2;
      v26 = v3;
      VidSchiProcessVsyncCompletedFlipEntry((__int64)v21, v23, (__int64)v32, (unsigned int *)&v20, &v19, &v18);
    }
    *(_QWORD *)(v7 + 1112) = *(_QWORD *)(v6 + 44120);
    *(_QWORD *)(v7 + 1128) = *(_QWORD *)(v6 + 44104);
    VidSchiUnreferenceDisplayingAllocationsForThisEntry((struct HwQueueStagingList *)v21, v12, v6, 1376 * v4 + v3 + 120);
    VidSchiReferenceDisplayingAllocationsForThisEntry(
      (struct HwQueueStagingList *)v21,
      v1,
      (_WORD *)v6,
      1376 * v4 + v3 + 120);
    VidSchiCompleteFlipEntry((__int64)v21, v1, v2, v3, v4, v4, 0, 0LL);
  }
  else
  {
    VidSchiIncrementPendingFlipsForFlipEntry(
      (struct _VIDSCH_GLOBAL *)v1,
      (struct _VIDSCH_PRESENT_INFO *)v6,
      (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(1376 * v4 + v3 + 120));
    if ( !*(_BYTE *)(v1 + 59) )
      *(_QWORD *)(v7 + 1104) = MEMORY[0xFFFFF78000000320];
  }
  v15 = 1376LL * *(unsigned int *)(v3 + 68);
  *(_DWORD *)(v3 + 72) = v4;
  v16 = *(_DWORD *)(v15 + v3 + 1172);
  if ( v16 != 5 && v16 != 15 )
    *(_DWORD *)(v3 + 68) = v4;
  *(_DWORD *)(v3 + 64) = ((_BYTE)v4 + 1) & 0x3F;
  if ( *(_BYTE *)(v1 + 59) )
    VidSchiSetNextFlipEarliestIdealTime(
      (struct _VIDSCH_GLOBAL *)v1,
      v2,
      (struct VIDSCH_FLIP_QUEUE *)v3,
      (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(1376 * v4 + v3 + 120));
  else
    *(_DWORD *)(v3 + 112) = *(_DWORD *)(v7 + 1072);
  VIDMM_GLOBAL::NotifyOnFlip(*(VIDMM_GLOBAL **)(*(_QWORD *)(v1 + 8) + 656LL));
  --*(_DWORD *)(*(_QWORD *)(v1 + 248) + 808LL);
  VidSchiUpdateFlipQueueHistory(1u, v1, v2);
  if ( !v22 )
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v21);
  AcquireSpinLock::Release((AcquireSpinLock *)v34);
}
