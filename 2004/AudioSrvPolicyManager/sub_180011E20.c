/*
 * XREFs of sub_180011E20 @ 0x180011E20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180011E20(PTP_CALLBACK_INSTANCE Instance, _QWORD **Context, PTP_TIMER Timer)
{
  int v4; // ebx
  _QWORD *v5; // rcx

  v4 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD **, PTP_TIMER))(*Context[68] + 16LL))(Context[68], Context, Timer);
  if ( v4 < 0 )
  {
    v5 = Context[68];
    if ( v5 )
      (*(void (__fastcall **)(_QWORD *, __int64))(*v5 + 8LL))(v5, 1LL);
  }
  Context[68] = 0LL;
  if ( v4 < 0 )
  {
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x1Cu, &stru_180043390, v4);
    }
    sub_180005724("CApplication::DelayedInteractivityNotificationTimerExpiredCallback", 1593, v4);
  }
}
