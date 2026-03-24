/*
 * XREFs of ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0038754
 * Callers:
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C00381B0 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_H.c)
 *     ?VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0038440 (-VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_H.c)
 * Callees:
 *     ?FillVmState@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXAEAUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C0002F10 (-FillVmState@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXAEAUVIDSCH_SUBMIT_DATA2@@@Z.c)
 *     VidSchiIsHardwareCompletedDependingCommandForFlip @ 0x1C0003A30 (VidSchiIsHardwareCompletedDependingCommandForFlip.c)
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C00055D0 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     ?VidSchiAcquirePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1C0007084 (-VidSchiAcquirePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000EB20 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiReleasePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1C00154F0 (-VidSchiReleasePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@.c)
 *     memmove @ 0x1C0018C00 (memmove.c)
 *     ?ReferencePrimaryAllocationForFlipping@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_KPEA_K2@Z @ 0x1C0023D20 (-ReferencePrimaryAllocationForFlipping@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_KPEA_K2@Z.c)
 *     ?ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ @ 0x1C002CF18 (-ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ.c)
 *     VidSchiRestartQueuedFlip @ 0x1C003153C (VidSchiRestartQueuedFlip.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00365D8 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiIsFocusHwContext@@YA_NPEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C0037E34 (-VidSchiIsFocusHwContext@@YA_NPEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C003CE38 (VidSchiCompletePendingFlipOnPlane.c)
 */

