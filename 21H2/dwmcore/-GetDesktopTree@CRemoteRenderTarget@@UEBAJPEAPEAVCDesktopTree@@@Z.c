/*
 * XREFs of ?GetDesktopTree@CRemoteRenderTarget@@UEBAJPEAPEAVCDesktopTree@@@Z @ 0x1801A0280
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

__int64 __fastcall CRemoteRenderTarget::GetDesktopTree(CRemoteRenderTarget *this, struct CDesktopTree **a2)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx

  v2 = *((_QWORD *)this + 5);
  v3 = 0;
  if ( v2 )
  {
    *a2 = (struct CDesktopTree *)v2;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v2 + 8));
  }
  else
  {
    *a2 = 0LL;
    v3 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0LL, -2003292412, 0x70u);
  }
  return v3;
}
