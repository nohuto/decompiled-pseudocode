/*
 * XREFs of ?GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z @ 0x1C0126EF8
 * Callers:
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C0126E28 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW@@@Z @ 0x1C0132D20 (-AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C0132F80 (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 *     ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z @ 0x1C015A320 (-RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z.c)
 * Callees:
 *     <none>
 */

struct DISPLAY_SOURCE *__fastcall SESSION_ADAPTER::GetDisplaySource(SESSION_ADAPTER *this, int a2)
{
  SESSION_ADAPTER *i; // rax

  for ( i = (SESSION_ADAPTER *)*((_QWORD *)this + 14);
        i != (SESSION_ADAPTER *)((char *)this + 112);
        i = *(SESSION_ADAPTER **)i )
  {
    if ( *((_DWORD *)i - 4) == a2 )
      return (SESSION_ADAPTER *)((char *)i - 32);
  }
  return 0LL;
}
