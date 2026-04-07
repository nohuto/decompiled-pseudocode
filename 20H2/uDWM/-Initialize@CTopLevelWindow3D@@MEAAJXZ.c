/*
 * XREFs of ?Initialize@CTopLevelWindow3D@@MEAAJXZ @ 0x180027D60
 * Callers:
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180027E84 (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DisablePrefiltering@CVisual@@QEAAXXZ @ 0x180027D98 (-DisablePrefiltering@CVisual@@QEAAXXZ.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180027E10 (-Initialize@CVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow3D::Initialize(CTopLevelWindow3D *this)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CVisual::Initialize(this);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x57u);
  else
    CVisual::DisablePrefiltering(this);
  return v3;
}
