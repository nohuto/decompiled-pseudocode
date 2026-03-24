/*
 * XREFs of ?VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x1C002C4FC
 * Callers:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x1C0002970 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_C.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0002EAC (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?FillVmState@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXAEAUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C0002F10 (-FillVmState@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXAEAUVIDSCH_SUBMIT_DATA2@@@Z.c)
 *     ?VidSchiAcquirePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1C0007084 (-VidSchiAcquirePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@.c)
 *     VidSchUnwaitFlipQueue @ 0x1C000D800 (VidSchUnwaitFlipQueue.c)
 *     ?VidSchiReleasePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1C00154F0 (-VidSchiReleasePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@.c)
 *     memmove @ 0x1C0018C00 (memmove.c)
 *     ?ReferencePrimaryAllocationForFlipping@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_KPEA_K2@Z @ 0x1C0023D20 (-ReferencePrimaryAllocationForFlipping@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_KPEA_K2@Z.c)
 *     ?ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ @ 0x1C002CF18 (-ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ.c)
 *     McTemplateK0pqqpqqqxxqq_EtwWriteTransfer @ 0x1C002DCBC (McTemplateK0pqqpqqqxxqq_EtwWriteTransfer.c)
 */

void __fastcall VidSchiSubmitIndependentFlip(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_CONTEXT *a2,
        struct VIDSCH_HW_QUEUE *a3,
        struct VIDSCH_SUBMIT_DATA2 *a4,
        union _ULARGE_INTEGER a5,
        struct _VIDSCH_DEVICE *a6)
{
  _DWORD *v6; // rdi
  __int64 v8; // rbx
  char v10; // dl
  __int64 v11; // r15
  __int64 v12; // r11
  __int64 v13; // rax
  char v14; // cl
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r12
  unsigned int i; // r10d
  unsigned __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // r13d
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // rax
  unsigned int v27; // r8d
  bool v28; // zf
  int v29; // eax
  char v30; // cl
  __int64 v31; // rdi
  __int64 v32; // rsi
  int v33; // ecx
  int v34; // ecx
  int v35; // eax
  char LowPart; // bl
  int v37; // eax
  char v38; // bp
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  __int64 v43; // rax
  struct _SLIST_ENTRY *v44; // rcx
  int v45; // edx
  int v46; // ecx
  int v47; // ecx
  int v48; // eax
  __int64 v49; // r8
  unsigned int v50; // r9d
  _DWORD *v51; // r11
  unsigned int v52; // r10d
  __int64 v53; // rdx
  __int64 v54; // rcx
  int v55; // edx
  VIDMM_GLOBAL *v56; // rcx
  int v57; // r10d
  int v58; // eax
  int v59; // ecx
  __int64 v60; // rcx
  __int64 v61; // r9
  __int64 v62; // [rsp+70h] [rbp-78h]
  int v63; // [rsp+7Ch] [rbp-6Ch]
  char v64; // [rsp+80h] [rbp-68h]
  int v65; // [rsp+84h] [rbp-64h]
  __int64 v66; // [rsp+88h] [rbp-60h]
  __int128 v68; // [rsp+F8h] [rbp+10h]
  int v69; // [rsp+108h] [rbp+20h]
  char v70; // [rsp+118h] [rbp+30h]

