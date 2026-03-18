/*
 * XREFs of PsEnterPriorityRegion @ 0x1403287D0
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIoEx @ 0x14020A940 (PsBoostThreadIoEx.c)
 */

void PsEnterPriorityRegion()
{
  PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 0, 0, 0LL);
}
