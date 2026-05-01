/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_bb781a8a8a15c0cf7ff5e1563f68d9d3___ @ 0x1801E736C
 * Callers:
 *     _lambda_c090d7652c135c9cd65a3cd3ef3aa100_::operator() @ 0x1801E80BC (_lambda_c090d7652c135c9cd65a3cd3ef3aa100_--operator().c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180062AD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180139F1C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedE.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ab019fef4e894f5be537f354fd382886_____lambda_ab019fef4e894f5be537f354fd382886___ @ 0x1801E6EDC (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ab019fef4e894.c)
 *     ?InternalAddRef@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ @ 0x1801E9310 (-InternalAddRef@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1801E9330 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_bb781a8a8a15c0cf7ff5e1563f68d9d3___(
        __int64 a1,
        volatile int *a2)
{
  volatile int *v2; // r10
  __int64 v3; // r11
  __int64 *v4; // rax
  volatile int *v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned int v8; // edi
  volatile int *v10; // [rsp+30h] [rbp-18h] BYREF
  _QWORD v11[2]; // [rsp+38h] [rbp-10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = a1;
  v2 = a2;
  v3 = a1;
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *>,Microsoft::WRL::FtmBase>::InternalAddRef(
      a1,
      a2);
  v10 = v2;
  v11[0] = v3;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(v11);
  v4 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ab019fef4e894f5be537f354fd382886_____lambda_ab019fef4e894f5be537f354fd382886___(
         &v12,
         &v10);
  v6 = *v4;
  *v4 = 0LL;
  v7 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
      v7,
      v5);
  }
  v8 = SHTaskPoolQueueTask(3LL, 0LL, 0LL);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(v11);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v13);
  return v8;
}
