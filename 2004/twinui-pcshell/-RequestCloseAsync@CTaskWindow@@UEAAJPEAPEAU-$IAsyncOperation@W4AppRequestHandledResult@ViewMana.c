/*
 * XREFs of ?RequestCloseAsync@CTaskWindow@@UEAAJPEAPEAU?$IAsyncOperation@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@@Z @ 0x180186820
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTaskWindow::RequestCloseAsync(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 48);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 464LL))(v1);
  return 0LL;
}