  *((_QWORD *)&v68 + 1) = a3;
  *(_QWORD *)&v68 = a2;
  v13 = *((unsigned int *)a4 + 29);
  v6 = (_DWORD *)((char *)a4 + 576);
  v8 = (unsigned int)v13;
  v65 = *((_DWORD *)a4 + 29);
  v10 = -1;
  v11 = *((_QWORD *)a6 + 4);
  v12 = *(_QWORD *)(v11 + 8 * v13 + 3104);
  v66 = v12;
  v28 = !_BitScanForward((unsigned int *)&v13, *((_DWORD *)a4 + 144) & 0x3FF);
  LODWORD(v62) = v13;
  if ( !v28 )
    v10 = v13;
  v14 = 0;
  if ( v10 != -1 )
    v14 = v10;
  v15 = (unsigned int)v14;
  v64 = v14;
  v16 = *(int *)(216 * v15 + v12 + 172);
  if ( (int)v16 <= -1 )
    v17 = 0LL;
  else
    v17 = *(_QWORD *)(v11 + 3232) + 152 * v16;
  for ( i = 0;
        i < *((_DWORD *)a4 + 35);
        *(_WORD *)((char *)&v6[16 * v22 + 8] + v21) = *(_WORD *)(*(_QWORD *)(v20 + 96) + 6LL) )
  {
    v19 = *((_DWORD *)a4 + 145) * ((8 * *((_DWORD *)a4 + 146) + 199) & 0xFFFFFFF8)
        + ((unsigned __int64)(i * *((_DWORD *)a4 + 145)) << 6);
    v20 = *(_QWORD *)((char *)v6 + v19 + 48);
    *(_QWORD *)((char *)a4 + v19 + 616) = *(_QWORD *)(*(_QWORD *)(v20 + 96) + 32LL);
    LODWORD(v19) = *((_DWORD *)a4 + 145);
    v21 = (unsigned int)v19 * ((8 * *((_DWORD *)a4 + 146) + 199) & 0xFFFFFFF8);
    v22 = i * (unsigned int)v19;
    ++i;
  }
  if ( (*(_DWORD *)a4 & 0x2000000) != 0 && (v23 = *((_DWORD *)a4 + 36), v23 == *(_DWORD *)(v17 + 100)) )
  {
    v69 = *((_DWORD *)a4 + 37);
  }
  else
  {
    v23 = 0;
    v69 = *((_DWORD *)a4 + 31);
    if ( !v69 && (*(_DWORD *)(v12 + 70584) & 1) != 0 && (*((_BYTE *)a4 + 4) & 0x40) != 0 )
      v23 = -1;
  }
  _InterlockedIncrement((volatile signed __int32 *)a6 + v8 + 361);
  v24 = *(unsigned int *)(*((_QWORD *)a6 + 4) + 4LL);
  v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a6 + 5) + 24LL) + 8 * v24) + 8 * v8 + 88);
  if ( (*(_DWORD *)a4 & 0x80u) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 8 * v8 + 6352) + 8LL));
  _InterlockedIncrement((volatile signed __int32 *)(v25 + 8));
  if ( *(_DWORD *)(v17 + 112) == 1 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v25, v24);
    v26[3] = *((_QWORD *)a4 + 13);
    v26[4] = *((unsigned int *)a4 + 28);
    v26[5] = v69;
    v26[6] = *(_QWORD *)((char *)v6 + v6[1] * ((8 * v6[2] + 199) & 0xFFFFFFF8) + 40);
    v26[7] = *(unsigned __int16 *)((char *)v6 + v6[1] * ((8 * v6[2] + 199) & 0xFFFFFFF8) + 32);
    WdLogEvent5_WdPresentTokenEvent(v26);
    *(_DWORD *)(v17 + 116) = 0;
    v12 = v66;
    *(_DWORD *)(v17 + 112) = 2;
  }
  ++*(_DWORD *)(v11 + 796);
  ++*((_DWORD *)a6 + 394);
  ++*(_DWORD *)(v17 + 116);
  ++*(_DWORD *)(v12 + 2340);
  if ( (*(_DWORD *)a4 & 0x4000000) != 0 )
    v27 = ((unsigned __int16)*v6 | (unsigned __int16)(*v6 >> 10)) & 0x3FF;
  else
    v27 = (1 << *(_DWORD *)(v11 + 144)) - 1;
  v28 = !_BitScanForward((unsigned int *)&v29, v27);
  HIDWORD(v62) = v29;
  while ( 1 )
  {
    v30 = -1;
    if ( !v28 )
      v30 = v29;
    if ( !v27 )
      break;
    ++*(_DWORD *)(216LL * v30 + *(_QWORD *)(v11 + 8 * v8 + 3104) + 180);
    v27 &= ~(1 << v30);
    v28 = !_BitScanForward((unsigned int *)&v29, v27);
  }
  v31 = *(_QWORD *)(v12 + 8 * v15 + 32);
  v32 = 1344LL * *(unsigned int *)(v31 + 32);
  v63 = *(_DWORD *)(v31 + 32);
  VIDSCH_FLIP_QUEUE_ENTRY::ZeroFlipQueueEntry((VIDSCH_FLIP_QUEUE_ENTRY *)(v32 + v31 + 88));
  v33 = *(_DWORD *)(v32 + v31 + 1224);
  *(_QWORD *)(v32 + v31 + 1232) = *((_QWORD *)a4 + 12);
  v33 |= 0x20u;
  *(_QWORD *)(v32 + v31 + 1240) = *((_QWORD *)a4 + 13);
  *(_DWORD *)(v32 + v31 + 1224) = v33;
  v34 = ((unsigned __int8)v33 ^ (unsigned __int8)(*(_DWORD *)a4 >> 22)) & 0x10 ^ v33;
  *(_DWORD *)(v32 + v31 + 1224) = v34;
  if ( (*(_DWORD *)a4 & 8) != 0 && *(_DWORD *)(v11 + 2464) == 2 )
    *(_DWORD *)(v32 + v31 + 1224) = v34 | 0x1000;
  v35 = *((_DWORD *)a4 + 36);
  if ( v35 != *(_DWORD *)(v17 + 104) )
  {
    *(_DWORD *)(v17 + 104) = v35;
    *(_DWORD *)(v32 + v31 + 1224) |= 0x40u;
  }
  LowPart = a5.LowPart;
  *(_DWORD *)(v32 + v31 + 1136) = a5.LowPart;
  *(_DWORD *)(v32 + v31 + 1140) = 1;
  *(_DWORD *)(v32 + v31 + 1144) = *((_DWORD *)a4 + 28);
  *(_QWORD *)(v32 + v31 + 1152) = ++*(_QWORD *)(v31 + 64);
  if ( v68 == 0 )
  {
    v70 = 1;
    v37 = 1;
    *(_QWORD *)(v32 + v31 + 1176) = 0LL;
  }
  else
  {
    v70 = 0;
    if ( (_QWORD)v68 )
      *(_QWORD *)(v32 + v31 + 608) = *(_QWORD *)(v68 + 160);
    *(_DWORD *)(v32 + v31 + 1180) = *((_DWORD *)a4 + 35);
    *(_DWORD *)(v32 + v31 + 1176) = *((_DWORD *)a4 + 35);
    v37 = *((_DWORD *)a4 + 35);
  }
  *(_DWORD *)(v32 + v31 + 1184) = v37;
  *(_QWORD *)(v32 + v31 + 1128) = a6;
  *(_BYTE *)(v32 + v31 + 1164) = (*(_DWORD *)a4 & 0x10) != 0;
  if ( *(_DWORD *)(v11 + 2460) == 1 )
  {
    v38 = 0;
LABEL_44:
    if ( !v38 )
      goto LABEL_47;
    goto LABEL_45;
  }
  if ( *(_DWORD *)(v11 + 2460) != 2 )
  {
    v38 = (*(_DWORD *)a4 & 0x10000000) != 0;
    goto LABEL_44;
  }
  v38 = 1;