void __fastcall VidSchiSubmitHwQueueMmIoFlipCommand(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_QUEUE_PACKET *a2,
        unsigned __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r9
  struct _VIDSCH_QUEUE_PACKET *v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // r13
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // r15
  __int64 v14; // rdx
  bool v15; // zf
  int v16; // eax
  char v17; // bl
  char v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rbx
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned __int16 v27; // dx
  __int64 v28; // rax
  _QWORD *v29; // rax
  _DWORD *v30; // rbx
  unsigned int v31; // r8d
  int v32; // eax
  char v33; // cl
  int v34; // eax
  __int64 v35; // rax
  unsigned __int8 IsFocusHwContext; // al
  int v37; // r8d
  int v38; // ecx
  int v39; // ecx
  int v40; // r9d
  int v41; // edx
  int v42; // ecx
  int v43; // ecx
  int *v44; // rdx
  int v45; // ecx
  int v46; // ecx
  int v47; // ecx
  __int64 v48; // rax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  unsigned int v52; // eax
  int v53; // ecx
  int v54; // eax
  int v55; // ecx
  char v56; // r10
  unsigned int v57; // edx
  __int64 v58; // rdx
  int v59; // eax
  char v60; // cl
  int v61; // ebx
  int v62; // eax
  unsigned int v63; // r9d
  unsigned int v64; // eax
  int v65; // eax
  int v66; // r11d
  unsigned int v67; // ecx
  int v68; // r9d
  unsigned int v69; // r10d
  __int64 v70; // rdx
  int v71; // r8d
  __int64 v72; // rax
  __int64 v73; // r8
  __int64 v74; // rbx
  int v75; // eax
  __int64 v76; // rcx
  _QWORD *v77; // rax
  unsigned int v78; // r8d
  int v79; // [rsp+30h] [rbp-69h]
  int v80; // [rsp+30h] [rbp-69h]
  unsigned int v81; // [rsp+34h] [rbp-65h]
  int v82; // [rsp+38h] [rbp-61h]
  struct VIDSCH_HW_CONTEXT *v83; // [rsp+40h] [rbp-59h]
  int v84; // [rsp+60h] [rbp-39h]
  __int64 v85; // [rsp+68h] [rbp-31h]
  __int64 v86; // [rsp+70h] [rbp-29h]
  unsigned __int64 v87; // [rsp+78h] [rbp-21h]
  __int64 v88; // [rsp+80h] [rbp-19h] BYREF
  unsigned int *v89; // [rsp+88h] [rbp-11h]
  unsigned int v90; // [rsp+90h] [rbp-9h]
  unsigned int v91; // [rsp+94h] [rbp-5h]
  int v92; // [rsp+98h] [rbp-1h]
  unsigned int v93; // [rsp+9Ch] [rbp+3h]
  unsigned int v94; // [rsp+A0h] [rbp+7h]
  struct VIDMM_ALLOC *v95; // [rsp+A8h] [rbp+Fh]
  char v98; // [rsp+110h] [rbp+77h] BYREF
  unsigned int v99; // [rsp+118h] [rbp+7Fh]

  v3 = *((_QWORD *)a2 + 12);
  v4 = 1LL;
  v5 = a2;
  v83 = *(struct VIDSCH_HW_CONTEXT **)(v3 + 40);
  v6 = *((_QWORD *)v83 + 1);
  v7 = *((unsigned int *)a2 + 40);
  v85 = v6;
  v8 = (unsigned int)v7;
  v99 = *((_DWORD *)a2 + 40);
  v9 = *(_QWORD *)(v6 + 32);
  v86 = v7;
  v10 = *(_QWORD *)(v9 + 8 * v7 + 3104);
  if ( (*(_BYTE *)(v9 + 2940) & 1) != 0 )
    goto LABEL_91;
  a3 = 0LL;
  if ( *(_DWORD *)(v9 + 2916)
    || *(_BYTE *)(v6 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 200), 0, 0)
    || (*((_DWORD *)a2 + 16) & 0x20) != 0 )
  {
    goto LABEL_91;
  }
  v11 = *((_QWORD *)a2 + 50) - *(_QWORD *)(v6 + 8LL * (unsigned int)v7 + 376);
  if ( v11 > (unsigned int)(64 - *(_DWORD *)(v10 + 2340)) )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, a2);
    v12[3] = 281LL;
    v12[4] = 2048LL;
    v12[5] = v3;
    v12[6] = v5;
    v12[7] = *((int *)v5 + 12);
    WdLogEvent5_WdCriticalError(v12);
    __debugbreak();
  }
  v98 = a3;
  if ( *(_DWORD *)(v10 + 4) == 3 || *((_DWORD *)a2 + 99) == (_DWORD)a3 && (*((_DWORD *)a2 + 68) & 0x10000000) != 0 )
  {
    v79 = v4;
    v87 = v4;
  }
  else
  {
    v79 = a3;
    v87 = a3;
  }
  v13 = *(_QWORD *)(v10 + 24);
  if ( ((unsigned __int8)(*((_DWORD *)a2 + 18) >> 23) & (unsigned __int8)v4) != 0 )
    v14 = ((unsigned __int16)*((_DWORD *)a2 + 212) | (unsigned __int16)(*((_DWORD *)a2 + 212) >> 10)) & 0x3FF;
  else
    v14 = (unsigned int)(((_DWORD)v4 << *(_DWORD *)(v9 + 144)) - v4);
  v15 = !_BitScanForward((unsigned int *)&v16, v14);
  v17 = -1;
  if ( !v15 )
    v17 = v16;
  if ( (_DWORD)v14 )
  {
    while ( 1 )
    {
      v18 = v17;
      v19 = 216LL * (unsigned int)v17;
      v20 = *(int *)(v19 + *(_QWORD *)(v9 + 8 * v8 + 3104) + 172);
      if ( (int)v20 > -1 )
      {
        v19 = 152 * v20;
        LODWORD(a3) = *(_DWORD *)(152 * v20 + *(_QWORD *)(v9 + 3232) + 112);
      }
      if ( (_DWORD)a3 == 2 )
        break;
      LODWORD(a3) = 0;
      v17 = -1;
      v14 = ~(1 << v18) & (unsigned int)v14;
      v15 = !_BitScanForward((unsigned int *)&v21, v14);
      if ( !v15 )
        v17 = v21;
      if ( !(_DWORD)v14 )
        goto LABEL_25;
    }
    v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v14);
    v29[5] = v17;
    v29[3] = 281LL;
    v29[4] = 0x100000LL;
    v29[6] = v8;
    v29[7] = v9;
    WdLogEvent5_WdCriticalError(v29);
    __debugbreak();
  }
  else
  {
LABEL_25:
    v22 = (unsigned int)(*((_DWORD *)v5 + 100) - *(_DWORD *)(v6 + 8 * v8 + 376));
    v82 = *((_DWORD *)v5 + 100) - *(_DWORD *)(v6 + 8 * v8 + 376);
    v23 = (*((_BYTE *)v5 + 400) - *(_BYTE *)(v6 + 8 * v8 + 376) + (unsigned __int8)*(_DWORD *)(v13 + 32)) & 0x3F;
    v84 = (*((_BYTE *)v5 + 400) - *(_BYTE *)(v6 + 8 * v8 + 376) + (unsigned __int8)*(_DWORD *)(v13 + 32)) & 0x3F;
    v6 = v13 + 1344 * v23;
    v8 = v6 + 88;
    v24 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v22, v14);
    v24[3] = v5;
    v24[4] = v13;
    v24[5] = v23;
    v24[6] = *(int *)(v6 + 1140);
    WdLogEvent5_WdPresentTokenEvent(v24);
    v25 = *(_QWORD *)(v9 + 624);
    v26 = *(unsigned __int16 *)(*((_QWORD *)v83 + 2) + 4LL);
    if ( (unsigned int)v26 < *(_DWORD *)(v9 + 696) )
      v25 += 8 * v26;
    v27 = *(_WORD *)(*(_QWORD *)v25 + 6LL);
    v81 = v27;
    if ( *(_DWORD *)(v6 + 1140) == 8 )
    {
      *(_QWORD *)(v6 + 8LL * *(unsigned int *)(v6 + 1180) + 88) = *((_QWORD *)v5 + 98);
      *(_QWORD *)(v6 + 8LL * *(unsigned int *)(v6 + 1180) + 600) = *((_QWORD *)v5 + 99);
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v5 + 98) + 32LL));
      v28 = *((_QWORD *)v83 + 1);
      ++*(_DWORD *)(v6 + 1180);
      *(_QWORD *)(v6 + 1128) = v28;
      *(_DWORD *)(v6 + 1172) |= 1 << v27;
      goto LABEL_60;
    }
  }
  v30 = (_DWORD *)((char *)v5 + 272);
  ++*(_DWORD *)(v9 + 796);
  ++*(_DWORD *)(v85 + 1576);
  ++*(_DWORD *)(v10 + 2340);
  if ( (*((_DWORD *)v5 + 68) & 0x800000) != 0 )
    v31 = ((unsigned __int16)*((_DWORD *)v5 + 212) | (unsigned __int16)(*((_DWORD *)v5 + 212) >> 10)) & 0x3FF;
  else
    v31 = (1 << *(_DWORD *)(v9 + 144)) - 1;
  v15 = !_BitScanForward((unsigned int *)&v32, v31);
  v33 = -1;
  if ( !v15 )
    v33 = v32;
  while ( v31 )
  {
    ++*(_DWORD *)(216LL * v33 + *(_QWORD *)(v9 + 8 * v86 + 3104) + 180);
    v34 = 1 << v33;
    v33 = -1;
    v31 &= ~v34;
    v15 = !_BitScanForward((unsigned int *)&v34, v31);
    if ( !v15 )
      v33 = v34;
  }
  VIDSCH_FLIP_QUEUE_ENTRY::ZeroFlipQueueEntry((VIDSCH_FLIP_QUEUE_ENTRY *)v8);
  v35 = *((_QWORD *)v83 + 1);
  *(_DWORD *)(v6 + 1224) |= 0x4000u;
  *(_QWORD *)(v6 + 1128) = v35;
  IsFocusHwContext = VidSchiIsFocusHwContext(v83);
  *(_DWORD *)(v6 + 1224) = v37 & 0xFFFF7FFF | (IsFocusHwContext << 15);
  *(_QWORD *)v8 = *((_QWORD *)v5 + 98);
  *(_QWORD *)(v6 + 600) = *((_QWORD *)v5 + 99);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v5 + 98) + 32LL));
  *(_DWORD *)(v6 + 1136) = *((_DWORD *)v5 + 28);
  *(_DWORD *)(v6 + 1144) = *((_DWORD *)v5 + 96);
  *(_BYTE *)(v6 + 1164) = (*v30 & 0x10) != 0;
  v38 = *(_DWORD *)(v6 + 1224) ^ (*(_DWORD *)(v6 + 1224) ^ (*((_DWORD *)v5 + 18) >> 19)) & 0x10;
  *(_DWORD *)(v6 + 1224) = v38;
  v39 = (v38 ^ (*v30 >> 20)) & 0x400 ^ v38;
  *(_DWORD *)(v6 + 1224) = v39;
  *(_DWORD *)(v6 + 1224) = v39 ^ ((unsigned __int16)v39 ^ (*v30 >> 20)) & 0x800;
  VIDSCH_FLIP_QUEUE_ENTRY::FillVmState((VIDSCH_FLIP_QUEUE_ENTRY *)v8, (struct _VIDSCH_QUEUE_PACKET *)((char *)v5 + 272));
  if ( !v82 )
    *(_QWORD *)(v6 + 1152) = ++*(_QWORD *)(v13 + 64);
  v41 = *(_DWORD *)(v6 + 1224);
  v42 = *((_DWORD *)v5 + 156);
  *(_DWORD *)(v6 + 1272) = v42;
  if ( (v41 & v40) != 0 )
  {
    v43 = v42 - 1;
    if ( v43 )
    {
      if ( v43 == 1 )
      {
        *(_OWORD *)(v6 + 1276) = *(_OWORD *)((char *)v5 + 628);
        *(_OWORD *)(v6 + 1292) = *(_OWORD *)((char *)v5 + 644);
        *(_OWORD *)(v6 + 1308) = *(_OWORD *)((char *)v5 + 660);
        *(_OWORD *)(v6 + 1324) = *(_OWORD *)((char *)v5 + 676);
        *(_QWORD *)(v6 + 1340) = *(_QWORD *)((char *)v5 + 692);
      }
    }
    else
    {
      *(_OWORD *)(v6 + 1276) = *(_OWORD *)((char *)v5 + 628);
      *(_QWORD *)(v6 + 1292) = *(_QWORD *)((char *)v5 + 644);
      *(_DWORD *)(v6 + 1300) = *((_DWORD *)v5 + 163);
    }
  }
  if ( (v41 & 0x800) != 0 )
  {
    *(_OWORD *)(v6 + 1348) = *(_OWORD *)((char *)v5 + 700);
    *(_OWORD *)(v6 + 1364) = *(_OWORD *)((char *)v5 + 716);
  }
  memmove(*(void **)(v6 + 1264), (char *)v5 + 848, *((unsigned int *)v5 + 215));
  VidSchiAcquirePrivateDataReference(
    (struct _VIDSCH_GLOBAL *)v9,
    *(struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 **)(v6 + 1264));
  VidSchiReleasePrivateDataReference((struct _VIDSCH_GLOBAL *)v9, (struct _VIDSCH_QUEUE_PACKET *)((char *)v5 + 848));
  v44 = (int *)((char *)v5 + 272);
  *(_DWORD *)(v6 + 1168) = *((_DWORD *)v5 + 102);
  *(_DWORD *)(v6 + 1172) = 1 << v81;
  v45 = *(_DWORD *)(v6 + 1224) ^ (*(_DWORD *)(v6 + 1224) ^ (*((_DWORD *)v5 + 68) >> 19)) & 1;
  *(_DWORD *)(v6 + 1224) = v45;
  v46 = ((unsigned __int8)v45 ^ (unsigned __int8)(*((_DWORD *)v5 + 68) >> 19)) & 2 ^ v45;
  *(_DWORD *)(v6 + 1224) = v46;
  v47 = ((unsigned __int8)v46 ^ (unsigned __int8)(*((_DWORD *)v5 + 68) >> 19)) & 4 ^ v46;
  *(_DWORD *)(v6 + 1224) = v47;
  *(_DWORD *)(v6 + 1224) = v47 ^ ((unsigned __int8)v47 ^ (unsigned __int8)(*((_DWORD *)v5 + 68) >> 19)) & 8;
  *(_QWORD *)(v6 + 1248) = *((_QWORD *)v5 + 37);
  v48 = *((_QWORD *)v5 + 38);
  *(_QWORD *)(v6 + 1256) = v48;
  if ( v48 )
    _InterlockedIncrement((volatile signed __int32 *)(v48 + 12));
  v49 = *v44;
  *(_DWORD *)(v6 + 1180) = 1;
  if ( (v49 & 0x400) != 0 )
  {
    *(_DWORD *)(v6 + 1176) = *((_DWORD *)v5 + 103);
    v50 = *((_DWORD *)v5 + 103);
  }
  else
  {
    *(_DWORD *)(v6 + 1176) = 1;
    v50 = 1;
  }
  *(_DWORD *)(v6 + 1184) = v50;
  if ( *(_BYTE *)(v6 + 1164) || v79 )
  {
    *(_DWORD *)(v6 + 1160) = 0;
    v53 = *(_DWORD *)(v6 + 1224) ^ (*(_DWORD *)(v6 + 1224) ^ ((unsigned int)*v44 >> 21)) & 0x80;
    *(_DWORD *)(v6 + 1224) = v53;
    v52 = v53 ^ ((unsigned __int16)v53 ^ ((unsigned int)*v44 >> 20)) & 0x100;
  }
  else
  {
    v51 = *((_DWORD *)v5 + 99);
    if ( v51 )
    {
      *(_DWORD *)(v6 + 1160) = v51;
      goto LABEL_60;
    }
    *(_DWORD *)(v6 + 1160) = 0;
    v52 = *(_DWORD *)(v6 + 1224) & 0xFFFFFE7F | 0x80;
  }
  *(_DWORD *)(v6 + 1224) = v52;
