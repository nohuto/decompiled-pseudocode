/*
 * XREFs of ?NotifyGlobalComponentsForWindowStateChange@ViewWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x1802AE2F8
 * Callers:
 *     ?PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ @ 0x1802AE864 (-PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ.c)
 *     ?ViewDestroyed@ViewWrapperBase@@UEAAXXZ @ 0x1802B0FE0 (-ViewDestroyed@ViewWrapperBase@@UEAAXXZ.c)
 *     ?WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1802B1260 (-WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?WindowDestroyed@ViewWrapperBase@@UEAAXPEAUHWND__@@@Z @ 0x1802B1410 (-WindowDestroyed@ViewWrapperBase@@UEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_1af5501008b02ab9650fb6024cece8bf___ @ 0x1802AA870 (Windows--Internal--ComTaskPool--QueueTask__lambda_1af5501008b02ab9650fb6024cece8bf___.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall ViewWrapperBase::NotifyGlobalComponentsForWindowStateChange(__int64 a1, __int64 a2, int a3)
{
  _UNKNOWN **result; // rax
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11[2]; // [rsp+28h] [rbp-20h] BYREF
  int v12; // [rsp+38h] [rbp-10h]
  int v13; // [rsp+3Ch] [rbp-Ch]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  result = &retaddr;
  if ( (*(_BYTE *)(a1 + 464) & 1) == 0 )
  {
    v15 = a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v15);
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
    v10 = a1;
    v11[0] = a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v11);
    v11[1] = a2;
    v12 = a3;
    v13 = v7;
    Windows::Internal::ComTaskPool::QueueTask__lambda_1af5501008b02ab9650fb6024cece8bf___(
      v9,
      v8,
      *(_DWORD *)(a1 + 184),
      (__int64)&v10);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v11);
    return (_UNKNOWN **)Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  }
  return result;
}
