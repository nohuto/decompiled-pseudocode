/*
 * XREFs of ?GetCurrentActivityForViewAsync@TaskFlowImmersiveShellBroker@@UEAAJ_KUShellTabId@Tabs@ComposableShell@Internal@Windows@@PEAPEAU?$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@6@@Z @ 0x180231CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults__Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults___Windows::Internal::ComTaskPoolHandler__lambda_48084b1ec6f75312154089ee08312ce7___ @ 0x18022DCBC (Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult_Windows--Inte.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskFlowImmersiveShellBroker::GetCurrentActivityForViewAsync(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 *a4)
{
  __int64 *v7; // rbx
  __int64 v8; // r8
  __int128 v9; // xmm0
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  const char *v13; // r9
  __int64 result; // rax
  __int64 v15[2]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v16; // [rsp+40h] [rbp-48h] BYREF
  __int64 v17; // [rsp+50h] [rbp-38h] BYREF
  __int128 v18; // [rsp+58h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  try
  {
    if ( *(_DWORD *)(a1 + 176) != 1 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        297LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)0x80004004LL);
    v15[0] = *(_QWORD *)(a1 + 184);
    v7 = (__int64 *)v15[0];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v15);
    v9 = *a3;
    if ( !v7 )
    {
      v17 = a2;
      v18 = v9;
      *(_QWORD *)&v16 = 0x8000000003LL;
      DWORD2(v16) = 0;
      v10 = Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults__Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults___Windows::Internal::ComTaskPoolHandler__lambda_48084b1ec6f75312154089ee08312ce7___(
              (__int64)&v16,
              a4,
              v8,
              (__int64)&v17);
      if ( v10 >= 0 )
      {
LABEL_9:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
        return 0LL;
      }
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        322LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v10);
    }
    v11 = *v7;
    v16 = v9;
    v12 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int128 *, __int64 *))(v11 + 72))(v7, a2, &v16, a4);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        326LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v12);
    goto LABEL_9;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x14B,
                           (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
                           v13);
  }
  return result;
}
