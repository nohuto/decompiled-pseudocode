/*
 * XREFs of ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0038784
 * Callers:
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C00381E0 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_H.c)
 *     ?VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0038470 (-VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_H.c)
 * Callees:
 *     VidSchiIsHardwareCompletedDependingCommandForFlip @ 0x1C00034DC (VidSchiIsHardwareCompletedDependingCommandForFlip.c)
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C0004B40 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     ?VidSchiAcquirePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1C00068F4 (-VidSchiAcquirePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000DF80 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiReleasePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1C0013988 (-VidSchiReleasePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@.c)
 *     memmove @ 0x1C0016B00 (memmove.c)
 *     ?ReferencePrimaryAllocationForFlipping@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_KPEA_K2@Z @ 0x1C0023A50 (-ReferencePrimaryAllocationForFlipping@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_KPEA_K2@Z.c)
 *     ?ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ @ 0x1C002CF60 (-ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ.c)
 *     VidSchiRestartQueuedFlip @ 0x1C003158C (VidSchiRestartQueuedFlip.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0036608 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiIsFocusHwContext@@YA_NPEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C0037E64 (-VidSchiIsFocusHwContext@@YA_NPEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C003CE98 (VidSchiCompletePendingFlipOnPlane.c)
 */

void __fastcall VidSchiSubmitHwQueueMmIoFlipCommand(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_QUEUE_PACKET *a2,
        unsigned __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r9
  struct _VIDSCH_QUEUE_PACKET *v5; // rsi
  __int64 v6; // r11
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // r13
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // r15
  __int64 v14; // rdx
  bool v15; // zf
  int v16; // eax
  char v17; // r12
  __int64 v18; // rbx
  char v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rbx
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned __int16 v28; // dx
  __int64 v29; // rax
  _QWORD *v30; // rax
  unsigned int v31; // r8d
  int v32; // eax
  char v33; // cl
  int v34; // eax
  __int64 v35; // rax
  unsigned __int8 IsFocusHwContext; // al
  int v37; // r8d
  int v38; // ecx
  int v39; // ecx
  int v40; // edx
  __int64 v41; // rax
  int v42; // ecx
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  int v46; // ecx
  __int64 v47; // rax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  unsigned int v51; // eax
  int v52; // ecx
  int v53; // eax
  int v54; // ecx
  unsigned int v55; // edx
  __int64 v56; // rdx
  int v57; // eax
  char v58; // cl
  int v59; // ebx
  int v60; // eax
  unsigned int v61; // r9d
  unsigned int v62; // eax
  int v63; // eax
  int v64; // r11d
  unsigned int v65; // ecx
  int v66; // r9d
  unsigned int v67; // r10d
  __int64 v68; // rdx
  int v69; // r8d
  __int64 v70; // rax
  __int64 v71; // r8
  __int64 v72; // rbx
  int v73; // eax
  __int64 v74; // rcx
  _QWORD *v75; // rax
  unsigned int v76; // r8d
  int v77; // [rsp+30h] [rbp-69h]
  int v78; // [rsp+30h] [rbp-69h]
  struct VIDSCH_HW_CONTEXT *v79; // [rsp+38h] [rbp-61h]
  int v80; // [rsp+40h] [rbp-59h]
  int v81; // [rsp+5Ch] [rbp-3Dh]
  __int64 v82; // [rsp+60h] [rbp-39h]
  __int64 v83; // [rsp+68h] [rbp-31h]
  unsigned __int64 v84; // [rsp+70h] [rbp-29h]
  __int64 v85; // [rsp+78h] [rbp-21h] BYREF
  unsigned int *v86; // [rsp+80h] [rbp-19h]
  unsigned int v87; // [rsp+88h] [rbp-11h]
  unsigned int v88; // [rsp+8Ch] [rbp-Dh]
  int v89; // [rsp+90h] [rbp-9h]
  unsigned int v90; // [rsp+94h] [rbp-5h]
  unsigned int v91; // [rsp+98h] [rbp-1h]
  struct VIDMM_ALLOC *v92; // [rsp+A0h] [rbp+7h]
  char v95; // [rsp+110h] [rbp+77h] BYREF
  unsigned int v96; // [rsp+118h] [rbp+7Fh]

  v3 = *((_QWORD *)a2 + 12);
  v4 = 1LL;
  v5 = a2;
  v79 = *(struct VIDSCH_HW_CONTEXT **)(v3 + 40);
  v6 = *((_QWORD *)v79 + 1);
  v7 = *((unsigned int *)a2 + 40);
  v82 = v6;
  v8 = (unsigned int)v7;
  v96 = *((_DWORD *)a2 + 40);
  v9 = *(_QWORD *)(v6 + 32);
  v83 = v7;
  v10 = *(_QWORD *)(v9 + 8 * v7 + 3104);
  if ( (*(_BYTE *)(v9 + 2940) & 1) != 0 )
    goto LABEL_92;
  a3 = 0LL;
  if ( *(_DWORD *)(v9 + 2916)
    || *(_BYTE *)(v6 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 200), 0, 0)
    || (*((_DWORD *)a2 + 16) & 0x20) != 0 )
  {
    goto LABEL_92;
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
  v95 = a3;
  if ( *(_DWORD *)(v10 + 4) == 3 || *((_DWORD *)a2 + 99) == (_DWORD)a3 && (*((_DWORD *)a2 + 68) & 0x10000000) != 0 )
  {
    v77 = v4;
    v84 = v4;
  }
  else
  {
    v77 = a3;
    v84 = a3;
  }
  v13 = *(_QWORD *)(v10 + 24);
  if ( ((unsigned __int8)(*((_DWORD *)a2 + 18) >> 23) & (unsigned __int8)v4) != 0 )
    v14 = ((unsigned __int16)*((_DWORD *)a2 + 210) | (unsigned __int16)(*((_DWORD *)a2 + 210) >> 10)) & 0x3FF;
  else
    v14 = (unsigned int)(((_DWORD)v4 << *(_DWORD *)(v9 + 144)) - v4);
  v15 = !_BitScanForward((unsigned int *)&v16, v14);
  v17 = -1;
  v18 = 0xFFFFFFFFLL;
  if ( !v15 )
    v18 = (unsigned __int8)v16;
  if ( (_DWORD)v14 )
  {
    while ( 1 )
    {
      v19 = v18;
      v20 = 216LL * (unsigned int)(char)v18;
      v21 = *(int *)(v20 + *(_QWORD *)(v9 + 8 * v8 + 3104) + 172);
      if ( (int)v21 > -1 )
      {
        v20 = 152 * v21;
        LODWORD(a3) = *(_DWORD *)(152 * v21 + *(_QWORD *)(v9 + 3232) + 112);
      }
      if ( (_DWORD)a3 == 2 )
        break;
      LODWORD(a3) = 0;
      v18 = 0xFFFFFFFFLL;
      v14 = ~(1 << v19) & (unsigned int)v14;
      v15 = !_BitScanForward((unsigned int *)&v22, v14);
      if ( !v15 )
        v18 = (unsigned __int8)v22;
      if ( !(_DWORD)v14 )
        goto LABEL_25;
    }
    v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v14);
    v30[5] = (char)v18;
    v30[3] = 281LL;
    v30[4] = 0x100000LL;
    v30[6] = v8;
    v30[7] = v9;
    WdLogEvent5_WdCriticalError(v30);
    __debugbreak();
  }
  else
  {
LABEL_25:
    v23 = (unsigned int)(*((_DWORD *)v5 + 100) - *(_DWORD *)(v6 + 8 * v8 + 376));
    v80 = *((_DWORD *)v5 + 100) - *(_DWORD *)(v6 + 8 * v8 + 376);
    v24 = (*((_BYTE *)v5 + 400) - *(_BYTE *)(v6 + 8 * v8 + 376) + (unsigned __int8)*(_DWORD *)(v13 + 32)) & 0x3F;
    v81 = (*((_BYTE *)v5 + 400) - *(_BYTE *)(v6 + 8 * v8 + 376) + (unsigned __int8)*(_DWORD *)(v13 + 32)) & 0x3F;
    v8 = v13 + 1344 * v24 + 88;
    v25 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v23, v14);
    v25[3] = v5;
    v25[4] = v13;
    v25[5] = v24;
    v25[6] = *(int *)(v8 + 1052);
    WdLogEvent5_WdPresentTokenEvent(v25);
    v18 = (__int64)v79;
    v26 = *(_QWORD *)(v9 + 624);
    v27 = *(unsigned __int16 *)(*((_QWORD *)v79 + 2) + 4LL);
    if ( (unsigned int)v27 < *(_DWORD *)(v9 + 696) )
      v26 += 8 * v27;
    v28 = *(_WORD *)(*(_QWORD *)v26 + 6LL);
    LODWORD(v79) = v28;
    if ( *(_DWORD *)(v8 + 1052) == 8 )
    {
      *(_QWORD *)(v8 + 8LL * *(unsigned int *)(v8 + 1092)) = *((_QWORD *)v5 + 98);
      *(_QWORD *)(v8 + 8LL * *(unsigned int *)(v8 + 1092) + 512) = *((_QWORD *)v5 + 99);
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v5 + 98) + 32LL));
      v29 = *(_QWORD *)(v18 + 8);
      ++*(_DWORD *)(v8 + 1092);
      *(_QWORD *)(v8 + 1040) = v29;
      *(_DWORD *)(v8 + 1084) |= 1 << v28;
      goto LABEL_62;
    }
  }
  ++*(_DWORD *)(v9 + 796);
  ++*(_DWORD *)(v82 + 1576);
  ++*(_DWORD *)(v10 + 2340);
  if ( (*((_DWORD *)v5 + 68) & 0x800000) != 0 )
    v31 = ((unsigned __int16)*((_DWORD *)v5 + 210) | (unsigned __int16)(*((_DWORD *)v5 + 210) >> 10)) & 0x3FF;
  else
    v31 = (1 << *(_DWORD *)(v9 + 144)) - 1;
  v15 = !_BitScanForward((unsigned int *)&v32, v31);
  v33 = -1;
  if ( !v15 )
    v33 = v32;
  while ( v31 )
  {
    ++*(_DWORD *)(216LL * v33 + *(_QWORD *)(v9 + 8 * v83 + 3104) + 180);
    v34 = 1 << v33;
    v33 = -1;
    v31 &= ~v34;
    v15 = !_BitScanForward((unsigned int *)&v34, v31);
    if ( !v15 )
      v33 = v34;
  }
  VIDSCH_FLIP_QUEUE_ENTRY::ZeroFlipQueueEntry((VIDSCH_FLIP_QUEUE_ENTRY *)v8);
  v35 = *(_QWORD *)(v18 + 8);
  *(_DWORD *)(v8 + 1136) |= 0x4000u;
  *(_QWORD *)(v8 + 1040) = v35;
  IsFocusHwContext = VidSchiIsFocusHwContext((struct VIDSCH_HW_CONTEXT *)v18);
  *(_DWORD *)(v8 + 1136) = v37 & 0xFFFF7FFF | (IsFocusHwContext << 15);
  *(_QWORD *)v8 = *((_QWORD *)v5 + 98);
  *(_QWORD *)(v8 + 512) = *((_QWORD *)v5 + 99);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v5 + 98) + 32LL));
  *(_DWORD *)(v8 + 1048) = *((_DWORD *)v5 + 28);
  *(_DWORD *)(v8 + 1056) = *((_DWORD *)v5 + 96);
  *(_BYTE *)(v8 + 1076) = (*((_DWORD *)v5 + 68) & 0x10) != 0;
  v38 = *(_DWORD *)(v8 + 1136) ^ (*(_DWORD *)(v8 + 1136) ^ (*((_DWORD *)v5 + 18) >> 19)) & 0x10;
  *(_DWORD *)(v8 + 1136) = v38;
  v39 = (v38 ^ (*((_DWORD *)v5 + 68) >> 20)) & 0x400 ^ v38;
  *(_DWORD *)(v8 + 1136) = v39;
  v40 = v39 ^ ((unsigned __int16)v39 ^ (*((_DWORD *)v5 + 68) >> 20)) & 0x800;
  *(_DWORD *)(v8 + 1136) = v40;
  v41 = *((_QWORD *)v5 + 102);
  if ( v41 )
  {
    *(_QWORD *)(v8 + 1304) = v41;
    *(_QWORD *)(v8 + 1312) = *((_QWORD *)v5 + 103);
    *(_QWORD *)(v8 + 1320) = *((_QWORD *)v5 + 104);
    *(_QWORD *)(v8 + 1328) = *((_QWORD *)v5 + 130);
    *(_DWORD *)(v8 + 1336) ^= (*(_DWORD *)(v8 + 1336) ^ (*((_DWORD *)v5 + 69) >> 5)) & 1;
    *(_DWORD *)(v8 + 1336) ^= ((unsigned __int8)*(_DWORD *)(v8 + 1336) ^ (unsigned __int8)(*((_DWORD *)v5 + 69) >> 3)) & 2;
  }
  if ( !v80 )
  {
    ++*(_QWORD *)(v13 + 64);
    v40 = *(_DWORD *)(v8 + 1136);
    *(_QWORD *)(v8 + 1064) = *(_QWORD *)(v13 + 64);
  }
  v42 = *((_DWORD *)v5 + 156);
  *(_DWORD *)(v8 + 1184) = v42;
  if ( (v40 & 0x400) != 0 )
  {
    v43 = v42 - 1;
    if ( v43 )
    {
      if ( v43 == 1 )
      {
        *(_OWORD *)(v8 + 1188) = *(_OWORD *)((char *)v5 + 628);
        *(_OWORD *)(v8 + 1204) = *(_OWORD *)((char *)v5 + 644);
        *(_OWORD *)(v8 + 1220) = *(_OWORD *)((char *)v5 + 660);
        *(_OWORD *)(v8 + 1236) = *(_OWORD *)((char *)v5 + 676);
        *(_QWORD *)(v8 + 1252) = *(_QWORD *)((char *)v5 + 692);
      }
    }
    else
    {
      *(_OWORD *)(v8 + 1188) = *(_OWORD *)((char *)v5 + 628);
      *(_QWORD *)(v8 + 1204) = *(_QWORD *)((char *)v5 + 644);
      *(_DWORD *)(v8 + 1212) = *((_DWORD *)v5 + 163);
    }
  }
  if ( (v40 & 0x800) != 0 )
  {
    *(_OWORD *)(v8 + 1260) = *(_OWORD *)((char *)v5 + 700);
    *(_OWORD *)(v8 + 1276) = *(_OWORD *)((char *)v5 + 716);
  }
  memmove(*(void **)(v8 + 1176), (char *)v5 + 840, *((unsigned int *)v5 + 213));
  VidSchiAcquirePrivateDataReference(
    (struct _VIDSCH_GLOBAL *)v9,
    *(struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 **)(v8 + 1176));
  VidSchiReleasePrivateDataReference((struct _VIDSCH_GLOBAL *)v9, (struct _VIDSCH_QUEUE_PACKET *)((char *)v5 + 840));
  *(_DWORD *)(v8 + 1080) = *((_DWORD *)v5 + 102);
  *(_DWORD *)(v8 + 1084) = 1 << (char)v79;
  v44 = *(_DWORD *)(v8 + 1136) ^ (*(_DWORD *)(v8 + 1136) ^ (*((_DWORD *)v5 + 68) >> 19)) & 1;
  *(_DWORD *)(v8 + 1136) = v44;
  v45 = ((unsigned __int8)v44 ^ (unsigned __int8)(*((_DWORD *)v5 + 68) >> 19)) & 2 ^ v44;
  *(_DWORD *)(v8 + 1136) = v45;
  v46 = ((unsigned __int8)v45 ^ (unsigned __int8)(*((_DWORD *)v5 + 68) >> 19)) & 4 ^ v45;
  *(_DWORD *)(v8 + 1136) = v46;
  *(_DWORD *)(v8 + 1136) = v46 ^ ((unsigned __int8)v46 ^ (unsigned __int8)(*((_DWORD *)v5 + 68) >> 19)) & 8;
  *(_QWORD *)(v8 + 1160) = *((_QWORD *)v5 + 37);
  v47 = *((_QWORD *)v5 + 38);
  *(_QWORD *)(v8 + 1168) = v47;
  if ( v47 )
    _InterlockedIncrement((volatile signed __int32 *)(v47 + 12));
  v48 = *((_DWORD *)v5 + 68);
  *(_DWORD *)(v8 + 1092) = 1;
  if ( (v48 & 0x400) != 0 )
  {
    *(_DWORD *)(v8 + 1088) = *((_DWORD *)v5 + 103);
    v49 = *((_DWORD *)v5 + 103);
  }
  else
  {
    *(_DWORD *)(v8 + 1088) = 1;
    v49 = 1;
  }
  *(_DWORD *)(v8 + 1096) = v49;
  if ( *(_BYTE *)(v8 + 1076) || v77 )
  {
    *(_DWORD *)(v8 + 1072) = 0;
    v52 = *(_DWORD *)(v8 + 1136) ^ (*(_DWORD *)(v8 + 1136) ^ (*((_DWORD *)v5 + 68) >> 21)) & 0x80;
    *(_DWORD *)(v8 + 1136) = v52;
    v51 = v52 ^ ((unsigned __int16)v52 ^ (*((_DWORD *)v5 + 68) >> 20)) & 0x100;
  }
  else
  {
    v50 = *((_DWORD *)v5 + 99);
    if ( v50 )
    {
      *(_DWORD *)(v8 + 1072) = v50;
      goto LABEL_62;
    }
    *(_DWORD *)(v8 + 1072) = 0;
    v51 = *(_DWORD *)(v8 + 1136) & 0xFFFFFE7F | 0x80;
  }
  *(_DWORD *)(v8 + 1136) = v51;
