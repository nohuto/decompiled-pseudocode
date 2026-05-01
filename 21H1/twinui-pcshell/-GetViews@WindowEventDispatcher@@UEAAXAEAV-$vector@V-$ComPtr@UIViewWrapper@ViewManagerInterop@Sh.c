/*
 * XREFs of ?GetViews@WindowEventDispatcher@@UEAAXAEAV?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180294890
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18009E04C (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1801210F0 (--$_Emplace_reallocate@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIApplic.c)
 *     ?reserve@?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAX_K@Z @ 0x18028C3F4 (-reserve@-$vector@V-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Micros.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall WindowEventDispatcher::GetViews(RTL_SRWLOCK *a1, __int64 *a2)
{
  RTL_SRWLOCK *v4; // rbp
  _QWORD *Ptr; // rsi
  _QWORD *v6; // r14
  __int64 v7; // rbx
  __int64 *v8; // rdx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF
  RTL_SRWLOCK *v11; // [rsp+68h] [rbp+20h]

  v4 = a1 + 54;
  AcquireSRWLockShared(a1 + 54);
  v11 = v4;
  std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>::reserve(
    (__int64)a2,
    ((char *)a1[42].Ptr - (char *)a1[41].Ptr) >> 3);
  Ptr = a1[41].Ptr;
  v6 = a1[42].Ptr;
  while ( Ptr != v6 )
  {
    wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
      Ptr,
      (__int64)&v10);
    v7 = v10;
    v9 = v10;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
    v8 = (__int64 *)a2[1];
    if ( (__int64 *)a2[2] == v8 )
    {
      std::vector<Microsoft::WRL::ComPtr<IApplicationView>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IApplicationView>>(
        a2,
        (__int64)v8,
        &v9);
    }
    else
    {
      *v8 = 0LL;
      if ( v8 != &v9 )
      {
        *v8 = v7;
        v9 = 0LL;
      }
      a2[1] += 8LL;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v10);
    ++Ptr;
  }
  if ( v4 )
    ReleaseSRWLockShared(v4);
}