LABEL_45:
  if ( (*(_DWORD *)(v32 + v31 + 1224) & 0x10) != 0 )
    v38 = *(_BYTE *)(v11 + 148) != 0 ? v38 : 0;
LABEL_47:
  v39 = *(_DWORD *)(v32 + v31 + 1224) ^ (*(_DWORD *)(v32 + v31 + 1224) ^ (*(_DWORD *)a4 >> 19)) & 1;
  *(_DWORD *)(v32 + v31 + 1224) = v39;
  v40 = ((unsigned __int8)v39 ^ (unsigned __int8)(*(_DWORD *)a4 >> 19)) & 2 ^ v39;
  *(_DWORD *)(v32 + v31 + 1224) = v40;
  v41 = ((unsigned __int8)v40 ^ (unsigned __int8)(*(_DWORD *)a4 >> 19)) & 4 ^ v40;
  *(_DWORD *)(v32 + v31 + 1224) = v41;
  v42 = ((unsigned __int8)v41 ^ (unsigned __int8)(*(_DWORD *)a4 >> 19)) & 8 ^ v41;
  *(_DWORD *)(v32 + v31 + 1224) = v42;
  *(_QWORD *)(v32 + v31 + 1248) = *((_QWORD *)a4 + 3);
  *(_DWORD *)(v32 + v31 + 1224) = v42 ^ ((unsigned __int16)v42 ^ (*(_DWORD *)a4 >> 20)) & 0x400;
  v43 = *((_QWORD *)a4 + 4);
  *(_QWORD *)(v32 + v31 + 1256) = v43;
  if ( v43 )
    _InterlockedAdd((volatile signed __int32 *)(v43 + 12), 1u);
  v44 = (struct _SLIST_ENTRY *)*((_QWORD *)a4 + 4);
  if ( v44 )
  {
    CRefCountedBuffer::RefCountedBufferRelease(v44);
    *((_QWORD *)a4 + 4) = 0LL;
  }
  v45 = *(_DWORD *)(v32 + v31 + 1224);
  v46 = *((_DWORD *)a4 + 88);
  *(_DWORD *)(v32 + v31 + 1272) = v46;
  if ( (v45 & 0x400) != 0 )
  {
    v47 = v46 - 1;
    if ( v47 )
    {
      if ( v47 == 1 )
      {
        *(_OWORD *)(v32 + v31 + 1276) = *(_OWORD *)((char *)a4 + 356);
        *(_OWORD *)(v32 + v31 + 1292) = *(_OWORD *)((char *)a4 + 372);
        *(_OWORD *)(v32 + v31 + 1308) = *(_OWORD *)((char *)a4 + 388);
        *(_OWORD *)(v32 + v31 + 1324) = *(_OWORD *)((char *)a4 + 404);
        *(_QWORD *)(v32 + v31 + 1340) = *(_QWORD *)((char *)a4 + 420);
      }
    }
    else
    {
      *(_OWORD *)(v32 + v31 + 1276) = *(_OWORD *)((char *)a4 + 356);
      *(_QWORD *)(v32 + v31 + 1292) = *(_QWORD *)((char *)a4 + 372);
      *(_DWORD *)(v32 + v31 + 1300) = *((_DWORD *)a4 + 95);
    }
  }
  v48 = v45 ^ (v45 ^ (*(_DWORD *)a4 >> 20)) & 0x800;
  *(_DWORD *)(v32 + v31 + 1224) = v48;
  if ( (v48 & 0x800) != 0 )
  {
    *(_OWORD *)(v32 + v31 + 1348) = *(_OWORD *)((char *)a4 + 428);
    *(_OWORD *)(v32 + v31 + 1364) = *(_OWORD *)((char *)a4 + 444);
  }
  VIDSCH_FLIP_QUEUE_ENTRY::FillVmState((VIDSCH_FLIP_QUEUE_ENTRY *)(v32 + v31 + 88), a4);
  v51 = (_DWORD *)((char *)a4 + 576);
  v52 = v50;
  if ( *(_DWORD *)(v32 + v31 + 1184) > v50 )
  {
    do
    {
      if ( (_QWORD)v68 )
      {
        v53 = 8LL * v52;
        v54 = *(_QWORD *)((char *)a4 + v53 + *((unsigned int *)a4 + 134));
        *(_QWORD *)(v53 + v32 + v31 + 88) = v54;
        ++*(_DWORD *)(v54 + 792);
      }
      v55 = v51[1];
      v56 = (VIDMM_GLOBAL *)(v55 * ((8 * v51[2] + 199) & 0xFFFFFFF8));
      VIDMM_GLOBAL::ReferencePrimaryAllocationForFlipping(
        v56,
        *(struct VIDMM_ALLOC **)((char *)v56 + 64 * (unsigned __int64)(v52 * v55) + (_QWORD)a4 + 624),
        v49,
        (unsigned __int64 *)((char *)v51 + (_QWORD)v56 + 64 * (unsigned __int64)(v52 * v55) + 64),
        (unsigned __int64 *)((char *)v51 + (_QWORD)v56 + 64 * (unsigned __int64)(v52 * v55) + 72));
      v52 = v57 + 1;
      v50 = 0;
    }
    while ( v52 < *(_DWORD *)(v32 + v31 + 1184) );
    LowPart = a5.LowPart;
  }
  *(_DWORD *)(v32 + v31 + 1228) = v23;
  if ( *(_BYTE *)(v32 + v31 + 1164) == (_BYTE)v50 )
  {
    if ( v69 )
    {
      *(_DWORD *)(v32 + v31 + 1160) = v69;
      goto LABEL_71;
    }
    *(_DWORD *)(v32 + v31 + 1160) = v50;
  }
  else
  {
    *(_DWORD *)(v32 + v31 + 1160) = v50;
    if ( v69 )
      goto LABEL_71;
  }
  v58 = *(_DWORD *)(v32 + v31 + 1224) | 0x80;
  *(_DWORD *)(v32 + v31 + 1224) = v58;
  if ( v38 )
    *(_DWORD *)(v32 + v31 + 1224) = v58 | 0x100;
