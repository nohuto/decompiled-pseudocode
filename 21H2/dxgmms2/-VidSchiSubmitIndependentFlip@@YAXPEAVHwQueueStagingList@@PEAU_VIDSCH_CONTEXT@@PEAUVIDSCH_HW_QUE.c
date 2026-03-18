/*
 * XREFs of ?VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x1C0035940
 * Callers:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x1C00116E0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_C.c)
 * Callees:
 *     ?VidSchiAcquirePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1C0005A40 (-VidSchiAcquirePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@.c)
 *     VidSchUnwaitFlipQueue @ 0x1C000BDB0 (VidSchUnwaitFlipQueue.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0011BAC (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     VidSchiVirtualizeFlipInterval @ 0x1C0017A90 (VidSchiVirtualizeFlipInterval.c)
 *     ?VidSchiReleasePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1C00187B8 (-VidSchiReleasePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@.c)
 *     ?ZeroFlipQueueEntry@_VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ @ 0x1C001BA0C (-ZeroFlipQueueEntry@_VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ.c)
 *     memmove @ 0x1C001D980 (memmove.c)
 *     ?ReferencePrimaryAllocationForFlipping@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_KPEA_K2@Z @ 0x1C001E4FA (-ReferencePrimaryAllocationForFlipping@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_KPEA_K2@Z.c)
 *     ?FillVmState@_VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXAEAUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C0033F7C (-FillVmState@_VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXAEAUVIDSCH_SUBMIT_DATA2@@@Z.c)
 *     ?GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT_AUXILIARYPRESENTINFO@@@Z @ 0x1C0034000 (-GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT.c)
 *     McTemplateK0pqqpqqqxxqqpq_EtwWriteTransfer @ 0x1C0037164 (McTemplateK0pqqpqqqxxqqpq_EtwWriteTransfer.c)
 */

void __fastcall VidSchiSubmitIndependentFlip(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_CONTEXT *a2,
        struct VIDSCH_HW_QUEUE *a3,
        struct VIDSCH_SUBMIT_DATA2 *a4,
        union _ULARGE_INTEGER a5,
        struct _VIDSCH_DEVICE *a6)
{
  _DWORD *v6; // rsi
  __int64 v8; // rbx
  char v9; // dl
  __int64 v11; // r13
  _DWORD *v12; // rdi
  __int64 v13; // rax
  char v14; // cl
  __int64 v15; // rcx
  __int64 v16; // r15
  unsigned int i; // r10d
  unsigned __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rdx
  char v22; // cl
  struct _D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO *FlipManagerAuxiliaryPresentInfo; // rax
  int v24; // r12d
  int v25; // r8d
  __int64 v26; // rcx
  unsigned int v27; // r8d
  bool j; // zf
  int v29; // eax
  char v30; // cl
  __int64 v31; // rdi
  __int64 v32; // rsi
  int v33; // ecx
  int v34; // ecx
  int v35; // eax
  char LowPart; // bl
  int v37; // eax
  bool v38; // bp
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  __int64 v44; // rax
  struct _SLIST_ENTRY *v45; // rcx
  int v46; // edx
  int v47; // ecx
  int v48; // ecx
  int v49; // eax
  __int64 v50; // r8
  unsigned int v51; // r9d
  __int64 v52; // r11
  unsigned int v53; // r10d
  __int64 v54; // rdx
  __int64 v55; // rcx
  int v56; // edx
  VIDMM_GLOBAL *v57; // rcx
  int v58; // r10d
  int v59; // eax
  struct _VIDSCH_GLOBAL *v60; // rcx
  int v61; // ecx
  __int64 v62; // rax
  __int64 v63; // rdx
  int v64; // ecx
  __int64 v65; // r9
  int v66; // [rsp+80h] [rbp-78h]
  int v67; // [rsp+90h] [rbp-68h]
  int v68; // [rsp+94h] [rbp-64h]
  __int64 v69; // [rsp+A0h] [rbp-58h]
  int v73; // [rsp+118h] [rbp+20h]
  char v74; // [rsp+128h] [rbp+30h]

