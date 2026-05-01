/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_6bdb0a767824ae94d9b9ef25c3406932___ @ 0x180164D08
 * Callers:
 *     ?DropForeground@CFrameApplicationPresentation@@UEAAXW4DropForegroundOptions@@@Z @ 0x180165B20 (-DropForeground@CFrameApplicationPresentation@@UEAAXW4DropForegroundOptions@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_bccacf824c0b35a20e4c1bcfbe66ad1f___ @ 0x180164030 (Windows--Internal--ComTaskPool--QueueTask__lambda_bccacf824c0b35a20e4c1bcfbe66ad1f___.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_6bdb0a767824ae94d9b9ef25c3406932___(
        _DWORD *a1,
        __int128 *a2)
{
  __int128 v5; // xmm0
  unsigned int v6; // r8d
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v11; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _DWORD *v13; // [rsp+50h] [rbp+8h] BYREF

  if ( a1[14] == 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7FE,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
  else
  {
    v13 = a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
    v10[0] = (__int64)a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v10);
    v5 = *a2;
    v6 = a1[12];
    v10[1] = (__int64)a1;
    v11 = v5;
    v9 = Windows::Internal::ComTaskPool::QueueTask__lambda_bccacf824c0b35a20e4c1bcfbe66ad1f___(v8, v7, v6, v10);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v10);
    if ( v9 >= 0 )
      ++a1[53];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    return (unsigned int)v9;
  }
}
