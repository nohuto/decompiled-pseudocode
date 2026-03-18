/*
 * XREFs of HvcallpExtendedFastHypercall @ 0x1403FFC50
 * Callers:
 *     HvcallFastExtended @ 0x14038CDD0 (HvcallFastExtended.c)
 *     HvcallpExtendedFastHypercallWithOutput @ 0x1403FFCB0 (HvcallpExtendedFastHypercallWithOutput.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140363130 (HvcallpNoHypervisorPresent.c)
 */

__int64 __fastcall HvcallpExtendedFastHypercall(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int64 v3; // r8

  v3 = (unsigned __int64)(a3 + 15) >> 4;
  if ( v3 > 1 )
    __asm { jmp     r9 }
  return HvcallCodeVa();
}
