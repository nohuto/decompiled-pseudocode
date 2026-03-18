/*
 * XREFs of VidSchiProcessVsyncCompletedFlipEntry @ 0x1C000F520
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0003BC0 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000DBA0 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C001BBC0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x1C000F9B4 (VidSchiUnreferenceDisplayingAllocationsForThisEntry.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0010190 (VidSchiCompleteFlipEntry.c)
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x1C0010E20 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C001B448 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?VidSchiRecalculateInterruptTargetForFlipQueue@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE@@IPEA_K@Z @ 0x1C0045DEC (-VidSchiRecalculateInterruptTargetForFlipQueue@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE@@IP.c)
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_N@Z @ 0x1C0045F30 (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_N@Z.c)
 *     ?VidSchiValidateHwFlipQueueCompletionTimestamp@@YAXPEAUVIDSCH_FLIP_QUEUE@@K_K1@Z @ 0x1C00464B8 (-VidSchiValidateHwFlipQueueCompletionTimestamp@@YAXPEAUVIDSCH_FLIP_QUEUE@@K_K1@Z.c)
 */

__int64 __fastcall VidSchiProcessVsyncCompletedFlipEntry(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        unsigned int *a4,
        _DWORD *a5,
        _BYTE *a6)
{
  int v6; // r8d
  unsigned int v7; // r10d
  _QWORD *v8; // r14
  __int64 v9; // rbx
  unsigned int *v10; // rdi
  __int64 v11; // r15
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // r11
  unsigned int v16; // esi
  unsigned int v17; // r13d
  unsigned int v18; // eax
  unsigned __int64 v19; // r9
  unsigned int *v20; // rdx
  int v21; // r9d
  unsigned int v22; // eax
  int v23; // r8d
  unsigned int v24; // eax
  int v25; // r9d
  __int64 v26; // rdx
  int v27; // ecx
  __int64 result; // rax
  __int64 v29; // rcx
  unsigned int i; // r13d
  _DWORD *v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rdi
  void *v34; // rcx
  __int64 v35; // r12
  bool v36; // zf
  _DWORD *v37; // rax
  unsigned int v38; // r12d
  int v39; // r13d
  unsigned int v40; // r10d
  unsigned int v41; // eax
  __int64 v42; // r11
  int v43; // eax
  unsigned int v44; // r8d
  unsigned int v45; // r10d
  unsigned int v46; // r8d
  int v47; // eax
  char v48; // cl
  unsigned int v49; // r11d
  char v50; // cl
  int v51; // eax
  unsigned int v52; // edx
  __int64 v53; // r10
  __int64 v54; // rcx
  int v55; // r8d
  int v56; // r8d
  int v57; // eax
  int v58; // esi
  unsigned int v59; // ecx
  int v60; // edx
  char v61; // cl
  unsigned int v62; // r14d
  char v63; // cl
  unsigned __int8 v64; // al
  __int64 v65; // rdi
  __int64 v66; // r9
  unsigned int v67; // ebx
  unsigned int v68; // [rsp+40h] [rbp-49h]
  unsigned __int64 v69; // [rsp+48h] [rbp-41h]
  __int64 v70; // [rsp+48h] [rbp-41h]
  __int64 v71; // [rsp+50h] [rbp-39h]
  unsigned int v72; // [rsp+58h] [rbp-31h]
  unsigned int v73; // [rsp+5Ch] [rbp-2Dh]
  _QWORD v74[2]; // [rsp+60h] [rbp-29h] BYREF
  unsigned int v75; // [rsp+70h] [rbp-19h]
  unsigned int v76; // [rsp+74h] [rbp-15h]
  int v77; // [rsp+78h] [rbp-11h]
  unsigned int v78; // [rsp+7Ch] [rbp-Dh]
  unsigned int v79; // [rsp+80h] [rbp-9h]
  __int64 v80; // [rsp+88h] [rbp-1h]
  __int64 v81; // [rsp+90h] [rbp+7h]
  unsigned __int64 v82; // [rsp+E8h] [rbp+5Fh] BYREF
  __int64 v83; // [rsp+F0h] [rbp+67h]
  unsigned int *v84; // [rsp+F8h] [rbp+6Fh]

  v84 = a4;
  v83 = a3;
  v6 = 0;
  v7 = *((_DWORD *)a2 + 8);
  v8 = a2;
  v9 = a2[3];
  v10 = a4;
  v11 = *a2;
  v73 = *((_DWORD *)a2 + 4);
  v13 = 4673;
  v14 = v73 + 400LL;
  v72 = v7;
  v15 = *(_QWORD *)(v11 + 8 * v14);
  v16 = *(_DWORD *)(v9 + 68);
  v17 = ((_BYTE)v7 + 1) & 0x3F;
  v71 = v15;
  v81 = v9;
  v80 = v11 + 8 * v14;
  LODWORD(v82) = 0;
  v69 = 0LL;
  if ( v16 == v17 )
  {
LABEL_13:
    v23 = *(_DWORD *)(v9 + 72);
    v24 = v17;
    LODWORD(v8) = *(_DWORD *)(v9 + 68);
    v25 = ((_BYTE)v23 + 1) & 0x3F;
    if ( v17 != v25 )
      goto LABEL_70;
    goto LABEL_14;
  }
  while ( 1 )
  {
    v10 = (unsigned int *)(1376LL * v16 + v9 + 120);
    v18 = v10[263];
    if ( v18 > 0xC || !_bittest(&v13, v18) )
      break;
LABEL_11:
    v16 = ((_BYTE)v16 + 1) & 0x3F;
    if ( v16 == v17 )
    {
      v10 = v84;
      v7 = v72;
      goto LABEL_13;
    }
  }
  v19 = v8[6];
  *((_QWORD *)v10 + 141) = v8[5];
  *((_QWORD *)v10 + 139) = v19;
  v10[263] = 11;
  if ( *(_BYTE *)(v11 + 59) )
  {
    VidSchiValidateHwFlipQueueCompletionTimestamp((struct VIDSCH_FLIP_QUEUE *)v9, v16, *((_QWORD *)v10 + 138), v19);
    v15 = v71;
    v6 = v82;
  }
  v20 = (unsigned int *)*((_QWORD *)v10 + 147);
  *((_QWORD *)v10 + 140) = v8[7];
  if ( (v10[284] & 0x10) != 0 )
    v21 = ((unsigned __int16)*v20 | (unsigned __int16)(*v20 >> 10)) & 0x3FF;
  else
    v21 = (1 << *(_DWORD *)(v11 + 152)) - 1;
  if ( !*(_BYTE *)(v11 + 59) )
  {
    *(_DWORD *)(v15 + 3000) &= ~v21;
LABEL_10:
    v22 = v10[262];
    LODWORD(v82) = v21 | v6;
    v69 = __PAIR64__(v22, v21);
    VidSchiUnreferenceDisplayingAllocationsForThisEntry(a1, v11, v15, v10);
    VidSchiReferenceDisplayingAllocationsForThisEntry(a1, v11, v71, v10);
    v13 = 4673;
    v15 = v71;
    v6 = v82;
    if ( (*(_DWORD *)(*(_QWORD *)(v11 + 16) + 436LL) & 0x200) != 0 && *(unsigned int **)(v9 + 48) == v10 )
    {
      *(_DWORD *)(v9 + 40) = 0;
      *(_QWORD *)(v9 + 48) = 0LL;
    }
    goto LABEL_11;
  }
  v44 = *v20;
  v45 = *v20 & 0x3FF;
  v74[0] = v11;
  v36 = *(_BYTE *)(v11 + 156) == 0;
  v74[1] = v20;
  v75 = v45;
  if ( v36 )
  {
    v46 = 0;
    v76 = 0;
  }
  else
  {
    v46 = (v44 >> 10) & 0x3FF;
    v76 = v46;
  }
  v36 = !_BitScanForward((unsigned int *)&v47, v45);
  v48 = -1;
  v77 = 0;
  if ( !v36 )
    v48 = v47;
  v49 = v48;
  v50 = -1;
  v36 = !_BitScanForward((unsigned int *)&v51, v46);
  v78 = v49;
  if ( !v36 )
    v50 = v51;
  v52 = v50;
  v79 = v50;
  while ( 1 )
  {
    if ( !v45 && !v46 )
    {
      v15 = v71;
      v6 = v82;
      goto LABEL_10;
    }
    v53 = v71;
    if ( v49 < v52 )
      v52 = v49;
    v54 = 280LL * v52;
    v55 = *(_DWORD *)(v54 + v71 + 192);
    if ( !v55 )
      break;
    v56 = v55 - 1;
    *(_DWORD *)(v54 + v71 + 192) = v56;
    if ( (v10[284] & 0x20) != 0 )
    {
      v57 = *(_DWORD *)(v54 + v71 + 196);
      if ( !v57 )
      {
        WdLogSingleEntry5(0LL, 281LL, 45056LL, v11, v71, v52);
        __debugbreak();
        break;
      }
      *(_DWORD *)(v54 + v71 + 196) = v57 - 1;
    }
    if ( !v56 )
      *(_DWORD *)(v71 + 3000) &= ~(1 << v52);
    VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++(v74);
    v52 = v79;
    v46 = v76;
    v49 = v78;
    v45 = v75;
  }
  v24 = WdLogSingleEntry5(0LL, 281LL, 45056LL, v11, v53, v52);
  __debugbreak();
LABEL_70:
  v58 = 4673;
  while ( 1 )
  {
    v59 = *(_DWORD *)(1376LL * v17 + v9 + 1172);
    if ( v59 > 0xC || !_bittest(&v58, v59) )
      break;
    v17 = ((_BYTE)v17 + 1) & 0x3F;
    if ( v17 == v25 )
      goto LABEL_14;
  }
  v24 = v17;
LABEL_14:
  *(_DWORD *)(v9 + 68) = v24;
  if ( v23 == v7 )
  {
    *(_DWORD *)(v9 + 72) = v24;
    LOBYTE(v23) = v24;
  }
  if ( !*(_BYTE *)(v11 + 59) && v24 != (((_BYTE)v23 + 1) & 0x3F) )
  {
    do
    {
      v26 = 1376LL * v24;
      v27 = *(_DWORD *)(v26 + v9 + 1172);
      if ( v27 == 5 || v27 == 15 )
      {
        if ( (*(_DWORD *)(v26 + v9 + 1256) & 0x10) != 0 )
          v60 = ((unsigned __int16)**(_DWORD **)(v26 + v9 + 1296) | (unsigned __int16)(**(_DWORD **)(v26 + v9 + 1296) >> 10)) & 0x3FF;
        else
          v60 = (1 << *(_DWORD *)(v11 + 152)) - 1;
        *(_DWORD *)(v15 + 3000) |= v60;
      }
      v24 = ((_BYTE)v24 + 1) & 0x3F;
    }
    while ( v24 != (((unsigned __int8)*(_DWORD *)(v9 + 72) + 1) & 0x3F) );
  }
  result = VidSchiCompleteFlipEntry(a1, v11, v73, v9, (_DWORD)v8, v7, 0, 0LL);
  *a5 = result;
  if ( (_DWORD)result )
  {
    v29 = *v10;
    *(_QWORD *)(v83 + 8 * v29) = v69;
    *v10 = v29 + 1;
    result = (__int64)a6;
    *a6 = 1;
  }
  for ( i = v72; (unsigned int)v8 <= i; *(_DWORD *)(v33 + 108) = result )
  {
    v31 = *(_DWORD **)v80;
    v32 = *(unsigned int *)(*(_QWORD *)v80 + 136LL);
    v33 = *(_QWORD *)(*(_QWORD *)v80 + 128LL) + 112 * v32;
    *(_DWORD *)(*(_QWORD *)v80 + 136LL) = (v32 + 1) & (*(_DWORD *)(*(_QWORD *)v80 + 120LL) - 1);
    v34 = *(void **)(v33 + 72);
    if ( v34 )
      memset(v34, 0, 8LL * *(unsigned int *)(v11 + 152));
    *(_DWORD *)v33 = 3;
    v35 = v9 + 1376LL * (unsigned int)v8;
    v70 = v35;
    *(_DWORD *)(v33 + 16) = **(_DWORD **)(v35 + 1296) & 0x3FF;
    *(_DWORD *)(v33 + 20) = (**(_DWORD **)(v35 + 1296) >> 10) & 0x3FF;
    *(_BYTE *)(v33 + 24) = *(_BYTE *)(v9 + 80);
    *(_DWORD *)(v33 + 28) = (_DWORD)v8;
    *(LARGE_INTEGER *)(v33 + 8) = KeQueryPerformanceCounter(0LL);
    v36 = *(_QWORD *)(v33 + 72) == 0LL;
    *(_BYTE *)(v33 + 36) = (*(_DWORD *)(v35 + 1256) & 0x20) != 0;
    *(_DWORD *)(v33 + 40) = *(_DWORD *)(v35 + 1172);
    *(_DWORD *)(v33 + 32) = *(_DWORD *)(v35 + 1176);
    *(_DWORD *)(v33 + 44) = *(_DWORD *)(v35 + 1260);
    *(_DWORD *)(v33 + 48) = v31[736];
    *(_QWORD *)(v33 + 56) = *(_QWORD *)(v35 + 1416);
    *(_QWORD *)(v33 + 64) = *(_QWORD *)(v35 + 1424);
    if ( !v36 )
    {
      v37 = *(_DWORD **)(v35 + 1296);
      v38 = 0;
      v39 = 0;
      v40 = *v37 & 0x3FF;
      if ( *(_BYTE *)(v11 + 156) )
        v38 = (*v37 >> 10) & 0x3FF;
      v36 = !_BitScanForward(&v41, v40);
      if ( v36 )
        LOBYTE(v41) = -1;
      v42 = (unsigned int)(char)v41;
      v36 = !_BitScanForward(&v41, v38);
      if ( v36 )
        LOBYTE(v41) = -1;
      v41 = (char)v41;
      v68 = (char)v41;
      while ( v40 || v38 )
      {
        if ( (unsigned int)v42 >= v41 )
        {
          v61 = -1;
          v38 &= ~(1 << v41);
          v36 = !_BitScanForward(&v41, v38);
          if ( !v36 )
            v61 = v41;
          v41 = v61;
          v68 = v61;
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)(v33 + 72) + 8 * v42) = *(_QWORD *)(v39
                                                                   * ((8 * *(_DWORD *)(*(_QWORD *)(v70 + 1296) + 8LL)
                                                                     + 231) & 0xFFFFFFF8)
                                                                   + *(_QWORD *)(v70 + 1296)
                                                                   + 24LL);
          v40 &= ~(1 << v42);
          v36 = !_BitScanForward((unsigned int *)&v43, v40);
          if ( v36 )
            LOBYTE(v43) = -1;
          v42 = (unsigned int)(char)v43;
          v41 = v68;
        }
        ++v39;
      }
      v9 = v81;
      i = v72;
    }
    LODWORD(v8) = (_DWORD)v8 + 1;
    *(_DWORD *)(v33 + 84) = v31[751];
    *(_DWORD *)(v33 + 80) = v31[750];
    *(_DWORD *)(v33 + 88) = *(_DWORD *)(v9 + 56);
    *(_DWORD *)(v33 + 92) = *(_DWORD *)(v9 + 60);
    *(_DWORD *)(v33 + 96) = *(_DWORD *)(v9 + 64);
    *(_DWORD *)(v33 + 100) = *(_DWORD *)(v9 + 68);
    *(_DWORD *)(v33 + 104) = *(_DWORD *)(v9 + 72);
    result = *(unsigned int *)(v9 + 76);
  }
  if ( *(_BYTE *)(v11 + 59) )
  {
    v62 = v82;
    v63 = -1;
    v36 = !_BitScanForward((unsigned int *)&result, v82);
    result = v64;
    if ( !v36 )
      v63 = result;
    if ( (_DWORD)v82 )
    {
      do
      {
        v65 = v63;
        v66 = *(_QWORD *)(v71 + 8LL * v63 + 3008) + 1LL;
        v67 = v63;
        v82 = v66;
        if ( *(_DWORD *)(280LL * v63 + v71 + 188) )
        {
          VidSchiRecalculateInterruptTargetForFlipQueue(
            (struct _VIDSCH_GLOBAL *)v11,
            *(struct VIDSCH_FLIP_QUEUE **)(v71 + 24),
            v63,
            &v82);
          VidSchiRecalculateInterruptTargetForFlipQueue(
            (struct _VIDSCH_GLOBAL *)v11,
            *(struct VIDSCH_FLIP_QUEUE **)(v71 + 8 * v65 + 32),
            v67,
            &v82);
          v66 = v82;
        }
        VidSchiSetInterruptTargetPresentId((struct _VIDSCH_GLOBAL *)v11, v73, v67, v66, 0);
        LODWORD(v82) = 0;
        v63 = -1;
        v62 &= ~(1 << v67);
        v36 = !_BitScanForward((unsigned int *)&result, v62);
        result = (unsigned __int8)result;
        if ( !v36 )
          v63 = result;
      }
      while ( v62 );
    }
  }
  return result;
}
