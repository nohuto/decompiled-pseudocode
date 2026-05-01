/*
 * XREFs of ?QueuePendingActivationForDestruction@WindowEventDispatcher@@AEAAX_K@Z @ 0x1802B6E3C
 * Callers:
 *     ?QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x180050EB8 (-QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet.c)
 *     ?RemovePendingActivation@WindowEventDispatcher@@UEAAJ_K@Z @ 0x1802B7D60 (-RemovePendingActivation@WindowEventDispatcher@@UEAAJ_K@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Insert@AEBV?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@?$list@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@1@AEBV?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800515A4 (--$_Insert@AEBV-$com_ptr_t@V-$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800579E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089674 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_394f447e3cb7383e15c0434f11a7d111_____lambda_394f447e3cb7383e15c0434f11a7d111___ @ 0x1802AE670 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_394f447e3cb73.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall WindowEventDispatcher::QueuePendingActivationForDestruction(WindowEventDispatcher *this, __int64 a2)
{
  void **v3; // rax
  void **i; // rbx
  _QWORD *v5; // rcx
  unsigned int v6; // edi
  __int64 *v7; // rax
  volatile int *v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rcx
  WindowEventDispatcher *v11; // [rsp+30h] [rbp-10h] BYREF
  WindowEventDispatcher *v12; // [rsp+38h] [rbp-8h] BYREF
  void *v13; // [rsp+50h] [rbp+10h] BYREF
  WindowEventDispatcher *v14; // [rsp+60h] [rbp+20h] BYREF

  v3 = (void **)*((_QWORD *)this + 63);
  for ( i = (void **)*v3; i != v3; i = (void **)*i )
  {
    v5 = i[2];
    if ( v5[1] == a2 )
    {
      v13 = i[2];
      if ( v5 )
        (*(void (__fastcall **)(_QWORD *))(*v5 + 8LL))(v5);
      *(_QWORD *)i[1] = *i;
      *((_QWORD *)*i + 1) = i[1];
      --*((_QWORD *)this + 64);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)i + 2);
      std::_Deallocate<16,0>(i, (const struct std::nothrow_t *)0x18);
      std::list<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>>::_Insert<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy> const &>(
        (__int64)this + 520,
        *((_QWORD *)this + 65),
        (__int64 *)&v13);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v13);
      break;
    }
  }
  v14 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
  v11 = this;
  v12 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
  v6 = *((_DWORD *)this + 125);
  v7 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_394f447e3cb7383e15c0434f11a7d111_____lambda_394f447e3cb7383e15c0434f11a7d111___(
         (__int64 *)&v13,
         &v11);
  v9 = *v7;
  *v7 = 0LL;
  v10 = (__int64)v13;
  if ( v13 )
  {
    v13 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
      v10,
      v8);
  }
  SHTaskPoolQueueTask(3LL, 2LL, v6);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
}
