/*
 * XREFs of _lambda_fa6b829d8739de4b5d4653aa8baa7884_::operator() @ 0x180158D68
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_fa6b829d8739de4b5d4653aa8baa7884__void_::_Do_call @ 0x180167410 (std--_Func_impl_no_alloc__lambda_fa6b829d8739de4b5d4653aa8baa7884__void_--_Do_call.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001054C (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180040458 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x1800796B8 (-erase@-$vector@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIMPCIn.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@0@@Z @ 0x1800CD87C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graph.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18014E490 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18015184C (--$_Emplace_reallocate@AEBV-$ComPtr@UISpatialGraphNodePoseValidityChangedCallback@Holographic@In.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_fa6b829d8739de4b5d4653aa8baa7884_::operator()(unsigned int *a1)
{
  __int64 *v2; // rsi
  RTL_SRWLOCK *v3; // r12
  _QWORD *v4; // rbx
  __int64 *v5; // rdi
  int v6; // r14d
  __int64 *v7; // rbx
  __int64 *i; // r14
  int v9; // eax
  __int128 v10; // [rsp+20h] [rbp-20h] BYREF
  __int64 *v11; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v13; // [rsp+80h] [rbp+40h] BYREF
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // [rsp+88h] [rbp+48h] BYREF
  RTL_SRWLOCK *v15; // [rsp+90h] [rbp+50h]
  __int64 v16; // [rsp+98h] [rbp+58h] BYREF

  v10 = 0LL;
  v2 = 0LL;
  v11 = 0LL;
  v3 = (RTL_SRWLOCK *)(*(_QWORD *)a1 + 232LL);
  AcquireSRWLockExclusive(v3);
  v15 = v3;
  v4 = *(_QWORD **)(*(_QWORD *)a1 + 240LL);
  v5 = 0LL;
  while ( v4 != *(_QWORD **)(*(_QWORD *)a1 + 248LL) )
  {
    v13 = 0LL;
    v14 = 0LL;
    v6 = Microsoft::WRL::WeakRef::As<IInspectable>(v4, (__int64 *)&v14);
    if ( v6 >= 0 )
    {
      if ( v14 )
      {
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v13);
        v6 = (**v14)(v14, &GUID_5e6bdcd3_fd4b_4abe_9fa8_9177211026a6, &v13);
      }
      else
      {
        v6 = -2147467259;
      }
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v14);
    if ( v6 >= 0 && v13 )
    {
      if ( v2 == v5 )
      {
        std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePoseValidityChangedCallback>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePoseValidityChangedCallback> const &>(
          (__int64 **)&v10,
          v5,
          &v13);
        v2 = v11;
        v5 = (__int64 *)*((_QWORD *)&v10 + 1);
      }
      else
      {
        *v5 = v13;
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v5++);
        *((_QWORD *)&v10 + 1) = v5;
      }
      ++v4;
    }
    else
    {
      v4 = (_QWORD *)*std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::erase(
                        *(_QWORD *)a1 + 240LL,
                        &v16,
                        (__int64)v4);
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v13);
  }
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  v7 = (__int64 *)v10;
  for ( i = (__int64 *)v10; i != v5; ++i )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD))(*(_QWORD *)*i + 48LL))(*i, a1 + 2, a1[6]);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        2094LL,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)(unsigned int)v9);
  }
  if ( v7 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal>>>(
      v7,
      v5);
    std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)(((char *)v2 - (char *)v7) & 0xFFFFFFFFFFFFFFF8uLL));
  }
}
