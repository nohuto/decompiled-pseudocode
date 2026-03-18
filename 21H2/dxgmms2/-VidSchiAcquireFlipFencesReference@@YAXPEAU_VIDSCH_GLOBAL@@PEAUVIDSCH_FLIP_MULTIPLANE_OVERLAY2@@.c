/*
 * XREFs of ?VidSchiAcquireFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1C0005A90
 * Callers:
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0040864 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchSubmitCommandToHwQueue @ 0x1C0041CD0 (VidSchSubmitCommandToHwQueue.c)
 *     VidSchSubmitCommand @ 0x1C0096A70 (VidSchSubmitCommand.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiAcquireFlipFencesReference(
        struct _VIDSCH_GLOBAL *a1,
        struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r9d
  bool v5; // zf
  int v6; // ecx
  unsigned int v7; // r8d
  unsigned int v8; // r10d
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // ecx
  char v14; // dl
  int v15; // ecx

  v2 = 0;
  v3 = *(_DWORD *)a2 & 0x3FF;
  if ( *((_BYTE *)a1 + 156) )
    v2 = (*(_DWORD *)a2 >> 10) & 0x3FF;
  v5 = !_BitScanForward((unsigned int *)&v6, v3);
  if ( v5 )
    LOBYTE(v6) = -1;
  v7 = (char)v6;
  v5 = !_BitScanForward((unsigned int *)&v6, v2);
  if ( v5 )
    LOBYTE(v6) = -1;
  v8 = (char)v6;
  while ( v3 || v2 )
  {
    v9 = v8;
    if ( v7 < v8 )
      v9 = v7;
    v10 = v9 * ((8 * *((_DWORD *)a2 + 2) + 231) & 0xFFFFFFF8);
    v11 = *(_QWORD *)((char *)a2 + v10 + 208);
    if ( v11 )
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 36));
    v12 = *(_QWORD *)((char *)a2 + v10 + 224);
    if ( v12 )
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 36));
    if ( v7 >= v8 )
    {
      v2 &= ~(1 << v8);
      v14 = -1;
      v5 = !_BitScanForward((unsigned int *)&v15, v2);
      if ( !v5 )
        v14 = v15;
      v8 = v14;
    }
    else
    {
      v3 &= ~(1 << v7);
      v5 = !_BitScanForward((unsigned int *)&v13, v3);
      if ( v5 )
        LOBYTE(v13) = -1;
      v7 = (char)v13;
    }
  }
}
