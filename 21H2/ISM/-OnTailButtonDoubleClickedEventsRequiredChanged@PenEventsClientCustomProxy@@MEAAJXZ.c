/*
 * XREFs of ?OnTailButtonDoubleClickedEventsRequiredChanged@PenEventsClientCustomProxy@@MEAAJXZ @ 0x180133F30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PenEventsClientCustomProxy::OnTailButtonDoubleClickedEventsRequiredChanged(
        PenEventsClientCustomProxy *this)
{
  char v2; // al
  __int64 v3; // r9

  v2 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 88LL))((char *)this + 8);
  return PenEventsClientCustomProxy::NotifyHotkeyRegistrationChanged((__int64)this, 1u, v2, v3);
}
