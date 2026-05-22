/*
 * XREFs of ?OnCoreMessageStatic@CursorManager@@SAJPEAX0H@Z @ 0x180187420
 * Callers:
 *     <none>
 * Callees:
 *     ?OnCursorMessage@CursorManager@@IEAAJPEAUCursorMessage@@@Z @ 0x180187438 (-OnCursorMessage@CursorManager@@IEAAJPEAUCursorMessage@@@Z.c)
 */

__int64 __fastcall CursorManager::OnCoreMessageStatic(CursorManager *a1, struct CursorMessage *a2)
{
  CursorManager::OnCursorMessage(a1, a2);
  return 0LL;
}
