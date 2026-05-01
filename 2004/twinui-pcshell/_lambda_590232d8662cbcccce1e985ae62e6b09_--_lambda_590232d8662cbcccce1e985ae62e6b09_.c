/*
 * XREFs of _lambda_590232d8662cbcccce1e985ae62e6b09_::_lambda_590232d8662cbcccce1e985ae62e6b09_ @ 0x1804330A4
 * Callers:
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAU2@$$ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V345@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@0@ZV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V123@@std@@@Z @ 0x180432F98 (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAU2@$$ZV-$ComPtr@UIV.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

_QWORD *__fastcall lambda_590232d8662cbcccce1e985ae62e6b09_::_lambda_590232d8662cbcccce1e985ae62e6b09_(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 *v6; // rcx
  _QWORD *v7; // rcx

  *a1 = *a2;
  v6 = a1 + 1;
  *v6 = *a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v6);
  a1[2] = 0LL;
  if ( a1 + 2 != a4 )
  {
    a1[2] = *a4;
    *a4 = 0LL;
  }
  v7 = a4 + 1;
  a1[3] = 0LL;
  if ( a1 + 3 != a4 + 1 )
  {
    a1[3] = *v7;
    *v7 = 0LL;
  }
  return a1;
}
