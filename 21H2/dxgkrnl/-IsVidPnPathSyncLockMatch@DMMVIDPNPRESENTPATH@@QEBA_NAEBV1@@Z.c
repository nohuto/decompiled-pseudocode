/*
 * XREFs of ?IsVidPnPathSyncLockMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z @ 0x1C03A7FDC
 * Callers:
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C01B9F4C (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z @ 0x1C001D31C (--9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z.c)
 */

bool __fastcall DMMVIDPNPRESENTPATH::IsVidPnPathSyncLockMatch(
        DMMVIDPNPRESENTPATH *this,
        const struct DMMVIDPNPRESENTPATH *a2)
{
  __int64 v2; // r8
  bool v3; // bl
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rdi
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // r15
  int v21; // edi
  int v22; // ebx

  v2 = *((_QWORD *)this + 12);
  v3 = 0;
  v6 = *(_QWORD *)(v2 + 104);
  if ( v6 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v6 + 96), 1u);
    v7 = *(_QWORD *)(v2 + 104);
  }
  else
  {
    v7 = 0LL;
  }
  v8 = *(_QWORD *)(v7 + 144);
  if ( !v8 )
    WdLogSingleEntry0(1LL);
  v9 = *((_QWORD *)a2 + 12);
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
  if ( !DMMVIDPNTARGETMODE::operator!=(v8, v12) )
  {
    v13 = *((_QWORD *)this + 11);
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
    v17 = *((_QWORD *)a2 + 11);
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
    v21 = *(_DWORD *)(v16 + 96);
    v22 = *(_DWORD *)(v20 + 96);
    ReferenceCounted::Release((ReferenceCounted *)(v19 + 88));
    ReferenceCounted::Release((ReferenceCounted *)(v15 + 88));
    v3 = v21 == v22;
  }
  ReferenceCounted::Release((ReferenceCounted *)(v11 + 88));
  ReferenceCounted::Release((ReferenceCounted *)(v7 + 88));
  return v3;
}
