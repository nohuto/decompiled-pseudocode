/*
 * XREFs of ?UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C002E080
 * Callers:
 *     VidMmUnreferenceDmaBuffer @ 0x1C002D610 (VidMmUnreferenceDmaBuffer.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C003ED78 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00F2F7C (VidSchiDiscardQueuePacket.c)
 *     VidSchUnreferenceDmaBuffer @ 0x1C00F5B5C (VidSchUnreferenceDmaBuffer.c)
 * Callees:
 *     ?RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z @ 0x1C002E00C (-RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z.c)
 *     VidSchUnreferenceDmaBuffer @ 0x1C00F5B5C (VidSchUnreferenceDmaBuffer.c)
 */

void __fastcall VIDMM_GLOBAL::UnreferenceDmaBuffer(
        VIDMM_GLOBAL *this,
        struct _VIDMM_DMA_BUFFER *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rsi
  __int64 i; // rdi
  struct VIDMM_ALLOC *v7; // rcx
  struct VIDMM_ALLOC *v8; // rcx

  if ( (_BYTE)a3 )
  {
    VidSchUnreferenceDmaBuffer(*(_QWORD *)(*((_QWORD *)this + 2) + 632LL));
  }
  else
  {
    v5 = *((_QWORD *)a2 + 13);
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 36); i = (unsigned int)(i + 1) )
    {
      v7 = *(struct VIDMM_ALLOC **)(v5 + 8 * i);
      if ( v7 )
        VIDMM_GLOBAL::RemoveDMAReferences(v7, 1);
    }
    v8 = (struct VIDMM_ALLOC *)*((_QWORD *)a2 + 8);
    if ( v8 )
      VIDMM_GLOBAL::RemoveDMAReferences(v8, 1);
    ++*((_DWORD *)a2 + 5);
  }
}
