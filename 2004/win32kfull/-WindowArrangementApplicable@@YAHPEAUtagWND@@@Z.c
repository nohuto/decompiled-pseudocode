/*
 * XREFs of ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C02245AC
 * Callers:
 *     ?DragOperationFromMaximizedAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0224468 (-DragOperationFromMaximizedAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     ?MoveWithArrangementAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0224494 (-MoveWithArrangementAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     ?SizeWithSnapAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C022455C (-SizeWithSnapAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     ?WindowArrangementAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0224588 (-WindowArrangementAllowed@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C0022AB4 (IsNonImmersiveBand.c)
 *     GetAppCompatFlags2QuadWord @ 0x1C01071B0 (GetAppCompatFlags2QuadWord.c)
 */

_BOOL8 __fastcall WindowArrangementApplicable(struct tagWND *a1)
{
  return IsNonImmersiveBand((__int64)a1) && (GetAppCompatFlags2QuadWord(0LL) & 0x100000000LL) == 0;
}
