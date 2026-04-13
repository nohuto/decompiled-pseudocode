/*
 * XREFs of ?CreateAction@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@PEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@PEAPEAUITargetedContentActionInternal@2345@@Z @ 0x180050580
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180006494 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18000728C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIContentManagementBroker@ContentManagement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180014210 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICont.c)
 *     ?_Buyheadnode@?$_Tree_alloc@$0A@U?$_Tree_base_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@XZ @ 0x180045C78 (-_Buyheadnode@-$_Tree_alloc@$0A@U-$_Tree_base_types@U-$pair@$$CBV-$basic_string@GU-_ea_180045C78.c)
 *     ?RuntimeClassInitialize@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@QEAAJW4ActionServices@Actions@CreativeFramework@@AEBUActionContext@78@PEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@@Z @ 0x180050834 (-RuntimeClassInitialize@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Wind.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UITargetedContentActionInternal@Internal@TargetedContent@Services@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180052F50 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180052F50.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB364 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionStatics::CreateAction(
        __int64 a1,
        HSTRING a2,
        __int64 a3,
        void **a4)
{
  PCWSTR StringRawBuffer; // rax
  const WCHAR *v7; // rdi
  wchar_t **v8; // rbx
  unsigned int v9; // r14d
  _QWORD *v10; // rax
  const char *v11; // r9
  volatile signed __int64 *v12; // rbx
  int Interface; // edi
  _QWORD *v14; // rdi
  volatile signed __int64 *v15; // rcx
  __int64 result; // rax
  unsigned int v17; // eax
  unsigned int v18; // [rsp+30h] [rbp-98h]
  __int64 v19; // [rsp+58h] [rbp-70h] BYREF
  void *v20; // [rsp+60h] [rbp-68h]
  __int64 v21; // [rsp+70h] [rbp-58h]
  unsigned __int64 v22; // [rsp+78h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  *a4 = 0LL;
  v19 = 0LL;
  v22 = 7LL;
  v21 = 0LL;
  LOWORD(v20) = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  v7 = StringRawBuffer;
  v8 = &off_180192590;
  try
  {
    while ( 1 )
    {
      if ( v8 == &off_1801926A0 )
        goto LABEL_21;
      if ( CompareStringOrdinal(*v8, -1, v7, -1, 1) == 2 )
        break;
      v8 += 2;
    }
    v9 = *((_DWORD *)v8 + 2);
    *a4 = 0LL;
    v10 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v10;
    if ( v10 )
    {
      v14 = v10 + 1;
      Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v10 + 1));
      *((_QWORD *)v12 + 8) = 1LL;
      *v12 = (volatile signed __int64)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>::`vftable'{for `IInspectable'};
      *v14 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>'};
      *((_QWORD *)v12 + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>::`vftable'{for `IWeakReferenceSource'};
      *((_QWORD *)v12 + 6) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>'};
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *v12 = (volatile signed __int64)&Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::`vftable'{for `IInspectable'};
      *v14 = &Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>'};
      *((_QWORD *)v12 + 5) = &Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::`vftable'{for `IWeakReferenceSource'};
      *((_QWORD *)v12 + 6) = &Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>'};
      *((_QWORD *)v12 + 9) = 0LL;
      *((_QWORD *)v12 + 10) = 0LL;
      *((_QWORD *)v12 + 11) = 0LL;
      *((_QWORD *)v12 + 12) = 0LL;
      *((_QWORD *)v12 + 11) = std::_Tree_alloc<0,std::_Tree_base_types<std::pair<std::wstring const,std::wstring>>>::_Buyheadnode();
      Interface = Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::RuntimeClassInitialize(
                    v12,
                    v9,
                    &v19,
                    a3);
      v15 = v12;
      if ( Interface >= 0 )
      {
        Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>::QueryInterface(
                      (Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl *)v12,
                      &GUID_e762b6be_f3b7_4977_bc20_4388a551b5b4,
                      a4);
        v15 = v12;
      }
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release(v15);
    }
    else
    {
      Interface = -2147024882;
    }
    if ( Interface < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x34,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\targetedcontentactions.cpp",
        (const char *)(unsigned int)Interface);
LABEL_21:
      v17 = wil::verify_hresult<long>(0x80070490);
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\ActionFactory.h",
        (const char *)v17);
      JUMPOUT(0x1800507EALL);
    }
    if ( v22 >= 8 )
      operator delete(v20);
    result = 0LL;
  }
  catch ( ... )
  {
    v18 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x36,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\targetedcontentactions.cpp",
            v11);
    if ( v22 >= 8 )
      operator delete(v20);
    return v18;
  }
  return result;
}
