/*
 * XREFs of ?_OnLauncherVisibilityChanged@CImmersiveMode@@AEAAXXZ @ 0x180017E88
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b9e009682738098b72449fb04d8aa113___::Run @ 0x180017960 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b9e009682738098b72449fb04d8aa113___--Run.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180014EB0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@Z @ 0x180017970 (-UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003EF48 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007AEDC (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CImmersiveMode::_OnLauncherVisibilityChanged(CImmersiveMode *this)
{
  void (__fastcall *v2)(char *, GUID *, IUnknown **); // rbx
  void *v3; // rbx
  void (__fastcall *v4)(void *, __int64 *); // rdi
  unsigned __int64 i; // r14
  __int64 v6; // rdi
  int v7; // ebx
  int v8; // [rsp+60h] [rbp+38h] BYREF
  void *ppvOut; // [rsp+68h] [rbp+40h] BYREF
  IUnknown *punk; // [rsp+70h] [rbp+48h] BYREF
  __int64 v11; // [rsp+78h] [rbp+50h] BYREF

  v8 = 0;
  v11 = 0LL;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&ppvOut);
  punk = 0LL;
  v8 = 2;
  v2 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 4) + 32LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&punk);
  v2((char *)this + 32, &GUID_00000000_0000_0000_c000_000000000046, &punk);
  LOBYTE(v2) = IUnknown_QueryService(
                 punk,
                 (const GUID *const)&SID_ImmersiveLauncher,
                 &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
                 &ppvOut) >= 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&punk);
  if ( (_BYTE)v2 && (*(int (__fastcall **)(void *, int *))(*(_QWORD *)ppvOut + 56LL))(ppvOut, &v8) >= 0 && v8 )
  {
    v3 = ppvOut;
    v4 = *(void (__fastcall **)(void *, __int64 *))(*(_QWORD *)ppvOut + 88LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    v4(v3, &v11);
  }
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 48, &v11);
  for ( i = 0LL; i < *((_QWORD *)this + 55); ++i )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 54) + 8 * i);
    v7 = *((_DWORD *)this + 84);
    *(_BYTE *)(v6 + 13) = (unsigned int)SHIsSameObject(*(struct IUnknown **)v6, *((struct IUnknown **)this + 48)) != 0;
    CImmersiveMode::CDesktopVisibilityChangeSource::UpdateActivationFilter(v6, v7);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&ppvOut);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
}
