/*
 * XREFs of ?VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAKPEAPEAUVIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C002BBD0
 * Callers:
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C000EFA0 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDS.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x1C0002C90 (VidSchiCompleteFlipEntry.c)
 */

void __fastcall VidSchiSelectPresentAtFlip(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        unsigned int a3,
        struct VIDSCH_FLIP_QUEUE *a4,
        unsigned int *a5,
        struct VIDSCH_FLIP_QUEUE_ENTRY **a6)
{
  struct HwQueueStagingList *v9; // r14
  __int64 v10; // rdi
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rdx
  unsigned int v13; // esi
  struct VIDSCH_FLIP_QUEUE_ENTRY **v14; // r15
  unsigned int *v15; // r12
  unsigned __int64 v16; // r11
  unsigned int v17; // edx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r14
  char *v20; // r10
  unsigned int i; // r8d
  int v22; // r9d
  int v23; // r8d
  int v24; // r8d
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // r8
  unsigned int v27; // r8d
  char v28; // r14
  char *v29; // r11
  int v30; // r10d
  unsigned int j; // edx
  int v32; // edx
  int v33; // edx
  unsigned int v34; // eax
  char v36; // [rsp+90h] [rbp+18h] BYREF

  v9 = a1;
  v10 = *((_QWORD *)a2 + a3 + 388);
  v11 = 10000LL * *(unsigned int *)(v10 + 70580);
  if ( is_mul_ok(v11, *(_QWORD *)(v10 + 33224)) )
    v12 = v11 * *(_QWORD *)(v10 + 33224) / 0x989680;
  else
    v12 = *(_QWORD *)(v10 + 33224) * (v11 / 0x989680) + *(_QWORD *)(v10 + 33224) * (v11 % 0x989680) / 0x989680;
  v13 = *((_DWORD *)a4 + 10);
  v14 = a6;
  v15 = a5;
  v16 = v12 + *(_QWORD *)(v10 + 33200);
  v17 = ((_BYTE)v13 + 1) & 0x3F;
  v18 = *((_QWORD *)*a6 + 162);
  if ( v17 != v13 )
  {
    v19 = v16 - v18;
    if ( v16 < v18 )
      v19 = v18 - v16;
    while ( 1 )
    {
      v20 = (char *)a4 + 1344 * v17 + 88;
      if ( *((_DWORD *)v20 + 263) != 2 )
        break;
      if ( !*((_BYTE *)a2 + 148) )
        goto LABEL_20;
      for ( i = *((_DWORD *)a4 + 12); i != (((unsigned __int8)*((_DWORD *)a4 + 11) - 1) & 0x3F); i = ((_BYTE)i - 1) & 0x3F )
      {
        if ( *((_DWORD *)a4 + 336 * i + 285) == 14 )
          goto LABEL_52;
      }
      v22 = *((_DWORD *)v20 + 284);
      if ( (v22 & 0x10) != 0 )
        v23 = ((unsigned __int16)**((_DWORD **)v20 + 147) | (unsigned __int16)(**((_DWORD **)v20 + 147) >> 10)) & 0x3FF;
      else
        v23 = (1 << *((_DWORD *)a2 + 36)) - 1;
      if ( (v23 & *(_DWORD *)(v10 + 2356)) != 0 )
        break;
      if ( *((_DWORD *)a2 + 38) <= 1u || *(_DWORD *)(v10 + 4) == 3 || (*((_DWORD *)v20 + 284) & 0x180) != 0x80 )
      {
LABEL_20:
        v22 = *((_DWORD *)v20 + 284);
        if ( (v22 & 0x10) != 0 )
          v24 = ((unsigned __int16)**((_DWORD **)v20 + 147) | (unsigned __int16)(**((_DWORD **)v20 + 147) >> 10)) & 0x3FF;
        else
          v24 = (1 << *((_DWORD *)a2 + 36)) - 1;
        if ( (v24 & *(_DWORD *)(v10 + 2352)) != 0 )
          break;
      }
      if ( (v22 & 0x2080) == 0 )
        break;
      if ( (v22 & 0x80u) != 0 )
      {
        *v14 = (struct VIDSCH_FLIP_QUEUE_ENTRY *)v20;
        v27 = ((_BYTE)v17 + 1) & 0x3F;
        *v15 = v17;
        if ( v27 != v13 )
        {
          v28 = *((_BYTE *)a2 + 148);
          while ( 1 )
          {
            v29 = (char *)a4 + 1344 * v27 + 88;
            v30 = *((_DWORD *)v29 + 284);
            if ( (v30 & 0x80u) == 0 || *((_DWORD *)v29 + 263) != 2 )
              break;
            if ( !v28 )
              goto LABEL_47;
            for ( j = *((_DWORD *)a4 + 12);
                  j != (((unsigned __int8)*((_DWORD *)a4 + 11) - 1) & 0x3F);
                  j = ((_BYTE)j - 1) & 0x3F )
            {
              if ( *((_DWORD *)a4 + 336 * j + 285) == 14 )
                goto LABEL_52;
            }
            if ( (v30 & 0x10) != 0 )
              v32 = ((unsigned __int16)**((_DWORD **)v29 + 147) | (unsigned __int16)(**((_DWORD **)v29 + 147) >> 10)) & 0x3FF;
            else
              v32 = (1 << *((_DWORD *)a2 + 36)) - 1;
            if ( (v32 & *(_DWORD *)(v10 + 2356)) != 0 )
              goto LABEL_52;
            if ( *((_DWORD *)a2 + 38) <= 1u || *(_DWORD *)(v10 + 4) == 3 || (*((_DWORD *)v29 + 284) & 0x180) != 0x80 )
            {
LABEL_47:
              if ( (v30 & 0x10) != 0 )
                v33 = ((unsigned __int16)**((_DWORD **)v29 + 147) | (unsigned __int16)(**((_DWORD **)v29 + 147) >> 10)) & 0x3FF;
              else
                v33 = (1 << *((_DWORD *)a2 + 36)) - 1;
              if ( (v33 & *(_DWORD *)(v10 + 2352)) != 0 )
                goto LABEL_52;
            }
            *v15 = v27;
            v27 = ((_BYTE)v27 + 1) & 0x3F;
            *v14 = (struct VIDSCH_FLIP_QUEUE_ENTRY *)v29;
            if ( v27 == v13 )
              goto LABEL_52;
          }
        }
        break;
      }
      v25 = *((_QWORD *)v20 + 162);
      v26 = v16 - v25;
      if ( v16 < v25 )
        v26 = *((_QWORD *)v20 + 162) - v16;
      if ( v26 < v19 )
      {
        *v15 = v17;
        v19 = v26;
        *v14 = (struct VIDSCH_FLIP_QUEUE_ENTRY *)v20;
        v17 = ((_BYTE)v17 + 1) & 0x3F;
        if ( v17 != v13 )
          continue;
      }
      break;
    }
LABEL_52:
    v9 = a1;
  }
  v34 = *v15;
  if ( *v15 != v13 )
  {
    v36 = 0;
    VidSchiCompleteFlipEntry((__int64)v9, (__int64)a2, a3, (__int64)a4, v13, ((_BYTE)v34 - 1) & 0x3F, 6, &v36);
  }
  *((_DWORD *)*v14 + 263) = 4;
}
