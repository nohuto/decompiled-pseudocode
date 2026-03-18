/*
 * XREFs of ?OnPnpNotification@CBaseInput@@AEAAJXZ @ 0x1C01A6D10
 * Callers:
 *     <none>
 * Callees:
 *     RIMOnPnpNotification @ 0x1C00A0F20 (RIMOnPnpNotification.c)
 */

__int64 __fastcall CBaseInput::OnPnpNotification(CBaseInput *this)
{
  return RIMOnPnpNotification(*((_QWORD *)this + 1));
}
