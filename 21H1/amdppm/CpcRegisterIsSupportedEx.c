/*
 * XREFs of CpcRegisterIsSupportedEx @ 0x1C0003DDC
 * Callers:
 *     InitAcpiCpc @ 0x1C0020B78 (InitAcpiCpc.c)
 *     ValidateAcpiCPC @ 0x1C0029644 (ValidateAcpiCPC.c)
 *     InitCpcStatesInternal @ 0x1C002BE58 (InitCpcStatesInternal.c)
 * Callees:
 *     CpcRegisterIsSupported @ 0x1C0003DC4 (CpcRegisterIsSupported.c)
 */

char __fastcall CpcRegisterIsSupportedEx(__int64 a1)
{
  return CpcRegisterIsSupported(a1);
}
