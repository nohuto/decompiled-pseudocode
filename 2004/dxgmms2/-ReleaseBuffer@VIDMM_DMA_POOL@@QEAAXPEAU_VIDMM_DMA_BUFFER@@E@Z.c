/*
 * XREFs of ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0013A18
 * Callers:
 *     VidMmReleaseDmaBuffer @ 0x1C0022BD0 (VidMmReleaseDmaBuffer.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0036608 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0067E30 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchSubmitPagingCommand @ 0x1C00684BC (VidSchSubmitPagingCommand.c)
 *     ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C0095B24 (-InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00AEABC (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00D0EEC (VidSchiDiscardQueuePacket.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_DMA_POOL::ReleaseBuffer(VIDMM_DMA_POOL *this, struct _VIDMM_DMA_BUFFER *a2, char a3)
{
  bool v6; // zf
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax

  if ( g_IsInternalReleaseOrDbg )
  {
    v7 = WdLogNewEntry5_WdTrace();
    *(_QWORD *)(v7 + 24) = a2;
    *(_QWORD *)(v7 + 32) = *((_QWORD *)this + 2);
  }
  if ( a3 )
  {
    v6 = _InterlockedExchangeAdd((volatile signed __int32 *)a2 + 8, 0xFFFFFFFF) == 1;
  }
  else
  {
    v8 = *((_DWORD *)a2 + 8);
    v6 = v8 == 0;
    if ( v8 > 0 )
    {
      v9 = v8 - 1;
      *((_DWORD *)a2 + 8) = v9;
      v6 = v9 == 0;
    }
  }
  if ( v6 )
    *((_BYTE *)a2 + 24) = 0;
}
