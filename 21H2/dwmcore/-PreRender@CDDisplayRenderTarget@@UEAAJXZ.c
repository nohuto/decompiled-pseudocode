/*
 * XREFs of ?PreRender@CDDisplayRenderTarget@@UEAAJXZ @ 0x18018C704
 * Callers:
 *     ?PreRender@CDDisplayRenderTarget@@$4PPPPPPPM@A@EAAJXZ @ 0x1800F51A0 (-PreRender@CDDisplayRenderTarget@@$4PPPPPPPM@A@EAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CleanTree@CDesktopTree@@UEAAJXZ @ 0x180090680 (-CleanTree@CDesktopTree@@UEAAJXZ.c)
 */

__int64 __fastcall CDDisplayRenderTarget::PreRender(CDDisplayRenderTarget *this)
{
  CDesktopTree *v1; // rcx
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v4; // rcx

  v1 = (CDesktopTree *)*((_QWORD *)this - 2315);
  v2 = 0;
  if ( v1 )
  {
    v3 = CDesktopTree::CleanTree(v1);
    v2 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x157u, 0LL);
  }
  return v2;
}
