/*
 * XREFs of ?VidSchiSynchronouslyCancelPendingFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@I@Z @ 0x1C00461BC
 * Callers:
 *     ?VidSchiCancelHwQueuedFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_DEVICE@@IPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C00455AC (-VidSchiCancelHwQueuedFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_DEVICE@@IPEAUVIDSCH_FLIP_QUE.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x1C0010190 (VidSchiCompleteFlipEntry.c)
 */

void __fastcall VidSchiSynchronouslyCancelPendingFlips(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        unsigned int a3,
        struct VIDSCH_FLIP_QUEUE *a4,
        unsigned int a5)
{
  unsigned int v6; // ebx
  int v10; // esi
  __int64 v11; // r12
  __int64 v12; // rcx
  unsigned int v13; // eax
  int v14; // edx
  _DWORD *v15; // r10
  unsigned int v16; // edx
  char v17; // cl
  bool v18; // zf
  int v19; // eax
  char v20; // r14
  unsigned int v21; // r11d
  unsigned __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // eax
  int v25; // eax
  int v26; // [rsp+88h] [rbp+20h] BYREF

  if ( a4 )
  {
    v6 = *((_DWORD *)a4 + 17);
    v10 = ((unsigned __int8)*((_DWORD *)a4 + 18) + 1) & 0x3F;
    v11 = *((_QWORD *)a2 + a3 + 400);
    while ( v6 != v10 )
    {
      v12 = 1376LL * v6;
      v13 = *(_DWORD *)((char *)a4 + v12 + 1172);
      if ( v13 > 0xC || (v14 = 4673, !_bittest(&v14, v13)) )
      {
        if ( v13 == 5 || v13 == 15 )
        {
          v15 = *(_DWORD **)((char *)a4 + v12 + 1296);
          if ( (*(_DWORD *)((_BYTE *)a4 + v12 + 1256) & 0x10) != 0 )
            v16 = ((unsigned __int16)*v15 | (unsigned __int16)(*v15 >> 10)) & 0x3FF;
          else
            v16 = (1 << *((_DWORD *)a2 + 38)) - 1;
          v26 = 0;
          v17 = -1;
          v18 = !_BitScanForward((unsigned int *)&v19, v16);
          if ( !v18 )
            v17 = v19;
          v20 = 0;
          if ( v16 )
          {
            v21 = (8 * v15[2] + 231) & 0xFFFFFFF8;
            while ( 1 )
            {
              v22 = *(_QWORD *)((char *)v15 + v21 * v20 + 24);
              if ( v22 )
              {
                v23 = 280LL * v17;
                v24 = a5;
                if ( !_bittest((const int *)&v24, v17)
                  || v22 < *(_QWORD *)(v23 + v11 + 392)
                  || v22 > *(_QWORD *)(v23 + v11 + 400) )
                {
                  break;
                }
              }
              v26 = 0;
              v25 = 1 << v17;
              v17 = -1;
              v16 &= ~v25;
              v18 = !_BitScanForward((unsigned int *)&v25, v16);
              if ( !v18 )
                v17 = v25;
              ++v20;
              if ( !v16 )
                goto LABEL_21;
            }
          }
          else
          {
LABEL_21:
            LOBYTE(v26) = 0;
            VidSchiCompleteFlipEntry((__int64)a1, (__int64)a2, a3, (__int64)a4, v6, v6, 9u, &v26);
          }
        }
      }
      v6 = ((_BYTE)v6 + 1) & 0x3F;
    }
  }
}
