/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_7c0ea6bcd92fa0f22b391c2e3237e792___ @ 0x18023D9D0
 * Callers:
 *     wistd::__function::__func__lambda_cfd27ea05118e91876b01966f7f941a5__void___cdecl(enum_Windows::Internal::Shell::Holographic::ShellState_const_&)_::operator() @ 0x18023F720 (wistd--__function--__func__lambda_cfd27ea05118e91876b01966f7f941a5__void___cdecl(enum_Windows--I.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180062AD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180139F1C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedE.c)
 *     ?InternalAddRef@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ @ 0x1801E9310 (-InternalAddRef@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1801E9330 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ba7657056a16329b8a6e21579ce82d14_____lambda_ba7657056a16329b8a6e21579ce82d14___ @ 0x18023D03C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ba7657056a163.c)
 */

__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_7c0ea6bcd92fa0f22b391c2e3237e792___(
        __int64 a1,
        volatile int *a2)
{
  volatile int *v2; // r11
  __int64 v3; // r10
  __int128 v4; // xmm0
  __int64 *v5; // rax
  volatile int *v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF

  v14 = a1;
  v2 = a2;
  v3 = a1;
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *>,Microsoft::WRL::FtmBase>::InternalAddRef(
      a1,
      a2);
  v4 = *(_OWORD *)v2;
  v12[0] = v3;
  v11 = v4;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(v12, a2);
  v5 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ba7657056a16329b8a6e21579ce82d14_____lambda_ba7657056a16329b8a6e21579ce82d14___(
         &v13,
         &v11);
  v7 = *v5;
  *v5 = 0LL;
  v8 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
      v8,
      v6);
  }
  v9 = SHTaskPoolQueueTask(3LL, 0LL, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(v12);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v14);
  return v9;
}
