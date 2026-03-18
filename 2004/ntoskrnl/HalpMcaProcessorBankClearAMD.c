/*
 * XREFs of HalpMcaProcessorBankClearAMD @ 0x1404B83E8
 * Callers:
 *     HalpMcaClearError @ 0x1404B5408 (HalpMcaClearError.c)
 * Callees:
 *     HalpWheaReadMsrStatus @ 0x14039E08C (HalpWheaReadMsrStatus.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpMcaProcessorBankClearAMD(__int64 a1, int a2)
{
  __int64 result; // rax

  result = HalpWheaReadMsrStatus(a1, a2, 0LL);
  if ( (result & 0x100000000000LL) != 0 )
    return HalpWheaWriteMsr(a1, (unsigned int)(16 * a2 - 1073733624), 0LL);
  return result;
}
