/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_9b5424b1010544f2b98d3b56c8ee7c3a___ @ 0x18009825C
 * Callers:
 *     wistd::__function::__func__lambda_a5b84b2d7954a875965392f225e309d5__void___cdecl(void)_::operator() @ 0x180098A10 (wistd--__function--__func__lambda_a5b84b2d7954a875965392f225e309d5__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800579E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5be1d5d2368b83054635e0a876a7d1e7_____lambda_5be1d5d2368b83054635e0a876a7d1e7___ @ 0x180097F48 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5be1d5d2368b8.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ @ 0x1801E87D0 (-InternalAddRef@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1801E87F0 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_9b5424b1010544f2b98d3b56c8ee7c3a___(__int64 a1)
{
  __int64 v1; // r10
  __int64 v2; // r11
  __int64 *v3; // rax
  volatile int *v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  _QWORD v10[2]; // [rsp+38h] [rbp-10h] BYREF
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = a1;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(&v12);
  v9 = v1;
  v10[0] = v2;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(v10);
  v3 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5be1d5d2368b83054635e0a876a7d1e7_____lambda_5be1d5d2368b83054635e0a876a7d1e7___(
         &v11,
         &v9);
  v5 = *v3;
  *v3 = 0LL;
  v6 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
      v6,
      v4);
  }
  v7 = SHTaskPoolQueueTask(3LL, 0LL, 0LL);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(v10);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v12);
  return v7;
}
