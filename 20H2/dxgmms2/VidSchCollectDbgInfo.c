/*
 * XREFs of VidSchCollectDbgInfo @ 0x1C00D4990
 * Callers:
 *     <none>
 * Callees:
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C00040E0 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     memmove @ 0x1C0018300 (memmove.c)
 *     memset @ 0x1C00185C0 (memset.c)
 *     ?GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ @ 0x1C0029D34 (-GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ.c)
 *     ?VidSchiGetVSyncState@@YA?AW4VIDSCH_VSYNC_STATE@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C003C558 (-VidSchiGetVSyncState@@YA-AW4VIDSCH_VSYNC_STATE@@PEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     VidSchiCaptureProcessName @ 0x1C003C5A8 (VidSchiCaptureProcessName.c)
 *     ?VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C003D68C (-VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiGetNumHistoryLayersUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C003D714 (-VidSchiGetNumHistoryLayersUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiGetNumOverlayPlanesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C003D7C4 (-VidSchiGetNumOverlayPlanesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     VidSchQueryDmaHeader @ 0x1C00D51E0 (VidSchQueryDmaHeader.c)
 *     VidSchiGetNumFlipAllocAttribs @ 0x1C00D5480 (VidSchiGetNumFlipAllocAttribs.c)
 */

__int64 __fastcall VidSchCollectDbgInfo(__int64 a1, _DWORD *a2, size_t a3)
{
  size_t v3; // r15
  _DWORD *v4; // rsi
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // r12
  _QWORD *v11; // rdi
  int v12; // ebx
  int NumHistoryLayersUsed; // eax
  unsigned int v14; // ebx
  int v15; // r12d
  int v16; // edx
  __int64 v17; // r11
  int v18; // r12d
  size_t v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rcx
  unsigned int v23; // r15d
  __int64 v24; // r13
  char *v25; // r13
  int v26; // r12d
  struct VIDSCH_FLIP_QUEUE *FlipQueue; // rax
  unsigned int v28; // r10d
  __int64 v29; // r11
  __int64 v30; // rcx
  char *v31; // r10
  __int64 v32; // rdx
  unsigned int *v33; // r9
  unsigned int v34; // r12d
  __int64 v35; // rcx
  char *v36; // r11
  unsigned int v37; // eax
  int v38; // edx
  unsigned int v39; // eax
  int v40; // ecx
  bool v41; // zf
  unsigned int v42; // ecx
  __int64 v43; // rdi
  unsigned int v44; // edx
  unsigned int v45; // r8d
  unsigned int v46; // edx
  unsigned int v47; // r12d
  int v48; // eax
  char v49; // cl
  int v50; // r15d
  unsigned int v51; // r9d
  char v52; // cl
  int v53; // eax
  unsigned int v54; // eax
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // rax
  int v58; // ecx
  int v59; // edx
  int v60; // eax
  int v61; // ecx
  int v62; // edx
  unsigned int v63; // r8d
  __int64 v64; // rdx
  _DWORD *v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdx
  unsigned int i; // r9d
  __int64 v69; // r8
  __int64 v70; // r10
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rax
  int v76; // [rsp+30h] [rbp-69h]
  int NumFlipQueueEntriesUsed; // [rsp+34h] [rbp-65h]
  unsigned int v78; // [rsp+38h] [rbp-61h]
  int NumOverlayPlanesUsed; // [rsp+3Ch] [rbp-5Dh]
  int v80; // [rsp+40h] [rbp-59h]
  __int64 v81; // [rsp+48h] [rbp-51h]
  unsigned int *v82; // [rsp+58h] [rbp-41h]
  __int64 v83; // [rsp+60h] [rbp-39h]
  __int64 v84; // [rsp+68h] [rbp-31h] BYREF
  int v85; // [rsp+70h] [rbp-29h]
  int v86; // [rsp+74h] [rbp-25h]
  __int64 v87; // [rsp+78h] [rbp-21h] BYREF
  unsigned int *v88; // [rsp+80h] [rbp-19h]
  unsigned int v89; // [rsp+88h] [rbp-11h]
  unsigned int v90; // [rsp+8Ch] [rbp-Dh]
  int v91; // [rsp+90h] [rbp-9h]
  unsigned int v92; // [rsp+94h] [rbp-5h]
  unsigned int v93; // [rsp+98h] [rbp-1h]
  char *v94; // [rsp+A0h] [rbp+7h]
  size_t v95; // [rsp+A8h] [rbp+Fh]
  unsigned int v96; // [rsp+100h] [rbp+67h]
  unsigned int v99; // [rsp+118h] [rbp+7Fh]

  v3 = a3;
  v4 = a2;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 2704LL);
  v7 = *(_DWORD *)(a1 + 16);
  v8 = *(_QWORD *)(v6 + 624);
  if ( v7 == 2 )
  {
    v9 = *(_QWORD *)(v8 + 2928);
    v10 = 16LL;
    v11 = (_QWORD *)(v9 + 552);
    do
    {
      VidSchQueryDmaHeader(v8, *(_QWORD *)(v8 + 2928), *v11, *((_DWORD *)v11 - 4) == 3, (__int64)(v11 - 4));
      v11 += 7;
      --v10;
    }
    while ( v10 );
    if ( v3 >= 0x390 )
      v3 = 912LL;
    memmove(v4, (const void *)(v9 + 488), v3);
  }
  else if ( v7 == 3 )
  {
    v12 = *(_DWORD *)(a1 + 80);
    NumOverlayPlanesUsed = VidSchiGetNumOverlayPlanesUsed(*(struct _VIDSCH_GLOBAL **)(v6 + 624), v12);
    NumHistoryLayersUsed = VidSchiGetNumHistoryLayersUsed((struct _VIDSCH_GLOBAL *)v8, v12);
    v14 = *(_DWORD *)(a1 + 80);
    v80 = NumHistoryLayersUsed;
    v15 = NumHistoryLayersUsed;
    NumFlipQueueEntriesUsed = VidSchiGetNumFlipQueueEntriesUsed((struct _VIDSCH_GLOBAL *)v8, v14);
    LODWORD(v81) = (((_DWORD)v4 + 163) & 0xFFFFFFF8) - (_DWORD)v4;
    v16 = (((_DWORD)v4 + 163) & 0xFFFFFFF8) + 280 * VidSchiGetNumFlipAllocAttribs(v8, v14);
    v17 = 4LL;
    v18 = v16 + 48 * v15 - (_DWORD)v4;
    HIDWORD(v81) = v16 - (_DWORD)v4;
    v19 = (unsigned int)(v18 + 48 * NumFlipQueueEntriesUsed);
    v95 = v19;
    if ( v3 >= v19 )
    {
      memset(v4, 0, (unsigned int)v19);
      *v4 = v18 + 48 * NumFlipQueueEntriesUsed;
      v4[1] = 2;
      v4[3] = VidSchiGetVSyncState(v8, *(_DWORD *)(a1 + 80));
      v4[2] = *(_DWORD *)(a1 + 80);
      *((_QWORD *)v4 + 16) = v81;
      v4[34] = v18;
      v20 = (unsigned int)v4[2];
      if ( (_DWORD)v20 != -1 && (unsigned int)v20 < *(_DWORD *)(v8 + 40) )
      {
        v21 = *(_QWORD *)(v8 + 8 * v20 + 3104);
        if ( v21 )
        {
          v22 = *(_QWORD *)(v21 + 16);
          if ( v22 )
          {
            VidSchiCaptureProcessName(v22, (_BYTE *)v4 + 16);
            v23 = 0;
            v24 = (unsigned int)v4[34];
            v4[8] = *(_DWORD *)(v21 + 4);
            v25 = (char *)v4 + v24;
            v94 = (char *)v4 + (unsigned int)v4[33];
            v26 = -1;
            v85 = v4[2];
            v76 = 0;
            v99 = 0;
            v96 = 0;
            v84 = v8;
            while ( 1 )
            {
              v86 = v26;
              if ( v26 == *(_DWORD *)(v8 + 144) )
                break;
              FlipQueue = VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue((VIDSCH_FLIP_QUEUE_ITERATOR *)&v84);
              if ( FlipQueue )
              {
                v30 = v28;
                v31 = (char *)FlipQueue + 1264;
                v32 = 280 * v30;
                v33 = (unsigned int *)(280 * v30 + v29 + 24);
                v82 = v33;
                *(_DWORD *)(v32 + v29) = v26;
                v34 = v96;
                *(_DWORD *)(v32 + v29 + 4) = *((_DWORD *)FlipQueue + 8);
                *(_DWORD *)(v32 + v29 + 8) = *((_DWORD *)FlipQueue + 9);
                *(_DWORD *)(v32 + v29 + 12) = *((_DWORD *)FlipQueue + 10);
                *(_DWORD *)(v32 + v29 + 16) = *((_DWORD *)FlipQueue + 11);
                v35 = 64LL;
                *(_DWORD *)(v32 + v29 + 20) = *((_DWORD *)FlipQueue + 13);
                v36 = v94;
                v83 = 64LL;
                do
                {
                  v37 = *((_DWORD *)v31 - 31);
                  if ( v37 <= 0xC && (v38 = 4673, _bittest(&v38, v37)) )
                  {
                    *v33 = -1;
                  }
                  else
                  {
                    *v33 = v34;
                    v39 = 0;
                    v40 = *((_DWORD *)v31 - 24);
                    if ( (v40 & 1) == 0 )
                    {
                      do
                      {
                        if ( v39 >= *(_DWORD *)(v8 + 68) )
                          break;
                        ++v39;
                      }
                      while ( !_bittest(&v40, v39) );
                    }
                    v41 = v39 == *(_DWORD *)(v8 + 68);
                    v42 = 0;
                    v87 = v8;
                    if ( !v41 )
                      v42 = v39;
                    v78 = v42;
                    v43 = 6LL * v34;
                    *(_DWORD *)&v25[8 * v43] = v23;
                    *(_DWORD *)&v25[8 * v43 + 44] ^= (*(_DWORD *)&v25[48 * v34 + 44] ^ **(_DWORD **)v31) & 0x3FF;
                    v88 = *(unsigned int **)v31;
                    v44 = *v88;
                    v45 = *v88 & 0x3FF;
                    v89 = v45;
                    if ( *(_BYTE *)(v8 + 148) )
                    {
                      v46 = (v44 >> 10) & 0x3FF;
                      v90 = v46;
                    }
                    else
                    {
                      v46 = 0;
                      v90 = 0;
                    }
                    v47 = v99;
                    v41 = !_BitScanForward((unsigned int *)&v48, v45);
                    v49 = -1;
                    v91 = 0;
                    v50 = 0;
                    if ( !v41 )
                      v49 = v48;
                    v51 = v49;
                    v52 = -1;
                    v41 = !_BitScanForward((unsigned int *)&v53, v46);
                    v92 = v51;
                    if ( !v41 )
                      v52 = v53;
                    v54 = v52;
                    v93 = v52;
                    while ( v45 || v46 )
                    {
                      if ( v51 < v54 )
                      {
                        v55 = 6LL * v47;
                        *(_QWORD *)&v36[8 * v55] = *(_QWORD *)(((unsigned __int64)(v50
                                                                                 + v78
                                                                                 * *(_DWORD *)(*(_QWORD *)v31 + 4LL)) << 6)
                                                             + *(_QWORD *)v31
                                                             + *(_DWORD *)(*(_QWORD *)v31 + 4LL)
                                                             * ((8 * *(_DWORD *)(*(_QWORD *)v31 + 8LL) + 199) & 0xFFFFFFF8)
                                                             + 40);
                        v56 = *(_QWORD *)v31;
                        v57 = v50 * ((8 * *(_DWORD *)(*(_QWORD *)v31 + 8LL) + 199) & 0xFFFFFFF8);
                        ++v47;
                        *(_OWORD *)&v36[8 * v55 + 8] = *(_OWORD *)(v57 + *(_QWORD *)v31 + 160);
                        *(_OWORD *)&v36[8 * v55 + 24] = *(_OWORD *)(v57 + v56 + 176);
                        *(_DWORD *)&v36[8 * v55 + 40] = *(_DWORD *)(v57 + v56 + 192);
                      }
                      VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)&v87);
                      v54 = v93;
                      v46 = v90;
                      v45 = v89;
                      v51 = v92;
                      v50 = v91;
                    }
                    v33 = v82;
                    *(_DWORD *)&v25[8 * v43 + 4] = *((_DWORD *)v31 - 31);
                    *(_DWORD *)&v25[8 * v43 + 8] = *((_DWORD *)v31 - 30);
                    v99 = v47;
                    *(_DWORD *)&v25[8 * v43 + 44] ^= (*(_DWORD *)&v25[8 * v43 + 44] ^ (*((_DWORD *)v31 - 26) << 10)) & 0x3C00;
                    v58 = *(_DWORD *)&v25[8 * v43 + 44];
                    v23 = v47;
                    *(_DWORD *)&v25[8 * v43 + 12] = *((_DWORD *)v31 - 24);
                    *(_QWORD *)&v25[8 * v43 + 16] = *((_QWORD *)v31 - 9);
                    *(_QWORD *)&v25[8 * v43 + 24] = *((_QWORD *)v31 - 8);
                    *(_DWORD *)&v25[8 * v43 + 36] = *((_DWORD *)v31 - 12);
                    v59 = v58 ^ (v58 ^ ((unsigned __int8)*(v31 - 100) << 18)) & 0x40000;
                    *(_DWORD *)&v25[8 * v43 + 44] = v59;
                    v25[8 * v43 + 40] = *(v31 - 88);
                    v25[8 * v43 + 41] = *(v31 - 84);
                    v60 = v59 ^ ((unsigned __int16)v59 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v31 - 10) << 10)) & 0x4000;
                    *(_DWORD *)&v25[8 * v43 + 44] = v60;
                    v61 = v60 ^ ((unsigned __int16)v60 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v31 - 10) << 10)) & 0x8000;
                    *(_DWORD *)&v25[8 * v43 + 44] = v61;
                    v62 = v61 ^ (v61 ^ (*((_DWORD *)v31 - 10) << 9)) & 0x10000;
                    v35 = v83;
                    *(_DWORD *)&v25[8 * v43 + 44] = v62;
                    v34 = v96 + 1;
                    *(_DWORD *)&v25[8 * v43 + 44] = v62 ^ (v62 ^ (*((_DWORD *)v31 - 10) << 9)) & 0x20000;
                    ++v96;
                  }
                  ++v33;
                  v31 += 1344;
                  --v35;
                  v82 = v33;
                  v83 = v35;
                }
                while ( v35 );
                v26 = v86;
                ++v76;
              }
              ++v26;
            }
            v4 = a2;
            v3 = a3;
          }
        }
      }
      v63 = 0;
      v4[14] = *(_DWORD *)(v8 + 2128);
      v4[15] = *(_DWORD *)(v8 + 40);
      v4[10] = *(_DWORD *)(v8 + 144);
      v4[11] = NumOverlayPlanesUsed;
      v4[12] = v80;
      v4[13] = NumFlipQueueEntriesUsed;
      for ( v4[9] = *(_DWORD *)(v8 + 68);
            v63 < *(_DWORD *)(v8 + 40);
            v4[v64 + 16] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 2696LL) + 112LL)
                                     + 3968 * v64
                                     + 1068) )
      {
        v64 = v63++;
      }
      v3 -= v95;
      v17 = 4LL;
      v4 = (_DWORD *)((char *)v4 + v95);
    }
    if ( v3 >= 0x40 )
    {
      v65 = v4;
      v66 = 4LL;
      v67 = ((unsigned __int8)*(_DWORD *)(v8 + 6288) - 1) & 3;
      do
      {
        *(_QWORD *)v65 = *(_QWORD *)(v8 + 8 * v67 + 6296);
        v65[2] = *(_DWORD *)(v8 + 4 * v67 + 6328);
        v67 = ((_BYTE)v67 - 1) & 3;
        v65 += 4;
        --v66;
      }
      while ( v66 );
      v3 -= 64LL;
      v4 += 16;
    }
    for ( i = 0; i < *(_DWORD *)(v8 + 40); ++i )
    {
      if ( v3 >= 0x160 )
      {
        v69 = *(_QWORD *)(v8 + 8LL * i + 3104);
        if ( v69 )
        {
          v70 = 4LL;
          v71 = ((unsigned __int8)*(_DWORD *)(v69 + 33292) - 1) & 3;
          do
          {
            *(_QWORD *)v4 = *(_QWORD *)(v69 + 8 * v71 + 33296);
            v72 = 10 * v71;
            v71 = ((_BYTE)v71 - 1) & 3;
            *(_OWORD *)(v4 + 2) = *(_OWORD *)(v69 + 8 * v72 + 33328);
            *(_OWORD *)(v4 + 6) = *(_OWORD *)(v69 + 8 * v72 + 33344);
            *(_OWORD *)(v4 + 10) = *(_OWORD *)(v69 + 8 * v72 + 33360);
            *(_OWORD *)(v4 + 14) = *(_OWORD *)(v69 + 8 * v72 + 33376);
            *(_OWORD *)(v4 + 18) = *(_OWORD *)(v69 + 8 * v72 + 33392);
            v4 += 22;
            --v70;
          }
          while ( v70 );
          v3 -= 352LL;
        }
      }
    }
    if ( v3 >= 0x160 )
    {
      v73 = ((unsigned __int8)*(_DWORD *)(v8 + 5928) - 1) & 3;
      do
      {
        *(_QWORD *)v4 = *(_QWORD *)(v8 + 8 * v73 + 5936);
        v74 = 10 * v73;
        v4 += 22;
        v73 = ((_BYTE)v73 - 1) & 3;
        *((_OWORD *)v4 - 5) = *(_OWORD *)(v8 + 8 * v74 + 5968);
        *((_OWORD *)v4 - 4) = *(_OWORD *)(v8 + 8 * v74 + 5984);
        *((_OWORD *)v4 - 3) = *(_OWORD *)(v8 + 8 * v74 + 6000);
        *((_OWORD *)v4 - 2) = *(_OWORD *)(v8 + 8 * v74 + 6016);
        *((_OWORD *)v4 - 1) = *(_OWORD *)(v8 + 8 * v74 + 6032);
        --v17;
      }
      while ( v17 );
    }
  }
  return 0LL;
}
