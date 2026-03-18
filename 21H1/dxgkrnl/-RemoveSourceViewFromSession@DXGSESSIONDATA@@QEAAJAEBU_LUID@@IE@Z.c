/*
 * XREFs of ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z @ 0x1C015A320
 * Callers:
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C015A28C (DxgkRemoveSessionViewForCurrentSession.c)
 * Callees:
 *     ??_GSESSION_VIEW@@QEAAPEAXI@Z @ 0x1C0011CFC (--_GSESSION_VIEW@@QEAAPEAXI@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C0126E28 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C0126EC0 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z @ 0x1C0126EF8 (-GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z.c)
 *     ?RemoveAllDisplaySource@SESSION_VIEW@@QEAAXXZ @ 0x1C013322C (-RemoveAllDisplaySource@SESSION_VIEW@@QEAAXXZ.c)
 *     ?RemoveDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@PEAE@Z @ 0x1C029A920 (-RemoveDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@PEAE@Z.c)
 */

__int64 __fastcall DXGSESSIONDATA::RemoveSourceViewFromSession(
        DXGSESSIONDATA *this,
        const struct _LUID *a2,
        unsigned int a3,
        char a4)
{
  unsigned int v4; // r15d
  __int64 v5; // rbp
  SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DISPLAY_SOURCE *DisplaySource; // rsi
  DXGSESSIONDATA **SessionViewFromSource; // rax
  DXGSESSIONDATA **v14; // rbx
  DXGSESSIONDATA *v15; // rdx
  DXGSESSIONDATA ***v16; // r8
  _QWORD *v18; // rax
  unsigned __int8 v19[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  v5 = a3;
  v19[0] = 0;
  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(this, a2);
  if ( SessionAdapterFromLuid )
    DisplaySource = SESSION_ADAPTER::GetDisplaySource(SessionAdapterFromLuid, v5);
  else
    DisplaySource = 0LL;
  if ( DisplaySource )
  {
    SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(this, a2, v5);
    v14 = SessionViewFromSource;
    if ( SessionViewFromSource )
    {
      if ( a4 )
      {
        SESSION_VIEW::RemoveAllDisplaySource((SESSION_VIEW *)SessionViewFromSource);
      }
      else
      {
        v4 = SESSION_VIEW::RemoveDisplaySource((SESSION_VIEW *)SessionViewFromSource, DisplaySource, v19);
        if ( !v19[0] )
          return v4;
      }
      v15 = v14[1];
      if ( *((DXGSESSIONDATA ***)v15 + 1) != v14 + 1 || (v16 = (DXGSESSIONDATA ***)v14[2], *v16 != v14 + 1) )
        __fastfail(3u);
      *v16 = (DXGSESSIONDATA **)v15;
      *((_QWORD *)v15 + 1) = v16;
      SESSION_VIEW::`scalar deleting destructor'((SESSION_VIEW *)v14);
      return v4;
    }
  }
  v18 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
  v18[3] = v5;
  v18[4] = a2->HighPart;
  v18[5] = a2->LowPart;
  v18[6] = this;
  v18[7] = -1073741811LL;
  WdLogEvent5_WdError(v18);
  return 3221225485LL;
}
