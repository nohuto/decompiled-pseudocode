/*
 * XREFs of RtlpVirtualUnwind @ 0x1402D8680
 * Callers:
 *     PspGetSetContextInternal @ 0x140687060 (PspGetSetContextInternal.c)
 * Callees:
 *     RtlpxVirtualUnwind @ 0x140228310 (RtlpxVirtualUnwind.c)
 */

__int64 __fastcall RtlpVirtualUnwind(int a1, __int64 a2, unsigned __int64 a3)
{
  return RtlpxVirtualUnwind(a1, a2, a3);
}