LABEL_62:
  v53 = *(_DWORD *)(v8 + 1136);
  v54 = *((_DWORD *)v5 + 104);
  *(_DWORD *)(v8 + 1140) = v54;
  if ( (v53 & 0x80u) != 0 && (*(_DWORD *)(v10 + 70584) & 1) != 0 )
  {
    if ( !v54 )
      v54 = -1;
    *(_DWORD *)(v8 + 1140) = v54;
  }
  if ( (*((_DWORD *)v5 + 68) & 0x800) != 0 )
    *(_BYTE *)(v8 + 1077) = 1;
  v86 = *(unsigned int **)(v8 + 1176);
  v85 = v9;
  v55 = *v86;
  a3 = *v86 & 0x3FF;
  v87 = *v86 & 0x3FF;
  if ( *(_BYTE *)(v9 + 148) )
    v56 = (v55 >> 10) & 0x3FF;
  else
    v56 = 0LL;
  v15 = !_BitScanForward((unsigned int *)&v57, a3);
  v58 = -1;
  v88 = v56;
  v59 = 0;
  if ( !v15 )
    v58 = v57;
  v89 = 0;
  v15 = !_BitScanForward((unsigned int *)&v60, v56);
  v61 = v58;
  if ( !v15 )
    v17 = v60;
  v90 = v58;
  v62 = v17;
  v91 = v17;
  while ( (_DWORD)a3 || (_DWORD)v56 )
  {
    if ( v61 >= v62 )
      goto LABEL_87;
    v63 = *(_DWORD *)(v8 + 1080);
    v64 = 0;
    v65 = (unsigned int)v79;
    v66 = 1;
    v78 = v63;
    v67 = 0;
    while ( (v63 & v66) == 0 )
    {
LABEL_84:
      ++v67;
      v66 *= 2;
      if ( v67 > v65 )
        goto LABEL_87;
    }
    v68 = *(_QWORD *)(v8 + 1176);
    v69 = *(_DWORD *)(v68 + 4);
    v70 = v69 * ((8 * *(_DWORD *)(v68 + 8) + 199) & 0xFFFFFFF8);
    v71 = (unsigned int)(v64 * v69);
    v65 = (unsigned int)v79;
    v92 = *(struct VIDMM_ALLOC **)(v68 + ((unsigned __int64)(unsigned int)(v59 + v71) << 6) + v70 + 48);
    if ( ((*((_DWORD *)v92 + 8) >> 2) & 0x3F) != (_DWORD)v79 )
    {
      v63 = v78;
      ++v64;
      goto LABEL_84;
    }
    VIDMM_GLOBAL::ReferencePrimaryAllocationForFlipping(
      (VIDMM_GLOBAL *)((unsigned int)v70 + ((unsigned __int64)(unsigned int)(v59 + v71) << 6)),
      v92,
      v71,
      (unsigned __int64 *)((unsigned int)v70 + ((unsigned __int64)(unsigned int)(v59 + v71) << 6) + v68 + 64),
      (unsigned __int64 *)((unsigned int)v70 + ((unsigned __int64)(unsigned int)(v59 + v71) << 6) + v68 + 72));
LABEL_87:
    VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)&v85);
    v62 = v91;
    v56 = v88;
    a3 = v87;
    v61 = v90;
    v59 = v89;
  }
  v5 = a2;
  if ( *(_DWORD *)(v8 + 1088) <= *(_DWORD *)(v8 + 1092) )
  {
    if ( v80 )
    {
      *(_DWORD *)(v8 + 1052) = 7;
      goto LABEL_90;
    }
    LODWORD(v72) = v81;
    while ( 1 )
    {
      *(_DWORD *)(v13 + 32) = ((_BYTE)v72 + 1) & 0x3F;
      ++*(_QWORD *)(v82 + 8 * v83 + 376);
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 800));
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 2344));
      if ( *(_DWORD *)(v8 + 1052) == 7 )
        *(_QWORD *)(v8 + 1064) = ++*(_QWORD *)(v13 + 64);
      if ( (unsigned int)VidSchiIsHardwareCompletedDependingCommandForFlip(v8, v56, a3) && *(_BYTE *)(v10 + 66436) )
        break;
      *(_DWORD *)(v8 + 1052) = 16;
