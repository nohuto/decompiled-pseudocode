/*
 * XREFs of _ViewManagerBridge::OnConnected_::_1_::catch$7 @ 0x1802BF8B4
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x18019F40C (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

__int64 __fastcall ViewManagerBridge::OnConnected_::_1_::catch_7(wil *a1, __int64 a2)
{
  *(_DWORD *)(*(_QWORD *)(a2 + 80) + 140LL) = wil::ResultFromCaughtException(a1);
  return 0LL;
}
