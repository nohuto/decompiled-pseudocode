/*
 * XREFs of PsEnterPriorityRegion @ 0x1402EF610
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIoEx @ 0x140263860 (PsBoostThreadIoEx.c)
 */

void PsEnterPriorityRegion()
{
  PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 0, 0, 0LL);
}
