/*
 * XREFs of ?VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C000E394
 * Callers:
 *     VidSchUnwaitFlipQueue @ 0x1C000BDB0 (VidSchUnwaitFlipQueue.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000DBA0 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C0015200 (VidSchiSubmitMmIoFlipCommand.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C0017910 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDS.c)
 *     ?VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAKPEAPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C00356F4 (-VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUE.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0040864 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C001B448 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 */

char __fastcall VidSchiCheckPendingFlipsForThisEntry(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_PRESENT_INFO *a2,
        struct _VIDSCH_FLIP_QUEUE_ENTRY *a3,
        struct VIDSCH_FLIP_QUEUE *a4)
{
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v4; // rax
  struct _VIDSCH_PRESENT_INFO *v6; // r11
  struct _VIDSCH_GLOBAL *v7; // r9
  unsigned int *v8; // rsi
  int v9; // r8d
  int v10; // edx
  char v11; // r14
  unsigned int v13; // edi
  unsigned int v14; // ecx
  char *v15; // rax
  unsigned int v16; // r8d
  unsigned int v17; // r10d
  unsigned int v18; // r8d
  char v19; // dl
  bool v20; // zf
  int v21; // eax
  unsigned int v22; // ecx
  int v23; // eax
  __int64 v24; // rax
  _QWORD v25[2]; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v26; // [rsp+30h] [rbp-20h]
  unsigned int v27; // [rsp+34h] [rbp-1Ch]
  int v28; // [rsp+38h] [rbp-18h]
  unsigned int v29; // [rsp+3Ch] [rbp-14h]
  unsigned int v30; // [rsp+40h] [rbp-10h]

  v4 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)*((_QWORD *)a2 + 14);
  v6 = a2;
  v7 = a1;
  if ( v4 && v4 != a3 )
    return 1;
  v8 = (unsigned int *)*((_QWORD *)a3 + 147);
  v9 = *((_DWORD *)a3 + 284);
  if ( (v9 & 0x10) != 0 )
    v10 = ((unsigned __int16)*v8 | (unsigned __int16)(*v8 >> 10)) & 0x3FF;
  else
    v10 = (1 << *((_DWORD *)a1 + 38)) - 1;
  v11 = *((_BYTE *)a1 + 156);
  if ( v11 )
  {
    if ( (v10 & *((_DWORD *)v6 + 751)) != 0 )
      return 1;
    if ( !*((_BYTE *)a1 + 59) && *((_DWORD *)a1 + 40) > 1u && *((_DWORD *)v6 + 1) != 3 && (v9 & 0x180) == 0x80 )
      return 0;
  }
  if ( (v9 & 0x20000) == 0 || !*((_DWORD *)v6 + 750) )
  {
    if ( (v9 & 0x40000) != 0 )
    {
      v13 = *((_DWORD *)a1 + 10);
      v14 = 0;
      if ( v13 )
      {
        v15 = (char *)v7 + 3200;
        while ( !*(_QWORD *)v15 || !*(_DWORD *)(*(_QWORD *)v15 + 3000LL) )
        {
          ++v14;
          v15 += 8;
          if ( v14 >= v13 )
            goto LABEL_7;
        }
        return 1;
      }
    }
LABEL_7:
    if ( (v10 & *((_DWORD *)v6 + 750)) == 0 )
      return 0;
    if ( *((_BYTE *)v7 + 59)
      && (v9 & 0x20) != 0
      && (v9 & 0x1000) == 0
      && !*((_BYTE *)a3 + 1076)
      && *((_DWORD *)a3 + 263) != 14 )
    {
      v16 = *v8;
      v17 = *v8 & 0x3FF;
      v25[0] = v7;
      v25[1] = v8;
      v26 = v17;
      if ( v11 )
        v18 = (v16 >> 10) & 0x3FF;
      else
        v18 = 0;
      v28 = 0;
      v19 = -1;
      v20 = !_BitScanForward((unsigned int *)&v21, v17);
      LOBYTE(v22) = -1;
      v27 = v18;
      if ( !v20 )
        LOBYTE(v22) = v21;
      v20 = !_BitScanForward((unsigned int *)&v23, v18);
      v22 = (char)v22;
      v29 = (char)v22;
      if ( !v20 )
        v19 = v23;
      v24 = (unsigned int)v19;
      v30 = v19;
      while ( v17 || v18 )
      {
        if ( v22 < (unsigned int)v24 )
          v24 = v22;
        if ( *((_DWORD *)v6 + 70 * v24 + 48) >= *((_DWORD *)v7 + 15)
          || (*((_DWORD *)a3 + 284) & 0x20) == 0 && *((_DWORD *)v6 + 70 * v24 + 49) )
        {
          return 1;
        }
        VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++(v25);
        v24 = v30;
        v22 = v29;
        v18 = v27;
        v17 = v26;
      }
      return 0;
    }
  }
  return 1;
}
