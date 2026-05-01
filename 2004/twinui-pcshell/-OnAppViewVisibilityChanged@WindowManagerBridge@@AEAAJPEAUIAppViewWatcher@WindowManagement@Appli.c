/*
 * XREFs of ?OnAppViewVisibilityChanged@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppViewVisibilityChangedEventArgs@3456@@Z @ 0x18006F650
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180062AD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_5214346d2c043ae4113630c4157a4745____long_&__lambda_5214346d2c043ae4113630c4157a4745___ @ 0x18006F738 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_5214346.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowManagerBridge::OnAppViewVisibilityChanged(
        WindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewVisibilityChangedEventArgs *a3)
{
  DWORD CurrentThreadId; // esi
  unsigned int v4; // edi
  __int64 *v5; // rax
  volatile int *v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v9; // edi
  APTTYPEQUALIFIER pAptQualifier; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v14; // [rsp+70h] [rbp+20h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewVisibilityChangedEventArgs *v15; // [rsp+80h] [rbp+30h] BYREF
  APTTYPE pAptType; // [rsp+88h] [rbp+38h] BYREF

  v15 = a3;
  v13[0] = this;
  v13[1] = &v15;
  CurrentThreadId = GetCurrentThreadId();
  if ( CoGetApartmentType(&pAptType, &pAptQualifier) < 0 || pAptType == APTTYPE_STA || pAptType == APTTYPE_MAINSTA )
    v4 = 0;
  else
    v4 = 4;
  v14 = 0;
  v5 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_5214346d2c043ae4113630c4157a4745____long____lambda_5214346d2c043ae4113630c4157a4745___(
                    &v12,
                    &v14,
                    v13);
  v7 = *v5;
  *v5 = 0LL;
  v8 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
      v8,
      v6);
  }
  v9 = SHTaskPoolQueueTask(v4, 32LL, CurrentThreadId);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v9 >= 0 )
    return v14;
  return (unsigned int)v9;
}
