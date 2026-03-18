/*
 * XREFs of ?InitializeQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C020F428
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C024EBD8 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 * Callees:
 *     memset @ 0x1C0026840 (memset.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C014D904 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 */

void __fastcall DISPLAY_SOURCE::InitializeQueryStateUnsafe(DISPLAY_SOURCE *this)
{
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v3; // rax
  unsigned int v4; // eax
  __int64 i; // rdi
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 536LL) != CurrentThread )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, CurrentThread);
    *(_QWORD *)(v3 + 24) = 9408LL;
    WdLogEvent5_WdAssertion(v3);
  }
  v4 = *((_DWORD *)this + 934);
  for ( i = 0LL; (unsigned int)i < v4; i = (unsigned int)(i + 1) )
  {
    LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(this, i);
    if ( LatestPlaneConfigInternal && (*((_DWORD *)LatestPlaneConfigInternal + 2) & 1) != 0 )
    {
      *((_BYTE *)this + i + 2880) = 1;
      memset((char *)this + 80 * i + 2896, 0, 0x50uLL);
    }
    else
    {
      *((_BYTE *)this + i + 2880) = 0;
    }
    v4 = *((_DWORD *)this + 934);
  }
  *((_DWORD *)this + 935) = v4;
  *((_BYTE *)this + 3696) = 1;
  *(_OWORD *)((char *)this + 3700) = 0LL;
  *(_OWORD *)((char *)this + 3716) = 0LL;
  *((_DWORD *)this + 933) = 0;
}