  v13 = *((unsigned int *)a4 + 29);
  v6 = (_DWORD *)((char *)a4 + 600);
  v8 = (unsigned int)v13;
  v68 = *((_DWORD *)a4 + 29);
  v9 = -1;
  v11 = *((_QWORD *)a6 + 4);
  v12 = *(_DWORD **)(v11 + 8 * v13 + 3200);
  v69 = (__int64)v12;
  j = !_BitScanForward((unsigned int *)&v13, *((_DWORD *)a4 + 150) & 0x3FF);
  if ( !j )
    v9 = v13;
  v14 = 0;
  if ( v9 != -1 )
    v14 = v9;
  v66 = v14;
  v15 = (int)v12[70 * v14 + 45];
  if ( (int)v15 <= -1 )
    v16 = 0LL;
  else
    v16 = *(_QWORD *)(v11 + 3328) + 160 * v15;
  for ( i = 0;
        i < *((_DWORD *)a4 + 35);
        *(_WORD *)((char *)&v6[16 * v21 + 8] + v20) = *(_WORD *)(*(_QWORD *)(v19 + 96) + 6LL) )
  {
    v18 = *((_DWORD *)a4 + 151) * ((8 * *((_DWORD *)a4 + 152) + 231) & 0xFFFFFFF8)
        + ((unsigned __int64)(i * *((_DWORD *)a4 + 151)) << 6);
    v19 = *(_QWORD *)((char *)v6 + v18 + 48);
    *(_QWORD *)((char *)a4 + v18 + 640) = *(_QWORD *)(*(_QWORD *)(v19 + 96) + 32LL);
    LODWORD(v18) = *((_DWORD *)a4 + 151);
    v20 = (unsigned int)v18 * ((8 * *((_DWORD *)a4 + 152) + 231) & 0xFFFFFFF8);
    v21 = i * (unsigned int)v18;
    ++i;
  }
  v22 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a6 + 5) + 16LL) + 129LL);
  v74 = v22;
  if ( (*(_DWORD *)a4 & 0x2000000) == 0 )
    goto LABEL_20;
  if ( (*((_DWORD *)a4 + 1) & 2) == 0 )
  {
    v24 = *((_DWORD *)a4 + 36);
    if ( v24 == *(_DWORD *)(v16 + 100) )
      goto LABEL_16;
LABEL_20:
    v25 = *((_DWORD *)a4 + 31);
    v73 = v25;
    if ( !v25 && (v12[20685] & 1) != 0 && v22 )
      v24 = -1;
    else
      v24 = v12[20682];
    goto LABEL_25;
  }
  FlipManagerAuxiliaryPresentInfo = GetFlipManagerAuxiliaryPresentInfo(*((struct _D3DKMT_AUXILIARYPRESENTINFO **)a4 + 61));
  if ( !FlipManagerAuxiliaryPresentInfo || *((_DWORD *)FlipManagerAuxiliaryPresentInfo + 3) )
  {
    v22 = v74;
    goto LABEL_20;
  }
  v24 = *(_DWORD *)(v16 + 100);
  *((_DWORD *)a4 + 36) = v24;
LABEL_16:
  if ( !v24 )
    v24 = v12[20682];
  v25 = *((_DWORD *)a4 + 37);
  v73 = v25;
