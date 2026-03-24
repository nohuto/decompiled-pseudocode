/*
 * XREFs of ?PowerRequiredCallback@FxPoxInterface@@CAXPEAX@Z @ 0x1C008D0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z @ 0x1C000E4D4 (-PowerRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z.c)
 */

void __fastcall FxPoxInterface::PowerRequiredCallback(FxPoxInterface *Context)
{
  FxPoxInterface::PowerRequiredCallbackWorker(Context, 1u);
}
