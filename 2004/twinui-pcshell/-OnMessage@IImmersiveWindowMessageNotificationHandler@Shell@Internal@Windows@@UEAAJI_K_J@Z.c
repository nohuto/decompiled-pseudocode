/*
 * XREFs of ?OnMessage@IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@UEAAJI_K_J@Z @ 0x180089700
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler::OnMessage(
        Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler *this,
        int a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rcx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+48h] [rbp+10h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v6 = a4;
  v8 = a3;
  v7 = a2;
  v4 = *((_QWORD *)this + 18);
  if ( !v4 )
    __fastfail(7u);
  return (*(__int64 (__fastcall **)(__int64, int *, __int64 *, __int64 *))(*(_QWORD *)v4 + 32LL))(v4, &v7, &v8, &v6);
}
