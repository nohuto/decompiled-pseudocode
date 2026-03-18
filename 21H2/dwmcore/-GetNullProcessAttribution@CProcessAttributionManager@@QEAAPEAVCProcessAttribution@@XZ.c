/*
 * XREFs of ?GetNullProcessAttribution@CProcessAttributionManager@@QEAAPEAVCProcessAttribution@@XZ @ 0x180080C30
 * Callers:
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x18007E114 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 * Callees:
 *     ?CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEAPEAVCProcessAttribution@@@Z @ 0x180064BA8 (-CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEA.c)
 *     _Init_thread_footer @ 0x180101100 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180101168 (_Init_thread_header.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

struct CProcessAttribution *__fastcall CProcessAttributionManager::GetNullProcessAttribution(
        CProcessAttributionManager *this)
{
  int v3; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]
  struct CProcessAttribution *v5; // [rsp+48h] [rbp+10h] BYREF

  if ( dword_1803D7418 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1803D7418);
    if ( dword_1803D7418 == -1 )
    {
      v3 = CProcessAttributionManager::CreateProcessAttribution(
             this,
             -1,
             (const struct CProcessAttributionManager::ProcessAttributionRecord *)&unk_1803D3A80,
             0,
             &v5);
      if ( v3 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v3, retaddr);
      qword_1803D3598 = (__int64)v5;
      Init_thread_footer(&dword_1803D7418);
    }
  }
  return (struct CProcessAttribution *)qword_1803D3598;
}
