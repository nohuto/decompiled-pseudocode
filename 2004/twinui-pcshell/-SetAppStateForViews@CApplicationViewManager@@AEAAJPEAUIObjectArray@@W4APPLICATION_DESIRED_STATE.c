/*
 * XREFs of ?SetAppStateForViews@CApplicationViewManager@@AEAAJPEAUIObjectArray@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x18018FC60
 * Callers:
 *     ?SetViewStateForDesiredAppState@CApplicationViewManager@@UEAAJPEBGW4APPLICATION_DESIRED_STATE@@@Z @ 0x18018FF80 (-SetViewStateForDesiredAppState@CApplicationViewManager@@UEAAJPEBGW4APPLICATION_DESIRED_STATE@@@.c)
 *     ?SetViewStateForDesiredAppStateByHostId@CApplicationViewManager@@UEAAJ_KW4APPLICATION_DESIRED_STATE@@@Z @ 0x180190040 (-SetViewStateForDesiredAppStateByHostId@CApplicationViewManager@@UEAAJ_KW4APPLICATION_DESIRED_ST.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_f55419f36c5768dba08f90ed6dc615aa___ @ 0x18018CBC4 (ShellPositionerHelpers--PerformCallbackOnView__lambda_f55419f36c5768dba08f90ed6dc615aa___.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationViewManager::SetAppStateForViews(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rdi
  unsigned int v6; // r12d
  int v7; // ebx
  __int64 v8; // rdx
  int v10; // esi
  unsigned int v11; // r14d
  int v12; // eax
  int v13; // r12d
  void (__fastcall *v14)(__int64, GUID *, IUnknown **); // rbx
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  IUnknown *punk; // [rsp+38h] [rbp-18h] BYREF
  __int64 v17; // [rsp+40h] [rbp-10h] BYREF
  int v18; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  unsigned int v21; // [rsp+98h] [rbp+48h] BYREF
  int v22; // [rsp+A8h] [rbp+58h]

  v5 = a1;
  v6 = 0;
  v22 = 0;
  v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v21);
  if ( v7 >= 0 )
  {
    if ( v21 )
    {
      v10 = 0;
      v11 = 0;
      while ( 1 )
      {
        v15 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
        v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL))(
                a2,
                v11,
                &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
                &v15);
        if ( v12 >= 0 )
        {
          v17 = v15;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v17);
          v18 = a3;
          punk = 0LL;
          v13 = v6 | 2;
          v22 = v13;
          v14 = *(void (__fastcall **)(__int64, GUID *, IUnknown **))(*(_QWORD *)(v5 + 32) + 32LL);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
          v14(v5 + 32, &GUID_00000000_0000_0000_c000_000000000046, &punk);
          v6 = v13 & 0xFFFFFFFC | 1;
          v7 = ShellPositionerHelpers::PerformCallbackOnView__lambda_f55419f36c5768dba08f90ed6dc615aa___(
                 punk,
                 v15,
                 &v17);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
          if ( a3 == 1 && v7 >= 0 )
          {
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
            return (unsigned int)v7;
          }
          if ( v10 >= 0 )
            v10 = v7;
          v5 = a1;
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x3B3,
            (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
            (const char *)(unsigned int)v12);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
        if ( ++v11 >= v21 )
          return (unsigned int)v10;
      }
    }
    v7 = -2147319765;
    v8 = 941LL;
  }
  else
  {
    v8 = 940LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)v7);
  return (unsigned int)v7;
}
