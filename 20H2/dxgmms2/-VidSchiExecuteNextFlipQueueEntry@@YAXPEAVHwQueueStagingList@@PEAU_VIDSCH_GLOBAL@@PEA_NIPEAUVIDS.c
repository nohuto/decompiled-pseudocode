/*
 * XREFs of ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C000EFA0
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0004640 (VidSchiProcessDpcVSyncCookie.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x1C0002C90 (VidSchiCompleteFlipEntry.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000D8D0 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAKPEAPEAUVIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C002BBD0 (-VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUE.c)
 *     VidSchiRestartQueuedFlip @ 0x1C00312DC (VidSchiRestartQueuedFlip.c)
 */

void __fastcall VidSchiExecuteNextFlipQueueEntry(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        bool *a3,
        unsigned int a4,
        struct VIDSCH_FLIP_QUEUE *a5)
{
  struct VIDSCH_FLIP_QUEUE *v5; // rdi
  struct HwQueueStagingList *v8; // r11
  __int64 v9; // r10
  char *v10; // rsi
  _DWORD *v11; // r13
  unsigned int v12; // ebx
  struct VIDSCH_FLIP_QUEUE_ENTRY *v13; // rsi
  bool v14; // zf
  unsigned int v15; // r8d
  __int64 v16; // r11
  unsigned int i; // edx
  int v18; // edx
  int v19; // eax
  int v20; // edx
  _DWORD *v21; // r9
  char v22; // r15
  unsigned int j; // edx
  int v24; // r8d
  int v25; // edx
  int v26; // edx
  struct HwQueueStagingList *v27; // r15
  int v28; // r11d
  char k; // r9
  unsigned int v30; // r9d
  char *v31; // r10
  unsigned int m; // edx
  int v33; // edx
  int v34; // eax
  int v35; // r8d
  unsigned int v36; // ecx
  struct VIDSCH_FLIP_QUEUE_ENTRY *v38; // [rsp+98h] [rbp+50h] BYREF
  _BYTE *v39; // [rsp+A0h] [rbp+58h]
  char v40; // [rsp+A8h] [rbp+60h] BYREF

