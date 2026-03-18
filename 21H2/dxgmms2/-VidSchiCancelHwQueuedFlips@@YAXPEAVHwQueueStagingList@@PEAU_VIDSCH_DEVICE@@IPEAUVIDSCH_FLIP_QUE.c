/*
 * XREFs of ?VidSchiCancelHwQueuedFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_DEVICE@@IPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C00455AC
 * Callers:
 *     VidSchiRestartQueuedFlip @ 0x1C003A160 (VidSchiRestartQueuedFlip.c)
 * Callees:
 *     ?VidSchiCancelQueuedFlips@@YAJPEAU_VIDSCH_GLOBAL@@II_KPEA_K@Z @ 0x1C0045808 (-VidSchiCancelQueuedFlips@@YAJPEAU_VIDSCH_GLOBAL@@II_KPEA_K@Z.c)
 *     ?VidSchiSynchronouslyCancelPendingFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@I@Z @ 0x1C00461BC (-VidSchiSynchronouslyCancelPendingFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVID.c)
 */

void __fastcall VidSchiCancelHwQueuedFlips(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_DEVICE *a2,
        unsigned int a3,
        struct VIDSCH_FLIP_QUEUE *a4)
{
  struct _VIDSCH_GLOBAL *v5; // r13
  __int64 v6; // r15
  unsigned int v7; // r10d
  unsigned int v8; // eax
  __int64 v9; // rsi
  int v10; // ecx
  unsigned int v11; // ebx
  unsigned int v12; // edi
  char v13; // r12
  bool v14; // zf
  int v15; // eax
  char v16; // r8
  __int64 v17; // rcx
  unsigned __int64 v18; // r9
  __int64 v19; // rbp
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  char v22; // cl
  int v23; // eax
  int v24; // eax
  char v25; // bl
  unsigned int v26; // ebp
  char v27; // cl
  int v28; // eax
  unsigned __int64 v29; // [rsp+30h] [rbp-68h] BYREF
  __int64 v30; // [rsp+38h] [rbp-60h]
  __int64 v31; // [rsp+40h] [rbp-58h]
  char v33; // [rsp+A8h] [rbp+10h]

  v5 = (struct _VIDSCH_GLOBAL *)*((_QWORD *)a2 + 4);
  v6 = 1376LL * *((unsigned int *)a4 + 17);
  v7 = a3;
  v8 = *(_DWORD *)((char *)a4 + v6 + 1172);
  v9 = *((_QWORD *)v5 + a3 + 400);
  if ( v8 > 0xC || (v10 = 4673, !_bittest(&v10, v8)) )
  {
    if ( v8 == 5 || v8 == 15 )
    {
      if ( (*(_DWORD *)((_BYTE *)a4 + v6 + 1256) & 0x10) != 0 )
        v11 = ((unsigned __int16)**(_DWORD **)((char *)a4 + v6 + 1296) | (unsigned __int16)(**(_DWORD **)((char *)a4 + v6 + 1296) >> 10)) & 0x3FF;
      else
        v11 = (1 << *((_DWORD *)v5 + 38)) - 1;
      v12 = 0;
      v13 = -1;
      v14 = !_BitScanForward((unsigned int *)&v15, v11);
      if ( !v14 )
        v13 = v15;
      v16 = 0;
      v33 = 0;
      if ( v11 )
      {
        do
        {
          v30 = *(_QWORD *)((char *)a4 + v6 + 1296);
          v17 = v16 * ((8 * *(_DWORD *)(v30 + 8) + 231) & 0xFFFFFFF8);
          v31 = v17;
          v18 = *(_QWORD *)(v17 + v30 + 24);
          if ( v18 )
          {
            v29 = 0LL;
            v19 = 280LL * v13;
            VidSchiCancelQueuedFlips(v5, v7, v13, v18, &v29);
            v20 = v29;
            if ( v29 < *(_QWORD *)(v31 + v30 + 24) || (v21 = *(_QWORD *)(v9 + v19 + 376), v29 > v21) )
            {
              *(_QWORD *)(v9 + v19 + 392) = 0LL;
              *(_QWORD *)(v9 + v19 + 400) = 0LL;
            }
            else
            {
              *(_QWORD *)(v9 + v19 + 400) = v21;
              v12 |= 1 << v13;
              *(_QWORD *)(v9 + v19 + 392) = v20;
            }
            v7 = a3;
            v16 = v33;
          }
          v22 = v13;
          v13 = -1;
          v11 &= ~(1 << v22);
          v14 = !_BitScanForward((unsigned int *)&v23, v11);
          if ( !v14 )
            v13 = v23;
          v33 = ++v16;
        }
        while ( v11 );
        if ( v12 )
        {
          VidSchiSynchronouslyCancelPendingFlips(a1, v5, v7, *(struct VIDSCH_FLIP_QUEUE **)(v9 + 24), v12);
          v14 = !_BitScanForward((unsigned int *)&v24, v12);
          v25 = -1;
          v26 = v12;
          if ( !v14 )
            v25 = v24;
          do
          {
            VidSchiSynchronouslyCancelPendingFlips(a1, v5, a3, *(struct VIDSCH_FLIP_QUEUE **)(v9 + 8LL * v25 + 32), v12);
            v27 = v25;
            v25 = -1;
            v26 &= ~(1 << v27);
            v14 = !_BitScanForward((unsigned int *)&v28, v26);
            if ( !v14 )
              v25 = v28;
          }
          while ( v26 );
        }
      }
    }
  }
}
