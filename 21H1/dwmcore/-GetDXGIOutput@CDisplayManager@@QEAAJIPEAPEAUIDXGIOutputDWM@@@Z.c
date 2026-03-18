/*
 * XREFs of ?GetDXGIOutput@CDisplayManager@@QEAAJIPEAPEAUIDXGIOutputDWM@@@Z @ 0x1800D513C
 * Callers:
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z @ 0x1800D4BE0 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z.c)
 *     ?EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJPEA_N@Z @ 0x180191C60 (-EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180057CE4 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?InternalGetDXGIOutput@CDisplayManager@@AEAAJIPEAUHMONITOR__@@PEAPEAUIDXGIOutputDWM@@@Z @ 0x1800D5170 (-InternalGetDXGIOutput@CDisplayManager@@AEAAJIPEAUHMONITOR__@@PEAPEAUIDXGIOutputDWM@@@Z.c)
 */

__int64 __fastcall CDisplayManager::GetDXGIOutput(CDisplayManager *this, unsigned int a2, struct IDXGIOutputDWM **a3)
{
  int DXGIOutput; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  CDisplayManager *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = this;
  DXGIOutput = CDisplayManager::InternalGetDXGIOutput(this, a2, 0LL, a3);
  LODWORD(v7) = DXGIOutput;
  v5 = DXGIOutput;
  if ( DXGIOutput < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, &dword_1802DDBE0, 2u, DXGIOutput, 0xA5u, 0LL);
    TranslateDXGIorD3DErrorInContext(v5, 4, &v7);
    return (unsigned int)v7;
  }
  return v5;
}
