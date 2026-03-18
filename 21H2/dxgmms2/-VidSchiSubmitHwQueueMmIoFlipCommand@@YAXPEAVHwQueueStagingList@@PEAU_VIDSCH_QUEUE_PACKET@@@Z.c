/*
 * XREFs of ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0040864
 * Callers:
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C001F222 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_H.c)
 *     ?VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C004053C (-VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_H.c)
 * Callees:
 *     ?VidSchiAcquirePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1C0005A40 (-VidSchiAcquirePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@.c)
 *     ?VidSchiAcquireFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1C0005A90 (-VidSchiAcquireFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000DBA0 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C000E394 (-VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VI.c)
 *     VidSchiVirtualizeFlipInterval @ 0x1C0017A90 (VidSchiVirtualizeFlipInterval.c)
 *     ?VidSchiReleasePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1C00187B8 (-VidSchiReleasePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C001AE48 (VidSchiCompletePendingFlipOnPlane.c)
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C001B448 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     ?ZeroFlipQueueEntry@_VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ @ 0x1C001BA0C (-ZeroFlipQueueEntry@_VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ.c)
 *     memmove @ 0x1C001D980 (memmove.c)
 *     ?ReferencePrimaryAllocationForFlipping@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_KPEA_K2@Z @ 0x1C001E4FA (-ReferencePrimaryAllocationForFlipping@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_KPEA_K2@Z.c)
 *     ?VidSchiUpdateVSyncMultiplier@@YAXPEAU_VIDSCH_GLOBAL@@IPEAU_VIDSCH_PRESENT_INFO@@PEAUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C001E62E (-VidSchiUpdateVSyncMultiplier@@YAXPEAU_VIDSCH_GLOBAL@@IPEAU_VIDSCH_PRESENT_INFO@@PEAUVIDSCH_SUBM.c)
 *     ?VidSchiIsFocusHwContext@@YA_NPEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C001EEFE (-VidSchiIsFocusHwContext@@YA_NPEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     ?FillVmState@_VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXAEAUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C0033F7C (-FillVmState@_VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXAEAUVIDSCH_SUBMIT_DATA2@@@Z.c)
 *     VidSchiIsHardwareCompletedDependingCommandForFlip @ 0x1C00389FC (VidSchiIsHardwareCompletedDependingCommandForFlip.c)
 *     VidSchiRestartQueuedFlip @ 0x1C003A160 (VidSchiRestartQueuedFlip.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C003ED78 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 */

