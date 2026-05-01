/*
 * XREFs of ?QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x180020B94
 * Callers:
 *     ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x180020AD8 (-PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z.c)
 *     ?OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z @ 0x180024490 (-OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94__&___lambda_cdc0901c64cfd553c7adcb23aa5d4b94__&_ @ 0x180020C70 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94_.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006A5B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CImmersiveApp::CImmersiveWindowCollection::QueueAyncPositionReconciliation(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  __int64 v2; // rbx
  __int64 *CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94______lambda_cdc0901c64cfd553c7adcb23aa5d4b94; // rax
  __int64 v4; // rdi
  __int64 v5; // rcx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h]

  v2 = *((_QWORD *)this + 20);
  v9 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v6[0] = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v6[1] = this;
  CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94______lambda_cdc0901c64cfd553c7adcb23aa5d4b94 = (__int64 *)Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94______lambda_cdc0901c64cfd553c7adcb23aa5d4b94____(&v7, v6);
  v4 = *CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94______lambda_cdc0901c64cfd553c7adcb23aa5d4b94;
  v8 = *CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94______lambda_cdc0901c64cfd553c7adcb23aa5d4b94;
  *CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94______lambda_cdc0901c64cfd553c7adcb23aa5d4b94 = 0LL;
  v5 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(v5);
  }
  if ( v4 )
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 19) + 232LL))(*((_QWORD *)this + 19), v4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  if ( v6[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6[0] + 16LL))(v6[0]);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
}
