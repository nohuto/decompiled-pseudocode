/*
 * XREFs of ?GetWindowIdAndTextSelectionRect@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@PEAUHWND__@@UtagRECT@@@std@@XZ @ 0x180463E64
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$2 @ 0x1800C1670 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800C1670.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UITextInputHostInfoProvider@@@?$com_ptr_t@UITouchKeyboardExperienceManager@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UITextInputHostInfoProvider@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800BD024 (--$query@UITextInputHostInfoProvider@@@-$com_ptr_t@UITouchKeyboardExperienceManager@@Uerr_except.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::GetWindowIdAndTextSelectionRect(
        __int64 a1,
        __int64 a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rax
  unsigned int v9; // [rsp+30h] [rbp-30h] BYREF
  __int64 v10; // [rsp+38h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-20h] BYREF
  __int128 v12; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v10 = 0LL;
  v3 = *(__int64 **)(a1 + 96);
  v4 = *v3;
  v10 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, GUID *, GUID *, __int64 *))(v4 + 24))(
         v3,
         &IID_ITouchKeyboardExperienceManager,
         &GUID_9516d866_ca0f_40ca_8997_efa618b50f99,
         &v10);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      190LL,
      (__int64)"pcshell\\twinui\\dragdropsimulator\\lib\\dragdropsimulatorcomponent.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  wil::com_ptr_t<ITouchKeyboardExperienceManager,wil::err_exception_policy>::query<ITextInputHostInfoProvider>(
    &v10,
    (__int64)&v11);
  v9 = 0;
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v11 + 32LL))(v11, &v9);
  v6 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 24LL))(v11, &v12);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      198LL,
      (__int64)"pcshell\\twinui\\dragdropsimulator\\lib\\dragdropsimulatorcomponent.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v7 = v9;
  *(_OWORD *)a2 = v12;
  *(_QWORD *)(a2 + 16) = v7;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return a2;
}