LABEL_25:
  _InterlockedIncrement((volatile signed __int32 *)a6 + v8 + 361);
  v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a6 + 5) + 32LL)
                              + 8LL * *(unsigned int *)(*((_QWORD *)a6 + 4) + 4LL))
                  + 8 * v8
                  + 88);
  if ( (*(_DWORD *)a4 & 0x80u) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 8 * v8 + 6456) + 8LL));
  _InterlockedIncrement((volatile signed __int32 *)(v26 + 8));
  if ( *(_DWORD *)(v16 + 112) == 1 )
  {
    WdLogSingleEntry5(
      8LL,
      *((_QWORD *)a4 + 13),
      *((unsigned int *)a4 + 28),
      v25,
      *(_QWORD *)((char *)a4 + v6[1] * ((8 * v6[2] + 231) & 0xFFFFFFF8) + 640),
      *(unsigned __int16 *)((char *)v6 + v6[1] * ((8 * v6[2] + 231) & 0xFFFFFFF8) + 32));
    *(_DWORD *)(v16 + 116) = 0;
    *(_DWORD *)(v16 + 112) = 2;
    *(_QWORD *)(v16 + 152) = a6;
  }
  ++*(_DWORD *)(v11 + 804);
  ++*((_DWORD *)a6 + 394);
  ++*(_DWORD *)(v16 + 116);
  ++v12[747];
  if ( (*(_DWORD *)a4 & 0x4000000) != 0 )
    v27 = ((unsigned __int16)*v6 | (unsigned __int16)(*v6 >> 10)) & 0x3FF;
  else
    v27 = (1 << *(_DWORD *)(v11 + 152)) - 1;
  for ( j = !_BitScanForward((unsigned int *)&v29, v27); ; j = !_BitScanForward((unsigned int *)&v29, v27) )
  {
    v30 = -1;
    if ( !j )
      v30 = v29;
    if ( !v27 )
      break;
    ++*(_DWORD *)(280LL * v30 + *(_QWORD *)(v11 + 8 * v8 + 3200) + 188);
    v27 &= ~(1 << v30);
  }
  v31 = *(_QWORD *)&v12[2 * v66 + 8];
  v32 = 1376LL * *(unsigned int *)(v31 + 56);
  v67 = *(_DWORD *)(v31 + 56);
  _VIDSCH_FLIP_QUEUE_ENTRY::ZeroFlipQueueEntry((_VIDSCH_FLIP_QUEUE_ENTRY *)(v32 + v31 + 120));
  v33 = *(_DWORD *)(v32 + v31 + 1256);
  *(_QWORD *)(v32 + v31 + 1264) = *((_QWORD *)a4 + 12);
  v33 |= 0x20u;
  *(_QWORD *)(v32 + v31 + 1272) = *((_QWORD *)a4 + 13);
  *(_DWORD *)(v32 + v31 + 1256) = v33;
  v34 = ((unsigned __int8)v33 ^ (unsigned __int8)(*(_DWORD *)a4 >> 22)) & 0x10 ^ v33;
  *(_DWORD *)(v32 + v31 + 1256) = v34;
  if ( (*(_DWORD *)a4 & 8) != 0 && *(_DWORD *)(v11 + 2552) == 2 )
    *(_DWORD *)(v32 + v31 + 1256) = v34 | 0x1000;
  v35 = *((_DWORD *)a4 + 36);
  if ( v35 != *(_DWORD *)(v16 + 104) )
  {
    *(_DWORD *)(v16 + 104) = v35;
    *(_DWORD *)(v32 + v31 + 1256) |= 0x40u;
  }
  LowPart = a5.LowPart;
  *(_DWORD *)(v32 + v31 + 1168) = a5.LowPart;
  *(_DWORD *)(v32 + v31 + 1172) = 1;
  *(_DWORD *)(v32 + v31 + 1176) = *((_DWORD *)a4 + 28);
  *(_QWORD *)(v32 + v31 + 1184) = ++*(_QWORD *)(v31 + 88);
  if ( a2 )
  {
    *(_QWORD *)(v32 + v31 + 640) = *((_QWORD *)a2 + 20);
    goto LABEL_46;
  }
  if ( a3 )
  {
LABEL_46:
    *(_DWORD *)(v32 + v31 + 1212) = *((_DWORD *)a4 + 35);
    *(_DWORD *)(v32 + v31 + 1208) = *((_DWORD *)a4 + 35);
    v37 = *((_DWORD *)a4 + 35);
    goto LABEL_47;
  }
  *(_QWORD *)(v32 + v31 + 1208) = 0LL;
  v37 = 1;
LABEL_47:
  *(_DWORD *)(v32 + v31 + 1216) = v37;
  *(_QWORD *)(v32 + v31 + 1160) = a6;
  *(_BYTE *)(v32 + v31 + 1196) = (*(_DWORD *)a4 & 0x10) != 0;
  if ( *(_DWORD *)(v11 + 2548) == 1 )
    goto LABEL_54;
  if ( *(_DWORD *)(v11 + 2548) == 2 )
  {
    v38 = 1;
  }
  else
  {
    v38 = (*(_DWORD *)a4 & 0x10000000) != 0;
    if ( (*(_DWORD *)a4 & 0x10000000) == 0 )
      goto LABEL_55;
  }
  if ( (*(_DWORD *)(v32 + v31 + 1256) & 0x10) != 0 && !*(_BYTE *)(v11 + 156) )
LABEL_54:
    v38 = 0;
