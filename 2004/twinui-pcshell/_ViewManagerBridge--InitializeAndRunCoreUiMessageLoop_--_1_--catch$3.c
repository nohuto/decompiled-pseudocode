/*
 * XREFs of _ViewManagerBridge::InitializeAndRunCoreUiMessageLoop_::_1_::catch$3 @ 0x1802BF5AC
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x18019F81C (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180212CB0 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 */

__int64 __fastcall ViewManagerBridge::InitializeAndRunCoreUiMessageLoop_::_1_::catch_3(wil *a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rcx
  void *v5; // rdx

  v3 = wil::ResultFromCaughtException(a1);
  v4 = *(_QWORD *)(a2 + 112);
  *(_DWORD *)(v4 + 148) = v3;
  wil::details::SetEvent(*(wil::details **)(v4 + 128), v5);
  return 0LL;
}
