/*
 * XREFs of ?RemoveDuckingManagerGainStage@CAudioSession@@UEAAJPEAUIDuckingController@@_NPEA_J@Z @ 0x18006E490
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800239A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x1800239C0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     std::forward_list_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy_____::remove_if__lambda_5fdc09f974c9fb8661da7e153f1f57b6___ @ 0x18006D920 (std--forward_list_wil--com_ptr_t_CPBMStreamClassVolumeGainStage_wil--err_returncode_policy__std-.c)
 *     ?clear@?$forward_list@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x18006E63C (-clear@-$forward_list@V-$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSession::RemoveDuckingManagerGainStage(
        CAudioSession *this,
        struct IDuckingController *a2,
        char a3,
        __int64 *a4)
{
  _QWORD *i; // rbx
  __int64 v7; // rax
  __int64 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 **v12[2]; // [rsp+20h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+50h] [rbp+20h] BYREF
  struct IDuckingController *v14; // [rsp+58h] [rbp+28h] BYREF
  __int64 *v15; // [rsp+68h] [rbp+38h] BYREF

  v15 = a4;
  v14 = a2;
  if ( a4 )
    *a4 = 0LL;
  Microsoft::WRL::Wrappers::CriticalSection::Lock((struct _RTL_CRITICAL_SECTION *)((char *)this + 408), &v13);
  if ( a3 )
  {
    if ( v15 )
    {
      for ( i = (_QWORD *)*((_QWORD *)this + 56); i; i = (_QWORD *)*i )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(i[1] + 56LL) + 16LL))(*(_QWORD *)(i[1] + 56LL));
        v8 = v15;
        v9 = *v15;
        if ( *v15 <= v7 )
        {
          v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(i[1] + 56LL) + 16LL))(*(_QWORD *)(i[1] + 56LL));
          v8 = v15;
          v9 = v10;
        }
        *v8 = v9;
      }
    }
    std::forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::clear((char *)this + 448);
  }
  else
  {
    v12[0] = (__int64 **)&v14;
    v12[1] = &v15;
    std::forward_list_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy_____::remove_if__lambda_5fdc09f974c9fb8661da7e153f1f57b6___(
      (_QWORD *)this + 56,
      v12);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v13);
  return 0LL;
}