void __fastcall VidSchiSubmitHwQueueMmIoFlipCommand(struct HwQueueStagingList *a1, struct _VIDSCH_QUEUE_PACKET *a2)
{
  __int64 v2; // r11
  __int64 v3; // r10
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // r13
  __int64 v10; // r14
  __int64 v11; // r15
  int v12; // eax
  unsigned int v13; // r8d
  bool v14; // zf
  int v15; // eax
  char v16; // cl
  __int64 v17; // r11
  char v18; // r9
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned __int16 v24; // dx
  unsigned int *v25; // r12
  __int64 v26; // rax
  int *v27; // r12
  unsigned int v28; // r8d
  int v29; // eax
  char v30; // cl
  int v31; // eax
  int v32; // r8d
  unsigned __int8 IsFocusHwContext; // al
  int v34; // r8d
  int v35; // ecx
  int v36; // ecx
  int v37; // r9d
  int v38; // edx
  int v39; // ecx
  int v40; // ecx
  struct _VIDSCH_GLOBAL *v41; // rcx
  int v42; // ecx
  int v43; // ecx
  int v44; // ecx
  __int64 v45; // rax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  unsigned int v50; // eax
  int v51; // ecx
  char v52; // r8
  __int64 v53; // rax
  int v54; // ecx
  int v55; // eax
  char v56; // r10
  unsigned int v57; // edx
  unsigned int v58; // r8d
  unsigned int v59; // edx
  int v60; // eax
  char v61; // cl
  int v62; // eax
  unsigned int v63; // eax
  int v64; // eax
  int v65; // r11d
  unsigned int v66; // ecx
  __int64 v67; // r8
  unsigned int v68; // r9d
  __int64 v69; // r10
  int v70; // edx
  __int64 v71; // rax
  int v72; // edx
  unsigned int v73; // eax
  __int64 v74; // r15
  unsigned int v75; // r12d
  __int64 v76; // rbx
  int v77; // eax
  unsigned int v78; // [rsp+30h] [rbp-69h]
  int v79; // [rsp+34h] [rbp-65h]
  struct VIDSCH_HW_CONTEXT *v80; // [rsp+38h] [rbp-61h]
  int v81; // [rsp+54h] [rbp-45h]
  __int64 v82; // [rsp+58h] [rbp-41h]
  __int64 v83; // [rsp+68h] [rbp-31h]
  __int64 v84; // [rsp+70h] [rbp-29h]
  __int64 v85; // [rsp+78h] [rbp-21h] BYREF
  unsigned int *v86; // [rsp+80h] [rbp-19h]
  unsigned int v87; // [rsp+88h] [rbp-11h]
  unsigned int v88; // [rsp+8Ch] [rbp-Dh]
  int v89; // [rsp+90h] [rbp-9h]
  unsigned int v90; // [rsp+94h] [rbp-5h]
  unsigned int v91; // [rsp+98h] [rbp-1h]
  struct VIDMM_ALLOC *v92; // [rsp+A0h] [rbp+7h]
  __int64 v93; // [rsp+A8h] [rbp+Fh]
  char v95; // [rsp+108h] [rbp+6Fh] BYREF
  unsigned int v96; // [rsp+110h] [rbp+77h]
  int v97; // [rsp+118h] [rbp+7Fh]

  v2 = *((unsigned int *)a2 + 40);
  v3 = 1LL;
  v4 = *((_QWORD *)a2 + 12);
  v5 = (unsigned int)v2;
  v96 = *((_DWORD *)a2 + 40);
  v83 = (unsigned int)v2;
  v80 = *(struct VIDSCH_HW_CONTEXT **)(v4 + 40);
  v7 = *((_QWORD *)v80 + 1);
  v82 = v7;
  v8 = *(_QWORD *)(v7 + 32);
  v9 = *(_QWORD *)(v8 + 8 * v2 + 3200);
  if ( (*(_BYTE *)(v8 + 3036) & 1) != 0 )
    goto LABEL_101;
  v10 = 0LL;
  if ( *(_DWORD *)(v8 + 3012)
    || *(_BYTE *)(v7 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 200), 0, 0)
    || (*((_DWORD *)a2 + 16) & 0x20) != 0 )
  {
    goto LABEL_101;
  }
  if ( *((_QWORD *)a2 + 50) - *(_QWORD *)(v7 + 8 * v2 + 376) > (unsigned __int64)(unsigned int)(64
                                                                                              - *(_DWORD *)(v9 + 2988)) )
  {
    WdLogSingleEntry5(0LL, 281LL, 2048LL, v4, a2, *((int *)a2 + 12));
    __debugbreak();
  }
  v95 = 0;
  if ( *(_DWORD *)(v9 + 4) == 3 || !*((_DWORD *)a2 + 99) && (*((_DWORD *)a2 + 68) & 0x10000000) != 0 )
  {
    v97 = v3;
    v84 = v3;
  }
  else
  {
    v97 = 0;
    v84 = 0LL;
  }
  v11 = *(_QWORD *)(v9 + 24);
  v12 = *((_DWORD *)a2 + 18) >> 23;
  v93 = v11;
  if ( ((unsigned __int8)v12 & (unsigned __int8)v3) != 0 )
    v13 = ((unsigned __int16)*((_DWORD *)a2 + 218) | (unsigned __int16)(*((_DWORD *)a2 + 218) >> 10)) & 0x3FF;
  else
    v13 = ((_DWORD)v3 << *(_DWORD *)(v8 + 152)) - v3;
  v14 = !_BitScanForward((unsigned int *)&v15, v13);
  v16 = -1;
  if ( !v14 )
    v16 = v15;
  if ( v13 )
  {
    v17 = *(_QWORD *)(v8 + 8 * v2 + 3200);
    while ( 1 )
    {
      v18 = v16;
      v19 = *(int *)(280LL * (unsigned int)v16 + v17 + 180);
      if ( (int)v19 > -1 && *(_DWORD *)(160 * v19 + *(_QWORD *)(v8 + 3328) + 112) == 2 )
        break;
      v16 = -1;
      v13 &= ~(1 << v18);
      v14 = !_BitScanForward((unsigned int *)&v20, v13);
      if ( !v14 )
        v16 = v20;
      if ( !v13 )
      {
        LODWORD(v2) = v5;
        goto LABEL_26;
      }
    }
    WdLogSingleEntry5(0LL, 281LL, 0x100000LL, v16, v5, v8);
    __debugbreak();
  }
  else
  {
LABEL_26:
    if ( *(_BYTE *)(*(_QWORD *)(v7 + 40) + 2632LL) )
      VidSchiUpdateVSyncMultiplier(
        (struct _VIDSCH_GLOBAL *)v8,
        v2,
        (struct _VIDSCH_PRESENT_INFO *)v9,
        (struct _VIDSCH_QUEUE_PACKET *)((char *)a2 + 272));
    v79 = *((_DWORD *)a2 + 100) - *(_DWORD *)(v7 + 8 * v5 + 376);
    v21 = (*((_BYTE *)a2 + 400) - *(_BYTE *)(v7 + 8 * v5 + 376) + (unsigned __int8)*(_DWORD *)(v11 + 56)) & 0x3F;
    v81 = (*((_BYTE *)a2 + 400) - *(_BYTE *)(v7 + 8 * v5 + 376) + (unsigned __int8)*(_DWORD *)(v11 + 56)) & 0x3F;
    v5 = v11 + 1376 * v21;
    v10 = v5 + 120;
    WdLogSingleEntry4(8LL, a2, v11, v21, *(int *)(v5 + 1172));
    v22 = *(_QWORD *)(v8 + 632);
    v23 = *(unsigned __int16 *)(*((_QWORD *)v80 + 2) + 4LL);
    if ( (unsigned int)v23 < *(_DWORD *)(v8 + 704) )
      v22 += 8 * v23;
    v24 = *(_WORD *)(*(_QWORD *)v22 + 6LL);
    v78 = v24;
    if ( *(_DWORD *)(v5 + 1172) == 8 )
    {
      v25 = (unsigned int *)(v5 + 1212);
      *(_QWORD *)(v5 + 8LL * *(unsigned int *)(v5 + 1212) + 120) = *((_QWORD *)a2 + 100);
      *(_QWORD *)(v5 + 8LL * *(unsigned int *)(v5 + 1212) + 632) = *((_QWORD *)a2 + 101);
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a2 + 100) + 36LL));
      v26 = *((_QWORD *)v80 + 1);
      ++*(_DWORD *)(v5 + 1212);
      *(_QWORD *)(v5 + 1160) = v26;
      *(_DWORD *)(v5 + 1204) |= 1 << v24;
      goto LABEL_63;
    }
  }
  ++*(_DWORD *)(v8 + 804);
  ++*(_DWORD *)(v7 + 1576);
  v27 = (int *)((char *)a2 + 272);
  ++*(_DWORD *)(v9 + 2988);
  if ( (*((_DWORD *)a2 + 68) & 0x800000) != 0 )
    v28 = ((unsigned __int16)*((_DWORD *)a2 + 218) | (unsigned __int16)(*((_DWORD *)a2 + 218) >> 10)) & 0x3FF;
  else
    v28 = (1 << *(_DWORD *)(v8 + 152)) - 1;
  v14 = !_BitScanForward((unsigned int *)&v29, v28);
  v30 = -1;
  if ( !v14 )
    v30 = v29;
  while ( v28 )
  {
    ++*(_DWORD *)(280LL * v30 + *(_QWORD *)(v8 + 8 * v83 + 3200) + 188);
    v31 = 1 << v30;
    v30 = -1;
    v28 &= ~v31;
    v14 = !_BitScanForward((unsigned int *)&v31, v28);
    if ( !v14 )
      v30 = v31;
  }
  _VIDSCH_FLIP_QUEUE_ENTRY::ZeroFlipQueueEntry((_VIDSCH_FLIP_QUEUE_ENTRY *)v10);
  v32 = *(_DWORD *)(v5 + 1256) | 0x4000;
  *(_QWORD *)(v5 + 1160) = *((_QWORD *)v80 + 1);
  *(_DWORD *)(v5 + 1256) = v32;
  IsFocusHwContext = VidSchiIsFocusHwContext(v80);
  *(_DWORD *)(v5 + 1256) = v34 & 0xFFFF7FFF | (IsFocusHwContext << 15);
  *(_QWORD *)v10 = *((_QWORD *)a2 + 100);
  *(_QWORD *)(v5 + 632) = *((_QWORD *)a2 + 101);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a2 + 100) + 36LL));
  *(_DWORD *)(v5 + 1168) = *((_DWORD *)a2 + 28);
  *(_DWORD *)(v5 + 1176) = *((_DWORD *)a2 + 96);
  *(_BYTE *)(v5 + 1196) = (*v27 & 0x10) != 0;
  v35 = *(_DWORD *)(v5 + 1256) ^ (*(_DWORD *)(v5 + 1256) ^ (*((_DWORD *)a2 + 18) >> 19)) & 0x10;
  *(_DWORD *)(v5 + 1256) = v35;
  v36 = (v35 ^ ((unsigned int)*v27 >> 20)) & 0x400 ^ v35;
  *(_DWORD *)(v5 + 1256) = v36;
  *(_DWORD *)(v5 + 1256) = v36 ^ ((unsigned __int16)v36 ^ ((unsigned int)*v27 >> 20)) & 0x800;
  _VIDSCH_FLIP_QUEUE_ENTRY::FillVmState(
    (_VIDSCH_FLIP_QUEUE_ENTRY *)v10,
    (struct _VIDSCH_QUEUE_PACKET *)((char *)a2 + 272));
  if ( !v79 )
    *(_QWORD *)(v5 + 1184) = ++*(_QWORD *)(v11 + 88);
  v38 = *(_DWORD *)(v5 + 1256);
  v39 = *((_DWORD *)a2 + 158);
  *(_DWORD *)(v5 + 1304) = v39;
  if ( (v38 & v37) != 0 )
  {
    v40 = v39 - 1;
    if ( v40 )
    {
      if ( v40 == 1 )
      {
        *(_OWORD *)(v5 + 1308) = *(_OWORD *)((char *)a2 + 636);
        *(_OWORD *)(v5 + 1324) = *(_OWORD *)((char *)a2 + 652);
        *(_OWORD *)(v5 + 1340) = *(_OWORD *)((char *)a2 + 668);
        *(_OWORD *)(v5 + 1356) = *(_OWORD *)((char *)a2 + 684);
        *(_QWORD *)(v5 + 1372) = *(_QWORD *)((char *)a2 + 700);
      }
    }
    else
    {
      *(_OWORD *)(v5 + 1308) = *(_OWORD *)((char *)a2 + 636);
      *(_QWORD *)(v5 + 1324) = *(_QWORD *)((char *)a2 + 652);
      *(_DWORD *)(v5 + 1332) = *((_DWORD *)a2 + 165);
    }
  }
  if ( (v38 & 0x800) != 0 )
  {
    *(_OWORD *)(v5 + 1380) = *(_OWORD *)((char *)a2 + 708);
    *(_OWORD *)(v5 + 1396) = *(_OWORD *)((char *)a2 + 724);
  }
  memmove(*(void **)(v5 + 1296), (char *)a2 + 872, *((unsigned int *)a2 + 221));
  VidSchiAcquirePrivateDataReference(
    (struct _VIDSCH_GLOBAL *)v8,
    *(struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 **)(v5 + 1296));
  VidSchiReleasePrivateDataReference(v41, (struct _VIDSCH_QUEUE_PACKET *)((char *)a2 + 872));
  VidSchiAcquireFlipFencesReference(
    (struct _VIDSCH_GLOBAL *)v8,
    *(struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 **)(v5 + 1296));
  *(_DWORD *)(v5 + 1200) = *((_DWORD *)a2 + 102);
  *(_DWORD *)(v5 + 1204) = 1 << v78;
  v42 = *(_DWORD *)(v5 + 1256) ^ (*(_DWORD *)(v5 + 1256) ^ ((unsigned int)*v27 >> 19)) & 1;
  *(_DWORD *)(v5 + 1256) = v42;
  v43 = ((unsigned __int8)v42 ^ (unsigned __int8)((unsigned int)*v27 >> 19)) & 2 ^ v42;
  *(_DWORD *)(v5 + 1256) = v43;
  v44 = ((unsigned __int8)v43 ^ (unsigned __int8)((unsigned int)*v27 >> 19)) & 4 ^ v43;
  *(_DWORD *)(v5 + 1256) = v44;
  *(_DWORD *)(v5 + 1256) = v44 ^ ((unsigned __int8)v44 ^ (unsigned __int8)((unsigned int)*v27 >> 19)) & 8;
  *(_QWORD *)(v5 + 1280) = *((_QWORD *)a2 + 37);
  v45 = *((_QWORD *)a2 + 38);
  *(_QWORD *)(v5 + 1288) = v45;
  if ( v45 )
    _InterlockedAdd((volatile signed __int32 *)(v45 + 12), 1u);
  v46 = *v27;
  v25 = (unsigned int *)(v5 + 1212);
  *(_DWORD *)(v5 + 1212) = 1;
  if ( (v46 & 0x400) != 0 )
  {
    *(_DWORD *)(v5 + 1208) = *((_DWORD *)a2 + 103);
    v47 = *((_DWORD *)a2 + 103);
  }
  else
  {
    *(_DWORD *)(v5 + 1208) = 1;
    v47 = 1;
  }
  *(_DWORD *)(v5 + 1216) = v47;
  if ( *(_BYTE *)(v5 + 1196) || v97 )
  {
    *(_DWORD *)(v5 + 1192) = 0;
    v51 = *(_DWORD *)(v5 + 1256) ^ (*(_DWORD *)(v5 + 1256) ^ (*((_DWORD *)a2 + 68) >> 21)) & 0x80;
    *(_DWORD *)(v5 + 1256) = v51;
    v50 = v51 ^ ((unsigned __int16)v51 ^ (*((_DWORD *)a2 + 68) >> 20)) & 0x100;
    goto LABEL_62;
  }
  v48 = *((_DWORD *)a2 + 99);
  if ( !v48 )
  {
    v49 = *(_DWORD *)(v5 + 1256) | 0x80;
    *(_DWORD *)(v5 + 1192) = 0;
    v50 = v49 & 0xFFFFFEFF;
LABEL_62:
    *(_DWORD *)(v5 + 1256) = v50;
    goto LABEL_63;
  }
  *(_DWORD *)(v5 + 1192) = v48;
