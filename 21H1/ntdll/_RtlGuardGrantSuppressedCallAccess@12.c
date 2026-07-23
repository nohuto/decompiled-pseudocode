/*
 * XREFs of _RtlGuardGrantSuppressedCallAccess@12 @ 0x4B363AA3
 * Callers:
 *     _LdrGetProcedureAddressForCaller@24 @ 0x4B2CCED0 (_LdrGetProcedureAddressForCaller@24.c)
 *     _LdrpUnsuppressAddressTakenIat@12 @ 0x4B3345D2 (_LdrpUnsuppressAddressTakenIat@12.c)
 *     _AVrfCallAPILookupCallback@20 @ 0x4B338404 (_AVrfCallAPILookupCallback@20.c)
 *     _AVrfpSnapDllImports@4 @ 0x4B33959D (_AVrfpSnapDllImports@4.c)
 * Callees:
 *     _LdrControlFlowGuardEnforced@0 @ 0x4B2D0100 (_LdrControlFlowGuardEnforced@0.c)
 *     _RtlGuardIsExportSuppressedAddress@4 @ 0x4B363AFE (_RtlGuardIsExportSuppressedAddress@4.c)
 *     _RtlpGuardGrantSuppressedCallAccess@8 @ 0x4B363C51 (_RtlpGuardGrantSuppressedCallAccess@8.c)
 *     _RtlpGuardIsSuppressedAddress@4 @ 0x4B363CAC (_RtlpGuardIsSuppressedAddress@4.c)
 */

char __fastcall RtlGuardGrantSuppressedCallAccess(int a1, int a2, _DWORD *a3)
{
  int v5; // eax

  LOBYTE(v5) = LdrControlFlowGuardEnforced();
  if ( v5 )
  {
    if ( ((a2 & 4) == 0 || (unsigned __int8)RtlGuardIsExportSuppressedAddress(a1) == 1)
      && ((a2 & 1) == 0 || (unsigned __int8)RtlpGuardIsSuppressedAddress(a1) == 1) )
    {
      *a3 = 1;
      LOBYTE(v5) = RtlpGuardGrantSuppressedCallAccess(a1, a2);
      return v5;
    }
    LOBYTE(v5) = 13;
  }
  *a3 = 0;
  return v5;
}
