/*
 * XREFs of ?ProcessSetRoot@CCaptureController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURECONTROLLER_SETROOT@@@Z @ 0x1801B84B4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??4?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorBrush@@@Z @ 0x18000B334 (--4-$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorBrush@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800A61E4 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetRootVisual@CCaptureRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x1801895F4 (-SetRootVisual@CCaptureRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CCaptureController::ProcessSetRoot(
        CCaptureController *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CAPTURECONTROLLER_SETROOT *a3)
{
  __int64 Resource; // rax
  unsigned int v5; // edx
  struct CVisual **v7; // rdi
  CCaptureRenderTarget **v8; // rsi
  CCaptureRenderTarget **i; // rbx

  Resource = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5 )
    Resource = CResourceTable::GetResource((__int64)a2, v5, 0xC3u);
  v7 = (struct CVisual **)((char *)this + 80);
  wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>::operator=((__int64 *)this + 10, Resource);
  v8 = (CCaptureRenderTarget **)*((_QWORD *)this + 8);
  for ( i = (CCaptureRenderTarget **)*((_QWORD *)this + 7); i != v8; ++i )
    CCaptureRenderTarget::SetRootVisual(*i, *v7);
  return 0LL;
}
