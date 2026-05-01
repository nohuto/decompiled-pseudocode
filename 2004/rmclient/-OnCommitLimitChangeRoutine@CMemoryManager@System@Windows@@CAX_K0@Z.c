/*
 * XREFs of ?OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CAX_K0@Z @ 0x1800028D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$DoInvoke@V_lambda_46c8720b1b7964c7fc659f01aa7c951a_@@@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_46c8720b1b7964c7fc659f01aa7c951a_@@@Z @ 0x180002960 (--$DoInvoke@V_lambda_46c8720b1b7964c7fc659f01aa7c951a_@@@-$EventSource@U-$IEventHandler@PEAVAppM.c)
 *     ??$Make@VAppMemoryUsageLimitChangingEventArgs@System@Windows@@AEA_KAEA_K@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAppMemoryUsageLimitChangingEventArgs@System@Windows@@@12@AEA_K0@Z @ 0x180002A00 (--$Make@VAppMemoryUsageLimitChangingEventArgs@System@Windows@@AEA_KAEA_K@Details@WRL@Microsoft@@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800088F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLi.c)
 *     _guard_dispatch_icall_nop @ 0x18000AB50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::System::CMemoryManager::OnCommitLimitChangeRoutine(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v6[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+60h] [rbp+8h] BYREF
  __int64 v8; // [rsp+68h] [rbp+10h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  v8 = a2;
  v7 = a1;
  v2 = (__int64 *)Microsoft::WRL::Details::Make<Windows::System::AppMemoryUsageLimitChangingEventArgs,unsigned __int64 &,unsigned __int64 &>(
                    &v9,
                    &v7,
                    &v8);
  v3 = *v2;
  *v2 = 0LL;
  v4 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase>::Release();
  }
  if ( v3 )
  {
    v5 = v3;
    v6[0] = &v10;
    v10 = 0LL;
    v6[1] = &v5;
    Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_46c8720b1b7964c7fc659f01aa7c951a_>(
      v4,
      v6);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
