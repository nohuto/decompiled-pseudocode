/*
 * XREFs of ?IsOOM@@YA_NJ@Z @ 0x1800D75FC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800A6250 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?CreateD3D11Device@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVERSION@@PEAT_LARGE_INTEGER@@PEAPEAUID3D11Device1@@@Z @ 0x1800B3354 (-CreateD3D11Device@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVERS.c)
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x1800D73C0 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 *     ?MilFailFastForHR@@YAXJPEBX@Z @ 0x180215A18 (-MilFailFastForHR@@YAXJPEBX@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall IsOOM(int a1)
{
  char result; // al
  _DWORD *v2; // rdx
  unsigned int v3; // r8d

  result = 0;
  v2 = &unk_1802DDCA8;
  v3 = 0;
  while ( *v2 != a1 )
  {
    ++v3;
    ++v2;
    if ( v3 >= 9 )
      return result;
  }
  return 1;
}