LABEL_55:
  v39 = *(_DWORD *)(v32 + v31 + 1256) ^ (*(_DWORD *)(v32 + v31 + 1256) ^ (*(_DWORD *)a4 >> 19)) & 1;
  *(_DWORD *)(v32 + v31 + 1256) = v39;
  v40 = ((unsigned __int8)v39 ^ (unsigned __int8)(*(_DWORD *)a4 >> 19)) & 2 ^ v39;
  *(_DWORD *)(v32 + v31 + 1256) = v40;
  v41 = ((unsigned __int8)v40 ^ (unsigned __int8)(*(_DWORD *)a4 >> 19)) & 4 ^ v40;
  *(_DWORD *)(v32 + v31 + 1256) = v41;
  v42 = ((unsigned __int8)v41 ^ (unsigned __int8)(*(_DWORD *)a4 >> 19)) & 8 ^ v41;
  *(_DWORD *)(v32 + v31 + 1256) = v42;
  *(_QWORD *)(v32 + v31 + 1280) = *((_QWORD *)a4 + 3);
  v43 = ((unsigned __int16)v42 ^ (*(_DWORD *)a4 >> 20)) & 0x400 ^ v42;
  *(_DWORD *)(v32 + v31 + 1256) = v43;
  *(_DWORD *)(v32 + v31 + 1256) = v43 ^ (v43 ^ (*((_DWORD *)a4 + 1) << 11)) & 0x80000;
  v44 = *((_QWORD *)a4 + 4);
  *(_QWORD *)(v32 + v31 + 1288) = v44;
  if ( v44 )
    _InterlockedAdd((volatile signed __int32 *)(v44 + 12), 1u);
  v45 = (struct _SLIST_ENTRY *)*((_QWORD *)a4 + 4);
  if ( v45 )
  {
    CRefCountedBuffer::RefCountedBufferRelease(v45);
    *((_QWORD *)a4 + 4) = 0LL;
  }
  v46 = *(_DWORD *)(v32 + v31 + 1256);
  v47 = *((_DWORD *)a4 + 90);
  *(_DWORD *)(v32 + v31 + 1304) = v47;
  if ( (v46 & 0x400) != 0 )
  {
    v48 = v47 - 1;
    if ( v48 )
    {
      if ( v48 == 1 )
      {
        *(_OWORD *)(v32 + v31 + 1308) = *(_OWORD *)((char *)a4 + 364);
        *(_OWORD *)(v32 + v31 + 1324) = *(_OWORD *)((char *)a4 + 380);
        *(_OWORD *)(v32 + v31 + 1340) = *(_OWORD *)((char *)a4 + 396);
        *(_OWORD *)(v32 + v31 + 1356) = *(_OWORD *)((char *)a4 + 412);
        *(_QWORD *)(v32 + v31 + 1372) = *(_QWORD *)((char *)a4 + 428);
      }
    }
    else
    {
      *(_OWORD *)(v32 + v31 + 1308) = *(_OWORD *)((char *)a4 + 364);
      *(_QWORD *)(v32 + v31 + 1324) = *(_QWORD *)((char *)a4 + 380);
      *(_DWORD *)(v32 + v31 + 1332) = *((_DWORD *)a4 + 97);
    }
  }
  v49 = v46 ^ (v46 ^ (*(_DWORD *)a4 >> 20)) & 0x800;
  *(_DWORD *)(v32 + v31 + 1256) = v49;
  if ( (v49 & 0x800) != 0 )
  {
    *(_OWORD *)(v32 + v31 + 1380) = *(_OWORD *)((char *)a4 + 436);
    *(_OWORD *)(v32 + v31 + 1396) = *(_OWORD *)((char *)a4 + 452);
  }
  _VIDSCH_FLIP_QUEUE_ENTRY::FillVmState((_VIDSCH_FLIP_QUEUE_ENTRY *)(v32 + v31 + 120), a4);
  v53 = v51;
  if ( *(_DWORD *)(v32 + v31 + 1216) > v51 )
  {
    do
    {
      if ( a2 )
      {
        v54 = 8LL * v53;
        v55 = *(_QWORD *)((char *)a4 + v54 + *((unsigned int *)a4 + 138));
        *(_QWORD *)(v54 + v52 + 120) = v55;
        ++*(_DWORD *)(v55 + 792);
      }
      v56 = *((_DWORD *)a4 + 151);
      v57 = (VIDMM_GLOBAL *)(v56 * ((8 * *((_DWORD *)a4 + 152) + 231) & 0xFFFFFFF8));
      VIDMM_GLOBAL::ReferencePrimaryAllocationForFlipping(
        v57,
        *(struct VIDMM_ALLOC **)((char *)v57 + 64 * (unsigned __int64)(v53 * v56) + (_QWORD)a4 + 648),
        v50,
        (unsigned __int64 *)((char *)a4 + (_QWORD)v57 + 64 * (unsigned __int64)(v53 * v56) + 664),
        (unsigned __int64 *)((char *)a4 + (_QWORD)v57 + 64 * (unsigned __int64)(v53 * v56) + 672));
      v53 = v58 + 1;
      v51 = 0;
    }
    while ( v53 < *(_DWORD *)(v32 + v31 + 1216) );
    LowPart = a5.LowPart;
  }
  *(_DWORD *)(v32 + v31 + 1260) = v24;
  if ( *(_BYTE *)(v32 + v31 + 1196) == (_BYTE)v51 )
  {
    if ( v73 )
    {
      *(_DWORD *)(v32 + v31 + 1192) = v73;
      goto LABEL_79;
    }
    *(_DWORD *)(v32 + v31 + 1192) = v51;
  }
  else
  {
    *(_DWORD *)(v32 + v31 + 1192) = v51;
    if ( v73 != v51 )
      goto LABEL_79;
  }
  v59 = *(_DWORD *)(v32 + v31 + 1256) | 0x80;
  *(_DWORD *)(v32 + v31 + 1256) = v59;
  if ( v38 )
    *(_DWORD *)(v32 + v31 + 1256) = v59 | 0x100;
