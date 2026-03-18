/*
 * XREFs of ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C0017910
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0003BC0 (VidSchiProcessDpcVSyncCookie.c)
 * Callees:
 *     VidSchiExecuteMmIoFlip @ 0x1C000DBA0 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C000E394 (-VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VI.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0010190 (VidSchiCompleteFlipEntry.c)
 *     VidSchiVirtualizeFlipInterval @ 0x1C0017A90 (VidSchiVirtualizeFlipInterval.c)
 *     ?VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAKPEAPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C00356F4 (-VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUE.c)
 *     VidSchiRestartQueuedFlip @ 0x1C003A160 (VidSchiRestartQueuedFlip.c)
 */

void __fastcall VidSchiExecuteNextFlipQueueEntry(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        bool *a3,
        struct VIDSCH_FLIP_QUEUE *a4,
        struct VIDSCH_FLIP_QUEUE *a5)
{
  struct VIDSCH_FLIP_QUEUE *v5; // rdi
  unsigned int v7; // r13d
  __int64 v8; // rsi
  struct _VIDSCH_PRESENT_INFO *v9; // r15
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v10; // rbx
  bool v11; // zf
  unsigned int v12; // r14d
  struct _VIDSCH_PRESENT_INFO *v13; // r13
  char *v14; // r15
  int v15; // ecx
  __int64 v16; // rax
  _DWORD *v17; // r14
  int v18; // ecx
  __int64 v19; // r14
  struct VIDSCH_FLIP_QUEUE *v20; // r9
  int v21; // eax
  int v22; // eax
  unsigned int v23; // r14d
  _DWORD *v24; // r15
  int v25; // eax
  int v26; // eax
  unsigned int v27; // edx
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v28; // [rsp+40h] [rbp-18h] BYREF
  struct HwQueueStagingList *v29; // [rsp+A0h] [rbp+48h]
  struct _VIDSCH_PRESENT_INFO *v30; // [rsp+A8h] [rbp+50h]
  unsigned int v32; // [rsp+B8h] [rbp+60h] BYREF

  v32 = (unsigned int)a4;
  v29 = a1;
  v5 = a5;
  v7 = (unsigned int)a4;
  v8 = *((unsigned int *)a5 + 16);
  v9 = (struct _VIDSCH_PRESENT_INFO *)*((_QWORD *)a2 + (unsigned int)a4 + 400);
  v30 = v9;
  v10 = (struct VIDSCH_FLIP_QUEUE *)((char *)a5 + 1376 * v8 + 120);
  LODWORD(a5) = *((_DWORD *)a5 + 16);
  v11 = *((_DWORD *)v9 + 747) == 0;
  v28 = v10;
  if ( !v11 )
  {
    v12 = ((_BYTE)v8 + 1) & 0x3F;
    if ( v12 != (_DWORD)v8 )
    {
      v13 = v9;
      do
      {
        v14 = (char *)v5 + 1376 * v12;
        v15 = *((_DWORD *)v14 + 293);
        if ( (unsigned int)(v15 - 2) > 1 && v15 != 14
          || VidSchiCheckPendingFlipsForThisEntry(a2, v13, (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v14 + 120), a4) )
        {
          break;
        }
        if ( v14[1196] )
        {
          v10 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v14 + 120);
          LODWORD(a5) = v12;
          v28 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v14 + 120);
          LODWORD(v8) = v12;
        }
        v12 = ((_BYTE)v12 + 1) & 0x3F;
      }
      while ( v12 != *((_DWORD *)v5 + 16) );
      v7 = v32;
      v9 = v30;
      a1 = v29;
    }
    v16 = *((unsigned int *)v5 + 16);
    if ( (_DWORD)v8 == (_DWORD)v16 )
    {
      v17 = (_DWORD *)((char *)v10 + 1052);
      v18 = *((_DWORD *)v10 + 263);
      if ( (unsigned int)(v18 - 2) <= 1 || v18 == 14 )
      {
        if ( !*((_BYTE *)a2 + 59) )
        {
          v10 = v28;
          LODWORD(v8) = (_DWORD)a5;
          *((_QWORD *)v28 + 138) = MEMORY[0xFFFFF78000000320];
        }
        if ( !VidSchiCheckPendingFlipsForThisEntry(a2, v9, v10, a4) )
        {
          v21 = *((_DWORD *)v10 + 284);
          if ( (v21 & 0x2000) != 0 )
          {
            v19 = (__int64)v29;
            VidSchiSelectPresentAtFlip(v29, a2, v7, v5, (unsigned int *)&a5, &v28);
            LODWORD(v8) = (_DWORD)a5;
            v10 = v28;
LABEL_11:
            if ( *((_DWORD *)v10 + 263) == 4 )
              VidSchiExecuteMmIoFlip(v19, (__int64)a2, v7, (__int64)v5, v8, a3);
            return;
          }
          if ( !*((_DWORD *)v5 + 28) )
          {
            if ( (v21 & 0x80u) != 0 )
            {
              v22 = *((_DWORD *)v5 + 16);
              v23 = ((_BYTE)v22 + 1) & 0x3F;
              if ( v23 != v22 )
              {
                do
                {
                  v24 = (_DWORD *)((char *)v5 + 1376 * v23);
                  v25 = v24[293];
                  if ( v25 != 2 && v25 != 14 )
                    break;
                  if ( VidSchiCheckPendingFlipsForThisEntry(a2, v30, (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v24 + 30), v20) )
                    break;
                  v26 = v24[314];
                  v10 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v24 + 30);
                  LODWORD(v8) = v23;
                  if ( (v26 & 0x80u) == 0 )
                  {
                    if ( (v26 & 0x1000) != 0 )
                      v24[314] = v26 & 0xFFFFEFFF;
                    break;
                  }
                  v23 = ((_BYTE)v23 + 1) & 0x3F;
                }
                while ( v23 != *((_DWORD *)v5 + 16) );
                v9 = v30;
              }
              v27 = *((_DWORD *)v5 + 16);
              v19 = (__int64)v29;
              if ( (_DWORD)v8 != v27 )
              {
                LOBYTE(v32) = 0;
                VidSchiCompleteFlipEntry(
                  (__int64)v29,
                  (__int64)a2,
                  v7,
                  (__int64)v5,
                  v27,
                  ((_BYTE)v8 - 1) & 0x3F,
                  6u,
                  &v32);
              }
            }
            else
            {
              v19 = (__int64)v29;
            }
            VidSchiVirtualizeFlipInterval(v9, v10);
            *((_DWORD *)v10 + 263) = 4;
            goto LABEL_11;
          }
          *v17 = 3;
        }
      }
    }
    else
    {
      VidSchiRestartQueuedFlip(a1, *((_QWORD *)v5 + 172 * v16 + 145), v7, v5, (_DWORD)v8);
      *((_DWORD *)v10 + 263) = 4;
    }
    v19 = (__int64)v29;
    goto LABEL_11;
  }
}
