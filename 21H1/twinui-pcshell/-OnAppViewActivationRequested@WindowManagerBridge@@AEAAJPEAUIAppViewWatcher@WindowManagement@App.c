/*
 * XREFs of ?OnAppViewActivationRequested@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppViewActivationRequestedEventArgs@3456@@Z @ 0x1800356D0
 * Callers:
 *     <none>
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_598620ad4c28e151a84835e44a0781b3____long_&__lambda_598620ad4c28e151a84835e44a0781b3___ @ 0x1800357B8 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_598620a.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800623A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowManagerBridge::OnAppViewActivationRequested(
        WindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *a3)
{
  DWORD CurrentThreadId; // esi
  unsigned int v4; // edi
  __int64 *v5; // rax
  __int64 v6; // rbx
  int v7; // edi
  APTTYPEQUALIFIER pAptQualifier; // [rsp+30h] [rbp-20h] BYREF
  __int64 v10; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v11[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v12; // [rsp+70h] [rbp+20h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *v13; // [rsp+80h] [rbp+30h] BYREF
  APTTYPE pAptType; // [rsp+88h] [rbp+38h] BYREF

  v13 = a3;
  v11[0] = this;
  v11[1] = &v13;
  CurrentThreadId = GetCurrentThreadId();
  if ( CoGetApartmentType(&pAptType, &pAptQualifier) < 0 || pAptType == APTTYPE_STA || pAptType == APTTYPE_MAINSTA )
    v4 = 0;
  else
    v4 = 4;
  v12 = 0;
  v5 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_598620ad4c28e151a84835e44a0781b3____long____lambda_598620ad4c28e151a84835e44a0781b3___(
                    &v10,
                    &v12,
                    v11);
  v6 = *v5;
  *v5 = 0LL;
  if ( v10 )
  {
    v10 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
  }
  v7 = SHTaskPoolQueueTask(v4, 32LL, CurrentThreadId);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v7 >= 0 )
    return v12;
  return (unsigned int)v7;
}
