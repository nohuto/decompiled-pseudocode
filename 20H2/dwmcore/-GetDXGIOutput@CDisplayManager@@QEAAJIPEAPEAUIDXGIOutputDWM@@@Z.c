/*
 * XREFs of ?GetDXGIOutput@CDisplayManager@@QEAAJIPEAPEAUIDXGIOutputDWM@@@Z @ 0x180032994
 * Callers:
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z @ 0x180031C40 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z.c)
 *     ?EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJPEA_N@Z @ 0x18018D410 (-EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJPEA_N@Z.c)
 * Callees:
 *     ?InternalGetDXGIOutput@CDisplayManager@@AEAAJIPEAUHMONITOR__@@PEAPEAUIDXGIOutputDWM@@@Z @ 0x18003AEA4 (-InternalGetDXGIOutput@CDisplayManager@@AEAAJIPEAUHMONITOR__@@PEAPEAUIDXGIOutputDWM@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180084B34 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 */

__int64 __fastcall CDisplayManager::GetDXGIOutput(CDisplayManager *this, unsigned int a2, struct IDXGIOutputDWM **a3)
{
  int DXGIOutput; // eax
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  CDisplayManager *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = this;
  DXGIOutput = CDisplayManager::InternalGetDXGIOutput(this, a2, 0LL, a3);
  LODWORD(v7) = DXGIOutput;
  v5 = DXGIOutput;
  if ( DXGIOutput < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, &dword_1802D9EC0, 2u, DXGIOutput, 0xA5u, 0LL);
    TranslateDXGIorD3DErrorInContext(v5, 4LL, &v7);
    return (unsigned int)v7;
  }
  return v5;
}
