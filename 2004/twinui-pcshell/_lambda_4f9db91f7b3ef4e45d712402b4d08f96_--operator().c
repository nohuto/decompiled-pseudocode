/*
 * XREFs of _lambda_4f9db91f7b3ef4e45d712402b4d08f96_::operator() @ 0x18025DFBC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4f9db91f7b3ef4e45d712402b4d08f96___::Run @ 0x180261A80 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4f9db91f7b3ef4e45d712402b4d08f96___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??0ViewChangeListener@PeoplePaneViewManager@@QEAA@AEBU01@@Z @ 0x18025DC4C (--0ViewChangeListener@PeoplePaneViewManager@@QEAA@AEBU01@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_4f9db91f7b3ef4e45d712402b4d08f96_::operator()(__int64 a1)
{
  __int64 result; // rax
  const struct PeoplePaneViewManager::ViewChangeListener *v3; // rdi
  const struct PeoplePaneViewManager::ViewChangeListener *v4; // rbp
  __int64 v5; // rbx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  result = *(_QWORD *)a1;
  v3 = *(const struct PeoplePaneViewManager::ViewChangeListener **)(*(_QWORD *)a1 + 480LL);
  v4 = (const struct PeoplePaneViewManager::ViewChangeListener *)((char *)v3 + 16 * *(_QWORD *)(*(_QWORD *)a1 + 488LL));
  while ( v3 != v4 )
  {
    PeoplePaneViewManager::ViewChangeListener::ViewChangeListener((PeoplePaneViewManager::ViewChangeListener *)v9, v3);
    v5 = v9[0];
    v10 = v9[0];
    result = Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v10);
    v6 = *(_DWORD *)(a1 + 8);
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          if ( v8 == 1 )
            result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 48LL))(v5, *(_QWORD *)(a1 + 16));
        }
        else
        {
          result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 40LL))(v5, *(_QWORD *)(a1 + 16));
        }
      }
      else
      {
        result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 32LL))(
                   v5,
                   *(_QWORD *)(a1 + 16),
                   *(unsigned int *)(a1 + 48));
      }
    }
    else
    {
      result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 24LL))(
                 v5,
                 *(_QWORD *)(a1 + 16),
                 *(unsigned int *)(a1 + 48));
    }
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      v9[0] = 0LL;
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    v3 = (const struct PeoplePaneViewManager::ViewChangeListener *)((char *)v3 + 16);
  }
  return result;
}
