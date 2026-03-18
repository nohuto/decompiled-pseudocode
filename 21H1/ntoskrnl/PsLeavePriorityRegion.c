/*
 * XREFs of PsLeavePriorityRegion @ 0x1402EE250
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIoEx @ 0x140263860 (PsBoostThreadIoEx.c)
 */

void PsLeavePriorityRegion()
{
  PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 1, 0, 0LL);
}
