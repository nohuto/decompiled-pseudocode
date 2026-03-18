/*
 * XREFs of RtlpVirtualUnwind @ 0x1402E94A0
 * Callers:
 *     PspGetSetContextInternal @ 0x1406AC990 (PspGetSetContextInternal.c)
 * Callees:
 *     RtlpxVirtualUnwind @ 0x1402E88B0 (RtlpxVirtualUnwind.c)
 */

__int64 __fastcall RtlpVirtualUnwind(int a1, __int64 a2, unsigned __int64 a3)
{
  return RtlpxVirtualUnwind(a1, a2, a3);
}