LABEL_79:
  VidSchiVirtualizeFlipInterval(v69, v52 + 120);
  if ( (*(_DWORD *)(v32 + v31 + 1256) & 0x180) == 0x80 && (*(_DWORD *)(v69 + 82740) & 1) != 0 && v74 )
    *(_DWORD *)(v32 + v31 + 1256) |= 0x200u;
  memmove(*(void **)(v32 + v31 + 1296), (char *)a4 + 600, *((unsigned int *)a4 + 153));
  VidSchiAcquirePrivateDataReference(
    (struct _VIDSCH_GLOBAL *)v11,
    *(struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 **)(v32 + v31 + 1296));
  VidSchiReleasePrivateDataReference(v60, (struct VIDSCH_SUBMIT_DATA2 *)((char *)a4 + 600));
  *(_DWORD *)(v32 + v31 + 1200) = *((_DWORD *)a4 + 34);
  *(_DWORD *)(v32 + v31 + 1204) = *((_DWORD *)a4 + 34);
  if ( (*((_DWORD *)a4 + 1) & 2) != 0 )
  {
    v61 = *(_DWORD *)(v32 + v31 + 1256) | 0x2000;
    *(_DWORD *)(v32 + v31 + 1256) = v61;
    *(_QWORD *)(v32 + v31 + 1416) = *((_QWORD *)a4 + 60);
    v62 = *((_QWORD *)a4 + 61);
    *(_DWORD *)(v32 + v31 + 1192) = 0;
    *(_QWORD *)(v32 + v31 + 1440) = v62;
    *(_DWORD *)(v32 + v31 + 1256) = v61 & 0xFFFFFF7F;
  }
  if ( (*(_DWORD *)a4 & 0x800) != 0 )
    *(_BYTE *)(v32 + v31 + 1197) = 1;
  *(_DWORD *)(v31 + 56) = ((_BYTE)v67 + 1) & 0x3F;
  _InterlockedIncrement((volatile signed __int32 *)(v11 + 808));
  _InterlockedIncrement((volatile signed __int32 *)(v69 + 2992));
  if ( bTracingEnabled )
  {
    v63 = *((_QWORD *)a4 + 23);
    if ( v63 )
    {
      if ( a2 )
      {
        v65 = *((_QWORD *)a2 + 7);
        if ( !v65 || (*((_DWORD *)a2 + 28) & 0x40) != 0 )
          LODWORD(v65) = (_DWORD)a2;
      }
      else if ( a3 )
      {
        v65 = *((_QWORD *)a3 + 6);
        if ( !v65 )
          LODWORD(v65) = (_DWORD)a3;
      }
      else
      {
        LODWORD(v65) = 0;
      }
      if ( (byte_1C006E941 & 1) != 0 )
      {
        v64 = (*(_DWORD *)(v32 + v31 + 1256) >> 8) & 1;
        McTemplateK0pqqpqqqxxqqpq_EtwWriteTransfer(
          v64,
          v63,
          *(_DWORD *)(v32 + v31 + 1260),
          v65,
          LowPart,
          v68,
          v63,
          v73,
          v66,
          *((_DWORD *)a4 + 48),
          *(_QWORD *)v16,
          *(_QWORD *)(v16 + 8),
          *((_DWORD *)a4 + 28),
          v64,
          *(_QWORD *)(v32 + v31 + 1448),
          *(_DWORD *)(v32 + v31 + 1260));
      }
    }
  }
  VidSchUnwaitFlipQueue((__int64)a1, v11);
}
