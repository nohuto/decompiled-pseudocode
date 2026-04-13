/*
 * XREFs of ??1?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@UEAA@XZ @ 0x180047280
 * Callers:
 *     ??_E?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@UEAAPEAXI@Z @ 0x180047440 (--_E-$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall wil::details::wnf_subscription_state<wil::details::empty_wnf_state>::~wnf_subscription_state<wil::details::empty_wnf_state>(
        _QWORD *a1)
{
  __int64 v2; // rsi
  DWORD LastError; // ebx
  __int64 v4; // rcx
  void **result; // rax
  __int64 v6; // rcx

  *a1 = &wil::details::wnf_subscription_state<wil::details::empty_wnf_state>::`vftable';
  v2 = a1[1];
  if ( v2 )
  {
    LastError = GetLastError();
    RtlUnsubscribeWnfNotificationWaitForCompletion(v2);
    SetLastError(LastError);
  }
  a1[1] = 0LL;
  v4 = a1[16];
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  result = &wil::details::wnf_subscription_state_base::`vftable';
  *a1 = &wil::details::wnf_subscription_state_base::`vftable';
  v6 = a1[1];
  if ( v6 )
    return (void **)RtlUnsubscribeWnfNotificationWaitForCompletion(v6);
  return result;
}
