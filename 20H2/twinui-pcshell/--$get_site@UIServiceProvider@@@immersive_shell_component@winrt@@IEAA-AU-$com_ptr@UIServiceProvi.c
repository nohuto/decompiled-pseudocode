/*
 * XREFs of ??$get_site@UIServiceProvider@@@immersive_shell_component@winrt@@IEAA?AU?$com_ptr@UIServiceProvider@@@1@XZ @ 0x1804612E4
 * Callers:
 *     ?QueryService@immersive_shell_component@winrt@@EEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1804648A0 (-QueryService@immersive_shell_component@winrt@@EEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::immersive_shell_component::get_site<IServiceProvider>(RTL_SRWLOCK *a1, _QWORD *a2)
{
  RTL_SRWLOCK *v4; // rsi
  PVOID Ptr; // rcx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v4 = a1 + 10;
  AcquireSRWLockShared(a1 + 10);
  Ptr = a1[9].Ptr;
  if ( Ptr )
  {
    v6 = (*(__int64 (__fastcall **)(PVOID, GUID *, _QWORD *))(*(_QWORD *)Ptr + 24LL))(
           Ptr,
           &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
           a2);
  }
  else
  {
    *a2 = 0LL;
    v6 = 0;
  }
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      172LL,
      (__int64)"internal\\shellcommonshell\\inc\\winrt/immersive_shell_component.h",
      (const char *)(unsigned int)v6);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return a2;
}
