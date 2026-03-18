/*
 * XREFs of ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C00113B0
 * Callers:
 *     ?_SetColorSpaceTransform@DXGMONITOR@@AEAAJKPEAX@Z @ 0x1C00DF944 (-_SetColorSpaceTransform@DXGMONITOR@@AEAAJKPEAX@Z.c)
 *     ?GetDxgiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00E5EEC (-GetDxgiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C012A464 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?_CombineDXGIGammaRamp@DXGMONITOR@@AEAAJPEAUDXGK_GAMMA_RAMP@@PEAPEAU2@@Z @ 0x1C012AC6C (-_CombineDXGIGammaRamp@DXGMONITOR@@AEAAJPEAUDXGK_GAMMA_RAMP@@PEAPEAU2@@Z.c)
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C012B8C0 (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C012EE40 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     DxgkSetGammaRamp @ 0x1C0255830 (DxgkSetGammaRamp.c)
 *     ?GetDefaultColorSpaceTransform@DXGGLOBAL@@QEAAPEBUDXGK_GAMMA_RAMP@@XZ @ 0x1C0265604 (-GetDefaultColorSpaceTransform@DXGGLOBAL@@QEAAPEBUDXGK_GAMMA_RAMP@@XZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1C0011380 (-GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 */

__int64 __fastcall DXGK_GAMMA_RAMP::Initialize(size_t *this, __int64 a2, const void *a3)
{
  __int64 v3; // rdi
  SIZE_T SizeFromGammaRampType; // rax
  PVOID v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // rax
  __int64 v14; // rax

  v3 = (int)a2;
  if ( (unsigned int)(a2 - 1) > 4 )
  {
    v13 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v13 + 24) = v3;
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
  else
  {
    SizeFromGammaRampType = GetSizeFromGammaRampType((unsigned int)a2);
    this[3] = SizeFromGammaRampType;
    if ( !SizeFromGammaRampType )
    {
LABEL_6:
      *((_DWORD *)this + 4) = v3;
      return 0LL;
    }
    v7 = operator new[](SizeFromGammaRampType, 0x4B677844u, PagedPool);
    this[4] = (size_t)v7;
    if ( v7 )
    {
      if ( a3 )
        memmove(v7, a3, this[3]);
      goto LABEL_6;
    }
    v14 = WdLogNewEntry5_WdLowResource(v9, v8, v10, v11);
    *(_QWORD *)(v14 + 24) = this[3];
    WdLogEvent5_WdLowResource(v14);
    return 3221225495LL;
  }
}
