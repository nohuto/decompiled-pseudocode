/*
 * XREFs of ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C011DF40
 * Callers:
 *     ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z @ 0x1C00DDFC0 (-RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z.c)
 *     ?AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW@@@Z @ 0x1C00DE148 (-AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW.c)
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C011C070 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C011DEA8 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C013F06C (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C014B154 (DxgkUseAdapterViewInCurrentSession.c)
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAVDXGADAPTER@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C014B3B4 (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAVDXGADAPTER@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1C014B4F0 (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C01657D8 (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C029EAB8 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 * Callees:
 *     <none>
 */

struct SESSION_ADAPTER *__fastcall DXGSESSIONDATA::GetSessionAdapterFromLuid(
        DXGSESSIONDATA *this,
        const struct _LUID *a2)
{
  char *v2; // r9
  _QWORD *v3; // rcx

  v2 = (char *)this + 18560;
  v3 = (_QWORD *)*((_QWORD *)this + 2320);
  if ( v3 == (_QWORD *)v2 )
    return 0LL;
  while ( *((_DWORD *)v3 - 6) != a2->LowPart || *((_DWORD *)v3 - 5) != a2->HighPart )
  {
    v3 = (_QWORD *)*v3;
    if ( v3 == (_QWORD *)v2 )
      return 0LL;
  }
  return (struct SESSION_ADAPTER *)(v3 - 4);
}
