/*
 * XREFs of ?_IsTargetMatrix_3x4Supported@DXGMONITOR@@AEAAEXZ @ 0x1C013E1E0
 * Callers:
 *     ?_QueryColorSpaceTransformCaps@DXGMONITOR@@AEAAJKPEAXPEA_K@Z @ 0x1C013E174 (-_QueryColorSpaceTransformCaps@DXGMONITOR@@AEAAJKPEAXPEA_K@Z.c)
 *     ?_InitColorSpaceTransformCaps@DXGMONITOR@@AEAAJXZ @ 0x1C01860D0 (-_InitColorSpaceTransformCaps@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?_GetMostCapableColorSpaceTransform@DXGMONITOR@@AEAAJAEAW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1C0133634 (-_GetMostCapableColorSpaceTransform@DXGMONITOR@@AEAAJAEAW4_D3DDDI_GAMMARAMP_TYPE@@@Z.c)
 */

bool __fastcall DXGMONITOR::_IsTargetMatrix_3x4Supported(DXGMONITOR *this)
{
  char v1; // bl
  enum _D3DDDI_GAMMARAMP_TYPE v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v3 = D3DDDI_GAMMARAMP_UNINITIALIZED;
  if ( (int)DXGMONITOR::_GetMostCapableColorSpaceTransform(this, &v3) >= 0 )
    return v3 == D3DDDI_GAMMARAMP_MATRIX_3x4;
  return v1;
}
