/*
 * XREFs of ?get@ViewModel@__ITaskViewTimelinePublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVTaskViewTimelineViewModel@3456@XZ @ 0x1802F415C
 * Callers:
 *     ?WindowCreated@XamlExplorerHostWindow@@UEAAXXZ @ 0x1802F5570 (-WindowCreated@XamlExplorerHostWindow@@UEAAXXZ.c)
 *     _lambda_e7233f2d7fbbc8c446f08901eacadde9_::operator() @ 0x1802FD5D0 (_lambda_e7233f2d7fbbc8c446f08901eacadde9_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802EBB30 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802EBCEC (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::__ITaskViewTimelinePublicNonVirtuals::ViewModel::get(
        __int64 a1)
{
  int v1; // eax
  __int64 v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v1 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 72LL))(a1, &v4);
  if ( v1 < 0 )
  {
    __abi_WinRTraiseException(v1);
    __debugbreak();
  }
  v2 = __abi_winrt_ptr_ctor(v4);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v2;
}
