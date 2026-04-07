/*
 * XREFs of ??0event_watcher_state@details@wil@@QEAA@$$QEAV?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@2@$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x18004C200
 * Callers:
 *     ?create_take_hevent_ownership@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x18004C0D0 (-create_take_hevent_ownership@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_w.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::details::event_watcher_state::event_watcher_state(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  _QWORD *result; // rax

  if ( *(_QWORD *)(a3 + 112) )
  {
    a1[14] = a1 + 1;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a3 + 112) + 16LL))(*(_QWORD *)(a3 + 112));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a3 + 112) + 24LL))(*(_QWORD *)(a3 + 112));
    *(_QWORD *)(a3 + 112) = 0LL;
  }
  else
  {
    a1[14] = 0LL;
  }
  a1[15] = *a2;
  result = a1;
  *a2 = 0LL;
  a1[16] = 0LL;
  return result;
}
