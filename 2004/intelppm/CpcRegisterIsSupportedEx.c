/*
 * XREFs of CpcRegisterIsSupportedEx @ 0x1C000902C
 * Callers:
 *     InitAcpiCpc @ 0x1C0020D88 (InitAcpiCpc.c)
 *     ValidateAcpiCPC @ 0x1C002DD78 (ValidateAcpiCPC.c)
 *     InitCpcStatesInternal @ 0x1C0033C90 (InitCpcStatesInternal.c)
 * Callees:
 *     CpcRegisterIsSupported @ 0x1C0009014 (CpcRegisterIsSupported.c)
 */

char __fastcall CpcRegisterIsSupportedEx(__int64 a1)
{
  return CpcRegisterIsSupported(a1);
}