LABEL_60:
  v54 = *(_DWORD *)(v6 + 1224);
  v55 = *((_DWORD *)v5 + 104);
  *(_DWORD *)(v6 + 1228) = v55;
  if ( (v54 & 0x80u) != 0 && (*(_DWORD *)(v10 + 70584) & 1) != 0 )
  {
    v56 = -1;
    if ( !v55 )
      v55 = -1;
    *(_DWORD *)(v6 + 1228) = v55;
  }
  else
  {
    v56 = -1;
  }
  if ( (*((_DWORD *)v5 + 68) & 0x800) != 0 )
    *(_BYTE *)(v6 + 1165) = 1;
  v89 = *(unsigned int **)(v6 + 1264);
  v88 = v9;
  v57 = *v89;
  a3 = *v89 & 0x3FF;
  v90 = *v89 & 0x3FF;
  if ( *(_BYTE *)(v9 + 148) )
    v58 = (v57 >> 10) & 0x3FF;
  else
    v58 = 0LL;
  v15 = !_BitScanForward((unsigned int *)&v59, a3);
  v60 = -1;
  v91 = v58;
  v61 = 0;
  if ( !v15 )
    v60 = v59;
  v92 = 0;
  v15 = !_BitScanForward((unsigned int *)&v62, v58);
  v63 = v60;
  if ( !v15 )
    v56 = v62;
  v93 = v60;
  v64 = v56;
  v94 = v56;
  while ( (_DWORD)a3 || (_DWORD)v58 )
  {
    if ( v63 >= v64 )
      goto LABEL_86;
    v65 = *(_DWORD *)(v6 + 1168);
    v66 = 0;
    v67 = v81;
    v68 = 1;
    v80 = v65;
    v69 = 0;
    while ( (v65 & v68) == 0 )
    {
LABEL_83:
      ++v69;
      v68 *= 2;
      if ( v69 > v67 )
        goto LABEL_86;
    }
    v70 = *(_QWORD *)(v6 + 1264);
    v71 = *(_DWORD *)(v70 + 4);
    v72 = v71 * ((8 * *(_DWORD *)(v70 + 8) + 199) & 0xFFFFFFF8);
    v73 = (unsigned int)(v66 * v71);
    v67 = v81;
    v95 = *(struct VIDMM_ALLOC **)(v72 + ((unsigned __int64)(unsigned int)(v61 + v73) << 6) + v70 + 48);
    if ( ((*((_DWORD *)v95 + 8) >> 2) & 0x3F) != v81 )
    {
      v65 = v80;
      ++v66;
      goto LABEL_83;
    }
    VIDMM_GLOBAL::ReferencePrimaryAllocationForFlipping(
      (VIDMM_GLOBAL *)(v72 + ((unsigned __int64)(unsigned int)(v61 + v73) << 6)),
      v95,
      v73,
      (unsigned __int64 *)(v72 + ((unsigned __int64)(unsigned int)(v61 + v73) << 6) + v70 + 64),
      (unsigned __int64 *)(v72 + ((unsigned __int64)(unsigned int)(v61 + v73) << 6) + v70 + 72));
LABEL_86:
    VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)&v88);
    v64 = v94;
    v58 = v91;
    a3 = v90;
    v63 = v93;
    v61 = v92;
  }
  v5 = a2;
  if ( *(_DWORD *)(v6 + 1176) <= *(_DWORD *)(v6 + 1180) )
  {
    if ( v82 )
    {
      *(_DWORD *)(v6 + 1140) = 7;
      goto LABEL_89;
    }
    LODWORD(v74) = v84;
    while ( 1 )
    {
      *(_DWORD *)(v13 + 32) = ((_BYTE)v74 + 1) & 0x3F;
      ++*(_QWORD *)(v85 + 8 * v86 + 376);
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 800));
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 2344));
      if ( *(_DWORD *)(v8 + 1052) == 7 )
        *(_QWORD *)(v8 + 1064) = ++*(_QWORD *)(v13 + 64);
      if ( (unsigned int)VidSchiIsHardwareCompletedDependingCommandForFlip(v8, v58, a3) && *(_BYTE *)(v10 + 66436) )
        break;
      *(_DWORD *)(v8 + 1052) = 16;