LABEL_63:
  VidSchiVirtualizeFlipInterval(v9, v10);
  v52 = 0;
  if ( (*(_DWORD *)(v9 + 82740) & 1) != 0 )
  {
    v53 = *(_QWORD *)(v82 + 40);
    if ( *(_BYTE *)(v53 + 2632) || *(_BYTE *)(*(_QWORD *)(v53 + 16) + 129LL) )
    {
      v54 = *(_DWORD *)(v5 + 1256);
      if ( (v54 & 0x80u) != 0 || v97 )
        v52 = 1;
      if ( (*(_DWORD *)(v5 + 1256) & 0x180) == 0x80 )
        *(_DWORD *)(v5 + 1256) = v54 | 0x200;
    }
  }
  v55 = *((_DWORD *)a2 + 104);
  if ( v55 )
    goto LABEL_75;
  if ( !v52 )
  {
    v55 = *(_DWORD *)(v9 + 82728);
LABEL_75:
    v56 = -1;
    goto LABEL_76;
  }
  v56 = -1;
  v55 = -1;
LABEL_76:
  *(_DWORD *)(v5 + 1260) = v55;
  if ( (*((_DWORD *)a2 + 68) & 0x800) != 0 )
    *(_BYTE *)(v5 + 1197) = 1;
  v86 = *(unsigned int **)(v5 + 1296);
  v85 = v8;
  v57 = *v86;
  v58 = *v86 & 0x3FF;
  v87 = v58;
  if ( *(_BYTE *)(v8 + 156) )
    v59 = (v57 >> 10) & 0x3FF;
  else
    v59 = 0;
  v14 = !_BitScanForward((unsigned int *)&v60, v58);
  v61 = -1;
  v88 = v59;
  if ( !v14 )
    v61 = v60;
  v89 = 0;
  v14 = !_BitScanForward((unsigned int *)&v62, v59);
  v4 = (unsigned int)v61;
  if ( !v14 )
    v56 = v62;
  v90 = v61;
  v63 = v56;
  v91 = v56;
  while ( v58 || v59 )
  {
    if ( (unsigned int)v4 >= v63 )
      goto LABEL_96;
    v64 = *(_DWORD *)(v5 + 1200);
    v65 = 0;
    v66 = v78;
    v67 = 1LL;
    v97 = v64;
    v68 = 0;
    while ( (v64 & (unsigned int)v67) == 0 )
    {
LABEL_93:
      ++v68;
      v67 = (unsigned int)(2 * v67);
      if ( v68 > v66 )
        goto LABEL_96;
    }
    v69 = *(_QWORD *)(v5 + 1296);
    v70 = *(_DWORD *)(v69 + 4);
    v71 = v70 * ((8 * *(_DWORD *)(v69 + 8) + 231) & 0xFFFFFFF8);
    v72 = v65 * v70;
    v66 = v78;
    v92 = *(struct VIDMM_ALLOC **)(v71 + ((unsigned __int64)(unsigned int)(v72 + v89) << 6) + v69 + 48);
    if ( ((*((_DWORD *)v92 + 8) >> 2) & 0x3F) != v78 )
    {
      v64 = v97;
      ++v65;
      goto LABEL_93;
    }
    VIDMM_GLOBAL::ReferencePrimaryAllocationForFlipping(
      (VIDMM_GLOBAL *)(v69 + ((unsigned __int64)(unsigned int)(v72 + v89) << 6)),
      v92,
      v67,
      (unsigned __int64 *)(v69 + ((unsigned __int64)(unsigned int)(v72 + v89) << 6) + v71 + 64),
      (unsigned __int64 *)(v69 + ((unsigned __int64)(unsigned int)(v72 + v89) << 6) + v71 + 72));
LABEL_96:
    VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)&v85);
    v63 = v91;
    v59 = v88;
    v58 = v87;
    v4 = v90;
  }
  v73 = *v25;
  v74 = v93;
  v75 = v96;
  if ( *(_DWORD *)(v5 + 1208) <= v73 )
  {
    if ( v79 )
    {
      *(_DWORD *)(v10 + 1052) = 7;
      goto LABEL_99;
    }
    LODWORD(v76) = v81;
    while ( 1 )
    {
      *(_DWORD *)(v74 + 56) = ((_BYTE)v76 + 1) & 0x3F;
      ++*(_QWORD *)(v82 + 8 * v83 + 376);
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 808));
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 2992));
      if ( *(_DWORD *)(v10 + 1052) == 7 )
        *(_QWORD *)(v10 + 1064) = ++*(_QWORD *)(v74 + 88);
      if ( (unsigned int)VidSchiIsHardwareCompletedDependingCommandForFlip(v10) && *(_BYTE *)(v9 + 78580) )
        break;
      *(_DWORD *)(v10 + 1052) = 16;
