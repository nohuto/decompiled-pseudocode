/*
 * XREFs of PsLeavePriorityRegion @ 0x1402F8090
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIoEx @ 0x140223950 (PsBoostThreadIoEx.c)
 */

void PsLeavePriorityRegion()
{
  PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 1, 0, 0LL);
}
