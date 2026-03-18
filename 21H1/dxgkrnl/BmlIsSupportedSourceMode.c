/*
 * XREFs of BmlIsSupportedSourceMode @ 0x1C02E774C
 * Callers:
 *     BmlGetRecommendedContentSizeForPath @ 0x1C02E74B8 (BmlGetRecommendedContentSizeForPath.c)
 * Callees:
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0010CF0 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?BmlIsSupportedGraphicsFormat@@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@_N@Z @ 0x1C02E7720 (-BmlIsSupportedGraphicsFormat@@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@_N@Z.c)
 */

bool __fastcall BmlIsSupportedSourceMode(DMMVIDPNSOURCEMODE *a1, char a2, int a3)
{
  int v4; // eax
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax

  if ( !a1 )
    return 0;
  v4 = *((_DWORD *)a1 + 18);
  if ( a3 != 2 )
  {
    if ( v4 == 1 )
      goto LABEL_8;
    if ( a3 == 1 )
      return 0;
  }
  if ( (unsigned int)(v4 - 3) > 1 )
    return 0;
LABEL_8:
  GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(a1);
  return BmlIsSupportedGraphicsFormat(GraphicsInfo, a2);
}
