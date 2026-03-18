/*
 * XREFs of ?WaitForEventsOrVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI_NIPEAPEAU_KEVENT@@@Z @ 0x1C0215420
 * Callers:
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C0152630 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 */

NTSTATUS __fastcall ADAPTER_DISPLAY::WaitForEventsOrVerticalBlankEvent(
        DXGADAPTER **this,
        unsigned int a2,
        char a3,
        ULONG a4,
        PVOID *Object)
{
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  KWAIT_REASON v13; // r9d
  __int64 v15; // rax
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp-1E8h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+50h] [rbp-1D8h] BYREF

  v8 = a2;
  if ( DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v11 + 24) = 7038LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( a4 - 1 > 8 )
  {
    v15 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v15 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v15);
    return -1073741811;
  }
  else
  {
    v12 = (__int64)this[14] + 912;
    Timeout.QuadPart = -800000LL;
    *Object = (PVOID)(v12 + 3968 * v8);
    if ( a3 )
      v13 = UserRequest;
    else
      v13 = Executive;
    return KeWaitForMultipleObjects(a4, Object, WaitAny, v13, 0, 0, &Timeout, &WaitBlockArray);
  }
}
