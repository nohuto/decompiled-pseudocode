/*
 * XREFs of CpcRegisterIsSupportedEx @ 0x1C000475C
 * Callers:
 *     InitAcpiCpc @ 0x1C0023388 (InitAcpiCpc.c)
 *     ValidateAcpiCPC @ 0x1C002B6DC (ValidateAcpiCPC.c)
 *     InitCpcStatesInternal @ 0x1C002DEF8 (InitCpcStatesInternal.c)
 * Callees:
 *     CpcRegisterIsSupported @ 0x1C0004744 (CpcRegisterIsSupported.c)
 */

char __fastcall CpcRegisterIsSupportedEx(__int64 a1)
{
  return CpcRegisterIsSupported(a1);
}
