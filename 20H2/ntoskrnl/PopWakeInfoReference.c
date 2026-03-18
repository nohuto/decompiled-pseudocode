/*
 * XREFs of PopWakeInfoReference @ 0x140331DA8
 * Callers:
 *     PopHandleWakeSources @ 0x14099B220 (PopHandleWakeSources.c)
 * Callees:
 *     <none>
 */

void __fastcall PopWakeInfoReference(__int64 a1)
{
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
}
