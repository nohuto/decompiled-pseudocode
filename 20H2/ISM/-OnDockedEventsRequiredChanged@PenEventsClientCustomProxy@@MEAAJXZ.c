/*
 * XREFs of ?OnDockedEventsRequiredChanged@PenEventsClientCustomProxy@@MEAAJXZ @ 0x1801333D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PenEventsClientCustomProxy::OnDockedEventsRequiredChanged(PenEventsClientCustomProxy *this)
{
  char v2; // al
  __int64 v3; // r9

  v2 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 104LL))((char *)this + 8);
  return PenEventsClientCustomProxy::NotifyHotkeyRegistrationChanged((__int64)this, 3u, v2, v3);
}
