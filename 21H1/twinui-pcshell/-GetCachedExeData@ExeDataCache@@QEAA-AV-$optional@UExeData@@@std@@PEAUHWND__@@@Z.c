/*
 * XREFs of ?GetCachedExeData@ExeDataCache@@QEAA?AV?$optional@UExeData@@@std@@PEAUHWND__@@@Z @ 0x18043905C
 * Callers:
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x18043A0F8 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     memset_0 @ 0x18008D658 (memset_0.c)
 *     ??$find@PEAUIWin32ApplicationView@@U?$less@X@std@@H@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@1@AEBQEAUIWin32ApplicationView@@@Z @ 0x1802470B4 (--$find@PEAUIWin32ApplicationView@@U-$less@X@std@@H@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIWin32.c)
 *     ??0ExeData@@QEAA@AEBU0@@Z @ 0x18043844C (--0ExeData@@QEAA@AEBU0@@Z.c)
 */

// Hidden C++ exception states: #wind=1
ExeData *__fastcall ExeDataCache::GetCachedExeData(PSRWLOCK SRWLock, ExeData *this, unsigned __int64 a3)
{
  __int64 *v6; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v7; // [rsp+40h] [rbp+18h] BYREF
  PSRWLOCK v8; // [rsp+48h] [rbp+20h]

  v7 = a3;
  AcquireSRWLockShared(SRWLock);
  v8 = SRWLock;
  std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>>>,0>>::find<IWin32ApplicationView *,std::less<void>,int>(
    (__int64 **)&SRWLock[1],
    &v6,
    &v7);
  if ( v6 == SRWLock[1].Ptr )
  {
    memset_0(this, 0, 0x50uLL);
    *(_BYTE *)this = 0;
    *((_BYTE *)this + 72) = 0;
  }
  else
  {
    ExeData::ExeData(this, (const struct ExeData *)(v6 + 5));
    *((_BYTE *)this + 72) = 1;
  }
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return this;
}
