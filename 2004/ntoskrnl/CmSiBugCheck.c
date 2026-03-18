/*
 * XREFs of CmSiBugCheck @ 0x1404E8D44
 * Callers:
 *     HvpAllExceptionsFatalFilter @ 0x14087018C (HvpAllExceptionsFatalFilter.c)
 *     HvpInpageErrorFilter @ 0x1408701A8 (HvpInpageErrorFilter.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmSiBugCheck(__int64 a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x51u, 0x21uLL, a2, a3, BugCheckParameter4);
}