LABEL_146:
      v74 = *(unsigned int *)(v13 + 32);
      v8 = 1344 * v74 + v13 + 88;
      if ( *(_DWORD *)(v8 + 1052) != 7 )
        goto LABEL_89;
    }
    *(_DWORD *)(v8 + 1052) = 2;
    v75 = *(_DWORD *)(v13 + 40);
    if ( v87 )
    {
      if ( (_DWORD)v74 != v75 )
        goto LABEL_143;
      if ( *(_BYTE *)(v9 + 148) )
      {
        v58 = *(unsigned int *)(v13 + 48);
        a3 = ((unsigned __int8)*(_DWORD *)(v13 + 44) - 1) & 0x3F;
        while ( (_DWORD)v58 != (_DWORD)a3 )
        {
          if ( *(_DWORD *)(1344LL * (unsigned int)v58 + v13 + 1140) == 14 )
            goto LABEL_117;
          v58 = ((_BYTE)v58 - 1) & 0x3F;
        }
        a3 = *(unsigned int *)(v8 + 1136);
        if ( (*(_DWORD *)(v8 + 1136) & 0x10) != 0 )
          v58 = ((unsigned __int16)**(_DWORD **)(v8 + 1176) | (unsigned __int16)(**(_DWORD **)(v8 + 1176) >> 10)) & 0x3FF;
        else
          v58 = (unsigned int)((1 << *(_DWORD *)(v9 + 144)) - 1);
        if ( ((unsigned int)v58 & *(_DWORD *)(v10 + 2356)) != 0
          || (*(_DWORD *)(v9 + 152) <= 1u || *(_DWORD *)(v10 + 4) == 3 || (a3 &= 0x180u, (_DWORD)a3 != 128))
          && ((*(_DWORD *)(v8 + 1136) & 0x10) == 0
            ? (v58 = (unsigned int)((1 << *(_DWORD *)(v9 + 144)) - 1))
            : (v58 = ((unsigned __int16)**(_DWORD **)(v8 + 1176) | (unsigned __int16)(**(_DWORD **)(v8 + 1176) >> 10)) & 0x3FF),
              ((unsigned int)v58 & *(_DWORD *)(v10 + 2352)) != 0) )
        {
LABEL_117:
          *(_QWORD *)(v8 + 1104) = MEMORY[0xFFFFF78000000320];
          goto LABEL_143;
        }
      }
      goto LABEL_141;
    }
    if ( (_DWORD)v74 != v75 && !*(_BYTE *)(v8 + 1076) )
    {
      v74 = ((_BYTE)v74 - 1) & 0x3F;
      v76 = *(unsigned int *)(1344 * v74 + v13 + 1224);
      if ( (v76 & 0x20) == 0 )
        goto LABEL_143;
      v77 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v76, v58);
      v77[3] = 281LL;
      v77[4] = 0x100000LL;
      v77[5] = v74;
      v77[6] = v13;
      v77[7] = v9;
      WdLogEvent5_WdCriticalError(v77);
      __debugbreak();
    }
    *(_QWORD *)(v8 + 1104) = MEMORY[0xFFFFF78000000320];
    if ( *(_BYTE *)(v9 + 148) )
    {
      v58 = *(unsigned int *)(v13 + 48);
      a3 = ((unsigned __int8)*(_DWORD *)(v13 + 44) - 1) & 0x3F;
      while ( (_DWORD)v58 != (_DWORD)a3 )
      {
        if ( *(_DWORD *)(1344LL * (unsigned int)v58 + v13 + 1140) == 14 )
          goto LABEL_143;
        v58 = ((_BYTE)v58 - 1) & 0x3F;
      }
      a3 = *(unsigned int *)(v8 + 1136);
      if ( (a3 & 0x10) != 0 )
        v58 = ((unsigned __int16)**(_DWORD **)(v8 + 1176) | (unsigned __int16)(**(_DWORD **)(v8 + 1176) >> 10)) & 0x3FF;
      else
        v58 = (unsigned int)((1 << *(_DWORD *)(v9 + 144)) - 1);
      if ( ((unsigned int)v58 & *(_DWORD *)(v10 + 2356)) != 0 )
        goto LABEL_143;
      if ( *(_DWORD *)(v9 + 152) > 1u && *(_DWORD *)(v10 + 4) != 3 )
      {
        a3 &= 0x180u;
        if ( (_DWORD)a3 == 128 )
          goto LABEL_150;
      }
    }
    v58 = (*(_DWORD *)(v8 + 1136) & 0x10) != 0
        ? ((unsigned __int16)**(_DWORD **)(v8 + 1176) | (unsigned __int16)(**(_DWORD **)(v8 + 1176) >> 10)) & 0x3FF
        : (unsigned int)((1 << *(_DWORD *)(v9 + 144)) - 1);
    if ( ((unsigned int)v58 & *(_DWORD *)(v10 + 2352)) == 0 )
    {
LABEL_150:
      if ( *(_BYTE *)(v8 + 1076) )
        VidSchiRestartQueuedFlip((__int64)a1, v85, v99, v13, v74);
      if ( !*(_DWORD *)(v13 + 80) )
      {
LABEL_141:
        v78 = v99;
        *(_DWORD *)(v8 + 1052) = 4;
        VidSchiExecuteMmIoFlip(a1, v9, v78, v13, v74, &v98);
        goto LABEL_143;
      }
      *(_DWORD *)(v8 + 1052) = 3;
    }
LABEL_143:
    if ( *(_DWORD *)(1344LL * *(unsigned int *)(v13 + 36) + v13 + 1140) != 16 )
      *(_DWORD *)(v13 + 36) = *(_DWORD *)(v13 + 32);
    goto LABEL_146;
  }
  *(_DWORD *)(v6 + 1140) = 8;
LABEL_89:
  *((_DWORD *)a2 + 16) |= 2u;
  if ( v98 )
    VidSchiCompletePendingFlipOnPlane((_DWORD)a1, v9, v99, v13, 9);
LABEL_91:
  VidSchiCompleteHwQueuePacket(a1, v5, a3);
}