LABEL_130:
      v76 = *(unsigned int *)(v74 + 56);
      v10 = 1376 * v76 + v74 + 120;
      if ( *(_DWORD *)(v10 + 1052) != 7 )
        goto LABEL_99;
    }
    *(_DWORD *)(v10 + 1052) = 2;
    v77 = *(_DWORD *)(v74 + 64);
    if ( v84 )
    {
      if ( (_DWORD)v76 != v77 )
        goto LABEL_127;
      if ( *(_BYTE *)(v8 + 156)
        && VidSchiCheckPendingFlipsForThisEntry(
             (struct _VIDSCH_GLOBAL *)v8,
             (struct _VIDSCH_PRESENT_INFO *)v9,
             (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v10,
             (struct VIDSCH_FLIP_QUEUE *)v4) )
      {
        if ( !*(_BYTE *)(v8 + 59) )
          *(_QWORD *)(v10 + 1104) = MEMORY[0xFFFFF78000000320];
        goto LABEL_127;
      }
    }
    else
    {
      if ( (_DWORD)v76 != v77 && !*(_BYTE *)(v10 + 1076) )
      {
        v4 = ((_BYTE)v76 - 1) & 0x3F;
        if ( (*(_DWORD *)(1376 * v4 + v74 + 1256) & 0x20) == 0 )
          goto LABEL_127;
        WdLogSingleEntry5(0LL, 281LL, 0x100000LL, v4, v74, v8);
        __debugbreak();
      }
      if ( !*(_BYTE *)(v8 + 59) )
        *(_QWORD *)(v10 + 1104) = MEMORY[0xFFFFF78000000320];
      if ( VidSchiCheckPendingFlipsForThisEntry(
             (struct _VIDSCH_GLOBAL *)v8,
             (struct _VIDSCH_PRESENT_INFO *)v9,
             (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v10,
             (struct VIDSCH_FLIP_QUEUE *)v4) )
      {
        goto LABEL_127;
      }
      if ( *(_BYTE *)(v10 + 1076) )
        VidSchiRestartQueuedFlip(a1, v82, v75, (struct VIDSCH_FLIP_QUEUE *)v74, v76);
      if ( *(_DWORD *)(v74 + 112) )
      {
        *(_DWORD *)(v10 + 1052) = 3;
LABEL_127:
        if ( *(_DWORD *)(1376LL * *(unsigned int *)(v74 + 60) + v74 + 1172) != 16 )
          *(_DWORD *)(v74 + 60) = *(_DWORD *)(v74 + 56);
        goto LABEL_130;
      }
    }
    *(_DWORD *)(v10 + 1052) = 4;
    VidSchiExecuteMmIoFlip((__int64)a1, v8, v75, v74, v76, &v95);
    goto LABEL_127;
  }
  *(_DWORD *)(v10 + 1052) = 8;
LABEL_99:
  *((_DWORD *)a2 + 16) |= 2u;
  if ( v95 )
    VidSchiCompletePendingFlipOnPlane(a1, v8, v75, v74, 9u);
LABEL_101:
  VidSchiCompleteHwQueuePacket(a1, a2, 0LL, v4);
}
