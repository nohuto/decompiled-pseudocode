/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_f3e3e2fda0c649fac664c2d9a1540e88___ @ 0x180165098
 * Callers:
 *     ?EnsureSizeConstraints@CFrameApplicationPresentation@@UEAAJXZ @ 0x180165B50 (-EnsureSizeConstraints@CFrameApplicationPresentation@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_efacefe1f9a132f9192ecba0e8d88571___ @ 0x1801640B8 (Windows--Internal--ComTaskPool--QueueTask__lambda_efacefe1f9a132f9192ecba0e8d88571___.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_f3e3e2fda0c649fac664c2d9a1540e88___(
        _DWORD *a1,
        __int64 a2)
{
  int v4; // ebx
  unsigned int v5; // r8d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _DWORD *v11; // [rsp+50h] [rbp+8h] BYREF

  if ( a1[14] == 2 )
  {
    v4 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7FE,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
  }
  else
  {
    v11 = a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
    v9[0] = (__int64)a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v9);
    v5 = a1[12];
    v9[1] = (__int64)a1;
    v9[2] = a2;
    v4 = Windows::Internal::ComTaskPool::QueueTask__lambda_efacefe1f9a132f9192ecba0e8d88571___(v7, v6, v5, v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v9);
    if ( v4 >= 0 )
      ++a1[53];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  }
  return (unsigned int)v4;
}
