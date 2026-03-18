/*
 * XREFs of PsLeavePriorityRegion @ 0x140327B80
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIoEx @ 0x14020A940 (PsBoostThreadIoEx.c)
 */

void PsLeavePriorityRegion()
{
  PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 1, 0, 0LL);
}
