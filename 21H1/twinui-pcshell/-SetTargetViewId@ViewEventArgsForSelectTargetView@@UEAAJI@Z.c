/*
 * XREFs of ?SetTargetViewId@ViewEventArgsForSelectTargetView@@UEAAJI@Z @ 0x18008A9F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewEventArgsForSelectTargetView::SetTargetViewId(ViewEventArgsForSelectTargetView *this, int a2)
{
  __int64 result; // rax

  *((_BYTE *)this + 24) = 1;
  result = 0LL;
  *((_DWORD *)this + 7) = a2;
  return result;
}
