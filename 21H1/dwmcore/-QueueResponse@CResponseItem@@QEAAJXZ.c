/*
 * XREFs of ?QueueResponse@CResponseItem@@QEAAJXZ @ 0x18008C6F8
 * Callers:
 *     ?ReleaseResponseRef@CResponseItem@@UEAAXXZ @ 0x18008C6D0 (-ReleaseResponseRef@CResponseItem@@UEAAXXZ.c)
 *     ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x18017D30C (-ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ.c)
 *     ?ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS@@@Z @ 0x18018F6F8 (-ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_MAGNIFIERREN.c)
 * Callees:
 *     ?QueuePostPresentResponse@CLegacySurfaceManager@@QEAAJPEAVCResponseItem@@@Z @ 0x18008C748 (-QueuePostPresentResponse@CLegacySurfaceManager@@QEAAJPEAVCResponseItem@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CResponseItem::QueueResponse(CResponseItem *this)
{
  unsigned int v1; // edi
  int v3; // eax

  v1 = 0;
  if ( !*((_BYTE *)this + 32) && !*((_BYTE *)this + 33) )
  {
    v3 = CLegacySurfaceManager::QueuePostPresentResponse((CLegacySurfaceManager *)(*((_QWORD *)this + 3) + 96LL), this);
    v1 = v3;
    if ( v3 < 0 )
      (*(void (__fastcall **)(CResponseItem *, _QWORD))(*(_QWORD *)this + 48LL))(this, (unsigned int)v3);
    else
      *((_BYTE *)this + 32) = 1;
  }
  return v1;
}
