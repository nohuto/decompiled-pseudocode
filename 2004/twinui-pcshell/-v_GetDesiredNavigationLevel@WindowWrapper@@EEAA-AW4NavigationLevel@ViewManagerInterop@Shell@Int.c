/*
 * XREFs of ?v_GetDesiredNavigationLevel@WindowWrapper@@EEAA?AW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@XZ @ 0x18007F770
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapper::v_GetDesiredNavigationLevel(__int64 a1)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 288) + 224LL))(*(_QWORD *)(a1 + 288));
  return *(unsigned int *)(a1 + 644);
}
