/*
 * XREFs of ?GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1C000B004
 * Callers:
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C000AF78 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C000B04C (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ?IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C000B7B0 (-IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?_SetColorSpaceTransform@DXGMONITOR@@AEAAJKPEAX@Z @ 0x1C013960C (-_SetColorSpaceTransform@DXGMONITOR@@AEAAJKPEAX@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall GetSizeFromGammaRampType(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax

  v1 = (int)a1;
  switch ( (_DWORD)a1 )
  {
    case 1:
      return 0LL;
    case 2:
      return 1536LL;
    case 3:
      return 12324LL;
    case 4:
      return 49204LL;
  }
  if ( (_DWORD)a1 != 5 )
  {
    v3 = WdLogNewEntry5_WdError(a1, (unsigned int)(a1 - 4));
    *(_QWORD *)(v3 + 24) = v1;
    WdLogEvent5_WdError(v3);
    return 0LL;
  }
  return 98352LL;
}
