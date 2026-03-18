/*
 * XREFs of ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3@Z @ 0x1C0019E68
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C00087D0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x1C00116E0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_C.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C003ED78 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 * Callees:
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C001B448 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C003BCE4 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
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
  unsigned int v9; // r13d
  struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *v10; // r11
  unsigned int v11; // r12d
  struct _VIDSCH_GLOBAL *v12; // rdi
  unsigned int v13; // esi
  unsigned int v14; // ecx
  unsigned int v15; // edx
  unsigned int v16; // r8d
  unsigned int v17; // edx
  bool v18; // zf
  int v19; // eax
  char v20; // cl
  int v21; // r9d
  int v22; // eax
  unsigned int v23; // r14d
  char v24; // cl
  unsigned int v25; // eax
  int v26; // ecx
  bool v27; // r10
  char *v28; // rax
  unsigned __int64 v29; // rcx
  __int64 v30; // r15
  unsigned __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r12
  int v35; // eax
  unsigned int v36; // edx
  unsigned int v37; // r8d
  unsigned int v38; // edx
  char v39; // cl
  int v40; // eax
  int v41; // eax
  unsigned int v42; // edi
  char v43; // cl
  unsigned int v44; // eax
  __int64 v45; // r9
  __int64 v46; // r10
  unsigned int v47; // r11d
  int v48; // eax
  unsigned int v49; // edi
  int v50; // r8d
  __int64 v51; // rdx
  int v52; // ecx
  __int64 v53; // rsi
  __int64 v54; // rax
  unsigned __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rdi
  __int64 v63; // r14
  __int64 v64; // rbx
  __int64 v65; // rsi
  int v66; // [rsp+58h] [rbp-91h]
  int v67; // [rsp+6Ch] [rbp-7Dh]
  _QWORD v68[2]; // [rsp+70h] [rbp-79h] BYREF
  unsigned int v69; // [rsp+80h] [rbp-69h]
  unsigned int v70; // [rsp+84h] [rbp-65h]
  int v71; // [rsp+88h] [rbp-61h]
  unsigned int v72; // [rsp+8Ch] [rbp-5Dh]
  unsigned int v73; // [rsp+90h] [rbp-59h]
  struct _VIDSCH_GLOBAL *v74; // [rsp+98h] [rbp-51h] BYREF
  unsigned int *v75; // [rsp+A0h] [rbp-49h]
  unsigned int v76; // [rsp+A8h] [rbp-41h]
  unsigned int v77; // [rsp+ACh] [rbp-3Dh]
  int v78; // [rsp+B0h] [rbp-39h]
  unsigned int v79; // [rsp+B4h] [rbp-35h]
  unsigned int v80; // [rsp+B8h] [rbp-31h]
  __int64 v81; // [rsp+C0h] [rbp-29h]
  __int64 v82; // [rsp+C8h] [rbp-21h]
  _QWORD v83[11]; // [rsp+D0h] [rbp-19h] BYREF

  v8 = a5;
  v9 = 0;
  v66 = 0;
  v10 = a4;
  v11 = a3;
  v12 = a2;
  v13 = 0;
  if ( !a5 )
    return;
  v14 = a6;
  do
  {
    if ( (v8 & 1) == 0 )
      goto LABEL_22;
    if ( (v14 & 1) == 0 )
      goto LABEL_21;
    v15 = *(_DWORD *)v10;
    v16 = *(_DWORD *)v10 & 0x3FF;
    v68[0] = v12;
    v68[1] = v10;
    v69 = v16;
    if ( *((_BYTE *)v12 + 156) )
      v17 = (v15 >> 10) & 0x3FF;
    else
      v17 = 0;
    v18 = !_BitScanForward((unsigned int *)&v19, v16);
    v20 = -1;
    v70 = v17;
    v21 = 0;
    if ( !v18 )
      v20 = v19;
    v71 = 0;
    v18 = !_BitScanForward((unsigned int *)&v22, v17);
    v23 = v20;
    v24 = -1;
    if ( !v18 )
      v24 = v22;
    v72 = v23;
    v25 = v24;
    v73 = v24;
    while ( v16 || v17 )
    {
      if ( v23 >= v25 )
        goto LABEL_19;
      v26 = *((_DWORD *)v10 + 1);
      v27 = a8;
      v28 = (char *)v10 + v26 * ((8 * *((_DWORD *)v10 + 2) + 231) & 0xFFFFFFF8);
      v29 = (unsigned __int64)(v21 + v13 * v26) << 6;
      v30 = *(_QWORD *)&v28[v29 + 48];
      v31 = *(_QWORD *)&v28[v29 + 72];
      v82 = *(_QWORD *)&v28[v29 + 64];
      if ( a8 && v31 && v11 != -1 )
      {
        v46 = *((_QWORD *)v12 + v11 + 400);
        if ( v46 )
        {
          v48 = *(_DWORD *)(v46 + 3000);
          if ( _bittest(&v48, v23) )
          {
            while ( 1 )
            {
              v45 = v9 ? *(_QWORD *)(v46 + 8LL * v23 + 32) : *(_QWORD *)(v46 + 24);
              v47 = *(_DWORD *)(v45 + 72);
              ++v9;
LABEL_54:
              if ( v47 != (((unsigned __int8)*(_DWORD *)(v45 + 68) - 1) & 0x3F) )
              {
                v34 = 1376LL * v47;
                v35 = *(_DWORD *)(v34 + v45 + 1172);
                if ( v35 == 15 || v35 == 5 )
                  break;
              }
              if ( v9 >= 2 )
              {
                v13 = v66;
                v9 = 0;
                goto LABEL_57;
              }
            }
            v75 = *(unsigned int **)(v34 + v45 + 1296);
            v74 = v12;
            v36 = *v75;
            v37 = *v75 & 0x3FF;
            v18 = *((_BYTE *)v12 + 156) == 0;
            v76 = v37;
            if ( v18 )
              v38 = 0;
            else
              v38 = (v36 >> 10) & 0x3FF;
            v78 = 0;
            v39 = -1;
            v18 = !_BitScanForward((unsigned int *)&v40, v37);
            v77 = v38;
            if ( !v18 )
              v39 = v40;
            v18 = !_BitScanForward((unsigned int *)&v41, v38);
            v42 = v39;
            v43 = -1;
            if ( !v18 )
              v43 = v41;
            v79 = v42;
            v44 = v43;
            v80 = v43;
            while ( 1 )
            {
              if ( !v37 && !v38 )
              {
                v12 = a2;
                v47 = ((_BYTE)v47 - 1) & 0x3F;
                goto LABEL_54;
              }
              if ( v42 < v44 )
              {
                v49 = *(_DWORD *)(v34 + v45 + 1216);
                v50 = 0;
                if ( v49 )
                  break;
              }
LABEL_36:
              VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++(&v74);
              v44 = v80;
              v38 = v77;
              v37 = v76;
              v42 = v79;
            }
            v51 = *(_QWORD *)(v34 + v45 + 1296);
            v81 = *(_QWORD *)(v30 + 96);
            v52 = *(_DWORD *)(v51 + 4);
            v67 = v52;
            v53 = v52 * ((8 * *(_DWORD *)(v51 + 8) + 231) & 0xFFFFFFF8);
            while ( 1 )
            {
              v54 = (unsigned int)(v78 + v50 * v52);
              v23 = v72;
              if ( v81 == *(_QWORD *)(*(_QWORD *)(v53 + (v54 << 6) + v51 + 48) + 96LL) )
                break;
              v52 = v67;
              if ( ++v50 >= v49 )
                goto LABEL_36;
            }
            v58 = v53 + (v54 << 6);
            if ( v31 >= *(_QWORD *)(v58 + v51 + 72) )
            {
              *(_QWORD *)(v58 + v51 + 72) = v31;
              v59 = *(_QWORD *)(*(_QWORD *)(v30 + 96) + 24LL);
              v60 = 2LL * *(unsigned int *)(v59 + 32);
              *(_OWORD *)(v59 + 8 * v60 + 40) = 0LL;
              *(_DWORD *)(v59 + 32) = ((unsigned __int8)*(_DWORD *)(v59 + 32) + 1) & 7;
              *(_DWORD *)(v59 + 8 * v60 + 40) = 4;
              *(_QWORD *)(v59 + 8 * v60 + 48) = v31;
            }
            v9 = 0;
LABEL_63:
            v27 = 0;
            goto LABEL_16;
          }
LABEL_57:
          v55 = (v13 + ((unsigned __int64)v23 << 6)) << 6;
          if ( *(_QWORD *)(v55 + v46 + 3096) == *(_QWORD *)(v30 + 96) )
          {
            if ( v31 >= *(_QWORD *)(v55 + v46 + 3128) )
            {
              *(_QWORD *)(v55 + v46 + 3128) = v31;
              v27 = 0;
              v56 = *(_QWORD *)(*(_QWORD *)(v30 + 96) + 24LL);
              v57 = 2LL * *(unsigned int *)(v56 + 32);
              *(_OWORD *)(v56 + 8 * v57 + 40) = 0LL;
              *(_DWORD *)(v56 + 32) = ((unsigned __int8)*(_DWORD *)(v56 + 32) + 1) & 7;
              *(_DWORD *)(v56 + 8 * v57 + 40) = 3;
              *(_QWORD *)(v56 + 8 * v57 + 48) = v31;
              goto LABEL_16;
            }
            goto LABEL_63;
          }
        }
        v27 = a8;
      }
LABEL_16:
      v32 = *(_QWORD *)(v30 + 96);
      v33 = *(_QWORD *)(v32 + 24);
      _InterlockedDecrement((volatile signed __int32 *)(v30 + 104));
      if ( a7 )
      {
        v61 = *(_QWORD *)(v32 + 16);
        if ( v61 )
          _InterlockedDecrement((volatile signed __int32 *)(v61 + 8));
      }
      if ( v27 && v33 )
      {
        v62 = 0LL;
        v83[1] = v31;
        v63 = 2LL;
        v83[0] = v82;
        v64 = 0LL;
        do
        {
          v65 = v83[v62];
          if ( v65 )
          {
            if ( (int)VidSchiSignalSyncObjectsFromCpu(
                        a1,
                        1u,
                        (struct _VIDSCH_SYNC_OBJECT **)(*(_QWORD *)(*(_QWORD *)(v30 + 96) + 24LL) + 8 * v64),
                        0,
                        &v83[v64],
                        0LL) < 0 )
            {
              WdLogSingleEntry3(1LL, v64, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v30 + 96) + 24LL) + v62 * 8), v65);
              ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[85])(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"Failed to signal Flip fence[%d] 0x%p value 0x%I64x",
                v64,
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v30 + 96) + 24LL) + v62 * 8),
                v65,
                0LL,
                0LL);
            }
          }
          ++v64;
          ++v62;
          --v63;
        }
        while ( v63 );
      }
      v12 = a2;
      v11 = a3;
LABEL_19:
      VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++(v68);
      v25 = v73;
      v17 = v70;
      v16 = v69;
      v23 = v72;
      v21 = v71;
      v13 = v66;
    }
    v8 = a5;
    v14 = a6;
LABEL_21:
    v66 = ++v13;
LABEL_22:
    v8 >>= 1;
    v14 >>= 1;
    a5 = v8;
    a6 = v14;
  }
  while ( v8 );
}
