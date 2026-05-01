/*
 * XREFs of ?UpdateDisplayRegions@WindowWrapperBase@@AEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@PEAU?$IVectorView@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@6@@Z @ 0x1800501B8
 * Callers:
 *     _lambda_3d1fcc114f22629400696f1d7422949c_::operator() @ 0x18004FF28 (_lambda_3d1fcc114f22629400696f1d7422949c_--operator().c)
 *     ?ChangeDisplayRegionIds@WindowWrapperBase@@UEAAJPEAU?$IVectorView@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180050360 (-ChangeDisplayRegionIds@WindowWrapperBase@@UEAAJPEAU-$IVectorView@UDisplayRegionId@WindowingEnvi.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a59ec4bf685348192e83918abe4353ce___ @ 0x18005023C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_a59ec4bf685348192e83918abe4353ce.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::UpdateDisplayRegions(__int64 a1, __int64 a2, __int64 a3)
{
  DWORD CurrentThreadId; // eax
  __int64 v4; // rcx
  int v5; // eax
  int v7[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = a3;
  v10 = a2;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 288) + 216LL))(*(_QWORD *)(a1 + 288));
  if ( v11 )
  {
    *(_QWORD *)v7 = &v10;
    v8 = &v11;
    CurrentThreadId = GetCurrentThreadId();
    v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a59ec4bf685348192e83918abe4353ce___(
           v4,
           CurrentThreadId,
           v7);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xC20,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v5,
        v7[0]);
      __debugbreak();
      JUMPOUT(0x180121E0DLL);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC15,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)0x80070057LL,
      v7[0]);
    return 2147942487LL;
  }
}
