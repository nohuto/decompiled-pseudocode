/*
 * XREFs of ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAVDXGADAPTER@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C01E1E20
 * Callers:
 *     ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00246F8 (-SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C01E1BC4 (DxgkUseAdapterViewInCurrentSession.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x1C001DEFC (--_GSESSION_ADAPTER@@QEAAPEAXI@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C01A5328 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?Initialize@SESSION_ADAPTER@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C01E2048 (-Initialize@SESSION_ADAPTER@@QEAAJPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGSESSIONDATA::AddAdapterToSession(
        DXGSESSIONDATA ***this,
        const struct _LUID *a2,
        struct DXGADAPTER *a3,
        struct SESSION_ADAPTER **a4)
{
  struct SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  __int64 v9; // r9
  __int64 v11; // rax
  __int64 v12; // rbx
  struct _LUID v13; // rcx
  SESSION_ADAPTER *v14; // rcx
  _QWORD *v15; // rax
  int v16; // r14d
  DXGSESSIONDATA **v17; // rdx
  DXGSESSIONDATA *v18; // rcx

  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid((DXGSESSIONDATA *)this, a2);
  if ( SessionAdapterFromLuid )
  {
    ++*((_DWORD *)SessionAdapterFromLuid + 12);
    if ( a4 )
      *a4 = SessionAdapterFromLuid;
    return 0LL;
  }
  v11 = operator new[](0x80uLL, 0x4B677844u, 256LL, v9);
  v12 = v11;
  if ( v11 )
  {
    *(_QWORD *)v11 = this;
    v13 = *a2;
    *(_QWORD *)(v11 + 16) = 0LL;
    *(_DWORD *)(v11 + 48) = 0;
    *(_DWORD *)(v11 + 52) = 0;
    *(_QWORD *)(v11 + 56) = 0LL;
    *(_QWORD *)(v11 + 64) = 0LL;
    *(_DWORD *)(v11 + 104) = 0;
    *(_DWORD *)(v11 + 108) = 0;
    *(struct _LUID *)(v11 + 8) = v13;
    v14 = (SESSION_ADAPTER *)v11;
    *(_QWORD *)(v11 + 72) = 0LL;
    *(_DWORD *)(v11 + 96) = 0;
    v15 = (_QWORD *)(v11 + 112);
    v15[1] = v15;
    *v15 = v15;
    v16 = SESSION_ADAPTER::Initialize(v14, a3);
    if ( v16 >= 0 )
    {
      v17 = this[2323];
      v18 = (DXGSESSIONDATA *)(v12 + 32);
      if ( *v17 != (DXGSESSIONDATA *)(this + 2322) )
        __fastfail(3u);
      *(_QWORD *)v18 = this + 2322;
      *(_QWORD *)(v12 + 40) = v17;
      *v17 = v18;
      this[2323] = (DXGSESSIONDATA **)v18;
      ++*(_DWORD *)(v12 + 48);
      if ( a4 )
        *a4 = (struct SESSION_ADAPTER *)v12;
      WdLogSingleEntry3(4LL, a2->HighPart, a2->LowPart, this);
      return 0LL;
    }
    SESSION_ADAPTER::`scalar deleting destructor'((SESSION_ADAPTER *)v12);
    return (unsigned int)v16;
  }
  else
  {
    WdLogSingleEntry3(6LL, a2->HighPart, a2->LowPart, this);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate session adapter for adapter 0x%I64x%08I64x in session 0x%I64x.",
      a2->HighPart,
      a2->LowPart,
      (__int64)this,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
