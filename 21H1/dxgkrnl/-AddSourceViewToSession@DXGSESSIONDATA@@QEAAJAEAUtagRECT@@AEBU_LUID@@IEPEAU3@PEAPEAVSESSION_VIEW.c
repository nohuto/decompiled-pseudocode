/*
 * XREFs of ?AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW@@@Z @ 0x1C0132D20
 * Callers:
 *     DxgkCreateSessionViewForCurrentSession @ 0x1C0132C6C (DxgkCreateSessionViewForCurrentSession.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsEqualRect@@YAEAEBUtagRECT@@0@Z @ 0x1C0049110 (-IsEqualRect@@YAEAEBUtagRECT@@0@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C0126EC0 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z @ 0x1C0126EF8 (-GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z.c)
 *     ?AddDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@E@Z @ 0x1C0132E48 (-AddDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@E@Z.c)
 */

__int64 __fastcall DXGSESSIONDATA::AddSourceViewToSession(
        DXGSESSIONDATA *this,
        struct tagRECT *a2,
        const struct _LUID *a3,
        unsigned int a4,
        unsigned __int8 a5,
        struct _LUID *a6)
{
  __int64 v7; // r14
  SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  struct DISPLAY_SOURCE *DisplaySource; // rbp
  __int64 v15; // rcx
  char *v16; // rdi
  char *i; // r8
  char *v18; // r9
  char *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  struct tagRECT v23; // xmm0
  _QWORD *v24; // rax
  char **v25; // rcx
  char *v26; // rax
  _QWORD *v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // rax
  char **v32; // r8
  __int64 v33; // rax
  _QWORD *v34; // rdx
  __int64 v35; // rcx

  v7 = a4;
  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(this, a3);
  v13 = 0LL;
  if ( SessionAdapterFromLuid )
    DisplaySource = SESSION_ADAPTER::GetDisplaySource(SessionAdapterFromLuid, v7);
  else
    DisplaySource = 0LL;
  if ( !DisplaySource )
    goto LABEL_17;
  v15 = *((_QWORD *)DisplaySource + 6);
  if ( v15 )
  {
    if ( IsEqualRect((const struct tagRECT *)(v15 + 24), a2) )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11, v29, v30);
      v31[3] = v7;
      v31[4] = a3->HighPart;
      v31[5] = a3->LowPart;
      v31[7] = -1071774953LL;
      v31[6] = this;
      return 3223192343LL;
    }
LABEL_17:
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
    v28[3] = v7;
    v28[4] = a3->HighPart;
    v28[5] = a3->LowPart;
    v28[6] = this;
    v28[7] = -1073741811LL;
    WdLogEvent5_WdError(v28);
    return 3221225485LL;
  }
  v16 = (char *)this + 18576;
  for ( i = (char *)*((_QWORD *)this + 2322); i != v16; i = *v32 )
  {
    if ( IsEqualRect(a2, (const struct tagRECT *)i + 1) )
      goto LABEL_8;
  }
  v18 = 0LL;
LABEL_8:
  if ( v18 )
    goto LABEL_14;
  v19 = (char *)operator new[](0x48uLL, 0x4B677844u, PagedPool);
  v18 = v19;
  if ( v19 )
  {
    *(_QWORD *)v19 = this;
    v23 = *a2;
    *((_DWORD *)v19 + 10) = 0;
    *(struct tagRECT *)(v19 + 24) = v23;
    v24 = v19 + 48;
    v24[1] = v24;
    *v24 = v24;
    *((_QWORD *)v18 + 8) = 0LL;
  }
  else
  {
    v18 = 0LL;
  }
  if ( v18 )
  {
    v25 = (char **)*((_QWORD *)this + 2323);
    v26 = v18 + 8;
    if ( *v25 != v16 )
      __fastfail(3u);
    *(_QWORD *)v26 = v16;
    *((_QWORD *)v18 + 2) = v25;
    *v25 = v26;
    *((_QWORD *)this + 2323) = v26;
LABEL_14:
    *((struct _LUID *)v18 + 8) = *a6;
    SESSION_VIEW::AddDisplaySource((SESSION_VIEW *)v18, DisplaySource, a5);
    return 0LL;
  }
  v33 = WdLogNewEntry5_WdLowResource(v21, v20, v22, 0LL);
  v34 = (_QWORD *)(v33 + 24);
  do
  {
    v35 = *(&a2->left + v13++);
    *v34++ = v35;
  }
  while ( v13 < 4 );
  *(_QWORD *)(v33 + 56) = this;
  WdLogEvent5_WdLowResource(v33);
  return 3221225495LL;
}
