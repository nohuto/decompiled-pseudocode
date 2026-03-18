/*
 * XREFs of ?BmlIsSupportedGraphicsFormat@@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@_N@Z @ 0x1C02EBC90
 * Callers:
 *     ?_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C01336C8 (-_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ?_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C015B4CC (-_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     BmlIsSupportedSourceMode @ 0x1C02EBCBC (BmlIsSupportedSourceMode.c)
 * Callees:
 *     <none>
 */

bool __fastcall BmlIsSupportedGraphicsFormat(const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *a1, char a2)
{
  D3DDDIFORMAT PixelFormat; // eax
  bool result; // al

  result = 1;
  if ( a2 )
  {
    PixelFormat = a1->PixelFormat;
    if ( PixelFormat < D3DDDIFMT_R8G8B8
      || PixelFormat > D3DDDIFMT_R5G6B5 && PixelFormat != D3DDDIFMT_A8B8G8R8 && PixelFormat != D3DDDIFMT_P8 )
    {
      return 0;
    }
  }
  return result;
}
