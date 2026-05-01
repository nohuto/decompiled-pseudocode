/*
 * XREFs of ?PerformDelayedInitialization@immersive_shell_component@winrt@@EEAAJXZ @ 0x1804640F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::immersive_shell_component::PerformDelayedInitialization(
        winrt::immersive_shell_component *this)
{
  char *v1; // rcx
  const char *v2; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (char *)this - 16;
  try
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 48LL))(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x162,
                           (__int64)"internal\\shellcommonshell\\inc\\winrt/immersive_shell_component.h",
                           v2);
  }
  return result;
}