LABEL_147:
      v72 = *(unsigned int *)(v13 + 32);
      v8 = 1344 * v72 + v13 + 88;
      if ( *(_DWORD *)(v8 + 1052) != 7 )
        goto LABEL_90;
    }
    *(_DWORD *)(v8 + 1052) = 2;
    v73 = *(_DWORD *)(v13 + 40);
    if ( v84 )
    {
      if ( (_DWORD)v72 != v73 )
        goto LABEL_144;
      if ( *(_BYTE *)(v9 + 148) )
      {
        v56 = *(unsigned int *)(v13 + 48);
        a3 = ((unsigned __int8)*(_DWORD *)(v13 + 44) - 1) & 0x3F;
        while ( (_DWORD)v56 != (_DWORD)a3 )
        {
          if ( *(_DWORD *)(1344LL * (unsigned int)v56 + v13 + 1140) == 14 )
            goto LABEL_118;
          v56 = ((_BYTE)v56 - 1) & 0x3F;
        }
        a3 = *(unsigned int *)(v8 + 1136);
        if ( (*(_DWORD *)(v8 + 1136) & 0x10) != 0 )
          v56 = ((unsigned __int16)**(_DWORD **)(v8 + 1176) | (unsigned __int16)(**(_DWORD **)(v8 + 1176) >> 10)) & 0x3FF;
        else
          v56 = (unsigned int)((1 << *(_DWORD *)(v9 + 144)) - 1);
        if ( ((unsigned int)v56 & *(_DWORD *)(v10 + 2356)) != 0
          || (*(_DWORD *)(v9 + 152) <= 1u || *(_DWORD *)(v10 + 4) == 3 || (a3 &= 0x180u, (_DWORD)a3 != 128))
          && ((*(_DWORD *)(v8 + 1136) & 0x10) == 0
            ? (v56 = (unsigned int)((1 << *(_DWORD *)(v9 + 144)) - 1))
            : (v56 = ((unsigned __int16)**(_DWORD **)(v8 + 1176) | (unsigned __int16)(**(_DWORD **)(v8 + 1176) >> 10)) & 0x3FF),
              ((unsigned int)v56 & *(_DWORD *)(v10 + 2352)) != 0) )
        {
LABEL_118:
          *(_QWORD *)(v8 + 1104) = MEMORY[0xFFFFF78000000320];
          goto LABEL_144;
        }
      }
      goto LABEL_142;
    }
    if ( (_DWORD)v72 != v73 && !*(_BYTE *)(v8 + 1076) )
    {
      v72 = ((_BYTE)v72 - 1) & 0x3F;
      v74 = *(unsigned int *)(1344 * v72 + v13 + 1224);
      if ( (v74 & 0x20) == 0 )
        goto LABEL_144;
      v75 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v74, v56);
      v75[3] = 281LL;
      v75[4] = 0x100000LL;
      v75[5] = v72;
      v75[6] = v13;
      v75[7] = v9;
      WdLogEvent5_WdCriticalError(v75);
      __debugbreak();
    }
    *(_QWORD *)(v8 + 1104) = MEMORY[0xFFFFF78000000320];
    if ( *(_BYTE *)(v9 + 148) )
    {
      v56 = *(unsigned int *)(v13 + 48);
      a3 = ((unsigned __int8)*(_DWORD *)(v13 + 44) - 1) & 0x3F;
      while ( (_DWORD)v56 != (_DWORD)a3 )
      {
        if ( *(_DWORD *)(1344LL * (unsigned int)v56 + v13 + 1140) == 14 )
          goto LABEL_144;
        v56 = ((_BYTE)v56 - 1) & 0x3F;
      }
      a3 = *(unsigned int *)(v8 + 1136);
      if ( (a3 & 0x10) != 0 )
        v56 = ((unsigned __int16)**(_DWORD **)(v8 + 1176) | (unsigned __int16)(**(_DWORD **)(v8 + 1176) >> 10)) & 0x3FF;
      else
        v56 = (unsigned int)((1 << *(_DWORD *)(v9 + 144)) - 1);
      if ( ((unsigned int)v56 & *(_DWORD *)(v10 + 2356)) != 0 )
        goto LABEL_144;
      if ( *(_DWORD *)(v9 + 152) > 1u && *(_DWORD *)(v10 + 4) != 3 )
      {
        a3 &= 0x180u;
        if ( (_DWORD)a3 == 128 )
          goto LABEL_151;
      }
    }
    v56 = (*(_DWORD *)(v8 + 1136) & 0x10) != 0
        ? ((unsigned __int16)**(_DWORD **)(v8 + 1176) | (unsigned __int16)(**(_DWORD **)(v8 + 1176) >> 10)) & 0x3FF
        : (unsigned int)((1 << *(_DWORD *)(v9 + 144)) - 1);
    if ( ((unsigned int)v56 & *(_DWORD *)(v10 + 2352)) == 0 )
    {
LABEL_151:
      if ( *(_BYTE *)(v8 + 1076) )
        VidSchiRestartQueuedFlip((__int64)a1, v82, v96, v13, v72);
      if ( !*(_DWORD *)(v13 + 80) )
      {
LABEL_142:
        v76 = v96;
        *(_DWORD *)(v8 + 1052) = 4;
        VidSchiExecuteMmIoFlip(a1, v9, v76, v13, v72, (__int64)&v95);
        goto LABEL_144;
      }
      *(_DWORD *)(v8 + 1052) = 3;
    }
LABEL_144:
    if ( *(_DWORD *)(1344LL * *(unsigned int *)(v13 + 36) + v13 + 1140) != 16 )
      *(_DWORD *)(v13 + 36) = *(_DWORD *)(v13 + 32);
    goto LABEL_147;
  }
  *(_DWORD *)(v8 + 1052) = 8;
LABEL_90:
  *((_DWORD *)a2 + 16) |= 2u;
  if ( v95 )
    VidSchiCompletePendingFlipOnPlane((_DWORD)a1, v9, v96, v13, 9);
LABEL_92:
  VidSchiCompleteHwQueuePacket(a1, v5, a3);
}
