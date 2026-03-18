/*
 * XREFs of ?ProcessCaptureBits@CDesktopTree@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_DESKTOPTREE_CAPTUREBITS@@@Z @ 0x1801F8718
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x18008C3F4 (--0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MA.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z @ 0x18017D128 (-AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z.c)
 *     ??2CaptureBitsResponse@@SAPEAX_K@Z @ 0x180191684 (--2CaptureBitsResponse@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CDesktopTree::ProcessCaptureBits(
        CDesktopTree *this,
        struct CChannelContext *a2,
        const struct tagMILCMD_DESKTOPTREE_CAPTUREBITS *a3)
{
  CaptureBitsResponse *v6; // rax
  __int64 v7; // rcx
  struct CaptureBitsResponse *v8; // rdi
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  struct WICRect v13; // [rsp+40h] [rbp-18h] BYREF

  v13 = *(struct WICRect *)((char *)a3 + 12);
  v6 = (CaptureBitsResponse *)CaptureBitsResponse::operator new();
  if ( v6 )
    v8 = CaptureBitsResponse::CaptureBitsResponse(
           v6,
           *((struct CGlobalSurfaceManager **)g_pComposition + 12),
           a2,
           this,
           1.0,
           &v13,
           (enum DXGI_FORMAT)*((_DWORD *)a3 + 7),
           *((_QWORD *)a3 + 4));
  else
    v8 = 0LL;
  if ( v8 )
  {
    v10 = CLegacySurfaceManager::AddCaptureBitsResponse(
            (CLegacySurfaceManager *)(*((_QWORD *)g_pComposition + 12) + 96LL),
            v8);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x25u, 0LL);
    (*(void (__fastcall **)(struct CaptureBitsResponse *))(*(_QWORD *)v8 + 32LL))(v8);
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x21u, 0LL);
  }
  return v9;
}
