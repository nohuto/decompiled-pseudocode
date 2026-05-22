/*
 * XREFs of ?GetForegroundInputHostInfo@TextInputStateAdapter@@UEAAJPEAPEAUMsgString@@@Z @ 0x1801A2B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TextInputStateAdapter::GetForegroundInputHostInfo(
        TextInputStateAdapter *this,
        struct MsgString **a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct MsgString **))(**((_QWORD **)this + 4) + 312LL))(
           *((_QWORD *)this + 4),
           a2);
}
