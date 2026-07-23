/*
 * XREFs of RtlGuardGrantSuppressedCallAccess @ 0x18004753C
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18002FDC0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800478D0 (LdrpUnsuppressAddressTakenIat.c)
 *     AVrfCallAPILookupCallback @ 0x1800D9650 (AVrfCallAPILookupCallback.c)
 *     AVrfpSnapDllImports @ 0x1800DB2C0 (AVrfpSnapDllImports.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x180033520 (LdrControlFlowGuardEnforced.c)
 *     RtlpGuardGrantSuppressedCallAccess @ 0x1800475A8 (RtlpGuardGrantSuppressedCallAccess.c)
 *     RtlGuardIsExportSuppressedAddress @ 0x18004764C (RtlGuardIsExportSuppressedAddress.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800FD570 (RtlpGuardIsSuppressedAddress.c)
 */

__int64 __fastcall RtlGuardGrantSuppressedCallAccess(__int64 a1, unsigned int a2, _DWORD *a3)
{
  int v6; // eax
  __int64 result; // rax

  LOBYTE(v6) = LdrControlFlowGuardEnforced();
  if ( v6 )
  {
    if ( ((a2 & 4) == 0 || (unsigned __int8)RtlGuardIsExportSuppressedAddress(a1) == 1)
      && ((a2 & 1) == 0 || (unsigned __int8)RtlpGuardIsSuppressedAddress(a1) == 1) )
    {
      *a3 = 1;
      return RtlpGuardGrantSuppressedCallAccess(a1, a2);
    }
    result = 3221225485LL;
  }
  else
  {
    result = 0LL;
  }
  *a3 = 0;
  return result;
}
