/*
 * XREFs of RtlVirtualUnwind @ 0x1402E5A80
 * Callers:
 *     RtlRaiseException @ 0x1402E5480 (RtlRaiseException.c)
 *     RtlDispatchException @ 0x1402E5630 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1402E5AF0 (RtlUnwindEx.c)
 * Callees:
 *     RtlpxVirtualUnwind @ 0x140228310 (RtlpxVirtualUnwind.c)
 */

__int64 __fastcall RtlVirtualUnwind(int a1, __int64 a2, unsigned __int64 a3)
{
  RtlpxVirtualUnwind(a1, a2, a3);
  return 0LL;
}
