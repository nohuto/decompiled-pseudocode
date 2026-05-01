/*
 * XREFs of _lambda_37f27d7232610e21b40ee608124aee94_::operator() @ 0x180140108
 * Callers:
 *     wistd::__function::__func__lambda_37f27d7232610e21b40ee608124aee94__void___cdecl(_SEB_EVENT_HEADER_const_&)_::operator() @ 0x1801402A0 (wistd--__function--__func__lambda_37f27d7232610e21b40ee608124aee94__void___cdecl(_SEB_EVENT_HEAD.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800579E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_96cb8f9aac58871247b5c84caff3708b_____lambda_96cb8f9aac58871247b5c84caff3708b___ @ 0x18013F55C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_96cb8f9aac588.c)
 */

__int64 __fastcall lambda_37f27d7232610e21b40ee608124aee94_::operator()(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // rcx
  bool v3; // al
  __int64 *v4; // rax
  volatile int *v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rcx
  DWORD CurrentThreadId; // eax
  int v9; // edi
  bool v11[8]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = (*a2 & 2) != 0;
  v12 = v2;
  v11[0] = v3;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v4 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_96cb8f9aac58871247b5c84caff3708b_____lambda_96cb8f9aac58871247b5c84caff3708b___(
         &v14,
         v11);
  v6 = *v4;
  *v4 = 0LL;
  v7 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
      v7,
      v5);
  }
  CurrentThreadId = GetCurrentThreadId();
  v9 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x9D,
      (__int64)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
      (const char *)(unsigned int)v9);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
}
