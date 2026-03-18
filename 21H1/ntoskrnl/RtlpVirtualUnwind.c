/*
 * XREFs of RtlpVirtualUnwind @ 0x14032E5E0
 * Callers:
 *     PspGetSetContextInternal @ 0x1406F1830 (PspGetSetContextInternal.c)
 * Callees:
 *     RtlpxVirtualUnwind @ 0x14032D9F0 (RtlpxVirtualUnwind.c)
 */

__int64 __fastcall RtlpVirtualUnwind(int a1, __int64 a2, unsigned __int64 a3)
{
  return RtlpxVirtualUnwind(a1, a2, a3);
}
