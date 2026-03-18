/*
 * XREFs of ?AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW@@@Z @ 0x1C01C04C4
 * Callers:
 *     DxgkCreateSessionViewForCurrentSession @ 0x1C01C040C (DxgkCreateSessionViewForCurrentSession.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsEqualRect@@YAEAEBUtagRECT@@0@Z @ 0x1C005AB40 (-IsEqualRect@@YAEAEBUtagRECT@@0@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C01A5328 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z @ 0x1C01A5360 (-GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z.c)
 *     ?AddDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@E@Z @ 0x1C01C05FC (-AddDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@E@Z.c)
 */

__int64 __fastcall DXGSESSIONDATA::AddSourceViewToSession(
        DXGSESSIONDATA *this,
        struct tagRECT *a2,
        const struct _LUID *a3,
        __int64 a4,
        unsigned __int8 a5,
        struct _LUID *a6)
{
  SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  __int64 v10; // r11
  struct DISPLAY_SOURCE *DisplaySource; // rax
  __int64 v12; // r9
  struct DISPLAY_SOURCE *v13; // rdi
  __int64 v14; // rcx
  char *v15; // rbx
  char *i; // r8
  __int64 v17; // rax
  struct tagRECT v18; // xmm0
  _QWORD *v19; // rax
  char *v20; // rax
  char **v21; // rcx
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // rax
  char **v27; // r8
  __int64 v28; // rbx

  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(this, a3);
  if ( !SessionAdapterFromLuid
    || (DisplaySource = SESSION_ADAPTER::GetDisplaySource(SessionAdapterFromLuid, v10), (v13 = DisplaySource) == 0LL) )
  {
    v28 = v10;
    WdLogSingleEntry5(2LL, v10, a3->HighPart, a3->LowPart, this, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VidPn source 0x%I64x from adapter 0x%I64x%08I64x is not owned by session 0x%I64x (returning 0x%I64x).",
      v28,
      a3->HighPart,
      a3->LowPart,
      (__int64)this,
      -1073741811LL);
    return 3221225485LL;
  }
  v14 = *((_QWORD *)DisplaySource + 6);
  if ( v14 )
  {
    v23 = v10;
    if ( IsEqualRect((const struct tagRECT *)(v14 + 24), a2) )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v24);
      v26[3] = v23;
      v26[4] = a3->HighPart;
      v26[5] = a3->LowPart;
      v26[7] = -1071774953LL;
      v26[6] = this;
      return 3223192343LL;
    }
    WdLogSingleEntry5(2LL, v23, a3->HighPart, a3->LowPart, this, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VidPn source 0x%I64x from adapter 0x%I64x%08I64x is owned by other session view in session 0x%I64x, returning 0x%I64x.",
      v23,
      a3->HighPart,
      a3->LowPart,
      (__int64)this,
      -1073741811LL);
    return 3221225485LL;
  }
  v15 = (char *)this + 18592;
  for ( i = (char *)*((_QWORD *)this + 2324); ; i = *v27 )
  {
    if ( i == v15 )
      goto LABEL_6;
    if ( IsEqualRect(a2, (const struct tagRECT *)i + 1) )
      break;
  }
  if ( v12 )
  {
LABEL_9:
    *(struct _LUID *)(v12 + 64) = *a6;
    SESSION_VIEW::AddDisplaySource((SESSION_VIEW *)v12, v13, a5);
    return 0LL;
  }
LABEL_6:
  v17 = operator new[](0x48uLL, 0x4B677844u, 256LL, v12);
  v12 = v17;
  if ( v17 )
  {
    *(_QWORD *)v17 = this;
    v18 = *a2;
    *(_DWORD *)(v17 + 40) = 0;
    *(struct tagRECT *)(v17 + 24) = v18;
    v19 = (_QWORD *)(v17 + 48);
    v19[1] = v19;
    *v19 = v19;
    *(_QWORD *)(v12 + 64) = 0LL;
    v20 = (char *)(v12 + 8);
    v21 = (char **)*((_QWORD *)this + 2325);
    if ( *v21 != v15 )
      __fastfail(3u);
    *(_QWORD *)v20 = v15;
    *(_QWORD *)(v12 + 16) = v21;
    *v21 = v20;
    *((_QWORD *)this + 2325) = v20;
    goto LABEL_9;
  }
  WdLogSingleEntry5(6LL, a2->left, a2->top, a2->right, a2->bottom, this);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocate session view for rect (%d, %d, %d, %d) in session 0x%I64x.",
    a2->left,
    a2->top,
    a2->right,
    a2->bottom,
    (__int64)this);
  return 3221225495LL;
}
