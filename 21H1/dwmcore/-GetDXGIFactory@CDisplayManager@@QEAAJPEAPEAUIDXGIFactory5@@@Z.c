/*
 * XREFs of ?GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x18008D0B0
 * Callers:
 *     ?EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ @ 0x18008CDA8 (-EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ.c)
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x18016C934 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180057CE4 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x18008D1E4 (-InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 */

__int64 __fastcall CDisplayManager::GetDXGIFactory(CDisplayManager *this, struct IDXGIFactory5 **a2)
{
  int DXGIFactory; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  CDisplayManager *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = this;
  DXGIFactory = CDisplayManager::InternalGetDXGIFactory(this, a2);
  LODWORD(v6) = DXGIFactory;
  v4 = DXGIFactory;
  if ( DXGIFactory < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, &dword_1802DDBE0, 2u, DXGIFactory, 0x2Bu, 0LL);
    TranslateDXGIorD3DErrorInContext(v4, 4, &v6);
    return (unsigned int)v6;
  }
  return v4;
}
