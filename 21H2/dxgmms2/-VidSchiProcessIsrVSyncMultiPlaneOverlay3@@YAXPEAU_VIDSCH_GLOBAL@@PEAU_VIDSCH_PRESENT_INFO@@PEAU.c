/*
 * XREFs of ?VidSchiProcessIsrVSyncMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_DXGKARGCB_NOTIFY_INTERRUPT_DATA@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C0035424
 * Callers:
 *     VidSchiProcessIsrVSync @ 0x1C000D890 (VidSchiProcessIsrVSync.c)
 * Callees:
 *     memset @ 0x1C001DC40 (memset.c)
 */

void __fastcall VidSchiProcessIsrVSyncMultiPlaneOverlay3(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_PRESENT_INFO *a2,
        struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *a3,
        struct _VIDSCH_VSYNC_COOKIE *a4)
{
  __int64 EngineOrdinal; // rbx
  __int64 v6; // rax
  unsigned int v9; // r8d
  __int64 v10; // rcx
  _DWORD *v11; // rdx
  DXGK_MULTIPLANE_OVERLAY_VSYNC_INFO *pMultiPlaneOverlayVsyncInfo; // rax
  __int64 v13; // r9
  int v14; // eax

  EngineOrdinal = a3->DmaCompleted.EngineOrdinal;
  v6 = *((unsigned int *)a1 + 38);
  if ( (unsigned int)EngineOrdinal > (unsigned int)v6 )
  {
    WdLogSingleEntry5(0LL, 281LL, 14LL, a1, EngineOrdinal, v6);
    __debugbreak();
  }
  *((_QWORD *)a2 + 5511) = a3->MiracastEncodeChunkCompleted.pPrivateDriverData;
  *((_BYTE *)a4 + 124) ^= (*((_BYTE *)a4 + 124) ^ (a3->Flags.Value >> 1)) & 1;
  memset((char *)a4 + 132, 0, 0x50uLL);
  v9 = 0;
  *((_DWORD *)a4 + 32) = EngineOrdinal;
  if ( (_DWORD)EngineOrdinal )
  {
    v10 = 0LL;
    v11 = (_DWORD *)((char *)a4 + 172);
    do
    {
      pMultiPlaneOverlayVsyncInfo = a3->CrtcVsyncWithMultiPlaneOverlay.pMultiPlaneOverlayVsyncInfo;
      v13 = *(unsigned int *)((char *)&pMultiPlaneOverlayVsyncInfo->LayerIndex + v10);
      if ( (unsigned int)v13 >= *((_DWORD *)a1 + 38) )
      {
        WdLogSingleEntry5(0LL, 281LL, 14LL, a1, v13, *((unsigned int *)a1 + 38));
        __debugbreak();
        JUMPOUT(0x1C003551FLL);
      }
      *(v11 - 10) = v13;
      ++v9;
      v14 = *(BOOL *)((char *)&pMultiPlaneOverlayVsyncInfo->Enabled + v10);
      v10 += 8LL;
      *v11++ = v14;
    }
    while ( v9 < (unsigned int)EngineOrdinal );
  }
}
