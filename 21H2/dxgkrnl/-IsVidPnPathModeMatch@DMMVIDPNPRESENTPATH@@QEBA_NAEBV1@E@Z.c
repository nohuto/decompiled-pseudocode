/*
 * XREFs of ?IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z @ 0x1C01DE474
 * Callers:
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C01B9F4C (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C0011EA0 (-IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0011EC8 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C001D1D0 (-IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z @ 0x1C001D29C (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z.c)
 *     ??9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z @ 0x1C001D31C (--9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z.c)
 */

char __fastcall DMMVIDPNPRESENTPATH::IsVidPnPathModeMatch(
        DMMVIDPNPRESENTPATH *this,
        const struct DMMVIDPNPRESENTPATH *a2,
        char a3)
{
  char v6; // bl
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v7; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // r12
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rbp
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // r12
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rsi

  v6 = 0;
  if ( !DMMVIDPNPRESENTPATH::IsFunctional(this)
    || (v7 = (unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(*((_DWORD *)this + 29)),
        !DMMVIDPNPRESENTPATH::IsFunctionalContentRotationType(v7)) )
  {
    WdLogSingleEntry0(1LL);
  }
  if ( !DMMVIDPNPRESENTPATH::IsFunctional(a2)
    || (v8 = (unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(*((_DWORD *)this + 29)),
        !DMMVIDPNPRESENTPATH::IsFunctionalContentRotationType(v8)) )
  {
    WdLogSingleEntry0(1LL);
  }
  if ( !a3 && *((_DWORD *)this + 29) != *((_DWORD *)a2 + 29) || *((_DWORD *)this + 28) != *((_DWORD *)a2 + 28) )
    return 0;
  v9 = *((_QWORD *)this + 12);
  v10 = *(_QWORD *)(v9 + 104);
  if ( v10 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v10 + 96), 1u);
    v11 = *(_QWORD *)(v9 + 104);
  }
  else
  {
    v11 = 0LL;
  }
  v12 = *(_QWORD *)(v11 + 144);
  if ( !v12 )
    WdLogSingleEntry0(1LL);
  v13 = *((_QWORD *)a2 + 12);
  v14 = *(_QWORD *)(v13 + 104);
  if ( v14 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v14 + 96), 1u);
    v15 = *(_QWORD *)(v13 + 104);
  }
  else
  {
    v15 = 0LL;
  }
  v16 = *(_QWORD *)(v15 + 144);
  if ( !v16 )
    WdLogSingleEntry0(1LL);
  if ( !DMMVIDPNTARGETMODE::operator!=(v12, v16) )
  {
    v17 = *((_QWORD *)this + 11);
    v18 = *(_QWORD *)(v17 + 104);
    if ( v18 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v18 + 96), 1u);
      v19 = *(_QWORD *)(v17 + 104);
    }
    else
    {
      v19 = 0LL;
    }
    v20 = *(_QWORD *)(v19 + 144);
    if ( !v20 )
      WdLogSingleEntry0(1LL);
    v21 = *((_QWORD *)a2 + 11);
    v22 = *(_QWORD *)(v21 + 104);
    if ( v22 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v22 + 96), 1u);
      v23 = *(_QWORD *)(v21 + 104);
    }
    else
    {
      v23 = 0LL;
    }
    v24 = *(_QWORD *)(v23 + 144);
    if ( !v24 )
      WdLogSingleEntry0(1LL);
    v6 = DMMVIDPNSOURCEMODE::operator==(v20, v24);
    ReferenceCounted::Release((ReferenceCounted *)(v23 + 88));
    ReferenceCounted::Release((ReferenceCounted *)(v19 + 88));
  }
  ReferenceCounted::Release((ReferenceCounted *)(v15 + 88));
  ReferenceCounted::Release((ReferenceCounted *)(v11 + 88));
  return v6;
}
