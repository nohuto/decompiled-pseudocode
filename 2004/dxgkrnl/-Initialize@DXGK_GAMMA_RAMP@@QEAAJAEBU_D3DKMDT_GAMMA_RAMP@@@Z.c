/*
 * XREFs of ?Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C000AF78
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C000CB44 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?_CombineDXGIGammaRamp@DXGMONITOR@@AEAAJPEAUDXGK_GAMMA_RAMP@@PEAPEAU2@@Z @ 0x1C01346BC (-_CombineDXGIGammaRamp@DXGMONITOR@@AEAAJPEAUDXGK_GAMMA_RAMP@@PEAPEAU2@@Z.c)
 *     ?_NotifyDXGIGammaRampChange@DXGMONITOR@@QEAAJXZ @ 0x1C013A158 (-_NotifyDXGIGammaRampChange@DXGMONITOR@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1C000B004 (-GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 */

__int64 __fastcall DXGK_GAMMA_RAMP::Initialize(DXGK_GAMMA_RAMP *this, const struct _D3DKMDT_GAMMA_RAMP *a2)
{
  __int64 Type; // rcx
  SIZE_T SizeFromGammaRampType; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v14; // rax
  __int64 v15; // rax

  Type = (unsigned int)a2->Type;
  if ( (unsigned int)(Type - 1) > 4 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(Type, a2);
    v14[3] = a2->Type;
LABEL_10:
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
  SizeFromGammaRampType = GetSizeFromGammaRampType((enum _D3DDDI_GAMMARAMP_TYPE)Type);
  *((_QWORD *)this + 3) = SizeFromGammaRampType;
  if ( SizeFromGammaRampType != a2->DataSize )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v7, v6);
    v14[3] = a2->Type;
    v14[4] = a2->DataSize;
    v14[5] = -1073741811LL;
    goto LABEL_10;
  }
  if ( !SizeFromGammaRampType )
  {
LABEL_7:
    *((_DWORD *)this + 4) = a2->Type;
    return 0LL;
  }
  if ( !a2->Data.pRgb256x3x16 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v7, v6);
    v14[3] = 406LL;
    goto LABEL_10;
  }
  v8 = operator new[](SizeFromGammaRampType, 0x4B677844u, PagedPool);
  *((_QWORD *)this + 4) = v8;
  if ( v8 )
  {
    memmove(v8, a2->Data.pRgb256x3x16, *((_QWORD *)this + 3));
    goto LABEL_7;
  }
  v15 = WdLogNewEntry5_WdLowResource(v10, v9, v11, v12);
  *(_QWORD *)(v15 + 24) = *((_QWORD *)this + 3);
  WdLogEvent5_WdLowResource(v15);
  return 3221225495LL;
}
