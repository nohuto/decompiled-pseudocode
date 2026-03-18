/*
 * XREFs of ?OnPnpNotification@CBaseInput@@AEAAJXZ @ 0x1C019EC10
 * Callers:
 *     <none>
 * Callees:
 *     RIMOnPnpNotification @ 0x1C0026D30 (RIMOnPnpNotification.c)
 */

__int64 __fastcall CBaseInput::OnPnpNotification(CBaseInput *this)
{
  return RIMOnPnpNotification(*((_QWORD *)this + 1));
}
