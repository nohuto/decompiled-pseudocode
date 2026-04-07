/*
 * XREFs of ?InitializeFromSharedHandle@CVisual@@MEAAJPEAX@Z @ 0x180011F40
 * Callers:
 *     ?CreateFromSharedHandle@UdwmTopVisual@@SAJPEAXPEAPEAV1@@Z @ 0x180011DC0 (-CreateFromSharedHandle@UdwmTopVisual@@SAJPEAXPEAPEAV1@@Z.c)
 *     ?CreateFromSharedHandle@UdwmBottomVisual@@SAJPEAXPEAPEAV1@@Z @ 0x180011E7C (-CreateFromSharedHandle@UdwmBottomVisual@@SAJPEAXPEAPEAV1@@Z.c)
 *     ?CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z @ 0x18002B934 (-CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateProxyFromSharedHandle@VCVisualProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualProxy@@@Z @ 0x180025220 (--$CreateProxyFromSharedHandle@VCVisualProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualProxy@@@Z.c)
 */

__int64 __fastcall CVisual::InitializeFromSharedHandle(CVisual *this, void *a2)
{
  int ProxyFromShared; // eax
  unsigned int v3; // ebx

  ProxyFromShared = CCompositor::CreateProxyFromSharedHandle<CVisualProxy>(
                      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                      a2,
                      (char *)this + 16);
  v3 = ProxyFromShared;
  if ( ProxyFromShared < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ProxyFromShared, 0x58u);
  return v3;
}
