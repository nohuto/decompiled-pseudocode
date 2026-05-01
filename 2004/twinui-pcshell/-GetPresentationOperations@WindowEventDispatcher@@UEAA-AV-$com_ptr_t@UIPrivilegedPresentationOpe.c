/*
 * XREFs of ?GetPresentationOperations@WindowEventDispatcher@@UEAA?AV?$com_ptr_t@UIPrivilegedPresentationOperations@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18007C990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall WindowEventDispatcher::GetPresentationOperations(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 264);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
