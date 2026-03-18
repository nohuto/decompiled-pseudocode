/*
 * XREFs of ?GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x1800343C4
 * Callers:
 *     ?EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ @ 0x1800340BC (-EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ.c)
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x180169DD4 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x1800344F8 (-InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180065D28 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 */

__int64 __fastcall CDisplayManager::GetDXGIFactory(CDisplayManager *this, struct IDXGIFactory5 **a2)
{
  int DXGIFactory; // eax
  unsigned int v3; // ecx
  unsigned int v4; // ebx
  CDisplayManager *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = this;
  DXGIFactory = CDisplayManager::InternalGetDXGIFactory(this, a2);
  LODWORD(v6) = DXGIFactory;
  v4 = DXGIFactory;
  if ( DXGIFactory < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, &dword_1802DAC50, 2u, DXGIFactory, 0x2Bu, 0LL);
    TranslateDXGIorD3DErrorInContext(v4, 4LL, &v6);
    return (unsigned int)v6;
  }
  return v4;
}
