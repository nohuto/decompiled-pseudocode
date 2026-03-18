/*
 * XREFs of ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3@Z @ 0x1C00046E0
 * Callers:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x1C0002690 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_C.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0003C20 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009640 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0036608 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C0004B40 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0033288 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 */

void __fastcall VidSchiUnreferencePrimaryAllocations(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        unsigned int a3,
        struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *a4,
        unsigned int a5,
        unsigned int a6,
        bool a7,
        bool a8)
{
  unsigned int v8; // eax
  unsigned int v9; // esi
  struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *v10; // r11
  unsigned int v11; // r12d
  struct _VIDSCH_GLOBAL *v12; // rdi
  unsigned int v13; // ecx
  unsigned int v14; // edx
  unsigned int v15; // r8d
  bool v16; // zf
  unsigned int v17; // edx
  int v18; // r9d
  int v19; // eax
  char v20; // cl
  int v21; // eax
  unsigned int v22; // r14d
  char v23; // cl
  unsigned int v24; // eax
  int v25; // ecx
  bool v26; // r10
  char *v27; // rax
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r15
  unsigned __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r10
  int v36; // eax
  unsigned int v37; // r13d
  __int64 v38; // r9
  unsigned int v39; // r11d
  unsigned __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r12
  int v44; // eax
  unsigned int v45; // edx
  unsigned int v46; // r8d
  unsigned int v47; // edx
  int v48; // eax
  char v49; // cl
  int v50; // eax
  unsigned int v51; // edi
  char v52; // cl
  unsigned int v53; // eax
  unsigned int v54; // edi
  int v55; // r8d
  __int64 v56; // rdx
  int v57; // ecx
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rdi
  __int64 v64; // rbx
  __int64 v65; // r14
  __int64 v66; // rsi
  _QWORD *v67; // rax
  int v68; // [rsp+38h] [rbp-91h]
  __int64 v69; // [rsp+40h] [rbp-89h]
  int v70; // [rsp+58h] [rbp-71h]
  _QWORD v71[2]; // [rsp+60h] [rbp-69h] BYREF
  unsigned int v72; // [rsp+70h] [rbp-59h]
  unsigned int v73; // [rsp+74h] [rbp-55h]
  int v74; // [rsp+78h] [rbp-51h]
  unsigned int v75; // [rsp+7Ch] [rbp-4Dh]
  unsigned int v76; // [rsp+80h] [rbp-49h]
  struct _VIDSCH_GLOBAL *v77; // [rsp+88h] [rbp-41h] BYREF
  unsigned int *v78; // [rsp+90h] [rbp-39h]
  unsigned int v79; // [rsp+98h] [rbp-31h]
  unsigned int v80; // [rsp+9Ch] [rbp-2Dh]
  int v81; // [rsp+A0h] [rbp-29h]
  unsigned int v82; // [rsp+A4h] [rbp-25h]
  unsigned int v83; // [rsp+A8h] [rbp-21h]
  __int64 v84; // [rsp+B0h] [rbp-19h]
  _QWORD v85[10]; // [rsp+B8h] [rbp-11h] BYREF

  v8 = a5;
  v9 = 0;
  v68 = 0;
  v10 = a4;
  v11 = a3;
  v12 = a2;
  if ( !a5 )
    return;
  v13 = a6;
  do
  {
    if ( (v8 & 1) == 0 )
      goto LABEL_16;
    if ( (v13 & 1) == 0 )
      goto LABEL_15;
    v14 = *(_DWORD *)v10;
    v15 = *(_DWORD *)v10 & 0x3FF;
    v71[0] = v12;
    v16 = *((_BYTE *)v12 + 148) == 0;
    v71[1] = v10;
    v72 = v15;
    if ( v16 )
      v17 = 0;
    else
      v17 = (v14 >> 10) & 0x3FF;
    v18 = 0;
    v73 = v17;
    v16 = !_BitScanForward((unsigned int *)&v19, v15);
    v20 = -1;
    v74 = 0;
    if ( !v16 )
      v20 = v19;
    v16 = !_BitScanForward((unsigned int *)&v21, v17);
    v22 = v20;
    v23 = -1;
    if ( !v16 )
      v23 = v21;
    v75 = v22;
    v24 = v23;
    v76 = v23;
    while ( v15 || v17 )
    {
      if ( v22 >= v24 )
        goto LABEL_25;
      v25 = *((_DWORD *)v10 + 1);
      v26 = a8;
      v27 = (char *)v10 + v25 * ((8 * *((_DWORD *)v10 + 2) + 199) & 0xFFFFFFF8);
      v28 = (unsigned __int64)(v18 + v9 * v25) << 6;
      v29 = *(_QWORD *)&v27[v28 + 64];
      v30 = *(_QWORD *)&v27[v28 + 48];
      v31 = *(_QWORD *)&v27[v28 + 72];
      v69 = v29;
      if ( a8 && v31 && v11 != -1 )
      {
        v35 = *((_QWORD *)v12 + v11 + 388);
        if ( v35 )
        {
          v36 = *(_DWORD *)(v35 + 2352);
          if ( _bittest(&v36, v22) )
          {
            v37 = 0;
            while ( 1 )
            {
              v38 = v37 ? *(_QWORD *)(v35 + 8LL * v22 + 32) : *(_QWORD *)(v35 + 24);
              v39 = *(_DWORD *)(v38 + 48);
              ++v37;
LABEL_36:
              if ( v39 != (((unsigned __int8)*(_DWORD *)(v38 + 44) - 1) & 0x3F) )
              {
                v43 = 1344LL * v39;
                v44 = *(_DWORD *)(v43 + v38 + 1140);
                if ( v44 == 5 || v44 == 15 )
                  break;
              }
              if ( v37 >= 2 )
              {
                v9 = v68;
                goto LABEL_39;
              }
            }
            v78 = *(unsigned int **)(v43 + v38 + 1264);
            v77 = v12;
            v45 = *v78;
            v46 = *v78 & 0x3FF;
            v16 = *((_BYTE *)v12 + 148) == 0;
            v79 = v46;
            if ( v16 )
              v47 = 0;
            else
              v47 = (v45 >> 10) & 0x3FF;
            v81 = 0;
            v16 = !_BitScanForward((unsigned int *)&v48, v46);
            v49 = -1;
            v80 = v47;
            if ( !v16 )
              v49 = v48;
            v16 = !_BitScanForward((unsigned int *)&v50, v47);
            v51 = v49;
            v52 = -1;
            if ( !v16 )
              v52 = v50;
            v82 = v51;
            v53 = v52;
            v83 = v52;
            while ( 1 )
            {
              if ( !v46 && !v47 )
              {
                v12 = a2;
                v39 = ((_BYTE)v39 - 1) & 0x3F;
                goto LABEL_36;
              }
              if ( v51 < v53 )
              {
                v54 = *(_DWORD *)(v43 + v38 + 1184);
                v55 = 0;
                if ( v54 )
                  break;
              }
LABEL_60:
              VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++(&v77);
              v53 = v83;
              v47 = v80;
              v46 = v79;
              v51 = v82;
            }
            v56 = *(_QWORD *)(v43 + v38 + 1264);
            v84 = *(_QWORD *)(v30 + 96);
            v57 = *(_DWORD *)(v56 + 4);
            v70 = v57;
            v58 = v57 * ((8 * *(_DWORD *)(v56 + 8) + 199) & 0xFFFFFFF8);
            while ( 1 )
            {
              v59 = (unsigned int)(v81 + v55 * v57);
              v22 = v75;
              if ( v84 == *(_QWORD *)(*(_QWORD *)(v58 + (v59 << 6) + v56 + 48) + 96LL) )
                break;
              v57 = v70;
              if ( ++v55 >= v54 )
                goto LABEL_60;
            }
            v60 = v58 + (v59 << 6);
            if ( v31 >= *(_QWORD *)(v60 + v56 + 72) )
            {
              *(_QWORD *)(v60 + v56 + 72) = v31;
              v61 = *(_QWORD *)(*(_QWORD *)(v30 + 96) + 24LL);
              v62 = 2LL * *(unsigned int *)(v61 + 32);
              *(_OWORD *)(v61 + 8 * v62 + 40) = 0LL;
              *(_DWORD *)(v61 + 32) = ((unsigned __int8)*(_DWORD *)(v61 + 32) + 1) & 7;
              *(_DWORD *)(v61 + 8 * v62 + 40) = 4;
              *(_QWORD *)(v61 + 8 * v62 + 48) = v31;
            }
            goto LABEL_63;
          }
LABEL_39:
          v40 = v9 + ((unsigned __int64)v22 << 6);
          if ( *(_QWORD *)(v35 + 48 * v40 + 2448) == *(_QWORD *)(v30 + 96) )
          {
            if ( v31 >= *(_QWORD *)(v35 + 48 * v40 + 2480) )
            {
              *(_QWORD *)(v35 + 48 * v40 + 2480) = v31;
              v26 = 0;
              v41 = *(_QWORD *)(*(_QWORD *)(v30 + 96) + 24LL);
              v42 = 2LL * *(unsigned int *)(v41 + 32);
              *(_OWORD *)(v41 + 8 * v42 + 40) = 0LL;
              *(_DWORD *)(v41 + 32) = ((unsigned __int8)*(_DWORD *)(v41 + 32) + 1) & 7;
              *(_DWORD *)(v41 + 8 * v42 + 40) = 3;
              *(_QWORD *)(v41 + 8 * v42 + 48) = v31;
LABEL_64:
              v29 = v69;
              goto LABEL_20;
            }
LABEL_63:
            v26 = 0;
            goto LABEL_64;
          }
          v29 = v69;
        }
        v26 = a8;
      }
LABEL_20:
      v32 = *(_QWORD *)(v30 + 96);
      v33 = *(_QWORD *)(v32 + 24);
      _InterlockedDecrement((volatile signed __int32 *)(v30 + 104));
      if ( a7 )
      {
        v34 = *(_QWORD *)(v32 + 16);
        if ( v34 )
          _InterlockedDecrement((volatile signed __int32 *)(v34 + 8));
      }
      if ( v26 && v33 )
      {
        v63 = 0LL;
        v85[1] = v31;
        v85[0] = v29;
        v64 = 0LL;
        v65 = 2LL;
        do
        {
          v66 = v85[v63];
          if ( v66 )
          {
            if ( (int)VidSchiSignalSyncObjectsFromCpu(
                        a1,
                        1u,
                        (struct _VIDSCH_SYNC_OBJECT **)(*(_QWORD *)(*(_QWORD *)(v30 + 96) + 24LL) + 8 * v64),
                        0,
                        &v85[v64],
                        0LL) < 0 )
            {
              v67 = (_QWORD *)WdLogNewEntry5_WdAssertion();
              v67[3] = v64;
              v67[4] = *(_QWORD *)(v63 * 8 + *(_QWORD *)(*(_QWORD *)(v30 + 96) + 24LL));
              v67[5] = v66;
              WdLogEvent5_WdAssertion(v67);
            }
          }
          ++v64;
          ++v63;
          --v65;
        }
        while ( v65 );
      }
      v12 = a2;
      v11 = a3;
LABEL_25:
      VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++(v71);
      v24 = v76;
      v17 = v73;
      v15 = v72;
      v22 = v75;
      v18 = v74;
      v9 = v68;
    }
    v8 = a5;
    v13 = a6;
LABEL_15:
    v68 = ++v9;
LABEL_16:
    v8 >>= 1;
    v13 >>= 1;
    a5 = v8;
    a6 = v13;
  }
  while ( v8 );
}
