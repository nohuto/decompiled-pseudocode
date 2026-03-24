/*
 * XREFs of ?GetDesktopTree@CRemoteRenderTarget@@UEBAJPEAPEAVCDesktopTree@@@Z @ 0x18016E860
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800C0950 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 */

__int64 __fastcall CRemoteRenderTarget::GetDesktopTree(CRemoteRenderTarget *this, struct CDesktopTree **a2)
{
  struct CDesktopTree *v2; // rcx
  unsigned int v3; // ebx

  v2 = (struct CDesktopTree *)*((_QWORD *)this + 5);
  v3 = 0;
  if ( v2 )
  {
    *a2 = v2;
    CMILCOMBase::InternalAddRef(v2);
  }
  else
  {
    *a2 = 0LL;
    v3 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2003292412, 0x71u, 0LL);
  }
  return v3;
}
