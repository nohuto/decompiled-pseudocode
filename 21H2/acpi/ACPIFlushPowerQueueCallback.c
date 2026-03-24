/*
 * XREFs of ACPIFlushPowerQueueCallback @ 0x1C004C890
 * Callers:
 *     <none>
 * Callees:
 *     AMLIRestartContext @ 0x1C0063670 (AMLIRestartContext.c)
 */

__int64 __fastcall ACPIFlushPowerQueueCallback(__int64 a1, __int64 a2)
{
  return AMLIRestartContext(a2);
}