  v39 = a3;
  v5 = a5;
  v8 = a1;
  v10 = (char *)a5 + 88;
  v11 = (_DWORD *)*((_QWORD *)a2 + a4 + 388);
  v12 = *((_DWORD *)a5 + 10);
  LODWORD(a5) = v12;
  v9 = v12;
  v13 = (struct VIDSCH_FLIP_QUEUE_ENTRY *)&v10[1344 * v12];
  v14 = v11[585] == 0;
  v38 = v13;
  if ( !v14 )
  {
    v15 = ((_BYTE)v12 + 1) & 0x3F;
    if ( v15 != v12 )
    {
      do
      {
        v16 = (__int64)v5 + 1344 * v15 + 88;
        if ( (unsigned int)(*(_DWORD *)(v16 + 1052) - 2) > 1 )
          break;
        if ( !*((_BYTE *)a2 + 148) )
          goto LABEL_17;
        for ( i = *((_DWORD *)v5 + 12); i != (((unsigned __int8)*((_DWORD *)v5 + 11) - 1) & 0x3F); i = ((_BYTE)i - 1) & 0x3F )
        {
          if ( *((_DWORD *)v5 + 336 * i + 285) == 14 )
            goto LABEL_24;
        }
        v18 = *(_DWORD *)(v16 + 1136);
        if ( (v18 & 0x10) != 0 )
          v19 = ((unsigned __int16)**(_DWORD **)(v16 + 1176) | (unsigned __int16)(**(_DWORD **)(v16 + 1176) >> 10)) & 0x3FF;
        else
          v19 = (1 << *((_DWORD *)a2 + 36)) - 1;
        if ( (v19 & v11[589]) != 0 )
          break;
        if ( *((_DWORD *)a2 + 38) <= 1u || v11[1] == 3 || (v18 & 0x100) != 0 || (v18 & 0x80u) == 0 )
        {
LABEL_17:
          if ( (*(_DWORD *)(v16 + 1136) & 0x10) != 0 )
            v20 = ((unsigned __int16)**(_DWORD **)(v16 + 1176) | (unsigned __int16)(**(_DWORD **)(v16 + 1176) >> 10)) & 0x3FF;
          else
            v20 = (1 << *((_DWORD *)a2 + 36)) - 1;
          if ( (v20 & v11[588]) != 0 )
            break;
        }
        if ( *(_BYTE *)(v16 + 1076) )
        {
          v12 = v15;
          v38 = (struct VIDSCH_FLIP_QUEUE *)((char *)v5 + 1344 * v15 + 88);
          LODWORD(a5) = v15;
          v13 = v38;
        }
        v15 = ((_BYTE)v15 + 1) & 0x3F;
      }
      while ( v15 != (_DWORD)v9 );
LABEL_24:
      v8 = a1;
    }
    if ( v12 != (_DWORD)v9 )
    {
      VidSchiRestartQueuedFlip((_DWORD)v8, *((_QWORD *)v5 + 168 * v9 + 141), a4, (_DWORD)v5, v12);
      *((_DWORD *)v13 + 263) = 4;
      goto LABEL_48;
    }
    v21 = (_DWORD *)((char *)v13 + 1052);
    if ( (unsigned int)(*((_DWORD *)v13 + 263) - 2) > 1 )
      goto LABEL_48;
    v13 = v38;
    *((_QWORD *)v38 + 138) = MEMORY[0xFFFFF78000000320];
    v22 = *((_BYTE *)a2 + 148);
    if ( v22 )
    {
      for ( j = *((_DWORD *)v5 + 12); j != (((unsigned __int8)*((_DWORD *)v5 + 11) - 1) & 0x3F); j = ((_BYTE)j - 1) & 0x3F )
      {
        if ( *((_DWORD *)v5 + 336 * j + 285) == 14 )
          goto LABEL_47;
      }
      v24 = *((_DWORD *)v13 + 284);
      if ( (v24 & 0x10) != 0 )
        v25 = ((unsigned __int16)**((_DWORD **)v13 + 147) | (unsigned __int16)(**((_DWORD **)v13 + 147) >> 10)) & 0x3FF;
      else
        v25 = (1 << *((_DWORD *)a2 + 36)) - 1;
      if ( (v25 & v11[589]) != 0 )
        goto LABEL_47;
      if ( *((_DWORD *)a2 + 38) > 1u && v11[1] != 3 && (v24 & 0x100) == 0 && (v24 & 0x80u) != 0 )
        goto LABEL_45;
    }
    v24 = *((_DWORD *)v13 + 284);
    v26 = (v24 & 0x10) != 0
        ? ((unsigned __int16)**((_DWORD **)v13 + 147) | (unsigned __int16)(**((_DWORD **)v13 + 147) >> 10)) & 0x3FF
        : (1 << *((_DWORD *)a2 + 36)) - 1;
    if ( (v26 & v11[588]) == 0 )
    {
LABEL_45:
      if ( (v24 & 0x2000) == 0 )
      {
        v12 = (unsigned int)a5;
        if ( !*((_DWORD *)v5 + 20) )
        {
          if ( (v24 & 0x80u) == 0 )
          {
            v27 = a1;
          }
          else
          {
            v28 = *((_DWORD *)v5 + 10);
            for ( k = v28 + 1; ; k = v30 + 1 )
            {
              v30 = k & 0x3F;
              if ( v30 == v28 )
                break;
              v31 = (char *)v5 + 1344 * v30;
              if ( *((_DWORD *)v31 + 285) != 2 )
                break;
              if ( !v22 )
                goto LABEL_70;
              for ( m = *((_DWORD *)v5 + 12);
                    m != (((unsigned __int8)*((_DWORD *)v5 + 11) - 1) & 0x3F);
                    m = ((_BYTE)m - 1) & 0x3F )
              {
                if ( *((_DWORD *)v5 + 336 * m + 285) == 14 )
                  goto LABEL_78;
              }
              v33 = *((_DWORD *)v31 + 306);
              if ( (v33 & 0x10) != 0 )
                v34 = ((unsigned __int16)**((_DWORD **)v31 + 158) | (unsigned __int16)(**((_DWORD **)v31 + 158) >> 10)) & 0x3FF;
              else
                v34 = (1 << *((_DWORD *)a2 + 36)) - 1;
              if ( (v34 & v11[589]) != 0 )
                break;
              if ( *((_DWORD *)a2 + 38) <= 1u || v11[1] == 3 || (v33 & 0x100) != 0 || (v33 & 0x80u) == 0 )
              {
LABEL_70:
                v33 = *((_DWORD *)v31 + 306);
                if ( (v33 & 0x10) != 0 )
                  v35 = ((unsigned __int16)**((_DWORD **)v31 + 158) | (unsigned __int16)(**((_DWORD **)v31 + 158) >> 10)) & 0x3FF;
                else
                  v35 = (1 << *((_DWORD *)a2 + 36)) - 1;
                if ( (v35 & v11[588]) != 0 )
                  break;
              }
              v13 = (struct VIDSCH_FLIP_QUEUE_ENTRY *)(v31 + 88);
              v12 = v30;
              if ( (v33 & 0x80u) == 0 )
              {
                if ( (v33 & 0x1000) != 0 )
                  *((_DWORD *)v31 + 306) = v33 & 0xFFFFEFFF;
                break;
              }
            }
LABEL_78:
            v36 = *((_DWORD *)v5 + 10);
            v27 = a1;
            if ( v12 != v36 )
            {
              v40 = 0;
              VidSchiCompleteFlipEntry((__int64)a1, (__int64)a2, a4, (__int64)v5, v36, ((_BYTE)v12 - 1) & 0x3F, 6, &v40);
            }
          }
          *((_DWORD *)v13 + 263) = 4;
          goto LABEL_49;
        }
        *v21 = 3;
LABEL_48:
        v27 = a1;
LABEL_49:
        if ( *((_DWORD *)v13 + 263) == 4 )
          VidSchiExecuteMmIoFlip(v27, (__int64)a2, a4, (__int64)v5, v12, v39);
        return;
      }
      VidSchiSelectPresentAtFlip(v8, a2, a4, v5, (unsigned int *)&a5, &v38);
      v13 = v38;
    }
LABEL_47:
    v12 = (unsigned int)a5;
    goto LABEL_48;
  }
}