LABEL_71:
  if ( (*(_DWORD *)(v32 + v31 + 1224) & 0x180) == 0x80
    && (*(_DWORD *)(v66 + 70584) & 1) != 0
    && (*((_DWORD *)a4 + 1) & 0x40) != 0 )
  {
    *(_DWORD *)(v32 + v31 + 1224) |= 0x200u;
  }
  memmove(*(void **)(v32 + v31 + 1264), v51, (unsigned int)v51[3]);
  VidSchiAcquirePrivateDataReference(
    (struct _VIDSCH_GLOBAL *)v11,
    *(struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 **)(v32 + v31 + 1264));
  VidSchiReleasePrivateDataReference((struct _VIDSCH_GLOBAL *)v11, (struct VIDSCH_SUBMIT_DATA2 *)((char *)a4 + 576));
  *(_DWORD *)(v32 + v31 + 1168) = *((_DWORD *)a4 + 34);
  *(_DWORD *)(v32 + v31 + 1172) = *((_DWORD *)a4 + 34);
  if ( v70 && (*((_DWORD *)a4 + 1) & 2) != 0 )
  {
    v59 = *(_DWORD *)(v32 + v31 + 1224) | 0x2000;
    *(_DWORD *)(v32 + v31 + 1224) = v59;
    *(_QWORD *)(v32 + v31 + 1384) = *((_QWORD *)a4 + 59);
    *(_DWORD *)(v32 + v31 + 1224) = v59 & 0xFFFFFF7F;
    *(_DWORD *)(v32 + v31 + 1160) = 0;
  }
  if ( (*(_DWORD *)a4 & 0x800) != 0 )
    *(_BYTE *)(v32 + v31 + 1165) = 1;
  *(_DWORD *)(v31 + 32) = ((_BYTE)v63 + 1) & 0x3F;
  _InterlockedIncrement((volatile signed __int32 *)(v11 + 800));
  _InterlockedIncrement((volatile signed __int32 *)(v66 + 2344));
  if ( bTracingEnabled )
  {
    v60 = *((_QWORD *)a4 + 22);
    if ( v60 )
    {
      if ( (_QWORD)v68 )
      {
        v61 = *(_QWORD *)(v68 + 56);
        if ( !v61 || (*(_DWORD *)(v68 + 112) & 0x40) != 0 )
          LODWORD(v61) = v68;
      }
      else if ( *((_QWORD *)&v68 + 1) )
      {
        v61 = *(_QWORD *)(*((_QWORD *)&v68 + 1) + 48LL);
        if ( !v61 )
          LODWORD(v61) = DWORD2(v68);
      }
      else
      {
        LODWORD(v61) = 0;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0pqqpqqqxxqq_EtwWriteTransfer(
          v60,
          v68,
          0,
          v61,
          LowPart,
          v65,
          v60,
          v69,
          v64,
          *((_DWORD *)a4 + 46),
          *(_QWORD *)v17,
          *(_QWORD *)(v17 + 8),
          *((_DWORD *)a4 + 28),
          (*(_DWORD *)(v32 + v31 + 1224) >> 8) & 1,
          v62);
    }
  }
  VidSchUnwaitFlipQueue((__int64)a1, v11);
}
