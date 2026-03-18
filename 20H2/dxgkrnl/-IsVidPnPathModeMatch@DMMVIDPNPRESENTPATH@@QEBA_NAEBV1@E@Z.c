/*
 * XREFs of ?IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z @ 0x1C01382C0
 * Callers:
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C013CD80 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005424 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C000A53C (-IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000A564 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C000B0D4 (-IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ??9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z @ 0x1C0019FAC (--9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z.c)
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z @ 0x1C001A0F0 (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z.c)
 */

char __fastcall DMMVIDPNPRESENTPATH::IsVidPnPathModeMatch(
        DMMVIDPNPRESENTPATH *this,
        const struct DMMVIDPNPRESENTPATH *a2,
        char a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // bl
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // r12
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbp
  __int64 v24; // rax
  __int64 v25; // rbp
  __int64 v26; // r12
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax

  v8 = 0;
  if ( !DMMVIDPNPRESENTPATH::IsFunctional(this)
    || (v9 = (unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(*((_DWORD *)this + 29)),
        !DMMVIDPNPRESENTPATH::IsFunctionalContentRotationType(v9)) )
  {
    v35 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v35);
  }
  if ( !DMMVIDPNPRESENTPATH::IsFunctional(a2)
    || (v12 = (unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(*((_DWORD *)this + 29)),
        !DMMVIDPNPRESENTPATH::IsFunctionalContentRotationType(v12)) )
  {
    v36 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v36);
  }
  if ( !a3 && *((_DWORD *)this + 29) != *((_DWORD *)a2 + 29) || *((_DWORD *)this + 28) != *((_DWORD *)a2 + 28) )
    return 0;
  v13 = *((_QWORD *)this + 12);
  v14 = *(_QWORD *)(v13 + 104);
  if ( v14 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 96));
    v15 = *(_QWORD *)(v13 + 104);
  }
  else
  {
    v15 = 0LL;
  }
  v16 = *(_QWORD *)(v15 + 144);
  if ( !v16 )
  {
    v37 = WdLogNewEntry5_WdAssertion(v13, v10);
    WdLogEvent5_WdAssertion(v37);
  }
  v17 = *((_QWORD *)a2 + 12);
  v18 = *(_QWORD *)(v17 + 104);
  if ( v18 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 96));
    v19 = *(_QWORD *)(v17 + 104);
  }
  else
  {
    v19 = 0LL;
  }
  v20 = *(_QWORD *)(v19 + 144);
  if ( !v20 )
  {
    v38 = WdLogNewEntry5_WdAssertion(v17, v10);
    WdLogEvent5_WdAssertion(v38);
  }
  if ( !DMMVIDPNTARGETMODE::operator!=(v16, v20) )
  {
    v23 = *((_QWORD *)this + 11);
    v24 = *(_QWORD *)(v23 + 104);
    if ( v24 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v24 + 96));
      v25 = *(_QWORD *)(v23 + 104);
    }
    else
    {
      v25 = 0LL;
    }
    v26 = *(_QWORD *)(v25 + 144);
    if ( !v26 )
    {
      v39 = WdLogNewEntry5_WdAssertion(v22, v21);
      WdLogEvent5_WdAssertion(v39);
    }
    v27 = *((_QWORD *)a2 + 11);
    v28 = *(_QWORD *)(v27 + 104);
    if ( v28 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v28 + 96));
      v29 = *(_QWORD *)(v27 + 104);
    }
    else
    {
      v29 = 0LL;
    }
    v30 = *(_QWORD *)(v29 + 144);
    if ( !v30 )
    {
      v40 = WdLogNewEntry5_WdAssertion(v22, v21);
      WdLogEvent5_WdAssertion(v40);
    }
    v8 = DMMVIDPNSOURCEMODE::operator==(v26, v30);
    ReferenceCounted::Release((ReferenceCounted *)(v29 + 88), v31);
    ReferenceCounted::Release((ReferenceCounted *)(v25 + 88), v32);
  }
  ReferenceCounted::Release((ReferenceCounted *)(v19 + 88), v21);
  ReferenceCounted::Release((ReferenceCounted *)(v15 + 88), v33);
  return v8;
}
