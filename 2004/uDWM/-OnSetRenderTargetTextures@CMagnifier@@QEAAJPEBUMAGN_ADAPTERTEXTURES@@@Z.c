/*
 * XREFs of ?OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x18008BB6C
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18008C3CC (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CMagnifier@@AEAAJXZ @ 0x18008B478 (-Initialize@CMagnifier@@AEAAJXZ.c)
 *     ?OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x18008B954 (-OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?SetColorTransform@CMagnifierRenderTargetProxy@@QEAAJPEBVCColorTransformResourceProxy@@@Z @ 0x1800BE354 (-SetColorTransform@CMagnifierRenderTargetProxy@@QEAAJPEBVCColorTransformResourceProxy@@@Z.c)
 *     ?SetTransform@CMagnifierRenderTargetProxy@@QEAAJPEBVCMatrixTransformProxy@@@Z @ 0x1800BE3BC (-SetTransform@CMagnifierRenderTargetProxy@@QEAAJPEBVCMatrixTransformProxy@@@Z.c)
 */

__int64 __fastcall CMagnifier::OnSetRenderTargetTextures(CMagnifier *this, const struct MAGN_ADAPTERTEXTURES *a2)
{
  unsigned int v4; // ecx
  unsigned int v5; // eax
  int v6; // eax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // eax
  CBaseObject *v16; // rcx
  int v17; // eax
  int v18; // eax
  unsigned int v19; // edx
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  unsigned int v23; // edx
  __int64 v24; // rax
  int v25; // eax
  _OWORD v27[6]; // [rsp+30h] [rbp-88h] BYREF
  int v28; // [rsp+90h] [rbp-28h]

  v4 = *(_DWORD *)a2;
  v5 = *((_DWORD *)this + 42);
  if ( *(_DWORD *)a2 <= v5 )
  {
    if ( v4 > 6 )
      v4 = 6;
    *((_DWORD *)this + 42) = v4;
    *((_DWORD *)this + 45) = *((_DWORD *)a2 + 1);
    *((_DWORD *)this + 43) = *((_DWORD *)a2 + 2);
    v22 = *((_DWORD *)a2 + 3);
    v23 = 0;
    for ( *((_DWORD *)this + 44) = v22;
          v23 < *((_DWORD *)this + 42);
          *(_OWORD *)((char *)this + v24 + 200) = *(_OWORD *)((char *)a2 + v24 + 32) )
    {
      v24 = v23++;
      v24 *= 32LL;
      *(_OWORD *)((char *)this + v24 + 184) = *(_OWORD *)((char *)a2 + v24 + 16);
    }
    v25 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct MAGN_ADAPTERTEXTURES *))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 16LL)
                                                                                         + 688LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 16LL),
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 24LL),
            a2);
    v13 = v25;
    if ( v25 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v25, 0x18Eu);
  }
  else
  {
    if ( v5 )
    {
      v6 = *((_DWORD *)this + 41);
      v7 = *(_OWORD *)((char *)this + 84);
      v27[0] = *(_OWORD *)((char *)this + 68);
      v8 = *(_OWORD *)((char *)this + 100);
      v27[1] = v7;
      v9 = *(_OWORD *)((char *)this + 116);
      v27[2] = v8;
      v10 = *(_OWORD *)((char *)this + 132);
      v27[3] = v9;
      v11 = *(_OWORD *)((char *)this + 148);
      v27[4] = v10;
      v27[5] = v11;
      v28 = v6;
      v12 = CMagnifier::OnSetColorEffect(this, (const struct MilColorTransform *)&g_MilColorTransfIdentity);
      v13 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x15Cu);
        return v13;
      }
      v14 = CMagnifierRenderTargetProxy::SetTransform(*((CMagnifierRenderTargetProxy **)this + 3), 0LL);
      v13 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x15Eu);
        return v13;
      }
      v15 = CMagnifierRenderTargetProxy::SetColorTransform(*((CMagnifierRenderTargetProxy **)this + 3), 0LL);
      v13 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x160u);
        return v13;
      }
      v16 = (CBaseObject *)*((_QWORD *)this + 3);
      if ( v16 )
      {
        CBaseObject::Release(v16);
        *((_QWORD *)this + 3) = 0LL;
      }
      *((_DWORD *)this + 42) = 0;
      v17 = CMagnifier::Initialize(this);
      v13 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x165u);
        return v13;
      }
      v18 = CMagnifier::OnSetColorEffect(this, (const struct MilColorTransform *)v27);
      v13 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x166u);
        return v13;
      }
      v4 = *(_DWORD *)a2;
    }
    if ( v4 > 6 )
      v4 = 6;
    v19 = 0;
    *((_DWORD *)this + 42) = v4;
    *((_DWORD *)this + 45) = *((_DWORD *)a2 + 1);
    *((_DWORD *)this + 43) = *((_DWORD *)a2 + 2);
    for ( *((_DWORD *)this + 44) = *((_DWORD *)a2 + 3);
          v19 < *((_DWORD *)this + 42);
          *(_OWORD *)((char *)this + v20 + 200) = *(_OWORD *)((char *)a2 + v20 + 32) )
    {
      v20 = v19++;
      v20 *= 32LL;
      *(_OWORD *)((char *)this + v20 + 184) = *(_OWORD *)((char *)a2 + v20 + 16);
    }
    v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, const struct MAGN_ADAPTERTEXTURES *))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 16LL)
                                                                                                 + 664LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 16LL),
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 24LL),
            *((_QWORD *)this + 7),
            a2);
    v13 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x178u);
  }
  return v13;
}
