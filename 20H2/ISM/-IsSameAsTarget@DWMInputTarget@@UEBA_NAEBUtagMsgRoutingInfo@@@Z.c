/*
 * XREFs of ?IsSameAsTarget@DWMInputTarget@@UEBA_NAEBUtagMsgRoutingInfo@@@Z @ 0x1800B6AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputTarget::IsSameAsTarget(DWMInputTarget *this, const struct tagMsgRoutingInfo *a2)
{
  return (*(__int64 (__fastcall **)(DWMInputTarget *, const struct tagMsgRoutingInfo *, _QWORD))(*(_QWORD *)this + 24LL))(
           this,
           a2,
           0LL);
}
