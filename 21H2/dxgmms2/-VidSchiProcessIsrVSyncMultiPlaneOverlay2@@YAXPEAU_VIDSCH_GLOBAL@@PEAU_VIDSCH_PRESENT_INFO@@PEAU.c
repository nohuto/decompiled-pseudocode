/*
 * XREFs of ?VidSchiProcessIsrVSyncMultiPlaneOverlay2@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_DXGKARGCB_NOTIFY_INTERRUPT_DATA@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C0017830
 * Callers:
 *     VidSchiProcessIsrVSync @ 0x1C000D890 (VidSchiProcessIsrVSync.c)
 * Callees:
 *     memset @ 0x1C001DC40 (memset.c)
 */

void __fastcall VidSchiProcessIsrVSyncMultiPlaneOverlay2(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_PRESENT_INFO *a2,
        struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *a3,
        struct _VIDSCH_VSYNC_COOKIE *a4)
{
  __int64 EngineOrdinal; // rcx
  __int64 v8; // r9
  DXGK_MULTIPLANE_OVERLAY_VSYNC_INFO *pMultiPlaneOverlayVsyncInfo; // r8
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx

  EngineOrdinal = a3->DmaCompleted.EngineOrdinal;
  if ( (unsigned int)EngineOrdinal > *((_DWORD *)a1 + 38) )
  {
    v11 = WdLogSingleEntry5(0LL, 281LL, 14LL, a1, EngineOrdinal, *((unsigned int *)a1 + 38));
    __debugbreak();
    goto LABEL_7;
  }
  *((_QWORD *)a2 + 5511) = a3->MiracastEncodeChunkCompleted.pPrivateDriverData;
  *((_BYTE *)a4 + 124) ^= (*((_BYTE *)a4 + 124) ^ (a3->Flags.Value >> 1)) & 1;
  memset((char *)a4 + 128, 0, 0xA0uLL);
  v8 = 0LL;
  if ( a3->DmaCompleted.EngineOrdinal )
  {
    while ( 1 )
    {
      pMultiPlaneOverlayVsyncInfo = a3->CrtcVsyncWithMultiPlaneOverlay.pMultiPlaneOverlayVsyncInfo;
      v10 = 3 * v8;
      v11 = *((unsigned int *)a1 + 38);
      v12 = *(&pMultiPlaneOverlayVsyncInfo->LayerIndex + 6 * v8);
      if ( (unsigned int)v12 >= (unsigned int)v11 )
        break;
      v8 = (unsigned int)(v8 + 1);
      *((_QWORD *)a4 + 2 * v12 + 16) = *(&pMultiPlaneOverlayVsyncInfo->PhysicalAddress.QuadPart + v10);
      *((_DWORD *)a4 + 4 * *(&pMultiPlaneOverlayVsyncInfo->LayerIndex + 2 * v10) + 34) = *((_DWORD *)&pMultiPlaneOverlayVsyncInfo->PlaneAttributes.Flags.0
                                                                                         + 2 * v10);
      if ( (unsigned int)v8 >= a3->DmaCompleted.EngineOrdinal )
        return;
    }
LABEL_7:
    WdLogSingleEntry5(0LL, 281LL, 14LL, a1, v12, v11);
    __debugbreak();
    JUMPOUT(0x1C002A996LL);
  }
}
